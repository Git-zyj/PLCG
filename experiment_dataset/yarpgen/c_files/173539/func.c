/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173539
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
    var_13 = ((/* implicit */unsigned short) var_10);
    var_14 = ((/* implicit */_Bool) var_0);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        arr_3 [i_0] [10] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */long long int) arr_0 [i_0 - 1])) : (-281474976710656LL)));
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_4) | (((/* implicit */int) arr_1 [i_0] [i_0]))))) && (((/* implicit */_Bool) var_4))));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0 + 2])) * (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) arr_2 [i_0 + 1])) : ((~(((/* implicit */int) arr_2 [i_0]))))));
    }
    for (unsigned short i_1 = 1; i_1 < 10; i_1 += 4) 
    {
        var_17 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_5 [8LL]) : (arr_5 [i_1 + 1])))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1 + 2] [i_1])) ^ (((/* implicit */int) (_Bool)1))))) ? (arr_5 [i_1 + 1]) : (((/* implicit */unsigned int) ((1665359193) >> (((/* implicit */int) arr_2 [i_1 - 1]))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (-1665359194) : (((((/* implicit */_Bool) var_9)) ? (-612283601) : (((/* implicit */int) (unsigned char)4)))))))));
        arr_7 [i_1] = ((/* implicit */signed char) min((((((/* implicit */int) arr_6 [i_1] [i_1 - 1])) << (((((/* implicit */int) arr_6 [i_1 + 1] [i_1 - 1])) - (60180))))), (((arr_2 [i_1 - 1]) ? (((/* implicit */int) arr_6 [i_1] [i_1 + 1])) : (((/* implicit */int) arr_6 [i_1] [i_1 + 2]))))));
        arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (((-(((/* implicit */int) arr_1 [i_1] [i_1])))) < (((/* implicit */int) arr_2 [i_1 - 1]))))) | ((+(((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (1665359193) : (((/* implicit */int) (unsigned short)23795))))))));
        var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned int) 1665359192)), (arr_5 [i_1])));
        arr_9 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) 1942284205U)) ? (arr_5 [i_1 + 1]) : ((~(arr_5 [i_1 - 1])))));
    }
}
