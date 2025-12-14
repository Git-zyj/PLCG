/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~var_13);

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_20 = ((-2035061731320631366 ? 2035061731320631363 : 11646));
            var_21 *= (max(-2035061731320631366, 11646));
            var_22 = (arr_0 [i_1]);

            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                var_23 = 61;
                var_24 ^= (((~(arr_4 [10] [10] [i_2]))));
                var_25 = min((arr_4 [i_0 - 1] [i_0 + 3] [i_0 + 1]), (((arr_4 [i_0 - 1] [i_0 + 3] [i_0 - 1]) ? (arr_4 [i_0 + 3] [i_0 + 2] [i_0 - 1]) : (arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 3]))));
            }
        }
        var_26 = (min(var_26, (11646 | 105)));
        var_27 = ((((((var_13 ? 4294967287 : 9551135515679687760)))) ? var_6 : (arr_1 [i_0])));
        var_28 = (arr_5 [1] [i_0] [i_0 + 1]);
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            var_29 = (max(var_29, ((((((var_4 && var_7) && 0)) ? (arr_9 [i_4]) : (!var_7))))));
            var_30 = (max((arr_11 [i_3] [i_4]), (!var_7)));
            var_31 = arr_12 [i_3] [i_3] [i_4];
        }
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    {
                        arr_21 [10] [i_6] [i_6] [i_6] &= ((((min((arr_8 [i_5 + 2]), (arr_8 [i_5 - 1])))) | (-96 | 0)));
                        var_32 = (arr_9 [i_6]);
                    }
                }
            }
        }
        var_33 *= var_1;
    }
    var_34 = max((((((1023521776 ? -1023521777 : var_14))) ? var_7 : 9551135515679687760)), ((max(var_5, 4254697272))));
    #pragma endscop
}
