/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_10 = (arr_0 [i_0]);
                    var_11 = ((((arr_4 [i_2 + 1] [i_2] [i_2 + 1]) == ((min(2191275708, (arr_7 [i_2] [i_1] [i_0] [i_0])))))));
                    var_12 = (((((((var_6 >> (var_4 - 50528)))) + var_9)) & (((~(arr_1 [i_1] [11]))))));
                    var_13 = (((10233461424361522861 - (arr_7 [i_2 - 2] [i_2] [i_2] [i_2 - 2]))));
                }
            }
        }
    }
    var_14 *= ((!(((18446744073709551615 ? -53 : 24)))));
    var_15 = (~var_4);
    var_16 ^= var_4;
    var_17 -= ((var_0 == ((((min(var_2, -27438))) ? (~-2084066948) : (min(var_7, 1476656249))))));
    #pragma endscop
}
