/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116963
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
    var_13 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : (1749638725971501014LL)))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)124))) | (-1749638725971501007LL))) : (-1749638725971501015LL))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (min((((/* implicit */unsigned int) (unsigned short)42745)), (1267754873U))))) - (4294939895U)))));
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) -1749638725971501015LL))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)44003)) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (var_2)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 - 1] [i_1 + 2]))) : (18446744073709551615ULL)));
                var_15 = ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [i_1 + 2])))) != (((/* implicit */int) ((min((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) (unsigned short)41863)))) != (((((/* implicit */_Bool) (unsigned char)46)) ? (arr_4 [i_1 + 1] [0U] [(signed char)13]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49152)))))))));
                var_16 ^= ((/* implicit */unsigned short) var_4);
            }
        } 
    } 
}
