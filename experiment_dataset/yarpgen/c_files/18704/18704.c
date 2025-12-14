/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [i_1] [i_0] = (arr_2 [1] [i_1] [i_0]);
                    var_16 = ((((max((arr_6 [i_1]), (arr_6 [i_1])))) ? 255 : ((max((arr_6 [i_1]), (arr_6 [i_1]))))));
                }
            }
        }
        var_17 = (max(var_17, (((((((((arr_4 [i_0] [i_0]) - (arr_2 [15] [i_0] [i_0])))) ? 39 : (((-9223372036854775807 - 1) ? 79 : (arr_8 [i_0] [i_0]))))) != (((!(((0 ? 5626355397493321055 : 14)))))))))));
    }
    var_18 |= ((-(((var_3 != 25) ? var_12 : (~12820388676216230590)))));
    var_19 = ((((var_12 / (max(4294967295, var_3)))) / ((-(max(var_14, 4294967292))))));
    #pragma endscop
}
