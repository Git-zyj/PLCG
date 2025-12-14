/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [2] [i_0] [i_0] = (((((-31365 ? -31369 : -31355)) ? (arr_4 [i_0 + 3]) : (var_5 || var_9))));

                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    var_12 = ((-31388 ? var_7 : (max((((var_8 ? var_10 : (arr_3 [i_0] [i_1] [i_2 - 3])))), var_6))));
                    var_13 -= ((~(arr_3 [i_0] [10] [i_2])));
                    arr_9 [i_2] [i_1 + 1] [i_1] [3] = ((+(min(284149849, (((arr_3 [9] [i_1] [2]) * (arr_3 [i_0] [i_0] [10])))))));
                }
            }
        }
    }
    var_14 *= var_7;
    var_15 = (max(var_15, var_8));
    var_16 = var_4;
    #pragma endscop
}
