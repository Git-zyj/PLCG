/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149202
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
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10)))))));
    var_13 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_1))))) / ((((((-9223372036854775807LL - 1LL)) / (12LL))) ^ (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned char) var_3);
        var_15 = var_0;
        var_16 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551592ULL)) && (((/* implicit */_Bool) (unsigned char)56)))))));
    }
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        var_17 -= ((/* implicit */_Bool) var_11);
        var_18 -= ((/* implicit */unsigned char) arr_2 [i_1]);
        var_19 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 12473852783409491082ULL)))))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (_Bool)1))))))));
    }
    var_20 = ((/* implicit */unsigned long long int) var_4);
}
