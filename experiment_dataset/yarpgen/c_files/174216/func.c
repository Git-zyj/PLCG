/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174216
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
    var_20 = ((/* implicit */unsigned long long int) var_10);
    var_21 = ((/* implicit */_Bool) max((((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_14)) : (var_7))) | (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)61)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_18)))))), (((/* implicit */long long int) 131071U))));
    var_22 &= var_10;
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_23 |= ((/* implicit */short) ((unsigned long long int) ((arr_1 [(unsigned short)2] [i_0]) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0] [i_0]))))) : (arr_0 [i_0] [i_0]))));
        arr_2 [i_0] = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
        var_24 = ((/* implicit */unsigned int) ((arr_1 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) 7486169451579419964LL)) : (((((/* implicit */_Bool) 4294836225U)) ? (((/* implicit */unsigned long long int) 131069U)) : (((unsigned long long int) 0ULL))))));
        var_25 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((4294836229U) ^ (((/* implicit */unsigned int) max((var_15), (((/* implicit */int) var_4)))))))), (((arr_1 [i_0] [i_0]) ? (((arr_1 [i_0] [(unsigned char)12]) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
    }
    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (var_13) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (var_5) : (((/* implicit */int) var_4))))))) : (((/* implicit */long long int) max((((int) var_5)), (((/* implicit */int) ((((/* implicit */long long int) var_10)) >= (var_0)))))))));
}
