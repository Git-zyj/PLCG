/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(4, 253));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 -= (13 + 29);
                    var_15 = (min((((arr_4 [i_1 - 4] [i_2]) >> (var_6 - 2241077231072427531))), ((~(arr_5 [i_1] [i_1])))));
                }
            }
        }
    }
    #pragma endscop
}
