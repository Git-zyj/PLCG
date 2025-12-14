/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_0 ? (var_13 || var_9) : var_3));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_8 [i_0 + 1] [i_1] [i_0 + 1] = ((5 ? ((~(arr_4 [i_0 - 2] [i_0 + 1]))) : 5));
                arr_9 [8] [i_0] [i_0] = ((4 < (arr_5 [i_0 - 1] [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_17 = (max(var_17, (arr_12 [i_0] [i_0] [i_0])));
                            var_18 = (((((arr_7 [i_3 + 1]) << (((arr_12 [i_0 - 1] [i_0 - 2] [i_3 + 1]) - 7270895266952981209)))) == ((min((arr_10 [i_0] [14]), (arr_10 [i_2] [i_2]))))));
                        }
                    }
                }
            }
        }
    }
    var_19 |= var_13;
    var_20 = var_9;
    var_21 = var_12;
    #pragma endscop
}
