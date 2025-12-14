/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= (-32767 - 1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                arr_7 [8] [13] = (min(1721241860, ((1886362426 + (arr_1 [i_1 - 3])))));
                var_12 ^= var_8;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_0] [2] [i_3] = (min(((30 ? -1861930018 : ((((arr_9 [17] [17] [i_2] [1]) / 38561))))), ((((((var_2 << (var_10 - 41565)))) ? ((((arr_3 [i_1]) && var_0))) : ((min(var_4, (arr_1 [i_1])))))))));
                            var_13 ^= 2408604870;
                        }
                    }
                }
                var_14 = (min(var_14, (((var_1 ? (((((arr_9 [i_0] [i_0] [i_1 - 2] [15]) << (var_10 - 41592))) | (~var_5))) : ((((max(4294967295, (arr_13 [i_0]))) < (((arr_5 [15] [2] [15]) ? (arr_0 [i_1]) : 1886362443))))))))));
            }
        }
    }
    #pragma endscop
}
