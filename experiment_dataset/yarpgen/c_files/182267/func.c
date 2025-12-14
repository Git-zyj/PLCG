/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182267
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_19 = ((/* implicit */_Bool) (~(min((arr_1 [i_0]), (((((/* implicit */_Bool) (unsigned char)90)) ? (((/* implicit */int) (short)-736)) : (((/* implicit */int) var_12))))))));
        var_20 = ((/* implicit */_Bool) max((var_20), (((((/* implicit */_Bool) min((((/* implicit */long long int) -1084435020)), (-6181012143867213215LL)))) || (((/* implicit */_Bool) arr_1 [i_0]))))));
        arr_2 [i_0] = max((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))), (min((((((/* implicit */_Bool) (unsigned char)165)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)84))) : (var_1))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)72))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = (+(((/* implicit */int) (_Bool)1)));
        var_21 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) min(((unsigned char)66), ((unsigned char)171)))) : (((/* implicit */int) ((signed char) (unsigned char)74))))));
        var_22 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned char)165)) && (((/* implicit */_Bool) (unsigned char)250)))), ((((_Bool)1) || (((/* implicit */_Bool) arr_1 [i_1]))))));
        arr_7 [i_1] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned long long int) arr_3 [i_1])) : (18446744073709551606ULL))));
    }
    var_23 = ((/* implicit */long long int) ((int) ((unsigned char) (!(((/* implicit */_Bool) var_15))))));
}
