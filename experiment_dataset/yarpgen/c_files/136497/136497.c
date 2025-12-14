/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = 4294967295;
        var_17 = ((arr_1 [i_0]) ? (((((min(26371, (arr_1 [i_0]))))) | (max((arr_1 [i_0]), var_4)))) : var_7);
        var_18 = var_1;
        var_19 = ((min(48581, 6)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {

                    for (int i_4 = 3; i_4 < 16;i_4 += 1)
                    {
                        arr_14 [i_3] [i_3] = 48581;
                        arr_15 [i_1] = ((267572832 ? (arr_0 [i_4]) : ((min(((((arr_11 [i_1] [i_1] [i_1] [i_1]) && (arr_0 [i_1])))), ((-(arr_1 [i_3]))))))));
                        var_20 ^= ((!(((arr_13 [i_4 - 3] [i_4 - 2] [i_4 + 2] [i_4 - 2] [i_2]) <= (arr_11 [i_4 + 2] [i_4 + 2] [i_4 - 2] [i_1])))));
                    }
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {

                        for (int i_6 = 3; i_6 < 16;i_6 += 1)
                        {
                            var_21 ^= ((-1412051157 ? 18446744073709551604 : 10));
                            arr_20 [i_1] [i_6] [i_6] [i_1] [i_1] [i_1] [i_1] = (!var_5);
                            arr_21 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = (((((-30954 ? 1 : -25481))) ? (~1) : (min((~1329091111), ((716883522 ? (arr_6 [i_1] [i_1] [i_1]) : (arr_0 [i_1])))))));
                        }
                        var_22 = (min(var_22, ((-6160 ? 1 : 4211579422))));
                        var_23 = arr_9 [i_1];
                        var_24 ^= ((-((((1 != (arr_11 [i_1] [i_1] [i_1] [i_1]))) ? (arr_8 [i_1]) : ((min((arr_16 [i_1] [i_1] [i_1] [i_1]), 1)))))));
                    }
                    var_25 = max((((arr_12 [i_3]) ? -var_12 : (arr_9 [i_1]))), ((max((arr_10 [i_1]), (arr_10 [i_1])))));
                }
            }
        }
        var_26 = min(((+(max((arr_6 [i_1] [i_1] [i_1]), (arr_18 [i_1] [i_1] [i_1] [i_1] [i_1]))))), (((((!(arr_4 [i_1] [i_1]))) ? (72057591890444288 == 267572832) : (~10228)))));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        arr_24 [i_7] = (-(((arr_11 [i_7] [i_7] [i_7] [i_7]) ? (arr_23 [i_7] [i_7]) : (arr_18 [i_7] [i_7] [i_7] [i_7] [i_7]))));
        arr_25 [i_7] = (arr_5 [i_7]);
        var_27 = (min(var_27, (((~((-(arr_7 [i_7] [i_7] [i_7]))))))));
    }
    #pragma endscop
}
