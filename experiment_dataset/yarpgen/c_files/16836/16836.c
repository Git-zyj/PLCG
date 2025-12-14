/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_7));
    var_11 = ((((min(((var_6 ? var_3 : var_6)), -21306))) * var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 7;i_3 += 1)
                    {
                        {
                            var_12 = (((8 || 68719214592) > (arr_6 [i_2] [i_1] [i_1] [i_1])));
                            var_13 = (min((min((!14), (min((arr_0 [i_0]), (arr_10 [i_3 - 3] [i_3 + 2] [i_3 - 2] [i_3 - 3] [i_3 + 4]))))), (arr_4 [i_2 + 1] [i_2 + 1] [i_2 + 1])));
                            var_14 = ((((-9 ? ((-(arr_4 [i_0] [i_2 + 1] [i_2 + 1]))) : 20504)) != 32755));
                            var_15 = (max(var_15, (((68719214592 & ((((8 & 10) | 0))))))));
                        }
                    }
                }
                var_16 = ((-((47025 ? -14 : 2382975029243300100))));
                var_17 = ((((min((arr_8 [i_0] [i_1] [i_1] [i_1] [i_0]), (min(var_0, 18495))))) << (((((arr_9 [i_1] [8] [8] [i_0]) ? ((-(arr_3 [i_0] [i_1] [i_1]))) : ((-(arr_3 [i_0] [i_0] [i_1]))))) - 207038726))));
                var_18 = (max(var_18, (((2128118297 ? 0 : 255)))));

                for (int i_4 = 4; i_4 < 8;i_4 += 1)
                {

                    for (int i_5 = 3; i_5 < 8;i_5 += 1)
                    {
                        arr_20 [i_0] [i_0] = var_9;
                        var_19 = (min(var_19, ((-(((arr_6 [i_4] [i_1] [i_4 - 1] [i_5 - 2]) ? -91 : (((arr_5 [i_5 + 3] [i_1] [i_4 + 2]) ? (arr_19 [i_0] [i_0] [i_4 - 2] [i_4 + 1] [i_1] [i_4 + 1]) : (arr_2 [i_0] [i_0] [i_0])))))))));
                        arr_21 [i_5 - 2] [i_1] [i_4 - 3] [i_5 - 1] = (min(-var_7, (min(var_4, (arr_14 [i_5 + 1] [i_4 + 1])))));
                    }
                    var_20 = ((-(min((arr_13 [i_4 + 2] [i_0] [i_4 - 4]), ((min(14, -1698138236)))))));
                }
            }
        }
    }
    var_21 = -var_1;
    #pragma endscop
}
