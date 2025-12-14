/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170130
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
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] [i_0 + 1] &= ((((((/* implicit */_Bool) (signed char)-39)) && (((/* implicit */_Bool) -144115188075855872LL)))) ? (((/* implicit */int) ((unsigned short) arr_1 [(_Bool)1]))) : (((/* implicit */int) arr_0 [i_0])));
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (arr_1 [i_0 - 3]) : (arr_1 [i_0 + 2])));
    }
    var_17 = var_14;
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (signed char)-36))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (-(var_8)))) ? ((~(-7447065287704226466LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_13))))))) ? (((/* implicit */int) ((unsigned short) var_11))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) >> (((((/* implicit */int) var_15)) - (25)))))) ? (((/* implicit */int) ((unsigned short) var_11))) : (((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) var_15)))))))));
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)244))))), (max((7988035174401510295LL), (((/* implicit */long long int) var_6))))))));
}
