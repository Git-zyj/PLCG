/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    var_12 &= var_0;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = (-115 - 90829213);
                    var_14 *= 8204938034682736143;
                    var_15 = ((-(((((11251155700962582655 == (arr_3 [13] [i_0])))) << (((((arr_5 [i_0 + 3] [i_1] [i_0]) ? -28654 : 1)) - 18446744073709522959))))));

                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_3 - 1] = var_6;
                        arr_12 [i_0] [i_1] [i_0] [i_2] [i_3] = ((37 ? (21 == 5383387494242874146) : 1));
                        var_16 = var_3;
                        arr_13 [i_0] [i_0] [i_1] [i_3] = -218;
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_17 = (max((arr_8 [i_0] [i_1] [i_1] [i_0]), 29));
                        var_18 = (arr_1 [i_0 + 3]);
                        var_19 = (max(var_19, ((max(-3825, -698224086)))));

                        for (int i_5 = 1; i_5 < 22;i_5 += 1)
                        {
                            arr_19 [i_0] [i_1] [i_1] = ((((8204938034682736143 != (max(10241806039026815465, (arr_18 [i_0] [i_1] [i_2] [i_1]))))) ? 1 : ((var_10 & (((arr_10 [i_0] [i_0 + 3] [i_1] [i_0 + 3]) ? (arr_10 [i_5] [i_1] [i_1] [i_1]) : (arr_8 [i_5] [i_1] [16] [19])))))));
                            var_20 = (min(var_20, ((max((arr_16 [i_5 + 1] [i_5] [i_4] [i_5]), (max(-8727150479671201618, 42814)))))));
                        }
                        for (int i_6 = 3; i_6 < 23;i_6 += 1)
                        {
                            var_21 = 5;
                            arr_22 [i_0 + 1] [i_1] [i_1] [i_6] = ((~(((arr_6 [i_0] [i_1] [i_1] [5]) ? (((arr_0 [i_0]) ? var_4 : 10152743946318413271)) : (~var_2)))));
                        }
                        for (int i_7 = 1; i_7 < 23;i_7 += 1) /* same iter space */
                        {
                            var_22 = (max(-291262886629105554, 18446744073709551615));
                            var_23 = -1;
                        }
                        for (int i_8 = 1; i_8 < 23;i_8 += 1) /* same iter space */
                        {
                            var_24 *= ((1 ? (max(-1639952590, 4294967295)) : (5298 - 17075230930735818122)));
                            var_25 = (max((arr_25 [i_8 - 1] [i_8 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 4]), (max(891543533, (arr_24 [i_8 - 1] [i_0])))));
                            arr_29 [i_0] [i_1] [i_0] [i_1] [i_8] = (max((!22139), (((((max(var_6, (arr_3 [i_0] [i_0])))) > (!var_3))))));
                            var_26 = var_0;
                        }
                    }
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        arr_33 [i_1] [i_1] [i_1] [i_9] = ((-126 ? 8204938034682736159 : 22924));
                        var_27 = (max(var_27, 11978418088326935624));
                        var_28 |= (max(var_4, (arr_10 [i_0] [i_1] [i_9] [18])));
                    }
                    for (int i_10 = 1; i_10 < 22;i_10 += 1)
                    {
                        arr_36 [i_1] [i_1] [i_1] = (4294967295 || 23294);
                        var_29 = (min(var_29, (max((var_4 < var_7), (max(((max(var_6, (arr_16 [i_10] [14] [14] [i_0])))), (max(15665501936207875024, var_5))))))));
                    }
                }
            }
        }
    }
    var_30 = (min(var_30, var_10));
    #pragma endscop
}
