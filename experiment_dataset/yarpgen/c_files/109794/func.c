/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109794
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        var_19 = ((/* implicit */_Bool) ((var_18) - (((/* implicit */unsigned long long int) max((((var_3) | (var_9))), (((/* implicit */long long int) var_17)))))));
        var_20 |= min((min((((((/* implicit */_Bool) var_12)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_12)), (var_6)))));
        arr_2 [i_0] [i_0 + 1] |= ((/* implicit */int) ((min((var_6), (var_3))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (short)22332)) : (((/* implicit */int) (unsigned char)163)))))));
    }
    var_21 = ((/* implicit */unsigned short) min((2097151U), (((/* implicit */unsigned int) 16383))));
    var_22 = ((/* implicit */int) var_10);
    /* LoopNest 3 */
    for (short i_1 = 1; i_1 < 22; i_1 += 1) 
    {
        for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            for (long long int i_3 = 1; i_3 < 21; i_3 += 3) 
            {
                {
                    var_23 = ((/* implicit */_Bool) ((((max((var_14), (((/* implicit */int) var_7)))) + (2147483647))) >> (min((((/* implicit */unsigned long long int) 0)), (7488913140101151351ULL)))));
                    var_24 = ((/* implicit */unsigned int) ((((var_4) / (((/* implicit */long long int) ((/* implicit */int) var_15))))) > (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_8) : (var_6)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) var_7)))))));
                    arr_12 [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_17)) ? (((var_10) ? (var_5) : (((/* implicit */unsigned long long int) var_4)))) : (var_18))) != (((/* implicit */unsigned long long int) ((var_8) | (var_4))))));
                }
            } 
        } 
    } 
}
