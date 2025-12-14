/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185299
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
    var_16 = ((/* implicit */int) ((((long long int) ((((/* implicit */_Bool) var_11)) ? (820643237) : (var_11)))) > (((((/* implicit */_Bool) var_11)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2487904214U))))))))));
    var_17 = ((/* implicit */long long int) max((var_17), (var_12)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] = max((((arr_1 [i_0] [i_0]) ^ (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)31))))))), (((/* implicit */long long int) var_10)));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5))) : (4294967295U)));
        var_19 += ((/* implicit */long long int) (unsigned short)10);
    }
    var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) 836479988)) * (var_7)));
    var_21 &= ((/* implicit */long long int) var_11);
}
