/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125642
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
    var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)72)), (((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) (signed char)-47)) : (63350458)))));
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) min((var_1), (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_16) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) : (((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((arr_1 [(short)2]) >= (((((/* implicit */_Bool) arr_1 [5])) ? (arr_1 [(short)2]) : (((/* implicit */int) arr_0 [i_0])))))) ? ((+(((/* implicit */int) (signed char)72)))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_1 [7LL])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) arr_0 [i_0])))))))));
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((min((arr_1 [i_0]), (arr_1 [i_0]))) < (((((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_0])), (arr_1 [i_0])))) ? ((~(((/* implicit */int) arr_0 [i_0])))) : (min((arr_1 [i_0]), (((/* implicit */int) arr_0 [(signed char)10])))))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_20 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1])))))));
        var_21 *= ((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_1]))));
    }
    var_22 = ((/* implicit */unsigned long long int) max(((-(min((var_6), (((/* implicit */unsigned int) var_13)))))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_12)))))));
}
