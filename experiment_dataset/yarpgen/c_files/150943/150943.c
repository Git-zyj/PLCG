/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 = (((!var_7) ? (arr_0 [i_0] [18]) : (((((var_7 ? var_18 : var_3)) == ((((arr_0 [12] [i_0]) >> (arr_1 [i_0])))))))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_21 = (max(var_21, (arr_1 [i_3])));
                        var_22 += ((1 ? (arr_0 [i_0] [i_0]) : ((((max((arr_9 [i_0] [i_2] [i_3]), (arr_2 [18])))) ? var_19 : ((max((arr_9 [i_1] [i_1] [i_3]), (arr_8 [i_0] [i_0] [i_0] [i_0]))))))));
                        var_23 = (max((26740 && 511), ((((var_9 != (arr_1 [i_2]))) ? (var_10 + var_11) : (max(26731, 5))))));
                    }
                }
            }
        }
        var_24 = 38796;
    }
    var_25 = (((var_15 + var_7) + var_14));
    var_26 = var_19;
    #pragma endscop
}
