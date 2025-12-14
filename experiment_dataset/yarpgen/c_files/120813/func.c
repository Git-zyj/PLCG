/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120813
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
    var_10 += ((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) (signed char)-71)) : (((/* implicit */int) (unsigned char)128)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        var_11 = ((/* implicit */int) (((~(((/* implicit */int) (signed char)-63)))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
        var_12 = ((/* implicit */_Bool) arr_1 [i_0]);
        var_13 *= ((/* implicit */signed char) (+(((/* implicit */int) var_1))));
        var_14 = ((/* implicit */unsigned long long int) ((unsigned short) arr_1 [i_0 - 1]));
        var_15 = ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((((((/* implicit */int) var_8)) % (1691405054))) >> (((((/* implicit */long long int) ((/* implicit */int) var_8))) / (arr_1 [i_0 + 1])))))) : ((-(arr_1 [i_0 - 1]))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 4) 
    {
        var_16 *= ((/* implicit */unsigned char) (signed char)88);
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) min((((/* implicit */signed char) ((min((var_3), (((/* implicit */unsigned long long int) arr_3 [i_1])))) > (((((/* implicit */_Bool) var_5)) ? (arr_2 [i_1]) : (((/* implicit */unsigned long long int) 1959569449))))))), (var_2))))));
    }
    var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (10819491163608699355ULL)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) min((((/* implicit */short) var_8)), (var_1))))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) / (var_9))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
}
