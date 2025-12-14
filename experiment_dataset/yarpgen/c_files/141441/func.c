/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141441
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
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned char) var_6);
        arr_3 [i_0] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0 + 2])) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)-99)))) : (((/* implicit */int) var_7)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_17))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            arr_11 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) arr_9 [i_1] [i_2]);
            arr_12 [i_1] [i_2] = ((/* implicit */short) min((((/* implicit */int) var_16)), (((((((/* implicit */int) var_8)) >> (((((/* implicit */int) var_2)) - (206))))) >> (((((unsigned long long int) (unsigned short)49615)) - (49600ULL)))))));
            arr_13 [i_1] &= min((((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (arr_5 [i_1] [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_5)))));
        }
    }
    for (unsigned short i_3 = 2; i_3 < 16; i_3 += 2) 
    {
        arr_16 [i_3 + 2] [i_3 + 1] &= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)49615)) || (((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_2)))))))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((((/* implicit */_Bool) (~(arr_5 [i_3] [i_3 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_5 [(signed char)4] [i_3 + 3])))) : (min((((/* implicit */unsigned long long int) -3LL)), (arr_5 [i_3] [i_3 + 3])))))));
    }
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_14)) | (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)15931))));
    var_23 = ((/* implicit */unsigned long long int) var_17);
}
