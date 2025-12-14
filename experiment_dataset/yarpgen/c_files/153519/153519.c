/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= var_13;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] &= 133;

        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            arr_7 [i_0 + 4] [i_1] [i_1 + 1] = (((arr_3 [i_1 + 1]) < (arr_6 [i_0 - 2])));
            var_17 = arr_1 [i_0];
            var_18 = (((arr_6 [i_0 - 2]) ? var_6 : 5268413343279183892));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {
                        var_19 = var_4;
                        var_20 = (min(var_20, 1991216374));
                        var_21 = (var_9 > 125);
                    }
                }
            }
            arr_17 [i_0] [0] [0] &= -1873111040;
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                {
                    var_22 += ((((var_12 ? (arr_19 [i_5] [i_7]) : (arr_26 [i_5] [i_6] [i_7]))) >= (max(0, (arr_19 [i_5] [i_7])))));
                    var_23 ^= 13899719194943437703;
                    var_24 = 16383;
                }
            }
        }
        var_25 += ((((arr_27 [i_5] [i_5] [i_5]) != var_10)));
    }
    #pragma endscop
}
