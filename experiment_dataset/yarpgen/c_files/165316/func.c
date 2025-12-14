/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165316
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
    var_13 = ((/* implicit */unsigned short) max((((/* implicit */int) var_8)), (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) >> (((((/* implicit */int) var_8)) - (78)))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)67))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        var_14 = ((/* implicit */_Bool) (unsigned char)0);
        var_15 += ((/* implicit */_Bool) ((short) arr_2 [i_0 - 1] [i_0 + 2]));
        var_16 = ((signed char) var_5);
        var_17 = ((/* implicit */int) arr_2 [i_0] [i_0 - 1]);
    }
    for (short i_1 = 2; i_1 < 9; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)188))));
        var_19 &= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((arr_2 [i_1 + 1] [i_1 - 1]), (((/* implicit */unsigned int) arr_5 [i_1 - 1]))))), (var_4)));
    }
}
