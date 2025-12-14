/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 3486;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_14 = -905173237;
                    var_15 = 1;
                    var_16 = 4294967295;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            {
                arr_13 [i_3] [i_4] [3] = 0;

                for (int i_5 = 1; i_5 < 9;i_5 += 1)
                {
                    var_17 = 32767;
                    var_18 = 32754;
                }
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    var_19 = 905173236;
                    arr_22 [i_3] [0] [i_6] [i_3] = 1;
                    var_20 = 12412106431147493316;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 10;i_8 += 1)
                        {
                            {
                                var_21 = -108;
                                arr_29 [3] [i_7] [i_6] [i_7] [i_8] [1] [i_8] = 16205;
                                arr_30 [i_3] [i_4] [i_6] [10] &= 6034637642562058330;
                                var_22 = 7037947547438863679;
                            }
                        }
                    }
                    arr_31 [i_3] [i_4] [i_6] [9] = 9223372036854775807;
                }
                for (int i_9 = 2; i_9 < 7;i_9 += 1)
                {
                    arr_34 [i_9] = (-9223372036854775807 - 1);
                    arr_35 [i_3] [i_4] [i_9] [i_9] = 1;
                }
            }
        }
    }
    #pragma endscop
}
