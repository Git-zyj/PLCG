/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153386
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
    var_19 = ((/* implicit */unsigned int) ((((((((/* implicit */int) var_1)) / (((/* implicit */int) var_16)))) / (((/* implicit */int) var_11)))) * ((+(((/* implicit */int) var_13))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_20 |= ((/* implicit */unsigned char) (_Bool)0);
        var_21 += ((/* implicit */unsigned short) min((min((arr_1 [i_0]), (arr_1 [i_0]))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))));
    }
    for (signed char i_1 = 1; i_1 < 15; i_1 += 1) 
    {
        var_22 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1]))))) >= ((+(((/* implicit */int) arr_2 [i_1]))))))) == (arr_1 [7U])));
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((((/* implicit */int) var_1)) ^ (((/* implicit */int) (short)-17182)))) % (((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_0 [i_1])))) | (((/* implicit */int) arr_0 [i_1 + 1])))))))));
    }
    for (unsigned char i_2 = 1; i_2 < 9; i_2 += 3) 
    {
        var_24 += ((/* implicit */unsigned int) (short)5952);
        var_25 = ((/* implicit */short) ((((/* implicit */int) min((arr_2 [i_2 + 3]), (arr_2 [i_2 + 2])))) + (((((/* implicit */int) (short)5958)) ^ (((/* implicit */int) arr_2 [i_2 + 3]))))));
        arr_7 [i_2] = ((/* implicit */signed char) min((((/* implicit */int) arr_0 [i_2])), ((~(((/* implicit */int) (short)5965))))));
        arr_8 [i_2 + 2] = ((/* implicit */short) ((((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) arr_4 [(signed char)6])) : (((/* implicit */int) arr_0 [i_2])))) >> (((((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(unsigned short)14]))) | (var_9))) - (26418252U))))) ^ ((~(((/* implicit */int) arr_6 [i_2 + 1]))))));
    }
    var_26 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) | (var_7))))));
    var_27 -= ((/* implicit */short) (!(((/* implicit */_Bool) var_3))));
}
