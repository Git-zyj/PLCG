/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 = (((arr_0 [i_0]) < ((((arr_0 [i_0]) >= (arr_1 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_21 |= (((arr_4 [i_0] [i_0] [i_0]) ? -14611 : ((~(max((arr_2 [1]), var_16))))));
                    arr_9 [i_0] [5] = var_3;
                    var_22 = (((arr_7 [i_0]) ? 14631 : ((max((arr_1 [i_0] [i_1 - 2]), (arr_1 [i_0] [i_1]))))));
                    var_23 = var_3;
                }
            }
        }
    }
    for (int i_3 = 1; i_3 < 22;i_3 += 1)
    {
        var_24 = (min(var_24, ((min((arr_10 [i_3 - 1]), (max(((var_16 % (arr_10 [i_3]))), (arr_11 [i_3 + 1]))))))));
        var_25 = (((arr_10 [i_3 - 1]) ? var_1 : (min((arr_12 [i_3 + 1]), var_11))));
    }
    var_26 = var_5;
    #pragma endscop
}
