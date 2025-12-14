/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= var_10;
    var_19 += ((((max(31211, 9590))) ? 2456354651857568300 : 1754360484));
    var_20 += ((((-((52126 ? var_0 : var_16)))) % (((min(58299, 4363689917138383234))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_21 = (((((var_7 ? 55 : var_15))) * ((52129 ? 11484117416358531378 : 13342))));
                    var_22 ^= var_5;
                    arr_6 [i_2] = var_3;
                    arr_7 [i_0] [i_1] [i_2] [i_0] = ((~(max(13395, 1874358119))));
                }
                for (int i_3 = 3; i_3 < 17;i_3 += 1)
                {
                    var_23 = ((var_13 > (((((var_16 ? var_12 : var_9))) ? (max(11218441130012784453, 1874358110)) : 40))));
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 18;i_5 += 1)
                        {
                            {
                                var_24 = var_8;
                                var_25 = var_0;
                            }
                        }
                    }
                }
                var_26 = var_12;
            }
        }
    }
    #pragma endscop
}
