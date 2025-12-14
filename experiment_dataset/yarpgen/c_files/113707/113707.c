/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_12 = 247;
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_13 = -65535;
                        var_14 |= ((-(((!(((56 ? 52573 : 0))))))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_15 -= ((1 ? 4 : 1));
        arr_11 [i_4] = ((~((-(((-127 - 1) ? 1 : -4217133026245833098))))));
        /* LoopNest 2 */
        for (int i_5 = 3; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                {
                    var_16 ^= ((!(((-11260 ? 1 : 34292629504)))));
                    var_17 = (max(var_17, (((~((1 ? -6 : 1)))))));
                }
            }
        }

        for (int i_7 = 3; i_7 < 16;i_7 += 1)
        {
            arr_19 [i_4] [i_4] = 111;
            var_18 = (min(var_18, (((!(((0 ? 3913111950 : ((26781 ? 3274996541349909528 : (-9223372036854775807 - 1)))))))))));
        }
        var_19 = (max(var_19, (((~((-111 ? -27936 : 73)))))));
    }
    var_20 = (max(var_20, (((~((1 ? (~0) : ((-2 ? -1203933428 : 1856588473)))))))));
    var_21 = var_5;
    #pragma endscop
}
