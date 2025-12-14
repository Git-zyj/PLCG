/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((-84 ? -2922 : 72)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 *= ((-11968 ? 9818 : (((~-6451) ? ((0 ? 6455 : 6455)) : 6455))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_6 [i_0] [i_0] = (max(var_1, (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
                    arr_7 [i_2] [i_0] [i_0 + 1] = ((((!((min(var_10, -6456))))) ? (((((~(arr_4 [i_0] [i_1] [i_2]))) >= (((arr_1 [i_0]) ? (arr_4 [i_0] [i_1] [i_2]) : var_0))))) : var_6));
                    var_17 -= (((((!var_5) & -49)) | 6451));
                    arr_8 [i_0] = (max((arr_3 [i_0]), -6459));
                }
            }
        }
    }

    for (int i_3 = 3; i_3 < 22;i_3 += 1)
    {
        arr_11 [i_3 - 3] = ((var_0 ? ((-(min(-6206711747222279020, var_6)))) : (((((min(-125, var_4))) + ((max((arr_10 [i_3] [i_3]), (arr_10 [i_3] [i_3 - 1])))))))));
        arr_12 [i_3] [i_3] = ((((((arr_9 [i_3 - 2]) ? (arr_10 [21] [i_3]) : (max(6206711747222279020, (arr_9 [i_3])))))) ? (arr_9 [i_3 + 1]) : ((var_3 ? 0 : (arr_9 [7])))));
        var_18 = ((((((!(arr_9 [i_3 + 1]))))) == (((arr_10 [5] [i_3 + 2]) ? (max(2097151, var_1)) : var_14))));
    }
    var_19 = ((((min(var_2, var_11))) ? -6447 : ((var_0 ? var_0 : var_9))));
    var_20 ^= (min(var_2, (min(4294967295, (var_3 | var_5)))));
    #pragma endscop
}
