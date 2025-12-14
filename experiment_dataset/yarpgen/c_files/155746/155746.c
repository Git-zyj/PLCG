/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((max(var_11, var_7))) ? 3851366983 : var_1))) ? ((((var_12 > var_12) ? var_3 : ((var_11 ? var_1 : 43))))) : ((~(var_7 * 0))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_14 = ((((!(arr_3 [i_1 + 1] [i_1 + 2] [i_1 + 2]))) ? (((var_10 ? var_3 : (((arr_5 [i_0]) ? var_10 : (arr_3 [i_0] [i_1] [i_2])))))) : ((var_4 ? (696869448 < 4) : (max((arr_4 [i_2] [i_2]), var_4))))));
                    var_15 = (max(var_15, (((0 / (max(0, -2267162663)))))));
                    var_16 = (((arr_3 [i_0] [i_1] [i_2]) ? (((7 ? (arr_3 [i_1 - 3] [i_1] [i_1 - 3]) : var_5))) : ((-1695128001 ? 0 : 15))));
                }
            }
        }
        var_17 = (max(((((arr_1 [i_0] [i_0]) ? -984139572 : ((max((arr_2 [i_0] [i_0] [i_0]), (arr_1 [i_0] [i_0]))))))), (((((1 ? -984139572 : 16))) ? (arr_1 [i_0] [i_0]) : 5))));
        var_18 = (min(((((((arr_6 [i_0] [i_0] [i_0] [i_0]) ? 4294967281 : 0)) > ((((arr_3 [i_0] [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_6 [i_0] [i_0] [i_0] [i_0]))))))), ((var_10 ? (arr_4 [0] [0]) : ((min(var_3, (arr_2 [i_0] [i_0] [i_0]))))))));
    }
    var_19 &= min((~var_9), var_3);
    var_20 = (((min(var_12, (var_0 ^ var_12))) < (max(var_11, var_12))));
    #pragma endscop
}
