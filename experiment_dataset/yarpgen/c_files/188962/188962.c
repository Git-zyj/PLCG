/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_1));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (((((min(-50, 0))) || ((min(-1043758335204402692, (~-1043758335204402683)))))))));
                var_18 = var_15;
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_19 &= ((~(min(var_13, var_8))));
                                var_20 = (max(var_20, 1043758335204402682));
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
                            var_21 *= var_6;
                            var_22 = 0;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 21;i_8 += 1)
        {
            {
                arr_28 [11] [11] [i_7] = var_13;
                arr_29 [i_7] [i_7] = (max((min(var_2, -7750768270517086085)), (min(-8925569720845842654, (((var_1 + 9223372036854775807) << (var_8 - 9680244627861939629)))))));
            }
        }
    }
    var_23 = ((var_9 << (var_13 - 9091324692518571063)));
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 20;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 19;i_10 += 1)
        {
            {
                var_24 += (var_1 & var_10);
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        {
                            var_25 += (((-9223372036854775807 - 1) % 274877841408));
                            arr_42 [i_9] = (((((~(!34307)))) == 1043758335204402683));
                            arr_43 [i_9 - 1] [i_10] [i_12] [12] [i_12] [i_12] &= -116;
                            arr_44 [i_9] [i_9] [i_9] = (max(-6357592642256345737, ((((min(-1043758335204402683, var_2)) > -2339647695542803743)))));
                        }
                    }
                }
                var_26 = (max(var_26, 0));
            }
        }
    }
    #pragma endscop
}
