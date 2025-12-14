/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 71;
    var_12 = (73 * 253);
    var_13 = (var_3 || var_7);
    var_14 -= (241 <= 253);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min((((((var_2 ? 0 : 11))) ? (arr_1 [i_0]) : (arr_1 [i_0]))), (((~(arr_1 [i_0]))))));
        arr_3 [i_0] = (~95118463);
        var_15 = (((253 + var_3) ? ((114581161708771537 ? (arr_1 [i_0]) : (arr_1 [i_0]))) : ((((arr_0 [i_0]) * -2586528093033636674)))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_16 |= (((((~(~197)))) ? (min((arr_5 [i_1]), var_7)) : (min(-1, (((arr_4 [i_1] [i_1]) ? (arr_5 [i_1]) : (arr_4 [i_1] [i_1])))))));
        arr_6 [i_1] = ((-37 ^ (min((arr_4 [i_1] [i_1]), (max((arr_4 [i_1] [i_1]), (arr_5 [i_1])))))));
        arr_7 [i_1] = (((-(arr_4 [i_1] [i_1]))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    var_17 = ((-1 ? var_3 : ((((max(-1, var_1))) ? (arr_4 [i_1] [i_3]) : var_3))));
                    var_18 = (((arr_5 [i_1]) ? ((((!1) | ((198360902 ? (arr_4 [i_1] [i_2 + 1]) : 1))))) : (((((92 ? (arr_8 [i_1]) : (arr_5 [i_2])))) / 114581161708771537))));
                }
            }
        }
    }
    #pragma endscop
}
