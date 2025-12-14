/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150638
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
    var_18 = ((/* implicit */_Bool) (-(((3729467570076876484ULL) | (((/* implicit */unsigned long long int) -954921511))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_19 = ((/* implicit */int) max((((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (short)-2632)) : (((/* implicit */int) var_11))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_2 [i_0]) : (-939852326658649876LL)))) ? (((((/* implicit */_Bool) var_15)) ? (var_1) : (arr_0 [i_0] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)1)) ^ (((/* implicit */int) (short)14346)))))))));
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2207487428288078994LL)) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (arr_1 [i_0] [i_0]))) : (min((arr_2 [i_0]), (arr_1 [i_0] [i_0])))))) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((((/* implicit */_Bool) 5076836272911889099LL)) ? (((/* implicit */int) (unsigned short)12288)) : (((/* implicit */int) (unsigned char)51))))));
    }
    var_21 *= ((/* implicit */signed char) var_7);
}
