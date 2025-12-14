/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= ((-((~((var_7 ? var_5 : var_13))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                var_21 = (((((arr_2 [9]) || 14834788629066542649)) ? (~var_19) : (arr_3 [i_1 + 2] [i_0 - 1])));
                var_22 = (max(var_22, (min(-16404, ((~((var_8 << (((arr_3 [10] [i_1]) + 134))))))))));
            }
        }
    }
    var_23 = 1675319074;
    var_24 = (min(var_24, (!var_9)));
    var_25 |= var_10;
    #pragma endscop
}
