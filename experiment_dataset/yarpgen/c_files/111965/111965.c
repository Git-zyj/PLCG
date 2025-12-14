/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_18 = ((~(!2947342974)));
                var_19 = (max(var_19, var_6));
                arr_6 [17] = ((2684823144 >= (104 + 150)));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_20 = (min(var_20, 0));
                    var_21 = (min(var_21, (((!(((((min(var_10, 2398391450))) ? (arr_2 [i_2]) : 2147483646))))))));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_11 [i_2] [i_2] [i_1 + 1] [i_2] = var_13;
                        var_22 |= ((((min((var_13 - var_3), (max((arr_3 [i_0] [1]), var_8))))) ? (((var_12 << (((min(var_17, 1347624321)) - 16020))))) : ((((max(2147483646, 3660366760))) ? (arr_2 [i_0]) : ((min(var_3, var_8)))))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] |= ((((106 > (arr_5 [i_1] [i_1 + 1] [i_1 + 1])))));
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {

                        for (int i_5 = 1; i_5 < 16;i_5 += 1)
                        {
                            var_23 = (max(2947342975, -54));
                            arr_17 [i_2] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_2] = var_17;
                        }
                        for (int i_6 = 3; i_6 < 17;i_6 += 1)
                        {
                            arr_20 [9] [9] [i_2] [i_4] [i_4] = ((((0 >> (4449844833498953944 > var_6)))) - (((max(var_0, var_5)) - (!1))));
                            arr_21 [14] [i_1] [i_2] [i_1] [i_1 + 1] [14] [i_2] = 52261;
                        }
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            arr_24 [i_2] = (((61 > 1624164889) >> (((130816 == (((var_0 ? 1783934512 : (arr_14 [i_7] [i_4] [11] [9] [9])))))))));
                            arr_25 [i_0] [i_2] [10] [i_0] [i_1] [i_7] [i_1] = (var_7 + -1689291750);
                        }
                        var_24 += ((~(max((max(223, 5573428402219110136)), var_1))));
                    }
                    var_25 = ((((min((~-16), ((21 ^ (arr_19 [i_2] [i_0] [i_1 + 1] [i_1 + 1] [i_2] [i_1 + 1])))))) + ((var_0 ? 0 : 30))));
                }
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    arr_30 [i_0] [i_1] [i_8] [i_8] = 1;

                    for (int i_9 = 2; i_9 < 16;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
                        {
                            arr_37 [i_8] [i_8] = 1688849860263936;
                            var_26 = ((min((((var_0 ? 0 : (-127 - 1))), (((arr_4 [i_1] [i_0]) % (arr_8 [i_8])))))));
                        }
                        for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
                        {
                            var_27 = ((((-1688849860263937 ? 64631 : var_10)) + ((min((arr_22 [i_0] [i_1] [i_0] [5] [10]), var_8)))));
                            var_28 = (min(var_28, ((min(var_12, var_0)))));
                            arr_42 [i_1] [i_8] [i_9] = (((var_16 << 0) ? (((var_2 > (var_4 & 2936)))) : (arr_0 [i_11] [i_9])));
                        }
                        for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
                        {
                            arr_46 [i_0] [i_0] |= 213;
                            var_29 = 106;
                            var_30 = var_15;
                        }
                        for (int i_13 = 1; i_13 < 17;i_13 += 1)
                        {
                            var_31 ^= (((65535 + var_15) + var_5));
                            var_32 = (max((arr_5 [i_1 + 1] [i_1 + 1] [i_1 + 1]), ((min((max(var_7, 1)), (arr_22 [i_0] [i_1 + 1] [i_8] [i_8] [i_13]))))));
                            arr_49 [i_8] [i_8] [7] = ((!((min((arr_27 [i_8]), 40362)))));
                        }
                        var_33 = ((-(arr_45 [i_8] [i_8] [i_8] [i_8] [16] [i_8] [i_8])));
                    }
                }
                arr_50 [i_0] [i_1 + 1] = (max(-1783934512, 0));
            }
        }
    }
    var_34 = (min(var_34, 3));
    #pragma endscop
}
