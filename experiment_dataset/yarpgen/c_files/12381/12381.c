/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((max(var_17, ((var_3 ? 233 : var_18))))) ? (1 || 2383821281) : var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] = ((!((min((arr_6 [i_0] [i_1] [i_1]), (arr_6 [i_0] [i_1] [1]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_20 = max(((max((arr_12 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]), 1))), -1984);
                            arr_13 [i_1] = 3795723176201884996;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_24 [i_1] [i_1] = (--808256347);
                                var_21 = (var_17 - 18499);
                                var_22 = ((((max((arr_12 [i_0] [i_1] [i_4] [i_6]), var_6))) ? (arr_22 [i_0] [i_1] [i_4]) : ((5 ? 4095 : 55742))));
                                var_23 = (max(var_23, ((((((-10260 ? ((3510084716 ? (arr_12 [i_1] [i_4] [i_5] [i_6]) : var_7)) : (~var_5)))) ? (arr_14 [9] [9] [i_6]) : var_8)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = 65527;
    #pragma endscop
}
