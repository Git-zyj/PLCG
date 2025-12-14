/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (-17 || 446086855708088060);
    var_12 = -var_4;
    var_13 = (min(var_13, ((min(var_0, ((1 * ((1 << (446086855708088060 - 446086855708088045))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 11;i_4 += 1)
                            {
                                var_14 = (((arr_2 [i_2]) + 4294967295));
                                arr_14 [i_4] [i_3] [i_2] [i_1] [i_0] = (((-1046151447 * 1621643723) / (arr_8 [i_4] [i_3] [i_1] [i_0])));
                            }
                            for (int i_5 = 0; i_5 < 11;i_5 += 1)
                            {
                                var_15 ^= (((+(((arr_16 [i_5]) ? var_5 : -1608165316)))));
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] = ((((min((arr_5 [i_1] [i_5]), (arr_5 [i_0] [i_1])))) && (((-1608165323 ? 106 : 191)))));
                                arr_19 [8] [8] [i_2] = (arr_2 [i_0]);
                                var_16 = (~(((arr_4 [i_5] [i_1] [i_0]) ? 64 : ((~(arr_5 [i_1] [i_1]))))));
                                var_17 = (arr_17 [i_0] [i_1] [i_1] [i_3] [6]);
                            }
                            for (int i_6 = 0; i_6 < 11;i_6 += 1)
                            {
                                arr_23 [i_2] = (((((((((arr_22 [i_1] [1] [i_2] [i_1] [i_1] [1]) != 32767)))) | (((arr_11 [i_0] [i_1] [5] [i_3] [i_6]) ? (arr_9 [i_2] [i_1] [i_1] [i_6]) : (arr_8 [i_0] [i_1] [i_2] [1]))))) * ((((arr_8 [i_3] [i_2] [i_1] [i_0]) - (arr_8 [i_0] [i_1] [i_1] [i_6]))))));
                                var_18 ^= ((-((3924580564 ? ((((arr_10 [i_0] [i_1] [i_2] [i_3] [i_2]) <= -595976256))) : (arr_8 [8] [i_3] [i_2] [i_0])))));
                            }
                            var_19 = 43003;
                        }
                    }
                }
                var_20 = (((min(61349, -1185093573098651537)) <= (arr_4 [i_1] [9] [i_0])));
                var_21 = (arr_5 [i_0] [i_1]);
            }
        }
    }
    var_22 = var_1;
    #pragma endscop
}
