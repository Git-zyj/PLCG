/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= var_3;
    var_17 = (min(var_17, 156));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [15] [i_0] = ((0 ? var_4 : (((arr_3 [i_0]) ? (arr_2 [i_0 + 1] [i_0 + 1] [i_1 + 3]) : (arr_3 [i_0])))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_18 = (arr_9 [i_0] [i_0] [i_2] [i_4]);
                                var_19 = 99;
                                arr_16 [i_2] [i_2] &= ((-(((arr_8 [i_0] [i_2 - 1]) ? var_4 : 236))));
                                var_20 *= 0;
                            }
                        }
                    }
                }

                for (int i_5 = 1; i_5 < 16;i_5 += 1) /* same iter space */
                {
                    var_21 ^= var_3;
                    var_22 = (-37 % 1);
                    arr_19 [i_0] [i_0] = ((~(((!((((arr_3 [i_0]) ? (arr_17 [i_5]) : (arr_7 [i_0] [i_1] [i_5] [i_5])))))))));
                }
                for (int i_6 = 1; i_6 < 16;i_6 += 1) /* same iter space */
                {
                    var_23 &= (min(var_12, (~var_8)));
                    var_24 = ((((var_13 ? 700962928 : ((149 ? 1664134671018866308 : var_4))))) ? (((18 >= 17041813598490718002) / 5457074747797255744)) : ((((17041813598490718002 ? 1 : 66)))));
                }
                var_25 = (min(((((~6143163787125268987) ? (arr_4 [i_1 - 1] [i_0]) : var_2))), (arr_0 [i_1])));
            }
        }
    }
    #pragma endscop
}
