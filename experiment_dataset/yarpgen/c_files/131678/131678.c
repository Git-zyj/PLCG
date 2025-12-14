/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((min(var_1, (max(var_4, var_0)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_2] = (1312908293 >> var_0);
                    var_12 = (max(var_12, (((((min((((arr_1 [i_2]) ? var_4 : 281474976710655)), ((var_7 ? (arr_7 [i_0] [i_1] [i_2] [i_1]) : 281474976710634))))) ? ((~(arr_2 [1]))) : (((((arr_7 [i_0] [i_1] [i_2] [i_2]) < var_3)))))))));
                }
            }
        }
    }
    var_13 += var_9;
    var_14 = (min(var_14, (~var_0)));
    var_15 = ((var_7 ? var_5 : ((566099479 ? (max(19424, var_2)) : -21557))));
    #pragma endscop
}
