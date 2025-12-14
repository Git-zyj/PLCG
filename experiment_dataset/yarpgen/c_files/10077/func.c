/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10077
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
    var_11 = ((/* implicit */unsigned short) ((1677678110U) & (((/* implicit */unsigned int) 141002176))));
    var_12 = ((/* implicit */int) var_7);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 8; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_0 [i_0]), (arr_0 [i_1 + 1]))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 1; i_2 < 9; i_2 += 1) 
                {
                    arr_7 [i_2] [i_1 - 2] [i_2] = ((/* implicit */int) ((long long int) arr_4 [i_1 + 1] [i_1 + 1] [i_2 + 1]));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_12 [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1] = ((/* implicit */long long int) ((short) 0U));
                                arr_13 [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) 16U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (((unsigned long long int) arr_9 [i_0] [i_0] [i_2 + 1] [i_2] [i_4]))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
