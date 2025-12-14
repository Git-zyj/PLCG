/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 = (max(var_18, (arr_2 [i_0])));
        var_19 = arr_0 [i_0] [i_0];
        arr_3 [i_0] [i_0] &= (arr_0 [i_0] [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_20 *= var_13;
                        var_21 = (max(var_21, (((!(arr_10 [i_0] [i_2 + 1] [i_3]))))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 19;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            var_22 &= (arr_15 [i_4] [i_4] [i_4]);
            var_23 = (min(var_23, (arr_12 [i_5])));
            var_24 = (max(var_24, (!134217727)));
        }
        var_25 = (max(var_25, var_3));
        var_26 -= (((((var_5 ? (arr_16 [i_4]) : (arr_12 [10])))) ? (!23401) : (var_4 <= 8)));
    }
    var_27 -= var_17;
    #pragma endscop
}
