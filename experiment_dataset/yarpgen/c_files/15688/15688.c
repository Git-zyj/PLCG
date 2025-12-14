/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_16 = 14393986303948533543;

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_17 = (max(var_17, 4052757769761018072));
                    var_18 = (max(var_18, (((((((arr_0 [i_0 + 2] [11]) - (((arr_2 [i_1]) ? (arr_9 [i_2] [i_0]) : 32568))))) ? (((((arr_6 [i_0 - 1] [i_1] [i_2]) > (arr_1 [i_0]))))) : (min(-84, ((var_5 ? 152 : 4052757769761018066)))))))));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_19 = ((-(((arr_2 [i_3]) ? 87 : (arr_10 [i_0 + 2] [i_0 - 1] [i_3] [3])))));
                        var_20 |= (max((min((arr_2 [i_0 + 2]), 14393986303948533547)), 4052757769761018043));
                        var_21 = (max(var_21, (((-113 ? (!115) : (min(var_5, (var_9 > var_11))))))));
                        var_22 = 2;
                    }
                }

                for (int i_4 = 2; i_4 < 11;i_4 += 1)
                {
                    arr_15 [6] [i_0] [6] [i_0] = (arr_12 [i_0 - 1] [i_0 - 1] [i_0]);
                    var_23 = (min((arr_9 [4] [i_4 - 2]), ((4052757769761018085 ? (arr_9 [i_4] [i_4 + 1]) : (arr_9 [i_4] [i_4 - 1])))));
                }
            }
        }
    }
    var_24 = ((((var_9 ? 14393986303948533540 : ((4052757769761018046 ? 4052757769761018068 : var_12)))) & 1));
    #pragma endscop
}
