/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((-1345 == ((1410384732 ? -1345 : var_11))))));
    var_15 *= ((((-1410384733 | 9008289733156386550) ? (47645 & var_3) : var_8)));
    var_16 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_17 ^= (1 ^ 32767);
                var_18 = (arr_0 [i_0 + 1]);
                var_19 = ((((max(2321480190, 1227414484))) ? 4294967290 : -1195));
            }
        }
    }
    var_20 = (((((((13875560223054489939 ? var_13 : -2087111529)) < ((var_1 ? var_11 : var_10)))))) <= ((((var_4 + 2147483647) >> (-3233 + 3252)))));
    #pragma endscop
}
