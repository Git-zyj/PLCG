/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((~((var_0 ? var_9 : 5331401425588690628))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, ((!(!var_15)))));
                    var_21 = (((arr_0 [i_1] [i_2]) * (((arr_8 [i_2] [8] [i_2]) % (arr_8 [i_0] [i_1] [i_2])))));
                }
            }
        }
        var_22 = (min(var_22, ((((!var_6) ? (arr_5 [i_0] [i_0] [15]) : ((-(arr_2 [6] [i_0]))))))));
        arr_9 [7] [13] = ((((max((arr_5 [i_0] [i_0] [5]), (((arr_5 [2] [2] [2]) / 1962117202))))) ? (((((min(30636, (arr_0 [i_0] [7])))) && var_13))) : ((~(arr_4 [0])))));
        var_23 = (((-(arr_8 [10] [i_0] [i_0]))));
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_24 = ((~((((arr_11 [i_3] [i_3]) && ((max((arr_10 [i_3]), 1))))))));
        var_25 = 1;
    }
    #pragma endscop
}
