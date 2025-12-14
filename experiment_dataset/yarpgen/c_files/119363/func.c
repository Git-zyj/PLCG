/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119363
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
    var_15 = ((/* implicit */unsigned short) ((((((var_13) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) >> (((((/* implicit */int) (unsigned short)65510)) - (65491))))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((2984549294U) - (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) ((unsigned short) -8134605828606721984LL))) : (((/* implicit */int) (!(((/* implicit */_Bool) -8134605828606721976LL))))))))));
    var_16 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((unsigned int) var_11))))) && (((/* implicit */_Bool) ((unsigned short) var_7)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) 365115869483132848LL);
        var_17 = ((/* implicit */int) (((+(var_4))) * ((+(arr_1 [i_0])))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) && (((/* implicit */_Bool) ((((arr_0 [i_0]) + (9223372036854775807LL))) >> (((-8134605828606721984LL) + (8134605828606722046LL))))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [(short)8])) ? (arr_1 [i_0]) : (arr_1 [i_0])))) * (((long long int) arr_1 [i_0]))));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((~(-8134605828606721997LL))) / (arr_0 [0U])))) ? (max(((+(6450512587666512466LL))), (min((((/* implicit */long long int) arr_1 [(short)7])), (8134605828606721983LL))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-28)))));
    }
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (+(((max((((/* implicit */long long int) var_3)), (-5751801423115700501LL))) | (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)37614))) | (5971551510222199077LL))))))))));
}
