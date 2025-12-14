/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~(min(var_13, (min(var_0, 18439))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [10] [10] [i_1] [i_2] = max((((arr_7 [i_0] [i_1] [i_2 - 2]) ^ (min(13150318444900103788, 0)))), ((((((arr_0 [i_0] [i_0]) ? 16 : var_13)) & 31322))));
                    arr_9 [i_0] [i_1] [i_1] [i_1] = (((max(-1324220090, var_13) / (arr_6 [i_0] [i_0] [i_0]))));
                }
            }
        }
    }
    #pragma endscop
}
