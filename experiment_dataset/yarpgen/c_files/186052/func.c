/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186052
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
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_4)) ? (max((((/* implicit */unsigned long long int) 1LL)), (var_8))) : (((/* implicit */unsigned long long int) var_11)))) * (var_8))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    var_16 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((unsigned int) (unsigned short)25752)) : (((var_12) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-32751)))))));
                    var_17 = ((/* implicit */signed char) ((9068070681430974931ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
                    arr_8 [i_0] [12] [21] [10LL] = ((/* implicit */unsigned short) 551105052U);
                }
                arr_9 [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) 2552100679503743599LL)) : (arr_3 [i_0 - 1] [i_1 - 1]))), (((/* implicit */unsigned long long int) (unsigned short)4))));
            }
        } 
    } 
}
