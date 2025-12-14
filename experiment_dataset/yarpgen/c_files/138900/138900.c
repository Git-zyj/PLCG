/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_18 = (max(var_18, (arr_1 [1])));
        var_19 = (max(var_19, ((max(78, (((var_2 - (arr_2 [4])))))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_20 = (min((((!((max((arr_5 [i_0 - 2] [i_0]), var_5)))))), (arr_8 [i_0] [i_1 + 3] [i_2] [i_3])));
                        var_21 = (max(((((((arr_2 [i_0]) ? (arr_4 [i_3]) : -64)) < (((~(arr_8 [i_0] [i_1 + 2] [i_2] [5]))))))), (arr_0 [i_0 - 2])));
                        var_22 = (max(var_22, (((((((arr_4 [i_0 - 2]) * (arr_4 [i_0 - 1])))) ? ((((arr_1 [i_3]) ? (arr_5 [1] [i_3]) : var_12))) : (arr_6 [i_0] [i_1] [i_1] [i_3]))))));
                        var_23 = (min((arr_5 [i_1] [i_0]), var_5));
                    }
                }
            }
        }
        var_24 += ((!(arr_8 [4] [i_0 - 1] [i_0] [i_0])));
    }
    var_25 = var_8;
    #pragma endscop
}
