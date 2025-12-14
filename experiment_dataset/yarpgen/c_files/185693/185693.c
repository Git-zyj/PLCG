/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    var_13 = ((var_3 - (((var_5 - 9223372036854775783) ? -var_8 : var_7))));
    var_14 = (-((1548382778 ? var_4 : (((var_9 ? 5 : var_8))))));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_15 = (min(((((45059 ^ 12657677237277490779) && ((((arr_5 [i_0] [i_0 + 1] [i_1] [i_2]) << (var_11 - 6583735405165267259))))))), -6774107869295867178));
                    var_16 = (min(var_16, (((-((((((arr_5 [i_1] [i_1] [i_1] [i_2 + 3]) ? var_10 : var_4))) ? (var_1 || var_6) : (arr_5 [i_1] [i_1] [i_2] [i_2]))))))));
                    var_17 = -var_6;
                }
            }
        }
        var_18 = (max(181, (min((arr_1 [i_0 + 2]), (arr_1 [i_0 + 2])))));
    }
    #pragma endscop
}
