/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= 111;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 17;i_4 += 1)
                            {
                                var_18 = (min(var_18, var_1));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] [i_4] = (arr_10 [i_4] [i_3] [11] [i_1] [i_0]);
                            }
                            for (int i_5 = 0; i_5 < 17;i_5 += 1)
                            {
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((~((((max(var_5, var_10))) ? var_4 : ((min(36402, var_2)))))));
                                var_19 *= (((arr_18 [i_0 + 4] [i_0] [i_0]) ? (((143 ? ((max((arr_5 [i_0 + 1] [i_2] [i_0 + 1]), 112))) : (65535 + var_13)))) : (max((arr_11 [5] [i_1] [i_0 + 4] [i_0 + 4] [i_0] [13]), var_1))));
                            }
                            var_20 = (arr_8 [i_0] [i_2 + 1] [i_1] [i_0]);
                            var_21 = var_6;
                            var_22 = (((arr_13 [i_0 + 4] [i_1] [i_2 - 1] [i_2 - 1] [i_3]) < (max(var_7, var_15))));
                        }
                    }
                }

                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 15;i_8 += 1)
                        {
                            {
                                var_23 |= (arr_9 [i_0 - 1] [i_0 + 4] [i_7 - 1] [i_8 - 2]);
                                var_24 = ((((min((var_4 & var_8), var_9))) ? ((min(((min(97, 246))), var_12))) : (arr_27 [i_8] [12] [i_6] [9] [12] [i_0 + 4])));
                                var_25 = 208;
                            }
                        }
                    }

                    for (int i_9 = 1; i_9 < 16;i_9 += 1)
                    {
                        arr_30 [i_0] [i_1] [i_0] = (max((((arr_25 [i_0 + 1] [i_0]) ? (arr_1 [i_9 + 1] [i_6]) : 103)), 4));
                        var_26 = (((25063 > ((((arr_12 [i_0] [i_6] [i_1] [i_0]) || (arr_10 [i_0] [i_1] [i_1] [14] [i_9])))))));
                    }
                }
                /* vectorizable */
                for (int i_10 = 1; i_10 < 1;i_10 += 1)
                {
                    var_27 = ((+((5624665719444446231 ? (arr_6 [i_0 + 4] [i_1] [i_1] [i_10 - 1]) : (arr_25 [i_10 - 1] [i_0])))));
                    arr_34 [7] [i_0] [i_0] [i_0] = (arr_9 [i_1] [i_10 - 1] [i_10 - 1] [i_0 - 1]);
                    arr_35 [1] [i_0] = (((((251 ? var_5 : (arr_21 [i_0] [10] [i_10])))) | (((arr_25 [i_0] [i_0]) ^ 99))));
                    arr_36 [i_10] [i_0] [i_0] [i_0] = -var_3;
                }
            }
        }
    }
    var_28 = (max(((255 ? 4030241361910639793 : ((min(6069295060638242364, 132))))), 3112331568601741726));
    var_29 = var_8;
    #pragma endscop
}
