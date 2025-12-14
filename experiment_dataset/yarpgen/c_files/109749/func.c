/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109749
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
    var_20 = var_14;
    var_21 = ((/* implicit */unsigned short) var_11);
    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))) * (((((/* implicit */int) (unsigned char)79)) << (((((/* implicit */int) (unsigned char)79)) - (69)))))))) ^ ((+((-(var_7))))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        var_23 = ((/* implicit */unsigned int) min((var_23), (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_1 [1U]) : (((/* implicit */unsigned int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_2)), (var_7))) < (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (var_1)))))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) max((arr_1 [i_0 + 1]), (min((arr_1 [i_0 + 1]), (((/* implicit */unsigned int) (_Bool)0))))));
        arr_3 [(unsigned short)8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (min((((/* implicit */long long int) (_Bool)0)), (var_19))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_1 [(_Bool)1]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)68))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (var_1)))) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [9LL])) ? (((/* implicit */int) var_5)) : (-2147483646))))))));
        var_24 = min((var_8), (((/* implicit */unsigned int) min((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1])))));
    }
}
