/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1 - 2] [i_2] = (((arr_4 [i_0]) >> (var_9 - 7751198672177520281)));
                    var_13 = (((arr_3 [i_2]) ? (arr_5 [i_2] [i_1 - 1] [i_0]) : (((var_1 > (arr_0 [i_1] [i_1 - 2]))))));

                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        var_14 = (max(var_14, -96));
                        var_15 = (arr_10 [i_0 - 1] [i_0] [i_0] [i_0] [i_2] [i_0 + 1]);
                        var_16 = ((((arr_3 [i_0 + 1]) ? -1009609845 : -505223102)));
                    }
                    var_17 = (max(485816192530104761, ((((max(var_5, -1009609845)) < var_10)))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 19;i_5 += 1)
                        {
                            {
                                var_18 = (min(var_18, (((((((arr_5 [i_0] [i_0] [i_0]) ? var_3 : 1009609844)) ^ (arr_14 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])))))));
                                var_19 = (max(var_19, (((~(((arr_13 [i_0] [i_0] [i_0 + 1] [i_5 - 2] [i_5 - 2] [i_5 - 2]) + (arr_13 [i_0] [i_0] [i_0 - 1] [i_5 - 2] [i_5] [i_5]))))))));
                                var_20 = (((min(var_4, var_6)) & ((max(1, ((max(1009609844, (arr_14 [i_0] [i_0] [0] [i_0 - 1] [i_0])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = -58;
    var_22 = 1009609848;
    #pragma endscop
}
