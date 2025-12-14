/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((6 ? (((-65 ? var_9 : 1))) : (min(4294967290, 27556))))) ? var_8 : (-9223372036854775807 - 1)));
    var_11 *= (var_3 ^ 6);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0 - 1] [i_1] [i_2] &= (max(186, 255));
                    var_12 = 87;
                }
            }
        }
    }
    #pragma endscop
}
