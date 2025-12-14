/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11641
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
    var_13 = var_2;
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) var_1))));
    var_15 &= ((/* implicit */unsigned long long int) max((((((/* implicit */int) (short)18425)) - (2147483639))), (((/* implicit */int) var_10))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_16 *= ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-64)) ? (16049023592834619291ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18425)))))) && (((/* implicit */_Bool) var_4)))));
        arr_2 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) arr_1 [i_0] [i_0])))));
        var_17 ^= ((/* implicit */long long int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)168))) - (var_5))));
    }
    /* vectorizable */
    for (short i_1 = 4; i_1 < 20; i_1 += 1) 
    {
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) 9007199254739968LL)) ? (((/* implicit */long long int) ((arr_4 [i_1] [i_1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : ((((_Bool)1) ? (562949819203584LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [18U] [i_1])))))));
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (short)-24319)) : (((/* implicit */int) arr_4 [i_1] [i_1 + 1])))))));
    }
}
