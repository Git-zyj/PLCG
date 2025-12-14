/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112145
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
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_7 [14] &= ((/* implicit */short) arr_2 [(short)8] [i_1]);
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_14 ^= ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_2)) + (((/* implicit */int) arr_1 [i_3 - 1])))))))), (var_4)));
                            var_15 += ((/* implicit */signed char) arr_3 [i_0] [i_1]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 |= ((/* implicit */long long int) var_11);
    var_17 = ((/* implicit */unsigned long long int) min(((+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11)))))), (((/* implicit */int) max((((/* implicit */short) min((((/* implicit */unsigned char) (signed char)-62)), ((unsigned char)35)))), (var_6))))));
}
