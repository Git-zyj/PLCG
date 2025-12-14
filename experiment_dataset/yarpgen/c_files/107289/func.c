/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107289
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_11 = ((/* implicit */long long int) min((var_11), (var_1)));
    var_12 = var_7;
    var_13 = var_5;
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */long long int) min((var_14), ((-9223372036854775807LL - 1LL))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 4) /* same iter space */
                    {
                        arr_9 [i_0] [i_0] [i_0] [14LL] [i_0] [10LL] = 549755813887LL;
                        var_15 = 9223372036854775807LL;
                        var_16 = 9223372036854775807LL;
                    }
                    for (long long int i_4 = 0; i_4 < 23; i_4 += 4) /* same iter space */
                    {
                        var_17 = -590385587636377740LL;
                        var_18 = 9223372036854775807LL;
                    }
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 4) /* same iter space */
                    {
                        arr_14 [i_5] = -8824791014288302753LL;
                        var_19 -= -1LL;
                        arr_15 [i_0] = -813270726830800908LL;
                        var_20 = 3420059986107637471LL;
                        arr_16 [i_0] [i_0] [3LL] [15LL] [i_5] = (-9223372036854775807LL - 1LL);
                    }
                    var_21 = -8872443753030107507LL;
                    arr_17 [14LL] [14LL] [21LL] = -4873675003995186656LL;
                }
            } 
        } 
        arr_18 [i_0] = -4953894291755088185LL;
        arr_19 [i_0] = -4953894291755088172LL;
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_6 = 0; i_6 < 23; i_6 += 3) 
        {
            var_22 = 6549388152364354597LL;
            arr_22 [i_6] = 3947383922230146668LL;
            var_23 = 3420059986107637471LL;
        }
    }
}
