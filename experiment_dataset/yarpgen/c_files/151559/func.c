/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151559
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
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) min((((/* implicit */short) var_10)), (var_12))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned char) var_2)))))), (((((/* implicit */_Bool) ((arr_2 [i_0] [i_0]) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (-2147483647 - 1))))) : (var_3)))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)26395)) ? (((/* implicit */int) (unsigned short)10)) : (((/* implicit */int) (unsigned short)26395))))))) ? (((((/* implicit */int) arr_2 [i_0] [i_0])) / (((/* implicit */int) arr_2 [i_0] [i_0])))) : (((/* implicit */int) (unsigned short)65535))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) min((((/* implicit */int) arr_5 [i_1])), (arr_3 [i_1] [(_Bool)1]))))))));
        var_17 = ((/* implicit */unsigned char) arr_5 [i_1]);
        var_18 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) (unsigned char)0)) ? (arr_3 [i_1] [i_1]) : (arr_4 [i_1]))));
        arr_6 [i_1] [(short)21] = ((/* implicit */int) 549755813887ULL);
    }
    var_19 = (_Bool)1;
    var_20 = ((/* implicit */int) max((var_20), (((min(((+(((/* implicit */int) var_6)))), (((var_1) ? (((/* implicit */int) var_9)) : ((-2147483647 - 1)))))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967292U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1)))) - (17062)))))));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((var_3), (((/* implicit */unsigned int) var_6)))) | (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_4))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) != (((/* implicit */int) var_9)))))) : (min((min((15705642165520005238ULL), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) (-2147483647 - 1)))))));
}
