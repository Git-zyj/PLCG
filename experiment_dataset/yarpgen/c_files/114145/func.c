/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114145
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
    var_16 = ((/* implicit */short) var_2);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_17 += ((/* implicit */signed char) ((((/* implicit */_Bool) 1958636841454919548ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */int) var_12)) != (var_9))))));
        var_18 = ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((unsigned char) (unsigned char)253))) : (((((/* implicit */int) var_0)) & (((/* implicit */int) var_13)))));
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? ((~(((/* implicit */int) (unsigned char)254)))) : (((/* implicit */int) (unsigned char)0))));
    }
    for (int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((short) (unsigned char)174))))))));
        arr_6 [i_1] [i_1] = ((/* implicit */int) arr_5 [i_1]);
        var_20 = ((/* implicit */int) ((unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) / (var_14))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)251))))))));
        arr_7 [i_1] = ((/* implicit */unsigned char) var_4);
    }
    for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        arr_11 [i_2] = ((/* implicit */short) var_14);
        arr_12 [(short)7] = ((/* implicit */short) ((var_14) - (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((+(((/* implicit */int) var_7))))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_3 [5LL])))) : (((/* implicit */int) (unsigned char)0))));
        var_22 = ((/* implicit */short) (~(((/* implicit */int) ((var_2) < (min((13150556190182652685ULL), (((/* implicit */unsigned long long int) var_12)))))))));
    }
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2047))) : (min((((/* implicit */unsigned long long int) ((unsigned char) (short)28672))), (((4987370268983784970ULL) | (((/* implicit */unsigned long long int) 3233454121U))))))));
    var_24 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_15)))) & ((+(((/* implicit */int) (unsigned char)255))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_13), (var_13))))) | ((~(4397509640192ULL)))))));
}
