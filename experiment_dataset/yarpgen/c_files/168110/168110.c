/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((~((var_4 >> (var_6 - 3194011610005133661))))));
    var_14 = var_1;
    var_15 = (min(var_8, ((((min(var_12, var_11))) ? -var_4 : (var_12 - 1)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_16 = (min(var_16, var_0));

                for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
                {
                    var_17 ^= 4294967295;
                    arr_7 [i_0] [i_0] = (var_0 && var_11);

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            var_18 ^= ((((min(((124 ? -2052192171 : (arr_9 [12] [i_1] [i_2] [i_3] [i_3]))), var_10))) ? ((~((var_9 + (arr_5 [i_4]))))) : var_7));
                            var_19 = ((-(arr_10 [i_0] [i_1] [i_4] [i_0] [i_4])));
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_0] [i_3] [i_4] = (((arr_1 [i_0] [i_0]) - (~4019377313)));
                        }
                        for (int i_5 = 3; i_5 < 14;i_5 += 1)
                        {
                            arr_15 [i_0] [i_5] = (max((!var_3), var_12));
                            var_20 = (((!32) ? (((((((1 ? 1 : 14280))) || ((!(arr_1 [i_1] [i_0]))))))) : (((-32767 - 1) ? (var_12 <= var_2) : (((arr_14 [i_5] [0] [i_2] [7] [i_1] [i_0]) / var_7))))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            arr_18 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_6] [i_6] [i_0] = (((arr_9 [i_0] [0] [i_0] [i_1] [i_0]) & ((((arr_17 [i_2] [i_1]) ? var_0 : var_8)))));
                            arr_19 [i_6] [i_0] [i_0] [i_6] [i_6] [i_6] [1] = (arr_0 [i_0] [i_0]);
                        }
                        var_21 = ((((((var_0 ? (arr_8 [i_0] [i_1] [i_2] [i_3]) : (arr_14 [i_0] [i_1] [i_2] [i_2] [13] [13]))))) ? ((((((arr_1 [i_0] [i_0]) | (arr_11 [i_1] [i_0])))) ? (((max((arr_0 [i_1] [i_0]), var_0)))) : (~var_12))) : ((((arr_10 [i_0] [i_0 - 1] [i_1] [i_0] [0]) ? (((30720 ? var_11 : (arr_3 [i_2])))) : var_1)))));
                    }
                    var_22 = (arr_3 [i_0]);
                    var_23 = (min(var_23, var_12));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                {
                    arr_23 [i_0] [i_1] [i_7] = -var_9;
                    var_24 ^= ((-((((arr_13 [i_7] [i_7] [12]) || var_6)))));
                    arr_24 [i_0] [i_0] [i_7] = (arr_1 [i_1] [i_0]);
                    var_25 = (arr_6 [i_0]);
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
                {
                    arr_27 [i_8] &= (((((var_7 ? (arr_10 [i_0] [0] [0] [i_8] [i_0 - 1]) : 4294967290))) ? (((-(arr_0 [i_0] [i_8])))) : var_0));
                    arr_28 [i_8] [i_8] [i_1] [i_8] &= var_12;
                    var_26 = 16777215;
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 0;i_10 += 1)
                        {
                            {
                                var_27 = (arr_9 [i_0 - 1] [4] [i_8] [i_9] [i_0]);
                                arr_33 [i_9] [i_1] [i_9] [i_10] [i_0] = (arr_25 [i_0] [i_0] [2]);
                                var_28 *= ((-(((!(arr_3 [i_1]))))));
                                var_29 = 0;
                            }
                        }
                    }
                    arr_34 [i_0] = (((((var_9 ? var_1 : var_12))) ? (arr_32 [i_8] [5] [i_8] [5] [13] [13] [i_0 + 1]) : ((var_12 - (arr_17 [i_0] [i_1])))));
                }
            }
        }
    }
    #pragma endscop
}
