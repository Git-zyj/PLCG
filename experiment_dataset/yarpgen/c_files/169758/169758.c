/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;
    var_17 *= (((((var_10 ? var_3 : var_15))) ? (((703241531 ? -703241518 : 12674889680172626047))) : ((((var_14 / 703241536) ? var_6 : (var_7 | 35855))))));
    var_18 = (min(var_18, var_6));
    var_19 = (((((var_1 ? -var_9 : ((max(106, 211)))))) ? (!var_4) : ((var_3 ? ((min(var_10, var_3))) : var_5))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    arr_9 [i_1] [i_1] [i_1] = var_3;
                    var_20 = (~703241526);
                    var_21 = ((!((max(var_4, (!42))))));
                }
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    arr_14 [i_0] [i_0] [i_0] = (-307190566 && 106);
                    var_22 = -8822876193012659571;
                }
                for (int i_4 = 2; i_4 < 17;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_25 [i_6] [i_5] [i_4] [i_0] [i_0] = (((((703241542 ? -703241544 : 228))) ? var_12 : (max((((var_6 ? var_0 : 230))), ((var_14 << (var_7 - 4244171271)))))));
                                var_23 = ((!(var_6 != var_13)));
                                arr_26 [i_6] [i_5] [i_1] [i_0] = (--32183);
                                var_24 = ((-(min((min(var_7, 12695813023115497225)), var_3))));
                                var_25 ^= ((((min(1, var_7))) ? ((((!var_5) ? var_7 : (min(var_14, var_9))))) : (52 % var_5)));
                            }
                        }
                    }
                    arr_27 [i_0] [i_1] [i_4] [6] = (max((((((214 ? 5771854393536925570 : var_6))) ? (5771854393536925569 == var_2) : var_13)), var_13));
                }
                for (int i_7 = 2; i_7 < 18;i_7 += 1)
                {
                    var_26 = (min(var_26, var_10));
                    var_27 = ((((~var_0) ? 69 : -12674889680172626044)));
                    var_28 = var_3;
                    arr_30 [i_0] [i_0] [i_0] = (--1);
                    arr_31 [i_0] [i_0] [i_1] [i_7] = (((((1 ? 149 : 107))) ? (var_6 % var_14) : (!149)));
                }
                var_29 = (max(var_29, (((((((var_11 ? -20389 : 17))) ? ((-703241531 ? var_1 : var_11)) : var_8))))));
            }
        }
    }
    #pragma endscop
}
