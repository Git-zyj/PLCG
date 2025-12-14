/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = -1999095663;
                var_10 = (max(var_10, (((((((((var_5 && (arr_0 [i_1]))))) == (min((arr_1 [i_0]), var_0)))) ? ((((max((arr_1 [i_0]), var_0))) / (arr_4 [i_1] [i_1] [i_1]))) : ((((!(((var_6 / (arr_4 [i_0] [i_1] [i_1])))))))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_11 = (((var_1 >> (var_0 - 3795314508))));
                            var_12 = ((((max((~-847), (arr_4 [i_2] [i_2 - 1] [i_2 + 1])))) ? 1 : (min((max(var_8, 1999095663)), (((arr_10 [12] [i_2]) ? var_0 : var_7))))));
                        }
                    }
                }
            }
        }
    }
    var_13 -= (min(((var_9 ? var_6 : var_0)), ((min((var_1 != var_0), -var_7)))));
    #pragma endscop
}
