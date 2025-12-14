/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = (min(var_20, ((min(((((max(var_16, 13390712385947437408))) ? (min(var_13, 56)) : -var_7)), 1116892707587883008)))));
                var_21 = (max(var_21, ((min((max(25, 16742553813323955939)), (((var_19 ? ((15300827676792967886 ? var_13 : var_10)) : var_16))))))));
                var_22 = (max(var_22, ((min(18446744073709551615, ((18446744073709551615 ? -899583150000137491 : 18446744073709551615)))))));
                arr_4 [i_1] [i_0] = ((-(((((var_4 ? 2147483647 : 3))) ? (min(16865428127379745227, var_5)) : ((max(4294967295, var_13)))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 19;i_4 += 1)
            {
                {
                    arr_13 [i_2] [i_3] [i_4] = var_12;
                    var_23 -= ((var_1 ? (((var_9 ? 12 : ((max(var_16, var_0)))))) : ((32761 ? (((var_10 ? var_1 : 1))) : ((0 ? var_14 : 94161808))))));
                    var_24 -= (max((((((max(1344478707, 8581545984))) ? (((89 ? 4103714458 : 649802794))) : ((var_19 ? 1 : -3841379323270778509))))), ((65 ? (~-1) : 1099503239168))));
                    arr_14 [i_4] [i_3] [i_3] [i_4 + 1] = ((var_19 ? var_2 : ((((((-127 - 1) ? 62 : 32766))) ? ((1 ? -109 : 4294967295)) : ((min(-815, -1591398541)))))));
                    var_25 = (min(var_25, ((!((((((var_16 ? var_12 : 9223372036854775807))) ? ((var_1 ? var_6 : var_4)) : var_19)))))));
                }
            }
        }
    }
    #pragma endscop
}
