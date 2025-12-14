/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159066
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
    var_14 += ((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) (!((_Bool)1))))), (var_6)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        var_15 -= ((((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)62719)))) == (((((/* implicit */int) var_9)) + (((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1] [i_0]))) : ((+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [9LL]))) : (arr_0 [i_0]))))));
        var_16 += ((/* implicit */_Bool) max((max((arr_0 [i_0 - 2]), (((/* implicit */unsigned long long int) (short)2281)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-2277)) ? (2147483647) : (((/* implicit */int) (short)-2281)))))));
    }
}
