/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= var_6;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_14 = ((97 ? (((arr_1 [i_0] [i_0]) % (arr_3 [i_0] [i_1]))) : (((121 % (((arr_1 [i_0] [i_1]) ? 110 : 3458764513820540928)))))));
                var_15 = (arr_0 [i_0 + 1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_16 = (max(var_16, ((((arr_6 [i_0] [i_1]) / (((arr_3 [1] [i_0 - 2]) / ((158 ? 228 : (arr_3 [i_2] [i_0]))))))))));

                            for (int i_4 = 0; i_4 < 23;i_4 += 1)
                            {
                                var_17 = (max((max((arr_2 [i_0 - 2] [i_0 - 2] [i_0 + 1]), (236 % 15))), ((((arr_7 [i_3] [i_2] [i_2] [i_3] [i_0 - 2] [i_4]) && ((((arr_4 [5] [i_1]) ? 236 : (arr_9 [0] [10] [i_2] [i_2] [i_4])))))))));
                                var_18 = (((min(((98 ? 131980331 : (arr_7 [i_0] [i_1] [i_2] [i_3] [i_3] [i_2]))), (arr_0 [i_0 + 1]))) - -1564155604));
                                var_19 ^= (min(((-(((arr_9 [18] [i_1] [i_2] [i_1] [i_0]) + (arr_6 [i_2] [i_3]))))), ((((0 ? 131980332 : (arr_3 [i_1] [i_4])))))));
                            }
                            var_20 = (min(var_20, (arr_7 [i_3] [i_2] [i_2] [i_1] [i_0] [17])));
                            var_21 = ((((((arr_2 [1] [i_0 - 1] [9]) >= ((((arr_1 [i_0] [i_1]) ? 7 : 1)))))) << ((((((-((26 ? (arr_1 [i_0 - 2] [i_1]) : (arr_2 [18] [i_0] [i_2]))))) + 8198747706995542776)) - 28))));
                        }
                    }
                }
            }
        }
    }
    var_22 &= ((((min(80, var_10))) <= (max((195 < 131980331), 15991118242420930289))));
    var_23 = (min(var_23, ((((min((var_4 == var_0), var_12)) ? ((max(171, (10 >= 131980321)))) : (((var_2 ? var_0 : -125))))))));
    #pragma endscop
}
