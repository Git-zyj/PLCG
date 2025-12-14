/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -5781998348538922497;
    var_17 = (((!var_0) ? 70368744177663 : (!70368744177656)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_0] [22] |= ((((arr_1 [i_0 + 4] [i_0 + 2]) ? (arr_1 [i_1] [i_0 + 1]) : (arr_1 [i_0] [i_0 - 1]))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_3] = ((!(((!var_12) > (arr_14 [1] [i_1] [i_2] [i_1] [i_0 + 3])))));
                                arr_17 [i_0] [i_1] [i_4] = ((94 ? 3386598789116032820 : 5851229301125785849));
                                var_18 ^= ((!((min(((max(37411, 232))), (arr_7 [i_0] [i_0 + 4] [i_4 - 1]))))));
                                var_19 += (37384 / (arr_13 [i_0] [1] [i_2] [i_0] [i_1] [1] [i_0]));
                                arr_18 [i_1] [i_4] [i_3] [i_2] [i_1] [i_0] [i_1] = ((((max(-var_1, -5851229301125785868))) ? ((var_9 ? 65188 : (arr_9 [i_0] [i_1] [i_2] [i_3] [i_0] [i_3]))) : ((((~1) ? ((5886 ? (arr_8 [i_0] [i_1] [i_2] [i_3]) : 1)) : (min(-1307357963, var_1)))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        {
                            arr_23 [i_1] [i_1] [i_1] = 1307357962;
                            var_20 = var_15;
                            var_21 = (((arr_8 [i_6] [i_1] [i_1] [i_0 + 4]) ? (~var_4) : (((arr_13 [i_1] [i_5] [i_5] [i_5] [19] [i_1] [i_0]) ? (arr_8 [i_0 + 3] [i_1] [i_5] [i_6]) : 0))));
                            var_22 = (arr_2 [11]);
                        }
                    }
                }
            }
        }
    }
    var_23 &= (((((min((!var_5), (min(0, var_0)))))) < (-16915076942146279263 & var_12)));
    #pragma endscop
}
