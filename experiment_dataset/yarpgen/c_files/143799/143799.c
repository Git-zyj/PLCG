/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_11 = ((-(min((arr_1 [16] [i_1]), (((var_8 >> (22144141082256245 - 22144141082256231))))))));
                var_12 = (min(((var_9 / (arr_3 [i_1 - 3] [i_0 + 1] [i_1]))), (var_3 - var_2)));
            }
        }
    }
    var_13 = (min(88487397, 88487397));
    var_14 = ((((max(var_10, var_0))) * (((((var_1 << (var_10 - 27382)))) ? ((var_3 ? var_4 : var_6)) : (-88487397 / var_4)))));
    var_15 &= ((-88487397 ? ((max(((var_1 ? var_2 : 2044)), -88487397))) : (min((((var_4 ? var_4 : var_4))), var_3))));
    #pragma endscop
}
