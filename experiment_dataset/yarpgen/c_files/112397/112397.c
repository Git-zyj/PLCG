/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                {
                    var_18 = (((min((arr_4 [i_0] [i_2]), (arr_8 [i_0] [i_1] [i_2] [i_1]))) + (max((arr_8 [i_0] [i_1 + 2] [i_1] [i_1 + 1]), (arr_8 [i_0] [i_1 - 1] [i_1 + 2] [i_2])))));
                    var_19 = (((max(131071, 18446744073709420529)) ^ (((((arr_7 [i_0] [i_2 - 1] [i_1 + 3] [i_0]) && (arr_7 [i_0] [i_2 + 3] [i_1 + 2] [i_0])))))));
                    arr_9 [i_0] = (arr_5 [i_1 - 2]);
                }
            }
        }
    }
    var_20 = var_9;
    #pragma endscop
}
