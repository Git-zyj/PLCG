/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14530
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (var_4))))))) ? (max((((/* implicit */unsigned long long int) arr_0 [(unsigned short)3])), (min((8576517444088006776ULL), (((/* implicit */unsigned long long int) (short)7745)))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0])))))));
        var_20 ^= ((/* implicit */short) max(((-(((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0])), (var_5)))))), ((((+(((/* implicit */int) var_2)))) >> (((((((/* implicit */_Bool) 1773683944U)) ? (9870226629621544837ULL) : (5990700406197920614ULL))) - (9870226629621544834ULL)))))));
    }
    var_21 = ((/* implicit */unsigned int) var_15);
    var_22 = (signed char)-90;
}
