/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123950
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
    for (int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min((0LL), (((/* implicit */long long int) (unsigned char)12)))) + (((/* implicit */long long int) ((unsigned int) var_15)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) * (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (14930175988306495909ULL))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_16)))))))));
        var_18 = ((/* implicit */unsigned int) ((unsigned short) min((((/* implicit */unsigned short) arr_0 [i_0 + 1])), (arr_2 [i_0 + 1] [i_0 + 2]))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_6 [(_Bool)1] [(_Bool)1] |= ((/* implicit */_Bool) arr_4 [i_1 - 1]);
        var_19 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((min((var_14), (var_14))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 - 1]))) : ((~(var_6)))))) * (((unsigned long long int) (~(((/* implicit */int) (unsigned char)195)))))));
        var_20 &= ((((/* implicit */_Bool) (unsigned short)24864)) ? (((/* implicit */int) (unsigned char)58)) : (((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned short) (unsigned char)154)), ((unsigned short)24867))))));
    }
    var_21 &= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned char)74)) ? (((/* implicit */int) (unsigned short)40654)) : (((((/* implicit */_Bool) 1546254883U)) ? (((/* implicit */int) (unsigned char)236)) : (((/* implicit */int) var_0)))))), (((/* implicit */int) min((min(((unsigned short)40654), ((unsigned short)24872))), (min((((/* implicit */unsigned short) var_5)), (var_7))))))));
}
