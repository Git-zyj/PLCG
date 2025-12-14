/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186137
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9))))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((unsigned char) (+(var_0)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_20 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_1 [i_0] [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) arr_1 [i_0] [i_0]))))) : ((+(((/* implicit */int) (_Bool)1))))));
        arr_2 [(_Bool)1] = ((/* implicit */unsigned char) var_12);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_10))));
        arr_6 [i_1] = ((var_14) && (((/* implicit */_Bool) ((((/* implicit */int) var_10)) >> (((arr_4 [i_1] [i_1]) + (8674892888293123929LL)))))));
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (~(((arr_3 [(short)15]) & (arr_4 [i_1] [i_1]))))))));
        var_22 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (arr_3 [i_1]))))));
    }
    var_23 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_1))))))));
    var_24 = ((/* implicit */unsigned int) var_5);
    var_25 = (+(((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)255)), ((unsigned short)60220)))) & (((/* implicit */int) var_17)))));
}
