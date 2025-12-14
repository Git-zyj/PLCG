/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122675
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
    var_13 = var_4;
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)65528)) : (((/* implicit */int) arr_0 [i_0]))))));
        var_14 = ((/* implicit */unsigned short) ((long long int) arr_1 [i_0 - 1]));
    }
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(1656874546U)))), (max((7845349669092380203ULL), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1]))))));
        var_16 = ((/* implicit */unsigned char) ((int) (unsigned short)0));
        arr_5 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) : (var_3)))) && (((/* implicit */_Bool) ((((var_4) > (((/* implicit */int) arr_4 [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9))))) : (((unsigned long long int) arr_3 [i_1] [i_1])))))));
        var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (((((_Bool)1) ? (((/* implicit */int) arr_4 [20ULL] [i_1])) : (((/* implicit */int) var_9)))) & (((((/* implicit */int) arr_3 [i_1] [i_1])) * (((/* implicit */int) (unsigned short)0))))))), ((~(min((((/* implicit */long long int) 2638092718U)), ((-9223372036854775807LL - 1LL))))))));
    }
    var_18 = ((/* implicit */long long int) ((max((((var_5) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)176))))), (((/* implicit */unsigned long long int) var_10)))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_7)))) ? (((((var_0) + (2147483647))) << (((((/* implicit */int) var_12)) - (20612))))) : ((~(((/* implicit */int) (unsigned short)47336)))))))));
}
