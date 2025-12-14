/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        arr_9 [i_3] [i_2] [i_3] = ((157 ? (((min((arr_6 [i_1 + 2] [i_1 + 2]), (arr_7 [i_1 + 4] [i_1 + 2] [i_1 + 3] [i_3 + 2]))))) : (((arr_6 [i_1 - 1] [i_1 - 1]) ? (arr_4 [i_1 - 2] [i_1 + 4] [i_1 + 1]) : (arr_6 [i_1 + 1] [i_1 + 4])))));
                        var_13 ^= (arr_8 [i_0]);
                        arr_10 [i_0] [i_0] [i_3] [i_2] [i_2] [i_3] = (min((((arr_4 [i_1 - 1] [i_2] [i_2]) ? (arr_4 [i_1 - 2] [i_1 - 2] [i_1 - 2]) : (arr_4 [i_1 + 2] [i_1 + 2] [i_1]))), (((arr_4 [i_1 + 1] [i_3 - 1] [i_3 - 1]) ? (arr_4 [i_1 + 3] [i_3] [i_3]) : (arr_4 [i_1 - 2] [i_2] [i_3 - 1])))));

                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            var_14 = ((~(max((min(0, (arr_6 [i_0] [i_0]))), (arr_0 [i_1] [i_2])))));
                            var_15 = ((+(min(64, ((72 ? (-32767 - 1) : 1))))));
                            arr_13 [i_0] [i_1] [i_3] [i_3 + 1] = (arr_4 [i_1] [i_2] [i_3]);
                            var_16 = ((~((((min((arr_1 [i_0]), (arr_5 [i_1] [i_2] [i_3] [i_1])))) ? 191 : ((min(192, (arr_6 [i_0] [i_0]))))))));
                        }
                        for (int i_5 = 0; i_5 < 0;i_5 += 1)
                        {
                            arr_17 [i_0] [i_1] [i_2] [i_3 + 1] [i_3] [i_2] [i_2] |= ((~(arr_1 [i_3 + 1])));
                            arr_18 [i_0] [i_1] [i_2] [i_0] [i_3] [i_5] [i_3] = ((~(min(19589, (arr_4 [i_0] [i_1 + 3] [i_2])))));
                            var_17 = (max((~483752634098392461), ((max((arr_16 [i_5 + 1] [i_3 + 2]), (arr_16 [i_5 + 1] [i_3 + 2]))))));
                        }
                    }
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        var_18 = ((~((+(((arr_8 [i_0]) ? 2906 : -19606))))));
                        var_19 = (max(((min((((arr_15 [i_1] [i_6] [i_0] [i_1] [i_1]) ? 47 : 48)), (!1)))), (min(-4757240975099832787, (-9223372036854775807 - 1)))));
                        var_20 = (max(var_20, (((-(max(((~(arr_19 [i_2] [i_1]))), ((max(2147483647, (arr_16 [i_6] [i_0])))))))))));
                    }
                    for (int i_7 = 3; i_7 < 11;i_7 += 1)
                    {
                        var_21 |= (+(min((((arr_22 [i_0] [i_0] [i_0] [i_7]) ? -9208865341813429669 : 64)), ((min(-11609, (arr_4 [i_2] [i_1] [i_0])))))));
                        var_22 = ((-((-(arr_6 [i_1 - 2] [i_7 + 1])))));
                    }
                    var_23 = (max((((!32763) ? (arr_8 [i_0]) : 32750)), (((arr_8 [i_1]) ? (arr_8 [i_0]) : (arr_8 [i_1 + 3])))));
                }
            }
        }
    }
    var_24 = var_5;
    #pragma endscop
}
