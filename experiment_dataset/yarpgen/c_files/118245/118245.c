/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((((var_10 == var_2) ^ (var_14 | var_1))) - (((((var_8 + var_8) + 2147483647)) >> (var_8 + 102)))))));
    var_16 = ((((var_2 <= var_12) == (var_1 | var_10))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_17 = ((((((arr_0 [i_0] [i_0]) || (((arr_5 [i_0] [i_1]) || var_13))))) | (((((arr_1 [i_0]) & (arr_0 [i_0] [i_0]))) | (arr_3 [i_0] [i_1 + 2] [i_0])))));
                var_18 = -2185;
                arr_6 [14] [i_1 - 2] [i_1 - 2] = ((((((-(((0 != (arr_3 [i_1 + 2] [i_0] [i_0])))))) + 2147483647)) << (((((var_9 != var_7) | (arr_4 [i_0]))) - 21657))));
                arr_7 [i_1 - 1] = var_11;
                var_19 = ((var_11 < (((((!(arr_5 [i_0] [i_1]))) || (((arr_0 [i_0] [i_0]) || var_7)))))));
            }
        }
    }
    #pragma endscop
}
