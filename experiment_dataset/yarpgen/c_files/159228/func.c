/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159228
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) 18446744073709551593ULL)) ? (((/* implicit */int) (unsigned char)148)) : (((/* implicit */int) (unsigned char)148))))))) ? (var_14) : (max((((/* implicit */unsigned long long int) min(((unsigned short)56), ((unsigned short)1542)))), (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 4294967281U))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 23ULL))));
        var_18 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned short)63994)) - (63979)))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 20; i_1 += 4) 
    {
        arr_8 [i_1] [i_1] = ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) -1331773289632309253LL)) : (((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551592ULL))));
        var_19 = ((/* implicit */long long int) 2147483647);
    }
}
