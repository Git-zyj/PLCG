/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_0;
    var_17 = (var_9 ? (((var_2 && var_8) ? (var_13 == -38) : ((0 ? var_6 : 0)))) : (((((max(var_2, var_9)))) ^ var_12)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_18 ^= ((-(min((var_13 * 0), ((min((arr_3 [i_1]), (arr_1 [i_0]))))))));
                arr_6 [13] [i_0] [i_1] = (arr_2 [i_0]);
                var_19 = ((((((arr_1 [i_0]) ? var_11 : (arr_5 [i_0])))) - (max((arr_1 [i_0]), (min(18446744073709551614, var_5))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                {
                    var_20 = (((arr_3 [i_3]) ? ((((arr_3 [i_2]) == (arr_3 [i_3])))) : ((-(arr_3 [i_2])))));
                    var_21 = (((!var_6) ? (arr_11 [i_4 - 1] [7] [i_4 + 1]) : 17));
                }
            }
        }
    }
    #pragma endscop
}
