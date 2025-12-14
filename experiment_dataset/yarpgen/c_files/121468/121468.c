/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((!((max(var_4, var_5))))) ? (((54042 ? 56781 : var_16))) : ((((13 || 24608) <= -24609)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] [i_0] = (max((arr_1 [i_0] [i_1]), ((((arr_3 [i_1] [i_0 + 2]) ? (-24609 + var_8) : (var_8 != var_13))))));
                var_20 = (((var_17 < (arr_0 [i_0 - 1]))) ? (((max(var_14, var_2)) * (var_6 < -74))) : (((arr_0 [i_0 - 1]) * (max(var_10, (arr_3 [i_0] [i_1]))))));
                var_21 = ((-((((-(arr_2 [i_0 + 1] [i_0] [i_0])))))));
                arr_5 [i_0] [0] = (~32754);
            }
        }
    }

    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_22 = (-24609 + var_2);
        arr_9 [i_2] = (max((((arr_1 [i_2] [i_2]) ^ (arr_1 [i_2] [i_2]))), (arr_1 [i_2] [i_2])));
        var_23 += (((((var_10 | var_5) ^ (61070 ^ var_5))) * (((max((arr_7 [i_2]), var_18))))));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 7;i_4 += 1)
        {
            {
                arr_15 [i_3] = 255;
                var_24 = (max(((var_1 / (-6029 * var_13))), var_15));
                arr_16 [i_3] [i_3] = var_13;
                var_25 = var_3;
            }
        }
    }
    var_26 = var_5;
    #pragma endscop
}
