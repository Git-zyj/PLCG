/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_0] = (((65535 | -70) ? 65535 : 1));
                var_11 = (min(var_11, (min(-34060446, (((65535 ? 1 : var_2)))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_12 *= ((!(((1294294547 ? var_3 : (arr_11 [i_0] [i_0] [i_2 + 3] [i_2 + 1] [i_2 - 1] [i_2 + 1]))))));
                                var_13 = (((4294967269 ? -var_1 : -18446744073709551594)));
                                var_14 = var_8;
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = (60 * 180);
    var_16 = 3692787020;
    /* LoopNest 3 */
    for (int i_5 = 3; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 18;i_7 += 1)
            {
                {
                    var_17 = (((min(142, -3851936046416980906))) ? (!1) : 132);
                    var_18 = -670528009777208774;
                    var_19 = (max(((((9104778518482165934 ? 1 : 196158683)) - 857024736)), (((-(arr_7 [i_5 + 1] [i_5 - 3] [i_5 - 1] [i_7 - 3]))))));
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            {
                                var_20 = ((65535 ? 2305843009146585088 : 1));
                                arr_31 [i_5] [i_5] [i_7] [i_7] [i_9] = (((min((arr_21 [i_5 + 1] [i_6] [i_7]), 26)) % 9365920107629710887));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (((max(((1 ? 26 : 65535)), ((max(var_1, 28))))) << (var_6 >= 7)));
    #pragma endscop
}
