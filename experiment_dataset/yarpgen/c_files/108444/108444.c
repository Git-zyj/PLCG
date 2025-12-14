/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    var_17 = (max((min((!4), (min(var_4, var_11)))), var_3));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_18 = (min(var_18, ((min(16084070389045464309, (arr_1 [i_0 - 1]))))));
                arr_4 [i_0 - 1] [i_1] [i_1] &= ((-(((((1 * (arr_2 [i_0] [2] [2])))) + (min(var_9, (arr_0 [i_1])))))));
            }
        }
    }
    var_19 = (-(min(var_9, (((var_7 / (-9223372036854775807 - 1)))))));
    var_20 = (max(var_12, ((~(max(1, var_9))))));
    #pragma endscop
}
