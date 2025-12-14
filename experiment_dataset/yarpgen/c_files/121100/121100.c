/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((-((42349 ? 2323474647 : 3482705831)))) & var_8));
    var_15 = var_8;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_4 [i_0] [i_1] [i_1] = (min(30478, (((arr_1 [i_0]) ? 1 : ((var_9 ? var_8 : 31647))))));
            var_16 = ((((((2323474647 ? 812261449 : var_13)))) ? ((812261437 ? ((min(-99, 9042))) : ((((arr_0 [i_0] [i_1]) != (arr_2 [i_0])))))) : var_4));
            arr_5 [i_0] [i_1] = 3482705831;
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            arr_8 [i_0] [i_2] = arr_1 [i_0];
            var_17 = (max(var_17, (65526 + var_5)));
            var_18 = ((-9042 ? -1817143174 : (((arr_2 [i_2]) / 4294967295))));
            arr_9 [i_0] [i_0] [i_0] = (arr_3 [i_0]);
            var_19 = (max(var_19, ((((1971492629 / 9) << (((((min(1214563138, (arr_1 [i_2])))) <= 2323474642))))))));
        }
        arr_10 [i_0] = 32320;
        var_20 = (max(var_20, (arr_1 [i_0])));
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    var_21 = -47;
                    var_22 = ((((arr_15 [i_3] [i_4] [i_4] [i_4]) ? (var_1 << 1) : var_3)));
                    var_23 = 3482705847;

                    for (int i_6 = 2; i_6 < 8;i_6 += 1) /* same iter space */
                    {
                        var_24 = (arr_14 [i_3] [i_3]);
                        arr_20 [i_3] [i_3] [i_5] [i_5] = ((4128768 % (arr_15 [i_6 + 3] [i_6 - 1] [i_6] [i_6 - 2])));
                        var_25 = (arr_11 [i_3] [i_3]);
                        var_26 = ((((min((arr_17 [i_6 - 1] [i_6] [i_5] [i_6 + 4]), (arr_19 [i_6] [i_6 + 2] [i_6] [i_6] [i_6 - 2] [i_6 + 3])))) >= (arr_17 [i_6 - 2] [i_6 + 4] [i_5] [i_6 + 4])));
                    }
                    for (int i_7 = 2; i_7 < 8;i_7 += 1) /* same iter space */
                    {
                        var_27 = (((arr_22 [i_3] [i_3] [i_4] [i_4] [i_7] [0]) ? (((arr_18 [i_5] [i_4] [i_7] [i_3]) ? (arr_18 [i_5] [i_5] [i_5] [3]) : (arr_18 [i_5] [i_5] [i_5] [i_7]))) : ((((1 ? 1 : 14315))))));
                        var_28 = (min(var_28, (var_9 != 106)));
                    }
                    var_29 = (1 != -30474);
                }
            }
        }
    }
    #pragma endscop
}
