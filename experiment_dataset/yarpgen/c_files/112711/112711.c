/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += -var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        arr_8 [i_3] [13] [i_2] [i_2] [i_0] [i_0] = (((arr_7 [i_3] [i_1] [i_2] [18] [i_2]) >> (((arr_5 [i_2] [i_1] [i_1]) ? 2 : 255))));

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            arr_12 [9] [i_2] [i_0] [i_2] [i_0] = (((((2785925448073144007 ? var_7 : var_13))) ? var_8 : 254));
                            arr_13 [i_0] [i_2] [i_1] [i_3] [i_4 + 1] [i_2] [11] = ((3 ? (arr_2 [i_4]) : ((var_13 ? (arr_0 [20] [i_3]) : 198))));
                            var_15 = ((251 ? (arr_3 [i_4 - 1] [i_4] [i_4 + 2]) : (arr_3 [i_4 - 1] [i_4 - 1] [i_4 - 1])));
                        }
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            var_16 = (min(var_16, (((-((var_12 ? (arr_14 [i_1] [14] [i_5 - 1] [i_5 - 1] [i_5] [i_5 - 1] [i_5 - 1]) : 69)))))));
                            arr_16 [i_2] [i_3] [i_2] [i_1] [i_2] = (arr_5 [i_2] [i_1] [i_2]);
                        }
                        arr_17 [i_3] [i_2] [i_2] [i_0] = var_7;
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
                        {
                            arr_24 [i_0] [i_1] [i_2] [i_2] [i_7] = ((-970068971 ? var_4 : 243));
                            arr_25 [i_1] [i_1] [i_1] [i_1] [i_1] [i_2] [i_1] = (((arr_3 [i_0] [7] [i_7]) ? 63 : (arr_9 [i_6] [i_6] [i_6] [i_6] [i_6])));
                            var_17 += ((250 ? 0 : 1721039008));
                            var_18 = 1547085357;
                        }
                        for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                        {
                            var_19 = (((((1547085331 ? (arr_7 [13] [13] [i_2] [1] [i_8]) : (arr_0 [i_0] [i_0])))) | 2747881952));
                            arr_30 [i_2] [i_1] [i_1] [i_6] [12] = (arr_3 [i_6] [i_2] [i_0]);
                            var_20 = 13872471405485913231;
                        }
                        arr_31 [i_0] [i_1] [i_2] [i_2] [i_6] = (1 == 1);
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        var_21 = -1382148282642907129;

                        for (int i_10 = 0; i_10 < 23;i_10 += 1)
                        {
                            var_22 += (((((4097803638 ? 45845 : 7))) ? 837530518 : (12 + 8191)));
                            var_23 = ((9293934376581381713 ? 255 : var_8));
                            arr_39 [i_0] [i_2] [20] [i_9] [3] [i_2] [i_1] = 2675;
                            var_24 = (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] [i_0]);
                        }
                        arr_40 [i_0] [i_1] [i_2] [i_2] [i_9] = (!1547085329);
                    }
                    var_25 = ((-(min(1, var_4))));
                    var_26 = ((((((min(var_2, var_2)) + (var_9 & 197163657)))) ? (((198 / 65535) - var_2)) : var_0));
                }
                arr_41 [i_1] [i_0] = (((((147 ? var_8 : var_7))) - ((1 ? 2747881946 : 252))));
                arr_42 [i_0] = ((76 ? 5 : (((((1 ? 13 : 9773))) ? (-1981676424035061623 ^ 0) : 255))));
                var_27 = (max(var_27, (((((!(((1768047143 ? var_2 : (arr_1 [i_0])))))) ? ((min((((var_10 ? 249 : 18040))), var_12))) : ((var_3 % ((26 ? -562949953421312 : 49082)))))))));
            }
        }
    }
    #pragma endscop
}
