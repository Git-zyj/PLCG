/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105574
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
    var_10 ^= ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (-(272730423296LL)))) ? (((/* implicit */int) min(((unsigned char)171), (((/* implicit */unsigned char) (signed char)92))))) : (((/* implicit */int) ((((/* implicit */_Bool) 4611686017353646080LL)) && (((/* implicit */_Bool) 6762967050568830636LL)))))))) ^ (-1664970123565611175LL)));
    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 17592181850112LL)) ? (((/* implicit */int) (unsigned char)183)) : (((/* implicit */int) (unsigned short)49226))))) < (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (3419006292130183743LL)))))), (((((((int) (signed char)-110)) + (2147483647))) >> (((((/* implicit */int) var_2)) - (172))))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        var_12 += ((/* implicit */unsigned char) (unsigned short)12);
        arr_3 [i_0] [(unsigned short)8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_1 [(signed char)1]))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (var_7))))))) ? (((((((/* implicit */_Bool) 0LL)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) + ((+(arr_1 [i_0]))))) : (((/* implicit */unsigned int) (-(((((/* implicit */int) (signed char)(-127 - 1))) / (var_7))))))));
        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) arr_2 [(unsigned char)4]))));
        var_14 = ((/* implicit */int) ((((((/* implicit */int) var_4)) != (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)243)) && (((/* implicit */_Bool) (unsigned short)30045))))))) ? (((arr_0 [i_0 - 1]) / (((/* implicit */unsigned long long int) arr_1 [i_0 - 2])))) : (((unsigned long long int) var_2))));
    }
}
