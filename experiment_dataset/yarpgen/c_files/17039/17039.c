/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 1516783680;
    var_12 = -var_10;
    var_13 = (5912673194520536111 ^ var_3);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_14 = ((var_8 - ((-5 ? -1 : 14964))));
                    arr_9 [i_0] [i_0] [i_0] = (~((~(arr_2 [i_0 + 1]))));
                    var_15 ^= (((-1516783681 + 2147483647) >> (((arr_0 [i_0 + 1]) - 6115626069903246813))));
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
                {
                    var_16 = (-9223372036854775807 - 1);
                    var_17 = -1516783680;
                }
                for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
                {
                    var_18 -= ((-((~(arr_8 [i_0] [i_0] [i_1] [i_4])))));
                    var_19 = var_7;
                    var_20 = 9135336404581721468;
                }
                arr_15 [i_0] [i_0] [i_1] = 1516783679;
                var_21 = var_2;
            }
        }
    }
    var_22 = 255;
    #pragma endscop
}
