/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((min((((var_9 ? var_18 : var_1))), var_7)) - var_3));
    var_20 = ((!(0 == var_1)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_21 *= (-65533 < ((((var_5 && 175) != (((0 <= (arr_2 [i_1]))))))));
                    var_22 -= ((-(arr_0 [7])));
                    arr_10 [i_0] [i_0] = (((arr_6 [i_1] [i_1] [i_1]) ? (((((max(var_14, 30119))) && var_4))) : ((var_6 ? (!2998192896) : ((min(-16933, 93)))))));
                }
            }
        }
    }
    var_23 = var_12;
    var_24 &= ((var_9 ? (~var_6) : (((max(1792, -4863813711085543792))))));
    #pragma endscop
}
