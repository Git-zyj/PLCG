/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166098
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
    var_20 = ((/* implicit */long long int) var_11);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (-(min((min((((/* implicit */unsigned long long int) (unsigned short)65510)), (var_0))), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))));
        var_21 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65511))));
        var_22 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) -1LL))), (max((((/* implicit */int) var_11)), (arr_1 [(unsigned short)4] [(_Bool)1])))))) ? (((/* implicit */unsigned long long int) min((-3LL), (((/* implicit */long long int) var_12))))) : (var_13)));
    }
    var_23 = ((/* implicit */unsigned char) max((max((((((/* implicit */_Bool) var_19)) ? (var_18) : (((/* implicit */unsigned long long int) var_15)))), (max((var_13), (((/* implicit */unsigned long long int) 0LL)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) var_16))))))))));
    var_24 = ((/* implicit */short) ((max(((-(-1))), (((/* implicit */int) var_19)))) % ((~(((/* implicit */int) var_5))))));
}
