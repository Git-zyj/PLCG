/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_0 + 1] = ((0 ? ((var_3 ? (arr_3 [i_0 - 1] [i_0 + 1]) : (max(11215334541359904191, 9168092838102002248)))) : 48466));
                arr_5 [i_1] = ((~(min(var_3, (arr_1 [i_0 + 3] [i_1])))));
            }
        }
    }
    #pragma endscop
}
