/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1 + 2] = (max((max((arr_0 [i_0] [i_0]), (arr_2 [i_0] [i_1] [10]))), -2987711752116644650));
                var_11 = (max(26301, -26301));
            }
        }
    }
    var_12 *= (((max(var_7, (var_0 - 26301)))) ? var_3 : ((((min(12, var_6))) ? var_0 : (26294 - var_8))));
    var_13 = (max(var_13, var_2));
    var_14 += (((var_10 ? var_5 : ((max(var_9, var_3))))) <= var_3);
    var_15 -= ((max(var_2, var_10)));
    #pragma endscop
}
