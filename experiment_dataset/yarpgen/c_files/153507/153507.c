/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    var_15 = (max(((((var_1 != var_4) ? var_11 : 0))), var_0));
    var_16 = (21 % var_11);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                var_17 = (((~-6533868826414813246) > (((((arr_5 [i_1 + 1]) > (arr_5 [i_1 + 3])))))));
                arr_6 [i_1] = 115;
                arr_7 [i_1] = ((((-112 != 1032192) ? (-2147483647 - 1) : (-91 != 4293935114))));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_18 |= max(((var_7 ? (arr_2 [i_0] [i_0] [i_1 + 2]) : (-2147483647 - 1))), var_4);
                    arr_10 [i_2] [i_1] [i_2] = 719478773;
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
                {
                    arr_15 [i_0] [i_0] [i_0] [i_0] &= var_12;
                    var_19 = (!var_0);
                    var_20 = var_7;
                }
                for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                {
                    var_21 = ((~(max((((arr_13 [i_1] [i_4]) ? (arr_0 [i_0] [i_4]) : 129024)), (((!(arr_3 [i_1] [i_1]))))))));
                    var_22 = (min(var_22, (((15057 ? var_1 : (arr_2 [i_1 - 2] [i_1 + 4] [i_1 - 1]))))));
                    var_23 ^= (min((min((2352113066 ^ -1), ((((arr_14 [i_0] [i_1] [i_1]) ? 15057 : var_9))))), ((max(((max((arr_3 [i_0] [i_0]), (arr_14 [i_0] [i_0] [i_4])))), (min(var_8, (arr_8 [i_1] [0]))))))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    var_24 = (~2047);
                    var_25 = (max(var_25, var_11));
                    var_26 = arr_12 [i_1];
                    arr_22 [i_0] [i_1] [i_1] [i_1] = (((~-96) | (((-54 + 2147483647) >> 0))));
                }

                for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                {
                    arr_25 [i_1] = (-32754 != 32767);
                    var_27 = (min(var_27, ((((((~(((-127 - 1) ? 30895 : (arr_1 [i_6])))))) || (-2147483647 - 1))))));
                }
                for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                {
                    var_28 = (~var_6);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            {
                                var_29 *= (max((((!(arr_9 [i_1 + 4] [i_1 - 2])))), (min(-5771061786739784537, 9223372036854775807))));
                                var_30 ^= (arr_9 [i_1] [i_1]);
                                var_31 *= ((~(min(var_7, (arr_4 [i_1 + 1] [i_0] [i_7])))));
                            }
                        }
                    }
                    var_32 = (min(var_32, (((-(min(-var_3, -var_0)))))));
                }
            }
        }
    }
    var_33 = (min((~var_7), (min((4293935086 % -41), ((2147483647 ? var_2 : var_13))))));
    #pragma endscop
}
