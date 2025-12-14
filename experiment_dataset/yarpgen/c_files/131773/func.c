/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131773
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((long long int) arr_1 [10ULL]));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) ((short) 14354229975655722705ULL))), (((((/* implicit */int) var_7)) >> (((((/* implicit */int) arr_1 [i_0])) - (56442)))))))) ? (((((/* implicit */_Bool) ((unsigned char) arr_2 [i_0] [i_0]))) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (4092514098053828890ULL))) : (min((var_9), (((/* implicit */unsigned long long int) var_13)))))) : (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 8168412942662115685ULL)) ? (((/* implicit */int) (signed char)-93)) : (((/* implicit */int) (_Bool)1))))))));
        var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0])))) > (((((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (arr_3 [(_Bool)1])))) | (((/* implicit */int) arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_1])) >> (((((/* implicit */int) arr_5 [i_1])) - (54)))));
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_1]))))) || (((((/* implicit */_Bool) arr_6 [i_1])) && (((/* implicit */_Bool) var_8)))))))));
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_1])) || (var_5))))));
    }
    for (unsigned char i_2 = 1; i_2 < 21; i_2 += 3) 
    {
        var_23 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) 1537822232U)), (-4901356181004769625LL))) ^ (((/* implicit */long long int) ((/* implicit */int) (short)3584)))))) ? (((/* implicit */int) max((arr_9 [16LL]), (arr_9 [(unsigned char)20])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [(unsigned short)0])) && (((/* implicit */_Bool) (short)20486)))))) > (min((((/* implicit */unsigned long long int) arr_9 [(_Bool)1])), (var_12))))))));
        arr_12 [(unsigned short)16] &= ((/* implicit */signed char) var_8);
        var_24 &= ((/* implicit */_Bool) ((long long int) arr_10 [i_2 - 1]));
    }
    var_25 += ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
    var_26 = ((/* implicit */unsigned short) ((unsigned char) var_13));
}
