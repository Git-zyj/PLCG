/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, 24042));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_7 [i_1] = (((~var_11) ^ ((((min(var_7, var_1)))))));

                for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
                {
                    arr_11 [i_0] [1] [i_2] = var_3;
                    arr_12 [i_1] [i_1] [i_1] = 24040;
                }
                for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
                {
                    arr_15 [i_3] [i_3] [i_3] [8] = (~(1559313865 - -4294967284));
                    arr_16 [i_3] = (19222 ? (((arr_8 [i_0] [i_1] [9] [i_3]) ? 12 : (arr_10 [i_0] [4]))) : (~246345259));

                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {
                        var_13 = ((var_0 ? 2112914794 : 12));
                        var_14 = 16066611493960359282;
                        arr_21 [i_3] [i_4] [i_3] [i_1] [i_3] = ((5765453410593989110 == (arr_17 [i_3])));
                    }
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {

                        for (int i_6 = 3; i_6 < 12;i_6 += 1)
                        {
                            var_15 = 28;
                            var_16 *= var_3;
                            arr_26 [i_3] [i_5] [i_3] [i_3] [i_3] [i_1] [i_3] = ((!(((arr_18 [i_5 - 1] [i_6] [i_6] [i_5 - 1]) && var_3))));
                        }
                        arr_27 [i_0] [i_1] [i_3] [i_3] [i_5] = (var_5 - (min(var_0, 0)));
                        arr_28 [i_3] [i_1] [i_3] [i_5] = 17580912223770364601;
                    }
                    var_17 = (max(var_17, var_1));
                }
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    var_18 = ((((arr_5 [i_0] [i_1] [i_1]) ? var_2 : (((2147483647 <= (arr_19 [7] [i_1] [i_7])))))));
                    arr_32 [i_1] = (arr_29 [i_0] [i_0] [i_1] [i_7]);
                    var_19 = ((10 && ((max(510, -509)))));
                    arr_33 [i_1] = ((!((((!0) / var_7)))));
                }
            }
        }
    }
    var_20 = var_2;
    #pragma endscop
}
