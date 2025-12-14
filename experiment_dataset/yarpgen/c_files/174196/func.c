/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174196
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
    var_16 = ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) -1467337178)))));
    var_17 = ((/* implicit */signed char) -239094884);
    var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (short)-2839)) ? (var_1) : (((/* implicit */int) var_3)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (3795117222U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) && (((/* implicit */_Bool) ((long long int) (signed char)83)))))) : (((/* implicit */int) ((-7LL) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-9)) != (-1467337178))))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) ((unsigned char) max((arr_0 [i_0]), (((long long int) (unsigned char)12)))));
        var_20 ^= (+(((((/* implicit */_Bool) -6833934275206439321LL)) ? (((/* implicit */int) arr_1 [i_0])) : ((-(1467337170))))));
        arr_2 [i_0] = ((/* implicit */long long int) (-(1467337177)));
    }
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        var_21 = min((((/* implicit */long long int) (~(((/* implicit */int) (signed char)-7))))), (((arr_3 [i_1] [i_1]) ? (((/* implicit */long long int) -1467337201)) : (max((-6833934275206439312LL), (((/* implicit */long long int) 65535)))))));
        var_22 = ((/* implicit */signed char) ((_Bool) (((!(((/* implicit */_Bool) 6833934275206439320LL)))) ? (((/* implicit */int) (short)-9)) : (((/* implicit */int) (unsigned char)63)))));
    }
}
