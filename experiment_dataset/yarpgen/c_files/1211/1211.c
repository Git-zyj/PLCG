/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] = (max((((((178 ? 3525140103724414727 : (arr_2 [i_0 - 1] [i_1])))) ? 1 : (arr_0 [i_0 - 1] [i_1]))), (max((arr_1 [i_1 - 2] [i_1 - 1]), (arr_0 [i_0 - 3] [i_0 - 3])))));
                arr_6 [i_0] = (min((arr_2 [i_1 - 2] [i_1 - 1]), 2188717210));
                arr_7 [i_0] = ((~(arr_2 [i_0] [i_1])));
            }
        }
    }
    var_15 = 6145;
    #pragma endscop
}
