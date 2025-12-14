/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [4] = ((!((max((arr_2 [i_1] [i_1] [i_1 + 1]), 1691473004)))));
                var_21 &= ((-(((var_18 < (arr_3 [i_1 - 1] [i_1 + 1]))))));
                var_22 ^= (min(-122, ((var_14 ? (arr_2 [i_1 + 1] [i_1 + 1] [i_1]) : (arr_2 [i_1 + 1] [i_1 + 1] [3])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            {
                var_23 = (min(var_23, ((max((((-(arr_7 [i_3] [17] [i_2])))), (max((max(var_8, var_19)), var_3)))))));
                var_24 = (max(var_24, (max((max(122, 117)), ((((arr_7 [i_3 + 1] [i_3] [20]) <= (arr_7 [i_3 + 1] [i_3 + 1] [i_3 + 1]))))))));
            }
        }
    }
    #pragma endscop
}
