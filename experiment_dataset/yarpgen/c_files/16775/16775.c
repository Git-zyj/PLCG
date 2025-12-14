/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((-2062376640 ? 14848 : -1072406034))) / -2062376640));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [i_0] = (-36 + 2230021618353874790);
                            var_18 = (~9223372036854775807);
                        }
                    }
                }
                var_19 += 4294967280;
                arr_12 [i_0] [i_1] = ((var_1 <= ((~(!var_1)))));
                arr_13 [i_0] [11] |= ((((((1091236298 >> (577826169 - 577826142)))) & -2062376644)));
            }
        }
    }
    var_20 = var_1;
    var_21 = ((max(20002, 14894)));
    var_22 = (((min(9223372036854775807, 4611686018427379712))));
    #pragma endscop
}
