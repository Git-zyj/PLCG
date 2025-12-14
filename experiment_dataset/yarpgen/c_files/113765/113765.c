/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_19 += ((((min(var_9, (((arr_3 [3]) ? 0 : 107))))) && (((13924194298944439338 ? 107 : (-32767 - 1))))));
                var_20 ^= var_3;
            }
        }
    }
    var_21 = var_14;
    var_22 = (max(((max(-86, 255))), (((~((0 ? 3380827935 : var_7)))))));
    var_23 = var_13;
    var_24 = ((var_1 % (((~((var_13 ? var_5 : 131)))))));
    #pragma endscop
}
