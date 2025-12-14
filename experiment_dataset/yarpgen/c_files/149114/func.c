/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149114
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
    var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) var_3)))));
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min((((((/* implicit */int) var_9)) >> (((((/* implicit */int) var_9)) - (79))))), (((/* implicit */int) ((signed char) (signed char)0)))))), (((((/* implicit */unsigned int) min((((/* implicit */int) var_14)), (2147483647)))) & (var_11))))))));
    var_19 = ((/* implicit */unsigned char) min((((var_2) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_5), (((/* implicit */unsigned short) (unsigned char)200)))))) : (var_15))), (((/* implicit */unsigned long long int) var_5))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 4; i_0 < 23; i_0 += 1) 
    {
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)56)))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            var_21 = ((/* implicit */short) ((unsigned short) ((((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) (signed char)-68)))));
            var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_0 - 1]))) : (arr_1 [i_0] [i_0]))))));
        }
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned int) (unsigned char)170))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0 - 2] [i_0 - 4]) : (((/* implicit */long long int) ((int) var_15))))) : (((/* implicit */long long int) arr_0 [i_0]))));
        arr_6 [i_0] [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((var_4) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28867))) : (var_3)))) ? (((((/* implicit */int) arr_2 [i_0] [(unsigned char)8])) >> (((arr_1 [i_0 - 2] [12U]) + (4895167656865069793LL))))) : ((~(var_6)))))));
    }
    for (int i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        arr_9 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_9)), (arr_1 [i_2] [i_2])))) ? (((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) arr_1 [i_2] [i_2])) : (16819011590698647058ULL))) : ((+(var_15)))));
        var_23 = ((/* implicit */_Bool) arr_0 [i_2]);
        arr_10 [14ULL] = ((/* implicit */int) (unsigned char)0);
    }
}
