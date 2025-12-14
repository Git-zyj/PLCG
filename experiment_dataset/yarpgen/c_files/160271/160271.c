/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(((var_8 ? ((var_10 ? 31 : var_10)) : 30303)), (((max(var_10, var_2))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    arr_8 [i_0] [i_2] [i_2] [i_2 + 4] = (-2147483647 - 1);
                    arr_9 [i_2] [i_1] [i_1] = ((-(((arr_5 [i_2 + 2]) / -106))));
                    var_14 = 122;
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_15 = -16384;
                        arr_14 [i_0 - 1] [i_1] [i_3] [i_4] = var_2;
                        arr_15 [i_0 - 1] [i_3] [i_3] [i_4] [i_0 - 1] = (((150 >> (-1794 + 1795))));
                    }
                    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_3] [i_3] [12] [i_3] = (var_3 + -62);
                        var_16 = ((540431955284459520 ? -1803 : (arr_17 [i_0] [i_0 + 1] [i_3])));
                        arr_19 [i_5] [i_3] [i_3] [i_0] = (arr_6 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1]);
                        var_17 = (min(var_17, (1794 / 105)));
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                    {
                        arr_23 [i_0 + 1] [i_0] [19] [19] [i_0] [i_3] = ((var_12 < var_7) >> (!var_9));
                        arr_24 [i_3] [i_1] [i_3] [i_6] = 61484;
                    }
                    var_18 = (max(var_18, ((((arr_1 [i_0 + 1]) > (arr_2 [17] [i_0 + 1]))))));
                }
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    arr_27 [i_0] [i_0] [i_0] [i_7] = 29177;
                    var_19 = arr_13 [i_7] [i_0 - 1] [i_0 - 1] [i_0 + 1];
                    var_20 -= ((((11498 ? 143 : (30302 ^ 30317))) <= 121));
                    arr_28 [i_0] [i_0] [14] = (max((max(var_5, var_10)), var_5));
                    arr_29 [i_0] [7] = (arr_0 [7] [i_0 + 1]);
                }
                arr_30 [i_0] [i_0] = 138;
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 19;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        {
                            var_21 = 36385;
                            var_22 *= ((var_6 ? (min(var_10, ((var_7 ? -2 : 30300)))) : (!var_5)));
                            arr_35 [i_0] [i_1] [i_8] [i_9] = ((((max((arr_2 [i_0 - 1] [i_0 + 1]), var_8))) & (((arr_10 [i_8 - 2] [4] [i_0 + 1] [i_0 - 1]) + (arr_1 [i_0 - 1])))));
                        }
                    }
                }
            }
        }
    }
    var_23 = (max(var_10, 29167));

    for (int i_10 = 3; i_10 < 21;i_10 += 1)
    {

        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {
            arr_42 [i_10] [i_10 - 2] [i_10] = var_6;
            var_24 = (max(var_24, (((((max(-32, 1))) && ((!((min(var_6, var_3))))))))));
            var_25 = var_1;
        }
        var_26 = ((var_1 < ((65535 ? ((6154578481291973833 ? -11 : 7)) : 1))));
    }
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        arr_45 [i_12] [i_12] = (((((((var_12 ? var_12 : -48))))) == 24));
        arr_46 [i_12] [i_12] = ((((!(arr_3 [i_12]))) ? (~var_9) : ((~((max((arr_0 [i_12] [i_12]), var_5)))))));
        arr_47 [i_12] = (((((arr_37 [i_12]) ? 49829 : var_11)) == (((arr_37 [i_12]) ^ (arr_37 [i_12])))));
        var_27 = (max(var_27, ((max(((var_3 ? var_8 : 90)), ((min((max(1, 8176)), 870688484))))))));
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 11;i_13 += 1)
    {
        var_28 = 1;
        var_29 &= -575164818;
        arr_51 [i_13] = (((~var_1) ? var_3 : var_9));
    }
    #pragma endscop
}
