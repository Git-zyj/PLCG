/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123007
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [1LL]))) <= (((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_0])) - (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : ((-9223372036854775807LL - 1LL))))))));
        var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) max((((/* implicit */short) (signed char)-120)), ((short)-19))))));
        var_12 ^= ((/* implicit */short) arr_2 [i_0] [i_0]);
        arr_3 [11ULL] = ((/* implicit */_Bool) (-(((((((/* implicit */int) var_6)) != (((/* implicit */int) var_9)))) ? (((((/* implicit */_Bool) (short)-30707)) ? (511ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)30107)))))))));
        var_13 = ((/* implicit */long long int) var_0);
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 21; i_1 += 3) 
    {
        var_14 ^= ((/* implicit */long long int) ((arr_4 [(unsigned char)14]) <= (arr_4 [i_1])));
        var_15 += ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (signed char i_2 = 1; i_2 < 16; i_2 += 3) 
    {
        var_16 *= ((/* implicit */_Bool) arr_7 [i_2] [i_2 + 1]);
        var_17 -= ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_2] [(unsigned short)17])) - (((/* implicit */int) var_7))));
        var_18 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_2 - 1])) || (((/* implicit */_Bool) arr_4 [i_2 - 1]))));
    }
    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
    {
        arr_11 [i_3] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-30108))));
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */long long int) arr_7 [i_3] [i_3])), (arr_0 [i_3])))))));
    }
    var_20 = ((/* implicit */_Bool) (-(((min((var_3), (var_5))) % (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)502), (((/* implicit */short) var_7))))))))));
}
