/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136169
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
    var_18 = ((/* implicit */long long int) var_4);
    var_19 = ((/* implicit */long long int) var_2);
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)108)) ? (((/* implicit */int) (unsigned char)186)) : (((/* implicit */int) (short)4030))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)(-32767 - 1)))));
    var_21 = ((/* implicit */unsigned int) var_17);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0]))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (2238415422382875048ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
    }
    for (unsigned short i_1 = 3; i_1 < 21; i_1 += 1) 
    {
        var_22 = ((/* implicit */short) (+(15642063330372385361ULL)));
        var_23 += ((/* implicit */signed char) (((-(((/* implicit */int) max((arr_5 [i_1]), (arr_5 [i_1])))))) != (((((/* implicit */_Bool) arr_5 [i_1 - 1])) ? (((/* implicit */int) arr_5 [i_1 - 1])) : (((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 2]))))));
        var_24 = ((/* implicit */long long int) 2804680743337166276ULL);
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_1 - 3] [i_1 - 1])) ? ((~(((/* implicit */int) arr_5 [i_1])))) : ((~(((/* implicit */int) arr_5 [i_1]))))))) : ((~(arr_7 [i_1 + 2] [i_1 - 1])))));
    }
}
