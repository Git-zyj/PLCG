/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((min(var_4, var_11)));
    var_21 = 161;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (((((var_0 ? 40744 : 36028797018963967))) ? ((((((((arr_2 [1] [i_1] [5]) != var_10)))) != 1077252011))) : (~-1)));
                arr_5 [i_1] [i_1] [i_1] = 107;
                arr_6 [i_1] = ((max(32767, (arr_1 [i_0 - 1] [11]))));
                arr_7 [10] [i_1] [i_1] = (((max((arr_0 [i_0 + 1]), -1242089130)) != (((((13306945746774135664 | (arr_3 [i_1])))) ? (arr_2 [i_1] [i_0] [i_0]) : 224))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                arr_14 [i_2] [i_2] [i_3] = (min(32767, (max((arr_3 [i_2]), var_11))));
                arr_15 [i_3] [i_2] = (-var_12 >= -19282);
                arr_16 [i_2] [i_3] = ((!(max((49880 != var_7), (var_17 < var_3)))));
                arr_17 [i_2] = -var_15;
            }
        }
    }
    #pragma endscop
}
