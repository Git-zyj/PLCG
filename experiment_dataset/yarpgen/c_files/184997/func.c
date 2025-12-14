/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184997
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [(_Bool)1] &= ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [i_0] [(unsigned short)16])) ? (((/* implicit */int) arr_0 [i_0] [(short)10])) : (arr_1 [i_0] [i_0]))), ((-(((/* implicit */int) var_11))))))) ? (((/* implicit */int) max((arr_0 [i_0] [16]), (((/* implicit */unsigned short) var_4))))) : (((/* implicit */int) ((unsigned short) (unsigned short)35932))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((((/* implicit */_Bool) (signed char)-1)) ? (((8868342432056580421LL) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */int) var_3))))))) : (((/* implicit */long long int) max((((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_0]))), (arr_1 [i_0] [i_0]))))));
        var_15 ^= ((/* implicit */_Bool) (((((~(((/* implicit */int) arr_0 [i_0] [(_Bool)1])))) + (arr_1 [i_0] [i_0]))) ^ (((arr_1 [i_0] [i_0]) / (((/* implicit */int) (unsigned short)63488))))));
    }
    for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        var_16 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)63488)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63488))) * (var_6)))))));
        arr_7 [i_1] = max((arr_5 [i_1]), (((/* implicit */unsigned long long int) arr_6 [i_1])));
        var_17 &= ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)63488))))) : (((/* implicit */int) ((((/* implicit */int) var_14)) != (((/* implicit */int) var_2))))))));
        var_18 = ((/* implicit */long long int) arr_5 [i_1]);
    }
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) var_14)) << (((/* implicit */int) ((short) (!(((/* implicit */_Bool) (unsigned char)89))))))));
}
