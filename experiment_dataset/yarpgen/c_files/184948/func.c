/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184948
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
    var_16 = min((((unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))))), (var_15));
    var_17 = min((var_13), (var_15));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_18 = min((min(((unsigned short)58966), ((unsigned short)48))), (min((var_13), ((unsigned short)11219))));
        arr_2 [i_0] [i_0] = var_6;
        var_19 = ((/* implicit */unsigned short) ((((((((/* implicit */int) var_14)) * (((/* implicit */int) var_9)))) <= (((/* implicit */int) min(((unsigned short)36615), ((unsigned short)43365)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)39991)) : (((/* implicit */int) var_4))))) ? (((((/* implicit */int) var_10)) / (((/* implicit */int) (unsigned short)21026)))) : (((/* implicit */int) var_13)))) : (((/* implicit */int) ((unsigned short) min(((unsigned short)55019), ((unsigned short)19714)))))));
    }
    for (unsigned short i_1 = 1; i_1 < 21; i_1 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((var_5), (var_5))), ((unsigned short)48313)))) ? (((/* implicit */int) max((min((var_6), ((unsigned short)56023))), (max(((unsigned short)56087), (var_5)))))) : (((/* implicit */int) max((min((var_12), ((unsigned short)64555))), (((unsigned short) var_6))))))))));
        var_21 = (unsigned short)8225;
    }
    var_22 *= min(((unsigned short)55019), (var_12));
}
