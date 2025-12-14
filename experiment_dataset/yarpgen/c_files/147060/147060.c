/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((!(17212295142000090901 || 1234448931709460692))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_21 = (max(1565507131, 0));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_22 = (min(var_22, ((((18446744073709551603 ? 1234448931709460715 : 10477332388382924544))))));
                        var_23 = var_18;
                    }
                    var_24 = (min(var_24, (((((arr_8 [i_2 - 1] [i_1] [i_2 - 2] [i_1]) | (~var_10)))))));

                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_25 = (max(4567543499733675047, (((!((max((arr_14 [i_0] [i_4] [i_2] [i_4] [i_4] [i_2]), -108))))))));
                        var_26 = (((max(41306, (75 + -108))) - -var_8));
                        var_27 = var_15;
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            {
                var_28 = (min(var_28, (((((min((!1234448931709460692), (arr_21 [i_5])))) & 2147483647)))));
                var_29 ^= (max(-56822, (~8713)));
                arr_23 [i_5] [i_5] = (((((max(9790661069601495466, (arr_17 [i_6]))) * (arr_17 [i_5]))) + ((max((min(27566, (arr_21 [i_5]))), (arr_20 [i_5]))))));
                arr_24 [i_5] [i_5] = (min((!2810098399), (min(var_17, var_2))));
                arr_25 [i_5] [i_5] [i_5] = (10477332388382924565 || -27567);
            }
        }
    }
    var_30 = (((~65535) & ((~(~0)))));
    #pragma endscop
}
