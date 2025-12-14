/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= ((((min(var_18, (min(var_0, var_8))))) ? ((((((239 ? 1002204612 : 126))) && var_14))) : (((!(((var_1 ? var_10 : 100809054))))))));
    var_21 = ((-((max(131071, 131076)))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (arr_0 [i_0]);
        var_22 = (!((max(-131071, (arr_3 [i_0])))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            {
                var_23 = (((min(50, (var_12 >= var_4))) + (((((arr_5 [i_2 - 2] [i_2 + 1]) >= (arr_5 [i_2 + 2] [i_2 + 1])))))));

                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    arr_15 [i_2] = ((((min((((arr_7 [18]) % 156)), ((var_4 ? (arr_10 [i_1] [i_2]) : (arr_7 [i_2])))))) == -var_19));
                    var_24 = (arr_12 [i_1] [17] [i_3]);
                }
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    var_25 = ((((((arr_8 [i_1] [i_4] [i_2 + 2]) ? (arr_12 [i_2 - 2] [i_2 + 2] [i_2 - 2]) : (((!(arr_6 [9]))))))) / (arr_17 [i_2 + 1] [i_2] [i_2 + 1] [i_2 - 2])));
                    var_26 = (max(var_26, var_11));
                    arr_18 [i_2] [7] [i_2] = ((((((0 ? var_9 : var_8))) || (((-131051 ? (arr_13 [i_4] [i_2] [10]) : (arr_11 [i_1] [i_2] [i_2] [i_1])))))));
                }
            }
        }
    }
    #pragma endscop
}
