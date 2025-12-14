/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = (max(var_8, 1462937023722938247));
                    var_15 ^= (((((max(-55, 16983807049986613369)))) ? var_5 : ((+(((arr_1 [i_0]) ? var_9 : 13649079499089900934))))));
                }
            }
        }
    }
    var_16 ^= ((~(max(var_5, var_7))));
    #pragma endscop
}
