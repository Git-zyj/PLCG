/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_11 = ((~(((arr_1 [i_0]) ? ((((arr_2 [i_0] [i_1] [i_1]) / (arr_1 [i_0])))) : 65408))));
                var_12 = ((11553392818045961815 | (((255 ? ((max(var_3, 1))) : -1913)))));
                arr_5 [i_0] [i_0] [i_0] = ((1643523039 ? 240 : 741));
            }
        }
    }
    #pragma endscop
}
