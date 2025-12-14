/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_16 ^= var_6;
                            var_17 ^= (arr_6 [i_0] [i_0] [i_2] [i_2]);
                            var_18 = (arr_7 [i_3]);
                        }
                    }
                }
                arr_10 [i_0] [18] [i_1] = var_7;
                var_19 = ((~(arr_5 [i_1 - 1] [i_1] [i_1 - 1])));
            }
        }
    }
    var_20 = var_3;
    var_21 = ((var_0 ? (((var_0 == (var_7 != var_10)))) : ((var_9 ? 10410 : (!-9164)))));
    #pragma endscop
}
