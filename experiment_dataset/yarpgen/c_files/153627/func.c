/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153627
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
    var_10 = ((/* implicit */short) min((1100462407), (((((/* implicit */_Bool) -2096770621)) ? (min((2096770638), (1100462399))) : (((-2096770621) - (-2096770602)))))));
    var_11 = ((/* implicit */short) 311116838);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-15))) : (-7601001313076130752LL)));
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [i_0])) : (-1100462407)));
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4797678711718290512LL)) ? (1100462407) : (((/* implicit */int) (unsigned short)45949))));
    }
    for (int i_1 = 0; i_1 < 14; i_1 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */short) ((((((/* implicit */_Bool) 1100462382)) ? (((/* implicit */unsigned long long int) arr_0 [i_1])) : (6ULL))) >> (((((((/* implicit */_Bool) 1)) ? (4034326281U) : (854813485U))) >> (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) arr_5 [i_1])) : (8146529761276689979LL))) - (2026311399LL)))))));
        var_15 = ((/* implicit */unsigned long long int) arr_1 [i_1]);
        var_16 = ((((/* implicit */_Bool) ((min((((/* implicit */long long int) (signed char)-106)), (1152921504606845952LL))) + (((/* implicit */long long int) min((-1146894156), ((-2147483647 - 1)))))))) ? (((/* implicit */int) ((min((((/* implicit */long long int) var_9)), (var_3))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)18)) <= (-1100462395)))))))) : (((/* implicit */int) var_6)));
    }
}
