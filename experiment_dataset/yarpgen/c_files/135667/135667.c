/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = ((((min((arr_4 [i_0]), (arr_4 [i_0])))) ? (arr_4 [i_0]) : (arr_4 [i_0])));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_17 = ((1 ? ((((!(arr_10 [i_0] [i_1] [i_1] [i_1]))) ? (arr_0 [1] [i_1]) : (((arr_3 [i_0]) ? (arr_10 [i_0] [i_1] [i_1] [i_0]) : 4503599627370480)))) : (((-14351 ? ((var_8 ? 1464915182 : 1)) : (((min(0, (arr_2 [i_2] [i_3]))))))))));
                        arr_12 [i_3] [2] [i_2] [2] [i_0] &= (min((arr_2 [i_0] [15]), ((~(arr_9 [i_0] [i_1] [i_2] [1])))));
                    }
                }
            }
        }
    }
    var_18 = (max(((~(var_11 << var_12))), ((var_12 ? (~var_5) : ((var_1 ? var_4 : var_4))))));
    var_19 = (((((1 ? 1 : 1))) ? (((-((max(var_7, -8531)))))) : ((var_1 ? var_10 : 7126410290864649341))));
    var_20 = var_1;
    var_21 &= ((((max(var_14, var_9))) || (((1 << 1) != var_7))));
    #pragma endscop
}
