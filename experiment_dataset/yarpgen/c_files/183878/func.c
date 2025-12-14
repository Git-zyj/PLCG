/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183878
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
    var_16 = ((/* implicit */signed char) (-(var_0)));
    var_17 = ((/* implicit */unsigned int) var_9);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        var_18 *= ((/* implicit */short) var_9);
        var_19 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((arr_1 [i_0 - 3]) * (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) / (arr_0 [i_0])));
    }
    for (unsigned char i_1 = 2; i_1 < 15; i_1 += 4) 
    {
        arr_5 [i_1 - 2] = ((/* implicit */_Bool) (~(((/* implicit */int) var_4))));
        var_20 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_4 [(unsigned char)8] [i_1])) : (((/* implicit */int) var_6)))) * ((-(((/* implicit */int) var_12))))))), (((((/* implicit */_Bool) min((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_1 + 1])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_1]))))) : (min((var_14), (((/* implicit */unsigned int) arr_4 [i_1] [i_1 + 1]))))))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)6)) >> (((963693448U) - (963693439U)))))) ? (((/* implicit */int) ((short) 15770995652686143172ULL))) : (var_11)))));
        var_21 ^= ((/* implicit */unsigned int) (((((-(((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (arr_4 [i_1 + 1] [i_1 + 2])))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1])) ? (((/* implicit */int) (unsigned short)65511)) : (((/* implicit */int) arr_3 [i_1]))))) ? (((((/* implicit */int) (unsigned short)8)) / (((/* implicit */int) arr_4 [i_1 - 2] [i_1])))) : ((-(((/* implicit */int) var_8))))))));
    }
}
