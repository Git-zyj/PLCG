/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            var_18 |= (0 & 1);
            var_19 ^= var_8;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_20 ^= (126 ^ 1);
                        arr_14 [i_0] [i_0] [i_3] = (min((((~0) / var_8)), 194));
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            var_21 = (max(var_21, (62464 | 1)));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    {
                        arr_24 [i_4] = var_15;
                        var_22 = 62446;
                    }
                }
            }
            arr_25 [11] [i_4] [i_0] = (1 - 1);
            var_23 *= ((max((max(13, -6116131881826550195), 1))));
        }
        arr_26 [15] [i_0] = (1 - var_16);
        arr_27 [i_0] = var_5;
        var_24 = (min(var_24, (1 == 1)));
    }
    var_25 = var_13;
    var_26 = (max(var_26, (!6770224078949936516)));
    var_27 += -627209385776688451;
    #pragma endscop
}
