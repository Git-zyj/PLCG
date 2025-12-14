/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] = (max(var_9, ((min((arr_1 [i_0]), var_13)))));
                arr_5 [i_0] [i_1] [i_1] &= min(((((arr_3 [i_0] [i_1] [i_0]) == ((101 ? 1 : 5754686281944297741))))), (arr_3 [i_1] [i_1] [i_1]));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_16 = ((max(var_12, (arr_6 [i_3 - 4] [i_3] [i_3 - 4] [i_3]))));
                            var_17 = ((((max(var_5, (arr_11 [i_0] [5] [i_2] [i_2] [i_3 - 1] [1])))) && ((min((min((arr_12 [i_3]), var_9)), (((var_15 % (arr_7 [i_2] [i_1] [i_0])))))))));
                        }
                    }
                }
            }
        }
    }
    var_18 ^= (var_8 - var_2);
    #pragma endscop
}
