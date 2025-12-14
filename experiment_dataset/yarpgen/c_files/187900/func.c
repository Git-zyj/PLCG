/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187900
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : (((var_4) >> (((var_15) + (883087518)))))))) ? (((unsigned long long int) (unsigned char)116)) : (((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned char) var_1))), ((~(((/* implicit */int) var_16)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_18 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((-843309225670300053LL), (-843309225670300051LL)))) ? (((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0])))) : (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0])) < (var_15)))), (max((arr_1 [i_0]), (arr_1 [i_0]))))))));
        var_19 = (!(((/* implicit */_Bool) -2097152)));
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) min((max((min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0])))), (((/* implicit */unsigned long long int) arr_1 [i_0])))), (((/* implicit */unsigned long long int) ((unsigned char) -2097165))))))));
    }
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_12))));
}
