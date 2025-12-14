/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((1 == -1) <= var_10)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (+((20 ? (arr_3 [i_1 + 4]) : 1)));

                for (int i_2 = 4; i_2 < 10;i_2 += 1)
                {
                    var_20 = (((((((-(arr_3 [i_0])))))) > (((arr_6 [i_2] [i_1] [i_2] [i_1]) - 16))));
                    arr_7 [i_0] [i_2 - 3] [i_2] [i_0] = ((~((1 ? (arr_1 [i_1 + 4]) : (arr_5 [i_1 + 4] [i_2 - 3])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_21 = (-var_13 + -189507619);
                                var_22 = ((((!1879048192) <= (735189732 < -88787326))));
                            }
                        }
                    }
                    var_23 = (max(var_23, (arr_3 [i_1 + 2])));
                    var_24 -= (~0);
                }
                var_25 = (min(((min(var_2, 98))), -111));
                var_26 = (min(0, 1481252069));
                var_27 = (((arr_12 [i_1] [1] [i_0] [i_0] [i_1 + 2]) ? (((1 && (((4651084623445696441 ? -31 : 7608725098288095617)))))) : ((199 & (!55)))));
            }
        }
    }
    #pragma endscop
}
