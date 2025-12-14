/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~(max(var_9, (~var_2)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_2] [i_0] = (((((((arr_5 [i_0] [i_0] [i_2]) ? 1494205981 : (arr_2 [i_0]))))) ? ((3329963431 ? 1626831918 : 0)) : (((~(23027 != 0))))));
                    var_17 *= ((((min((max(var_7, 2029336025)), (((var_5 ? -14 : 33437)))))) ? (arr_3 [i_0] [12] [i_2]) : 14611));
                    var_18 *= 0;
                    var_19 = (min((((arr_1 [i_1]) >> (32767 - 32762))), ((((((arr_5 [i_0] [i_1] [i_2]) ? 23045 : var_5))) ? 70030409 : var_2))));
                }
            }
        }
    }
    var_20 = (min(var_20, ((min(-5401618977678476367, var_2)))));
    var_21 = var_10;
    #pragma endscop
}
