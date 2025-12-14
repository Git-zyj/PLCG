/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = -2271552147452475544;
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] = ((!((min(var_1, (arr_8 [5] [i_1] [i_1] [i_1]))))));
                                var_12 = (((~-1) > (max((arr_9 [1] [i_2 - 2] [i_2 - 4] [11] [16]), var_5))));
                                arr_14 [i_0] [i_1] [15] [i_0] [i_0] [i_0] = (((((((6436322428141967143 ? (arr_10 [i_0] [i_1] [i_2] [10]) : -2271552147452475562)) <= (-5623773381712526676 != 5540635151581065389))))) % -7270044964137371241);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            arr_21 [i_1] [i_1] [i_1] [i_1] = (((((var_3 ? 1187652088282171865 : 8848656270709083308)))) ? (arr_0 [4] [i_5 + 1]) : var_8);
                            var_13 = arr_7 [i_1] [i_1] [i_0];
                        }
                    }
                }
            }
        }
    }
    var_14 = (~var_7);
    var_15 = (min(var_15, ((((((!var_8) ? (min(var_1, 5623773381712526654)) : -374353458581620927))) ? var_7 : (min((min(var_6, -374353458581620932)), var_8))))));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            {
                arr_28 [i_7] = ((!(((~(arr_10 [3] [16] [i_7] [2]))))));
                arr_29 [9] [11] = -5540635151581065374;
                var_16 &= -8646792530079803375;
            }
        }
    }
    #pragma endscop
}
