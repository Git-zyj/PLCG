/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_15 = ((896 ? (~var_1) : ((2220984600 ? ((max(10894, (arr_4 [i_0])))) : (var_6 | var_8)))));

                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            var_16 = (!var_6);
                            arr_15 [1] [i_0] = ((-((10380303661828134456 ? -2253547132309289692 : 3067965502))));
                            var_17 = ((var_2 ? (!30997) : (var_4 && 229)));
                        }
                        arr_16 [i_3] [i_2] [7] [i_0] |= (((arr_12 [i_3 - 1] [i_3] [i_3] [i_3]) || (arr_12 [i_3 - 1] [i_3 + 1] [i_3] [i_3])));
                        arr_17 [i_2] [i_2] [i_2 + 2] [i_2 + 2] [i_2] [i_2 - 1] = -26377;
                    }
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_18 = 50726;
                        var_19 = (max(var_19, (((((min(10900, 1227001793))) ? 14 : ((-(58498 + var_8))))))));
                        var_20 = -10894;

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            var_21 = ((-(~2381488713)));
                            arr_22 [i_1] [2] [11] [i_1] [i_1] [i_1] |= (-10894 ^ -3);
                            var_22 = (((arr_10 [i_2 - 1] [i_2 - 1]) ? 6599076269316458215 : 0));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            var_23 = (arr_25 [i_2] [i_2] [i_2 + 1] [i_2 - 3]);
                            arr_26 [i_0] [i_1] [i_0] [2] [i_0] [i_1] [i_0] = var_13;
                            arr_27 [i_0] [i_0] [i_0] = (((arr_11 [3]) ? -0 : -963820407));
                            var_24 = (((arr_0 [i_7]) ? (arr_11 [i_5]) : (arr_8 [i_2 - 3] [i_2 - 3] [i_2 + 2] [i_2 + 1])));
                        }
                    }
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 19;i_8 += 1)
                    {
                        var_25 |= 1536;

                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            var_26 += ((-(arr_8 [i_1] [i_2 - 1] [i_8 + 1] [i_8])));
                            arr_32 [i_0] [i_1] [i_2] [i_8] [i_1] = ((!(arr_25 [8] [i_2] [i_2] [i_2 - 1])));
                            var_27 = (65535 || 39263);
                            var_28 = (3067965519 / 7912386202037881726);
                            var_29 += 1661680697;
                        }
                        for (int i_10 = 1; i_10 < 17;i_10 += 1)
                        {
                            arr_35 [i_0] [i_0] [i_0] [5] [i_0] = ((var_8 ? 786432 : (arr_8 [i_2 - 3] [12] [i_8 - 1] [i_10 + 2])));
                            var_30 = (~1);
                        }
                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            var_31 = (arr_19 [i_2 + 2] [i_2 + 1]);
                            arr_38 [i_0] [i_1] [i_11] [i_8] [11] = (((-114 < (arr_34 [0] [i_1] [i_2] [i_1] [6] [i_8]))));
                            arr_39 [i_0] [i_11] [i_0] [i_0] [i_0] = (39278 ? (arr_28 [i_2 - 3] [i_2 + 2] [i_2 + 1] [i_2 - 3] [i_8 - 1] [i_8 - 1]) : 151);
                        }
                        for (int i_12 = 0; i_12 < 20;i_12 += 1)
                        {
                            var_32 = (arr_31 [i_8 + 1] [i_1] [i_1] [i_8 + 1] [14]);
                            var_33 = 0;
                            arr_42 [i_0] [i_1] [i_2] [i_8] [i_12] = ((10900 ? var_10 : 12688835716061785763));
                        }
                        arr_43 [i_8 - 1] [i_2] [i_1] [i_0] = ((-(-16384 >= 44074)));
                    }
                    arr_44 [i_0] [i_0] [i_2] = ((!(!3483305803)));
                }
            }
        }
    }
    var_34 = (min(var_34, (((+((var_10 ? (-10922 < 7) : 10893)))))));
    #pragma endscop
}
