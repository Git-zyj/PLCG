/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = min(var_3, (((243 > ((-1309526120 ? var_8 : var_1))))));
    var_15 ^= (189 | var_13);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_16 |= (min(((max((arr_1 [i_1]), (arr_1 [i_1])))), ((var_6 | (arr_1 [i_1])))));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_6 [i_0] [i_0] [i_0] [i_0] = ((-(((arr_1 [i_0]) | (63 != 104)))));
                    var_17 |= (((~var_13) ? (arr_1 [i_1]) : ((min(189, 74)))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    var_18 -= (((arr_7 [i_1]) != (!var_12)));
                    var_19 = (((((arr_4 [i_0] [3] [i_3] [i_3]) > 66)) ? (arr_9 [i_0] [i_0] [1]) : (170 | var_13)));
                }
                var_20 = (min(((max((arr_1 [i_0]), (arr_4 [i_0] [i_1] [i_1] [i_1])))), (((arr_2 [i_0] [i_1]) ? 8698567654761864071 : (arr_2 [i_0] [i_0])))));
                arr_10 [i_0] [i_0] [i_0] = (((170 ? 5 : 0)));
                arr_11 [i_0] = ((((((arr_4 [i_0] [1] [i_1] [i_0]) != (arr_4 [i_0] [i_0] [11] [i_1])))) > var_6));
            }
        }
    }
    var_21 = var_11;
    #pragma endscop
}
