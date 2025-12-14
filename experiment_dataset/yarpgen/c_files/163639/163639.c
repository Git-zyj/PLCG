/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;
    var_13 = var_3;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = (arr_1 [i_0]);
        var_15 = 31472;
        arr_2 [2] [i_0] = (~37116);
        var_16 *= var_7;
        arr_3 [i_0] = (arr_0 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        var_17 *= ((arr_4 [i_1 + 1]) ? (arr_4 [i_1 + 1]) : 0);

        for (int i_2 = 3; i_2 < 19;i_2 += 1)
        {
            var_18 = (arr_9 [i_1] [i_2] [i_2]);
            arr_10 [i_1] [i_2] [i_1 + 1] = (arr_8 [i_1] [i_2] [i_1]);
        }
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        arr_14 [i_3] [1] = (((arr_7 [i_3] [i_3]) ? ((-(arr_4 [i_3]))) : 1));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    {
                        arr_23 [i_3] [i_4] [i_5] [i_5] [i_6] = ((((min((arr_22 [i_3] [i_6] [i_6] [i_6]), (arr_22 [i_3] [i_4] [1] [i_6])))) ? (!1099511627775) : 31));
                        var_19 *= (arr_9 [i_3] [i_5] [9]);
                        var_20 ^= (max((arr_19 [i_3]), (arr_19 [4])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
