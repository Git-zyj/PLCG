/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -21;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_17 = (-(arr_6 [i_1 - 1] [i_1 - 1]));
                        var_18 -= ((11329 ? -21 : 9223372036854775807));
                    }
                }
            }
        }
        var_19 = (!0);
        arr_10 [11] = var_3;
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        arr_14 [i_4] [i_4] = ((-(((!(arr_11 [i_4]))))));
        var_20 &= ((!((((arr_11 [i_4]) ? var_9 : (arr_13 [i_4]))))));
        var_21 &= 1;
    }
    var_22 = var_1;
    #pragma endscop
}
