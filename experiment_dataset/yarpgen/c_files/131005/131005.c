/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;
    var_18 = (~5557608560291387047);

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_19 -= (~231509900512749258);
                        var_20 = (arr_4 [i_1] [i_1] [i_1]);
                    }
                }
            }
        }
        arr_8 [i_0] = (1 - var_6);
    }
    #pragma endscop
}
