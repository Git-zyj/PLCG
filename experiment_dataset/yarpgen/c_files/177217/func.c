/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177217
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
    var_19 += ((/* implicit */int) -5727637326279021886LL);
    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (~(min((((/* implicit */unsigned int) ((((var_13) + (2147483647))) >> (((-5727637326279021869LL) + (5727637326279021883LL)))))), (((unsigned int) var_15)))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
        var_21 = ((((/* implicit */_Bool) (+(arr_1 [i_0 + 2])))) ? (5727637326279021886LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_2)))));
        var_22 = ((/* implicit */long long int) min((var_22), (-5727637326279021888LL)));
    }
    for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        var_23 = ((/* implicit */long long int) (!(((arr_5 [i_1] [i_1]) < (arr_5 [i_1] [i_1])))));
        var_24 += ((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) ((var_11) << (((arr_5 [i_1] [i_1]) + (5857298986216617487LL)))))))));
    }
}
