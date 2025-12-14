/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!((!(!var_13)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_18 += (((((((((arr_8 [8] [4] [4] [8]) ? var_12 : (arr_5 [8] [i_1] [8])))) ? 3163602351 : (arr_3 [i_2 + 1])))) ? (arr_6 [i_1] [1]) : (((arr_8 [i_0] [i_0] [i_0] [5]) ? (((-(arr_1 [i_0] [8])))) : (((arr_9 [i_0] [i_1] [i_2] [i_0]) ? -63 : 3163602332))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_19 += ((((max(1, 1566680809))) ? (((~(!var_10)))) : ((1131364972 ? 1131364950 : 1))));
                                arr_15 [i_3] = ((!(max((arr_4 [1] [4] [5]), (!1131364953)))));
                                arr_16 [i_3] [2] [8] [2] [i_3] = (arr_2 [i_4 - 3]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 *= ((var_7 << ((((1 + (116 - var_5))) - 78260393))));
    var_21 = ((((((~var_0) ? var_9 : var_2))) | var_8));
    var_22 = ((((max(var_5, var_16))) >= var_0));
    #pragma endscop
}
