/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, 18446744073709551615));
                    arr_7 [i_0] = (var_9 ? ((((max(var_10, 72048797944905728))))) : var_8);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            {
                var_21 = (min(var_21, (((((3250140696612690724 > (arr_1 [i_4]))) ? 1 : 18446744073709551615)))));
                var_22 = ((((1 ? ((var_18 ? (arr_0 [i_3]) : 32767)) : (((((arr_10 [i_3] [12]) || var_17))))))) ? (max(6323216322799798051, (arr_1 [i_3]))) : ((((max(18446744073709551615, 1))) ? (arr_8 [i_3 - 1]) : ((5237258949352315673 ? var_0 : 1)))));
                arr_13 [i_3] [i_3] = (max((((((9771084947607045334 ? (arr_3 [i_3]) : 4194303))) ? (((arr_11 [10] [i_3]) ? (arr_0 [i_3]) : (arr_2 [i_3] [i_3]))) : (649 && 9004732912492662603))), (max((-4194303 || var_16), var_4))));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            {
                                var_23 = (min((arr_12 [i_7]), ((((max((arr_3 [i_3]), (arr_19 [i_3] [i_4] [i_5] [i_6 + 3] [i_4]))) < var_5)))));
                                var_24 = (~-4194279);
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = min((max(1, ((var_6 ? 4194302 : var_2)))), (!var_2));
    #pragma endscop
}
