/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= var_2;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_11 |= arr_2 [i_0];
        arr_3 [i_0] [i_0] = (((((-1 ? (arr_2 [i_0]) : (((arr_1 [i_0]) & 0))))) && (((((var_7 << (var_4 - 45843))) * (!116))))));
        var_12 += -810505617715118960;
        var_13 = (((((((arr_2 [i_0]) || (!116))))) < (((arr_2 [i_0]) ? ((-(arr_0 [i_0]))) : 32931))));
        arr_4 [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_14 = (min(var_14, ((((min(((var_1 ? var_6 : (arr_2 [i_1]))), (arr_1 [i_1]))) * (((23651 / (16636 / -1)))))))));
        arr_7 [22] [18] = (arr_5 [i_1]);
    }
    var_15 = (min(var_15, var_4));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {
                var_16 = (max(var_16, ((max((((arr_2 [i_2]) == var_1)), (((min((arr_9 [i_2]), 2332641581)) >= var_2)))))));
                arr_13 [4] = (min(((min(-116, 8479))), (arr_10 [i_2] [i_3])));
                var_17 = ((-14652 == (max((arr_9 [i_2]), (arr_10 [i_2] [i_3])))));
            }
        }
    }
    #pragma endscop
}
