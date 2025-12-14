/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_1] &= (1 & 53211);
                arr_7 [i_1] [i_0] [i_0] = (max((((((-436886010 ? var_13 : 5345322184721576270))) || (((4194048 ? var_7 : var_4))))), (max((20626 != -7893), (32767 || 679730469869572994)))));
            }
        }
    }
    var_20 = 436886010;
    var_21 = (max(var_21, ((min(((((max(var_17, 61025))) / (var_19 + 30866))), ((-((max(59690, 45802))))))))));
    #pragma endscop
}
