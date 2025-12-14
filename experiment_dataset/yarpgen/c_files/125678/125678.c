/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_15 = (7936 != 7936);
                    var_16 = (arr_2 [i_2]);
                    var_17 = var_5;
                }
            }
        }
    }
    var_18 &= var_5;
    var_19 = ((16032686789515581235 ? 65535 : 1));
    #pragma endscop
}
