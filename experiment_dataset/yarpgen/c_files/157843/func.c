/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157843
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)230)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_12))))) : (var_8)));
    var_21 = ((/* implicit */unsigned short) var_5);
    var_22 ^= ((/* implicit */unsigned int) max(((!(((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_8)))))), (((((/* implicit */long long int) ((/* implicit */int) var_6))) > (max((var_16), (((/* implicit */long long int) var_10))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        var_23 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_15)))) ? ((+(arr_0 [i_0 - 1]))) : (max((arr_0 [i_0 + 2]), (((/* implicit */long long int) 4294967295U))))));
        var_24 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) arr_1 [i_0 - 1])) : (arr_0 [i_0 + 2])))))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned char)156)))) || (((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (unsigned char)0))))))) : (((/* implicit */int) ((short) arr_1 [i_0 - 1])))));
        var_25 = ((/* implicit */unsigned char) var_19);
        var_26 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((int) ((int) (unsigned short)4387)))) : (arr_0 [i_0]));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_27 ^= ((/* implicit */unsigned int) arr_4 [i_1]);
        arr_5 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)53291)) ^ (((/* implicit */int) arr_2 [i_1]))))) ? (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53298))) : (arr_3 [i_1] [i_1]))) : (var_19));
        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)12244)) || (((/* implicit */_Bool) (unsigned short)53291))));
        arr_6 [i_1] = ((/* implicit */signed char) var_2);
    }
    var_29 = ((/* implicit */long long int) var_10);
}
