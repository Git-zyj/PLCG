/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119460
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
    var_10 = ((/* implicit */signed char) (~(var_7)));
    var_11 = ((/* implicit */signed char) var_2);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)39378)) && (((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) ((short) var_8))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [(signed char)13])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (2903678177167208107LL))) : (max((var_7), (((/* implicit */long long int) var_8)))))) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? (((long long int) arr_0 [i_0])) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
        var_14 &= ((/* implicit */_Bool) ((((/* implicit */long long int) min((((((/* implicit */int) arr_1 [i_0] [i_0])) / (((/* implicit */int) (unsigned char)71)))), (((/* implicit */int) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))))) - (var_7)));
    }
    for (unsigned int i_1 = 1; i_1 < 21; i_1 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) ((short) (!(((/* implicit */_Bool) var_0)))));
        var_16 = ((/* implicit */long long int) min((((arr_3 [i_1 + 1] [i_1]) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)161)) ? (((/* implicit */int) (short)4155)) : (((/* implicit */int) var_0))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_1 + 1] [i_1 - 1])) != (((/* implicit */int) (unsigned char)175)))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)71)) : (((/* implicit */int) var_9)))))));
        var_18 = ((/* implicit */short) min((((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)196))))) & (var_1))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_2])) | (((/* implicit */int) (unsigned char)71)))))));
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (~((-(((/* implicit */int) arr_7 [(_Bool)1])))))))));
        var_20 = ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2]))) : (6781685224349929747LL))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_2 [i_2]), (arr_2 [i_2]))))));
    }
}
