/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((var_6 ? ((34070 ? var_6 : var_6)) : ((15 ? var_4 : (-2147483647 - 1))))));
    var_14 ^= (((((var_12 ? ((var_8 ? 6236462172457030024 : var_5)) : 2147483647))) ? ((((var_7 ? var_4 : 72040001851883520)))) : ((1 ? 1206729542 : ((-2147483622 ? var_3 : 65525))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_15 = ((((((var_0 ? 37685 : 7866314659902724875))) ? ((-6209461135201535047 ? var_11 : var_11)) : ((59741 ? (arr_1 [i_2]) : (arr_0 [i_1 + 1] [i_2 + 2]))))));
                    var_16 = ((((((((var_2 ? -27626 : var_8))) ? (arr_6 [i_1] [i_1] [i_1 - 3]) : var_7))) ? (((arr_7 [i_1] [i_1]) ? ((var_10 ? var_4 : 1206729543)) : (((72040001851883520 ? 4080 : 64))))) : (((-7382572372327453280 ? ((var_9 ? (arr_0 [7] [i_1]) : (arr_7 [i_1] [i_2 + 3]))) : 29108)))));
                    var_17 = (((((((arr_3 [15]) ? var_8 : var_2)))) ? (((((var_4 ? 1206729543 : var_10))) ? var_7 : (((var_10 ? (arr_7 [i_1] [i_1]) : (arr_2 [i_1] [i_1 - 1] [i_1])))))) : var_8));
                    var_18 = (((((((((arr_1 [i_0]) ? -9 : var_3))) ? (((7382572372327453289 ? 0 : (arr_2 [i_1] [i_1] [i_2])))) : -4074))) ? (arr_6 [9] [i_1] [i_2]) : ((((((arr_2 [i_1] [i_1] [i_2 + 3]) ? var_2 : var_0)))))));
                }
            }
        }
    }
    var_19 = ((((((33 ? var_6 : -2950504954436120916)))) ? ((((((var_5 ? var_6 : -5627944344806463726))) ? 4072 : var_2))) : (((((var_12 ? 5779 : -718145513))) ? var_7 : ((var_6 ? 133 : 402653184))))));
    var_20 = (((((var_9 ? -710343974 : (((var_0 ? 207 : var_0)))))) ? 1214335195 : ((var_6 ? 60021 : (((var_5 ? 87 : var_11)))))));
    #pragma endscop
}
