/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 920664297;
    var_16 = ((~(((!var_2) ? (1 & var_13) : (max(8286026182882148657, 126))))));
    var_17 = ((~((var_7 << (((max(14628829887057963922, 0)) - 14628829887057963916))))));
    var_18 = (min(var_9, (max(var_4, ((126 >> (13251164103549308283 - 13251164103549308266)))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_19 ^= (~31);
        var_20 += max((((var_12 | -2065832516) * (min(81, var_0)))), (((min(var_6, var_13)))));
        var_21 = 13251164103549308296;
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 14;i_3 += 1)
            {
                {
                    var_22 = (max(-12, 121));

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {

                        for (int i_5 = 1; i_5 < 15;i_5 += 1)
                        {
                            var_23 = (10 ? ((-(15872 / var_1))) : 10160717890827402958);
                            arr_14 [i_1] [0] [0] = (((-57644008 ? (116 | 13251164103549308283) : var_7)));
                            arr_15 [i_1] [i_2] [i_2] [i_1] [i_5] [i_3] = 118;
                        }
                        arr_16 [i_1] [i_2] [i_2] [i_2] [i_2] = 107;
                        arr_17 [i_1] [i_2] [i_3] [i_4] [i_1] [i_3 + 1] = ((!((((16192794101042035319 ? 8286026182882148654 : 10160717890827402962))))));
                        arr_18 [i_1 - 1] [i_2] [i_3] [i_1] = (((((max(var_9, 18446744073709551613)) ? 2 : (((262140 ? var_4 : var_4)))))));
                    }
                    var_24 = (min((max(1, var_9)), var_12));
                }
            }
        }
        var_25 &= var_14;
    }
    #pragma endscop
}
