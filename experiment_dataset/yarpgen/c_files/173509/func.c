/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173509
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
    var_17 ^= ((/* implicit */int) var_8);
    var_18 = min((1090715534753792LL), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_13)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) -5200229709405888153LL);
        var_20 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [10LL])) - (((/* implicit */int) var_3))))))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        var_21 = ((/* implicit */unsigned int) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))) < (var_13))));
        arr_6 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_15))));
    }
    var_22 = ((/* implicit */unsigned char) var_1);
}
