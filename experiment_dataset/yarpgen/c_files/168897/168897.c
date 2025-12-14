/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((min(var_9, (319215670 + 236)))) ? var_9 : var_2));
    var_13 += var_6;
    var_14 = var_11;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            var_15 = ((-3975751621 > (!0)));
            var_16 = (max(var_16, ((((((((min((arr_4 [i_0] [i_0]), 1)))) >= 322726724409778654))) + (var_8 == var_3)))));

            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                arr_7 [4] [i_2] = 3975751621;
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_17 = 5090;
                            var_18 = ((~(max(7893685151831069227, 240))));
                            var_19 = (min(var_19, 319215688));
                            var_20 = min(322726724409778654, 6424969363952881163);
                            var_21 = ((((max(((~(arr_8 [4] [i_4] [i_1 + 4] [i_4] [i_1] [i_0]))), var_8))) && ((min(1, 1578724012)))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 20;i_6 += 1)
                {
                    {

                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            arr_20 [i_0] [i_6] [5] = (max(750328692, (((!((min((arr_14 [i_1]), 233))))))));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_6] = var_11;
                            var_22 = ((-4 + 2147483647) >> (61 - 45));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            arr_25 [i_0] [i_1] [i_5] [i_6] [i_6] [i_8] = (arr_10 [i_1 + 4] [i_6 + 2]);
                            var_23 = (var_7 | 0);
                            var_24 += (99 ? (-2147483647 - 1) : -9078791930851980809);
                        }
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            arr_30 [i_0] [i_1] [12] [2] [i_6] [i_9] = (5581 > -1);
                            var_25 = (max((!var_10), ((~((-18 ? var_3 : var_0))))));
                            var_26 += (1175893937 * 110);
                        }

                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            var_27 += ((-(!-215)));
                            arr_34 [i_10] [i_6] [i_6] [8] [i_0] [i_6] [i_0] = (max(((((arr_14 [i_1 + 1]) < (arr_14 [i_1 + 4])))), 0));
                        }
                        for (int i_11 = 2; i_11 < 20;i_11 += 1)
                        {
                            var_28 = arr_15 [i_11 - 2] [i_6] [i_6 + 2] [i_6] [i_0];
                            var_29 += 134217728;
                            arr_38 [12] [12] [11] [17] [11] [i_0] [i_6] = (min(-1286365105606426457, 8));
                        }

                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            arr_43 [0] [i_6] [i_12] = 5578;
                            var_30 = (min(var_30, (arr_37 [8] [i_1] [i_0] [i_0] [18])));
                            var_31 += (~1);
                        }
                    }
                }
            }
            var_32 = (max(var_32, -3));
        }
        var_33 = (max(var_33, (((((+(((arr_8 [i_0] [4] [4] [8] [i_0] [i_0]) << (65531 - 65506))))) % (((35892 >> 23) ^ (min(206, 4002358272)))))))));
        /* LoopNest 2 */
        for (int i_13 = 2; i_13 < 19;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 21;i_14 += 1)
            {
                {
                    var_34 += (min((((!(arr_1 [i_13 + 3])))), ((-((-19833 ? 24 : 2382095365916986660))))));
                    var_35 += var_9;
                }
            }
        }
    }
    var_36 = (max(var_36, (54135 - -39)));
    #pragma endscop
}
