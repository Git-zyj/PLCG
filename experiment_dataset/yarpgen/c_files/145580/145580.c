/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {

                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        var_13 += (!((!(-1 | var_3))));
                        var_14 = (((max(var_12, ((var_5 ? 1 : var_2)))) <= var_2));
                    }
                    arr_11 [i_1] = ((!(((-(min(1345892542075084590, 255)))))));
                }
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_15 += ((((0 < ((0 ? -2839568418946301425 : 9223372036854775802)))) ? ((-38 ? -1 : 14675)) : 1));
                                arr_20 [i_0] [i_1] [i_0] [i_1] [i_1] = var_5;
                                arr_21 [i_0] [i_1] [i_1] [i_0] [i_1] [i_6] [i_0] = var_0;
                                arr_22 [i_1] [i_1] = (-1152921504606846975 > 1);
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {

                        for (int i_8 = 1; i_8 < 13;i_8 += 1)
                        {
                            arr_30 [i_1] [i_1] [i_4] [i_7] [i_4] = ((~(-var_6 * var_9)));
                            arr_31 [i_0] [i_0] [i_4] [i_1] [i_0] [i_4] [i_0] = var_7;
                            var_16 = (max(var_16, 3305565067291418304));
                        }
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            arr_34 [i_1] [i_1] = (((((!var_0) << (((2095345384 * 1) - 2095345364)))) & ((var_11 ? 57 : var_4))));
                            arr_35 [i_0] [i_1] [i_1] [i_1] [i_9] = (((((var_4 ? 80 : var_2))) / (min(119, var_7))));
                        }
                        var_17 = (min(var_17, (((~(~28672))))));
                        var_18 += ((((((((min(0, 2451242304983640183))) > -11866856376223329678)))) ^ ((-(0 / -243921382292742200)))));
                        var_19 = (((((((-2867265083269667402 ? var_11 : 262227004)) < var_11))) * (((var_2 && (((16095 ? 0 : var_7))))))));
                    }
                }
                var_20 = 56442;
                var_21 = (max(var_8, ((82 / ((min(-121, -1)))))));
                arr_36 [i_1] = ((((min(46, (max(var_9, var_11))))) ? (max(90, ((137 ? var_10 : var_9)))) : -1));
            }
        }
    }
    var_22 = (((((var_2 ? 48 : (var_9 % 158)))) ? 1 : (((30350 % var_6) << (((32768 + 32795) - 27))))));
    #pragma endscop
}
