/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((var_0 && ((((-1 * 127) + (max(9223372036854775807, 7334832451053562689))))))))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 = (((((27870 ? 12685 : var_11))) ? (1 <= -9223372036854775807) : var_0));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_18 = ((14195703904251193574 >> (min(var_5, 3))));
                    var_19 *= (((-32767 - 1) != -9223372036854775807));
                }
            }
        }
        var_20 = (max(var_20, ((max(65527, -91)))));
    }
    var_21 = ((var_13 ? ((max(-92, 16306))) : (((max(8542355728529990356, 65527))))));
    #pragma endscop
}
