/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -29;
    var_16 = (min(var_16, var_11));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] = ((~(((!(arr_3 [i_0] [i_2 - 1]))))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = var_5;
                }
            }
        }
        arr_10 [9] = var_1;
        arr_11 [i_0] [i_0] = -13;

        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            var_17 *= -var_4;
            arr_15 [i_0] [i_0] = (((arr_14 [i_0] [i_3 + 4] [i_0]) ? (((29 > (((-37 + 2147483647) << (((arr_0 [i_3]) - 27595))))))) : ((~(!48)))));
        }
        arr_16 [i_0] = (((((2047 ? var_14 : -29)) % 127)));
    }
    var_18 = ((var_10 ? (((-((min(32767, 43)))))) : (min((max(-5952392265884579014, var_4)), ((var_0 ? var_7 : var_1))))));
    #pragma endscop
}
