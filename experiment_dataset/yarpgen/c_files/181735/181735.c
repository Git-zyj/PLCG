/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 3559942103;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_19 ^= 41038;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_20 -= ((~(~-119832664)));
                                arr_12 [i_0] [i_0] [i_0] [i_3] [i_4] = -2111238928;
                            }
                        }
                    }
                    arr_13 [i_0] [i_1] [i_0] = 24501;
                }
                var_21 = (~var_2);
                var_22 *= 119832664;
                arr_14 [i_0] [i_0] [i_0] = var_5;
            }
        }
    }
    #pragma endscop
}
