/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125785
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
    for (long long int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) -114534734676098566LL);
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)75)) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) (signed char)-33))));
    }
    for (long long int i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 114534734676098566LL)) ? (-114534734676098566LL) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)224))) / (114534734676098565LL)))));
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (+(-114534734676098566LL))))));
        var_15 -= ((/* implicit */unsigned char) ((unsigned long long int) (unsigned char)245));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 22; i_2 += 2) /* same iter space */
    {
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_2] [2LL])) ? (arr_6 [i_2] [i_2]) : (arr_6 [i_2] [i_2])));
        var_16 *= ((((/* implicit */_Bool) (unsigned char)105)) ? (((/* implicit */unsigned long long int) 114534734676098566LL)) : (((((/* implicit */unsigned long long int) -114534734676098578LL)) | (arr_1 [i_2]))));
        var_17 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)208)) * (((/* implicit */int) arr_9 [i_2] [i_2]))));
    }
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) var_11))));
}
