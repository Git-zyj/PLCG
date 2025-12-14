/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_15 -= (((((-(min(var_0, var_6))))) ? ((((((~(arr_2 [i_0] [i_0] [i_1]))) < -1593405274)))) : (max((arr_0 [i_0]), (min((arr_1 [i_0]), 1593405273))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_16 = var_4;
                            var_17 ^= var_3;
                            var_18 = (~(((var_4 < (arr_7 [i_1 - 1])))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            var_19 -= (min((((((((arr_11 [i_0] [0] [i_0] [i_5]) < (arr_1 [i_0])))) < var_7))), (arr_11 [i_1 + 3] [i_1] [i_1] [i_1 - 2])));

                            for (int i_6 = 0; i_6 < 24;i_6 += 1)
                            {
                                var_20 = (((((min(249218668, -989803544) < ((((arr_10 [i_0]) < 149))))))));
                                arr_17 [i_0] [i_1] [i_4] [i_0] [i_1] [i_6] [1] = (arr_3 [i_0]);
                                var_21 = (max(((((var_3 ? var_8 : (arr_3 [i_0]))))), (max((~var_3), (~128)))));
                                var_22 = (((((~(arr_13 [i_0] [i_0] [i_1] [i_4] [i_5] [i_4]))) < (max(var_1, 249218668)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (((((402653184 < (~573775340)))) < (-249218694 < 162)));
    #pragma endscop
}
