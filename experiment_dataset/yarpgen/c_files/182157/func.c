/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182157
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_19 = ((/* implicit */signed char) min((max((((/* implicit */long long int) var_14)), (((((/* implicit */long long int) var_2)) - (arr_0 [i_0] [i_0]))))), (((/* implicit */long long int) (signed char)(-127 - 1)))));
        var_20 = ((/* implicit */unsigned long long int) max(((unsigned short)65529), (min(((unsigned short)5), ((unsigned short)6)))));
        var_21 = ((/* implicit */signed char) arr_1 [i_0]);
    }
    /* LoopNest 2 */
    for (short i_1 = 3; i_1 < 22; i_1 += 2) 
    {
        for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            {
                var_22 &= max((((/* implicit */long long int) ((((/* implicit */int) ((-1) > (((/* implicit */int) var_11))))) >= (((/* implicit */int) (signed char)-64))))), (((((/* implicit */_Bool) (signed char)-49)) ? (1544765728171782823LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)48))))));
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) var_16))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) max((max((11412516818928274803ULL), (((/* implicit */unsigned long long int) (signed char)-48)))), (((/* implicit */unsigned long long int) (_Bool)1))));
}
