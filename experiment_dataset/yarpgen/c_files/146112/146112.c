/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_12 = (min((4568 & 1556501921014615763), 32));
                    var_13 = var_6;
                }
            }
        }
    }
    var_14 = ((-33 ? 10028220322599328197 : 1));
    var_15 = ((((((-3878215578085780357 ? ((18446744073709551615 ? -1556501921014615772 : 1)) : (((min(68, 59054)))))) + 9223372036854775807)) >> (((max((max(17440679671422143723, 59)), (-127 - 1))) - 18446744073709551426))));
    var_16 = var_2;
    #pragma endscop
}
