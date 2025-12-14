/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [4] [i_0] = (max(1329472523, 0));
                    arr_9 [i_0] = ((-(~1329472507)));
                    arr_10 [i_1] [i_2] = (arr_4 [i_1] [i_2]);
                }
            }
        }
    }
    var_13 = var_6;
    #pragma endscop
}
