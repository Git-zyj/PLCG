/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13161
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (0 - ((2 ? var_10 : var_1)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 7;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                    {
                        var_21 = (min(var_21, 52932));
                        var_22 = (((arr_0 [i_0]) & var_16));
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                    {
                        var_23 = (~-var_1);
                        var_24 = ((((((((arr_1 [i_0]) ? var_19 : 8160))) || var_18)) ? var_3 : (((!5353212146275882495) ? (!17675877849729090327) : 5048))));
                        arr_11 [i_0] [i_1 + 2] [i_0] [i_4] = (((((-var_9 + 2147483647) >> (25190 - 25185)))) ^ (((136 && 241) ? (arr_3 [i_0] [4] [i_1]) : 17675877849729090327)));
                        arr_12 [i_0] [i_1] = var_11;
                    }
                    for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                    {

                        for (int i_6 = 4; i_6 < 9;i_6 += 1) /* same iter space */
                        {
                            var_25 *= var_10;
                            arr_20 [i_0] [i_0] [i_0] = ((var_13 & (min(((96 ? 193 : var_4)), (141 | 33064)))));
                            var_26 = (min(((min(var_13, (arr_13 [i_5] [i_0] [i_0] [i_0])))), var_14));
                        }
                        for (int i_7 = 4; i_7 < 9;i_7 += 1) /* same iter space */
                        {
                            var_27 = -var_17;
                            var_28 *= ((-(((31 / var_12) ? var_18 : (arr_19 [i_1 + 2] [i_2 - 2] [i_2] [i_5] [i_5] [i_5])))));
                        }
                        var_29 = ((((2 >> ((((-6508 ? var_13 : (arr_7 [i_0] [i_1] [i_2] [i_5]))) - 18446744073709551503)))) <= ((23579 ? (var_2 && 49730) : 33091))));
                    }
                    for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
                    {
                        var_30 = (((-var_17 - (arr_3 [i_8] [i_2] [i_0]))));
                        arr_26 [i_0] [3] = ((-((-(var_15 - -6508)))));
                    }
                    arr_27 [i_0] [i_1] [6] [i_0] = ((((min((arr_0 [i_0]), (arr_24 [i_0] [i_1])))) ? 91 : (arr_14 [i_2 + 2] [i_2] [i_0] [i_0] [i_0] [i_0])));
                    arr_28 [7] [i_0] [i_2] [i_0] = 91;
                }
            }
        }
    }
    var_31 = (max(((min(-165, ((108 ? -23745 : var_18))))), (min(108, (min(var_1, -19479))))));
    var_32 = max(93, 115);
    #pragma endscop
}
