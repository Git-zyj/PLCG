/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131810
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (long long int i_4 = 4; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) var_9);
                                arr_16 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) (+(((/* implicit */int) var_1))))), (min((((/* implicit */long long int) (short)8992)), (9223372036854775807LL)))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 1; i_5 < 22; i_5 += 2) 
                    {
                        var_11 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_4), (var_6)))) ? (min((((/* implicit */unsigned long long int) var_1)), (var_0))) : (((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned int) var_9)))))));
                        arr_19 [i_0] [i_5] = ((/* implicit */long long int) ((unsigned char) var_3));
                    }
                }
            } 
        } 
    } 
    var_12 = var_5;
}
