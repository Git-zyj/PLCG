/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_15 *= (1 / 3997445597);
        var_16 *= ((var_4 <= (2459392851 % var_4)));
        var_17 = ((~(((arr_2 [i_0]) - 1835574444))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                {
                    var_18 = (min(var_18, (arr_5 [i_3])));
                    var_19 *= (min(((min(65535, 1))), (((var_9 | (arr_10 [i_1]))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                {
                    arr_16 [2] [i_4] [6] [i_1] = var_10;
                    var_20 ^= (min(((min(-5316539027989563780, var_8))), (1 <= 0)));
                    var_21 = var_4;
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
    {
        arr_19 [i_6] = ((arr_7 [i_6]) ? 5316539027989563789 : (((arr_18 [i_6] [i_6]) ? (arr_18 [i_6] [i_6]) : (arr_18 [i_6] [1]))));
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                {
                    var_22 ^= (((arr_9 [i_6] [i_6] [i_8] [i_6]) ? (max(0, -5316539027989563780)) : (((min(13296, var_10))))));
                    var_23 = (~var_0);
                    var_24 = (max(var_24, var_6));
                }
            }
        }
    }
    var_25 = (max(var_25, var_4));
    #pragma endscop
}
