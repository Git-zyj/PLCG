/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (~var_12);
    var_15 = ((var_6 || ((min((((-1897741621078044318 ? var_10 : 33554432))), (var_13 >> var_7))))));
    var_16 = 1233526442;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            {
                var_17 = 1233526420;
                var_18 |= ((3584 || ((16506 < (210 > 32764)))));
                arr_5 [i_1] = max((arr_2 [i_0] [i_1]), (-9223372036854775807 - 1));
                var_19 = min((arr_1 [i_0] [i_1]), ((16506 + (-32767 - 1))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_20 ^= ((min((18561 & 46979), (min(0, 7936)))));
                            var_21 = (arr_1 [i_1] [i_1]);
                            var_22 = 13087994585896139138;
                        }
                    }
                }
            }
        }
    }
    var_23 = (3523721469561114495 ^ 1);
    #pragma endscop
}
