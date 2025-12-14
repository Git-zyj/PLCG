/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~96);
    var_12 |= var_1;
    var_13 |= (-103 || -109);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, (arr_0 [i_2])));
                    var_15 = ((((((arr_1 [i_0]) ? (!35682) : (min(7680, var_9))))) ? -35664 : ((max((!-105), (!5257887706510573050))))));
                    var_16 = (-((min(var_3, -110))));
                }
            }
        }
    }
    #pragma endscop
}
