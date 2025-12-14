/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_18 &= (((max((((arr_1 [i_1] [i_2 + 1]) & (arr_4 [0] [0] [i_1]))), ((((arr_2 [i_0]) != var_5))))) > var_9));
                    var_19 &= 895842394;
                    var_20 = (max(var_20, ((((((arr_2 [i_1]) >= (((var_3 ^ (arr_0 [i_0 + 1])))))) ? ((((~(arr_0 [i_2 + 1]))) | (((arr_5 [i_0] [i_1] [i_1]) ^ (arr_0 [i_1]))))) : (~-895842405))))));

                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        var_21 = ((((((arr_5 [i_1] [i_1] [i_2]) & (arr_7 [i_0 + 1] [i_0] [7] [7]))) - (var_3 < 6473935590829957967))));
                        arr_9 [i_0] [i_1] [i_1] [i_0] = (arr_7 [i_0] [i_0] [i_2] [i_3 - 2]);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_22 = (max(var_22, ((((arr_2 [1]) + (((-895842400 / (arr_10 [i_0] [9] [9] [i_1] [i_4])))))))));
                        var_23 -= ((var_10 % (arr_6 [i_2 + 1] [i_2 + 1] [i_2] [2])));
                    }
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        var_24 = ((max((((arr_3 [i_0]) & (arr_0 [i_5]))), ((min(var_4, (arr_3 [i_1])))))));
                        var_25 = (min(var_25, ((((((-(arr_12 [i_0 - 2] [i_0 - 2] [i_0 - 2])))) + ((((!(arr_12 [i_1] [18] [i_5]))))))))));
                    }
                }
            }
        }
    }
    var_26 = (max(var_26, ((1431664425649131960 ? -895842392 : 115))));
    #pragma endscop
}
