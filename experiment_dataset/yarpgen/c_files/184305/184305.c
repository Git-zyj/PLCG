/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_10 = (max((((var_0 ? -600067956 : (arr_0 [i_0])))), ((var_3 ? (arr_0 [i_0]) : (arr_2 [i_0] [i_0])))));
                var_11 = (min(-7851756877629638565, 14750038559482595973));
                var_12 = (max((min((524272 <= 15011), ((-600067959 ? 3865601682 : 60)))), 1));
            }
        }
    }
    var_13 &= ((((var_0 >= ((var_5 + (-32767 - 1))))) ? var_8 : ((((((-2002033491 ? var_4 : var_1))) && (((var_5 ? 4 : var_3))))))));
    var_14 = ((var_9 && ((max(var_6, (((47752 ? 235 : 23714))))))));
    var_15 = (min(var_15, (((((var_3 + (max(-23723, 0))))) ? var_4 : 9373))));
    var_16 = (max(var_16, (max((max(8436704475965608628, 7906727446435499905)), 18188797578584064334))));
    #pragma endscop
}
