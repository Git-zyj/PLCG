/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 34271;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 = ((-var_7 ? ((((34281 ? 14667035408031850650 : (arr_4 [i_0] [i_0] [i_0]))) >> (((arr_2 [19]) - 22667)))) : var_11));
                    arr_7 [i_0] [i_0] [i_1] [i_2] = (34280 < 19046);
                }
            }
        }
    }
    #pragma endscop
}
