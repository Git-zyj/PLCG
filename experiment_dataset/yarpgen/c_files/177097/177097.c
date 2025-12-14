/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 4611686018427387904;
    var_18 *= var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] = (arr_1 [i_0 - 1]);
                arr_6 [i_0] [i_0] [i_1] = 4;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 17;i_5 += 1)
                    {
                        {
                            arr_16 [7] = 96;
                            arr_17 [i_2] [15] [i_2] [17] [i_2 - 1] [i_2] = var_14;
                            var_19 -= ((-(max((arr_15 [i_2 + 1]), (arr_15 [i_2 - 1])))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        {
                            var_20 = var_3;
                            arr_25 [9] [i_6 - 1] [9] [8] = (((arr_14 [i_2] [1] [8] [18] [i_2] [1]) ? ((((((-4355437374690496870 & (arr_14 [i_2] [11] [11] [18] [11] [i_6])))) ? (((!(arr_7 [i_3] [i_3])))) : ((min((arr_18 [i_2 - 1] [9] [16]), (arr_12 [i_2] [i_2]))))))) : (max(((((arr_19 [i_2] [7] [17] [i_2]) ? var_8 : var_2))), 18446744073709551615))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
