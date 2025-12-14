/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144356
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
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(_Bool)1]))) : (((((/* implicit */_Bool) (-(arr_0 [i_0 - 3])))) ? (arr_0 [i_0 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0 - 2]) <= (((/* implicit */unsigned long long int) 3))))))))));
        var_20 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (155433088)))) == (arr_1 [i_0 + 2])));
    }
    var_21 = max((((/* implicit */int) max((var_4), (((((/* implicit */_Bool) 155433075)) || (((/* implicit */_Bool) var_17))))))), ((-(min((((/* implicit */int) var_0)), (-155433075))))));
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_9)), (var_15)))) ? (min((155433088), (((/* implicit */int) (unsigned short)65520)))) : (((/* implicit */int) ((unsigned short) var_14)))))) ? (((/* implicit */int) max((var_8), (((/* implicit */unsigned short) max((((/* implicit */short) var_9)), ((short)17054))))))) : (var_19)));
}
