/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_8 % ((((((var_15 ? var_13 : var_18))) <= var_4)))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 21;i_4 += 1)
                    {
                        {
                            var_21 = ((~((((arr_4 [i_2 + 1] [i_1]) & -20364)))));
                            arr_13 [i_0] [i_0] [i_2 + 1] [i_0] [i_3 + 2] [i_2] [i_4] = 65535;
                            arr_14 [i_2] [i_2] [i_3] [i_3] [i_3] = ((-(max((arr_12 [i_2] [i_2] [i_2] [i_3 - 1] [i_4 - 1] [i_2] [i_2]), (arr_1 [i_2 - 2])))));
                            arr_15 [i_0] [i_1] [i_2] [i_2] [i_4] [i_2] = var_4;
                        }
                    }
                }
            }
            arr_16 [i_0] [i_1] = (((((arr_12 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1] [i_1]) <= var_2)) ? (min(23420, (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [i_1]))) : (arr_12 [i_0] [i_1] [i_0] [i_0] [i_1] [i_1] [i_1])));
            var_22 = -687553584;
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    {
                        arr_25 [i_0] [i_0] [i_5] [i_6] [i_7] = ((!((222 > ((~(arr_7 [i_0] [i_7] [i_6] [i_7])))))));
                        arr_26 [i_0] [i_0] [i_7] = (max((+-2320764425), (arr_10 [i_7] [i_5] [i_0])));
                    }
                }
            }
            arr_27 [i_0] [i_0] = (((((((!var_8) || (var_6 || var_5))))) >= ((((min(var_2, 3576782983))) ? var_7 : (65011712 - var_12)))));
            arr_28 [i_0] [i_5] [i_5] = (!-var_3);
            arr_29 [i_0] [i_0] [i_5] = -1;
        }
        var_23 -= 96;
    }
    var_24 = (min(var_9, var_15));
    var_25 = var_18;
    #pragma endscop
}
