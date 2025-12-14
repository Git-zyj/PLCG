/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;
    var_17 = 111;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_0] = var_1;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_18 *= (!var_12);
                                var_19 = (min(var_19, -1));
                            }
                        }
                    }
                    var_20 = (var_5 == var_12);
                }
            }
        }
        var_21 -= (((((64 ? var_14 : -142631971))) + (arr_5 [i_0] [i_0] [1] [i_0])));
    }
    for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
    {
        arr_16 [i_5] = var_0;
        var_22 *= var_10;
    }
    for (int i_6 = 1; i_6 < 19;i_6 += 1)
    {
        var_23 = (max(var_23, ((((min((-42 == -16756), ((var_15 ? -84 : var_0)))) / (min(var_9, 115)))))));
        arr_20 [i_6] [i_6] = 32760;
    }
    #pragma endscop
}
