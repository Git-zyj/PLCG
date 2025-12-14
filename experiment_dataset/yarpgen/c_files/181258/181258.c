/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (((-((max(var_19, var_10))))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (arr_2 [i_0 - 1]);
        var_21 *= (arr_0 [i_0]);
        arr_4 [i_0 - 1] = ((((~((524287 >> (((arr_1 [i_0 - 1] [i_0 - 1]) - 1674250974829599519))))))) ? (((var_17 ? 4294967280 : (arr_2 [i_0])))) : (arr_1 [i_0] [i_0]));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = (((((((arr_8 [i_1]) ? 18446744073709551609 : (arr_5 [0] [i_1 - 1]))))) ? (((842612092867883645 ? (arr_7 [i_1 - 1]) : (arr_5 [i_1 - 1] [i_1 - 1])))) : (((((arr_2 [i_1]) - 12323)) - (((~(arr_5 [5] [i_1]))))))));
        arr_10 [i_1] = ((0 < ((18446744073709551609 ? (((53194 != (arr_7 [i_1])))) : (arr_5 [i_1 - 1] [i_1])))));
        arr_11 [i_1] = (min((max(var_4, (arr_0 [i_1 - 1]))), ((((~var_14) != 1)))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 22;i_4 += 1)
            {
                {
                    var_22 |= (arr_7 [i_2 - 1]);
                    arr_18 [i_2] [i_2] = ((((arr_2 [i_2]) ? 5 : 35947)) ^ (arr_13 [i_3]));
                    var_23 = (max(var_23, (((arr_2 [i_4 - 2]) ? (arr_2 [i_4 + 1]) : (arr_2 [i_4 - 1])))));
                }
            }
        }
        arr_19 [17] [i_2] |= ((-(arr_12 [i_2 - 1])));
    }
    var_24 = (min(var_24, var_19));
    var_25 = ((min(var_6, var_8)));
    #pragma endscop
}
