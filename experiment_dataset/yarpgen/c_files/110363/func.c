/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110363
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
    var_12 = ((/* implicit */long long int) var_8);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_13 = arr_3 [i_1] [i_1] [i_0];
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_12 [i_1] [(unsigned char)10] [i_2] [i_4] = ((/* implicit */signed char) max((((/* implicit */short) arr_2 [i_0] [i_0] [i_3])), (arr_11 [(short)10] [i_1] [i_2] [3LL] [i_4])));
                                arr_13 [i_1] [i_1] [i_2] [(short)5] [i_4] = ((/* implicit */long long int) arr_6 [i_1] [i_1] [i_3] [i_4]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
