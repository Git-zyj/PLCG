/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_14 ^= ((((min(2030249512, (arr_3 [i_0 - 2] [i_0 - 2] [i_0 - 1])))) ? -5 : (min((arr_2 [i_0]), -var_6))));
                var_15 = (max(var_15, ((max(((var_10 ? ((((arr_4 [i_1]) || 119))) : (((var_11 && (-32767 - 1)))))), var_9)))));
                arr_5 [i_0] = ((-(-32767 - 1)));
            }
        }
    }
    var_16 = -var_5;
    #pragma endscop
}
