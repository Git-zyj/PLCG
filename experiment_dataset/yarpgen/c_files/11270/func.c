/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11270
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
    var_19 = ((/* implicit */unsigned char) var_17);
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2146435072U)) ? (((unsigned int) arr_9 [i_0 - 2])) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)485)))))));
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned int) (unsigned short)485))))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 3])) ? (arr_2 [i_0] [i_0 - 3]) : (var_0))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65050)))))));
                }
                arr_10 [12] [i_0] = var_12;
            }
        } 
    } 
}
