/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162475
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
    var_15 = ((/* implicit */_Bool) (unsigned short)46036);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) (+(((/* implicit */int) arr_0 [i_0] [i_0])))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) -4105844467884774929LL)) <= (arr_1 [i_0])))), (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)166))))))))));
        var_17 = ((/* implicit */unsigned short) arr_1 [i_0]);
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (unsigned char)22))));
        arr_2 [i_0] = ((/* implicit */_Bool) (((~(((/* implicit */int) min((var_1), (((/* implicit */unsigned char) (_Bool)1))))))) / (((/* implicit */int) var_7))));
    }
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_7))));
    var_20 &= ((/* implicit */short) min((max((((var_9) + (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (short)4630)))), (((/* implicit */int) var_8))));
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_5))));
}
