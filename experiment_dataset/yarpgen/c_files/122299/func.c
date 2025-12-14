/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122299
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
    var_13 = ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [(_Bool)1] = ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) < (((arr_1 [i_0] [i_0]) % (arr_1 [i_0] [i_0]))));
        arr_3 [(unsigned short)7] [(unsigned short)7] &= ((((/* implicit */_Bool) arr_1 [i_0] [(unsigned short)3])) ? (min((arr_0 [i_0]), (((/* implicit */long long int) var_1)))) : (max((((/* implicit */long long int) (_Bool)0)), (var_6))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        arr_6 [i_1] |= ((/* implicit */unsigned char) ((arr_1 [i_1] [6ULL]) << (((arr_5 [i_1] [i_1]) - (708354815U)))));
        var_14 = ((/* implicit */unsigned char) ((signed char) arr_0 [(unsigned char)10]));
        var_15 ^= ((/* implicit */unsigned short) arr_1 [0LL] [i_1]);
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((((/* implicit */int) var_8)) & (var_2)))) : (arr_0 [i_1]))))));
    }
    /* vectorizable */
    for (long long int i_2 = 2; i_2 < 11; i_2 += 1) 
    {
        var_17 *= ((/* implicit */signed char) arr_7 [i_2]);
        arr_9 [i_2] = ((/* implicit */signed char) ((arr_7 [i_2 + 4]) ? (((/* implicit */int) arr_7 [i_2 - 1])) : (((/* implicit */int) arr_7 [i_2 - 2]))));
        arr_10 [(unsigned char)5] = ((/* implicit */unsigned short) ((_Bool) arr_7 [i_2]));
    }
    for (unsigned char i_3 = 2; i_3 < 22; i_3 += 1) 
    {
        var_18 = ((/* implicit */signed char) arr_12 [i_3 - 1] [i_3]);
        arr_13 [i_3] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_11 [i_3 - 1])) ? (((/* implicit */int) arr_11 [i_3 + 1])) : (((/* implicit */int) arr_11 [i_3 - 2])))) - (((/* implicit */int) arr_11 [i_3 + 1]))));
        var_19 = ((/* implicit */long long int) var_9);
        arr_14 [i_3] = ((/* implicit */unsigned short) arr_11 [i_3]);
        arr_15 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_11 [i_3]))) ? (((/* implicit */int) ((unsigned short) 8659059101386723366ULL))) : (((/* implicit */int) arr_11 [i_3 - 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(_Bool)1]))) : (var_12)));
    }
    var_20 += ((/* implicit */unsigned int) var_7);
}
