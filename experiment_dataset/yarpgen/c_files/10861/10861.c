/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((var_11 ? 75 : var_2))));
    var_15 = ((-((-(var_2 - 75)))));

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = ((0 ? (((((((arr_2 [4] [7]) ? (arr_1 [i_0]) : var_0))) || ((min(var_3, var_3)))))) : var_3));
        var_16 = 75;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    var_17 = (arr_5 [i_0 + 1] [6]);
                    var_18 = (max(var_18, (arr_8 [i_0] [i_1])));
                    var_19 = (arr_8 [6] [8]);
                    var_20 = (((((51 && (arr_4 [i_0 + 2] [10] [i_0])))) == (51 * var_0)));
                }
            }
        }
        var_21 ^= (((~4780538372233074604) != (arr_11 [12] [0] [i_0 - 1])));
    }
    var_22 = ((-var_9 ? (((min(var_2, var_0)))) : (!var_12)));
    #pragma endscop
}
