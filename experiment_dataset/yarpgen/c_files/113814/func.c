/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113814
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
    var_18 -= ((/* implicit */unsigned short) var_8);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))));
        var_20 = ((((/* implicit */_Bool) arr_3 [i_0])) ? ((-(((((/* implicit */_Bool) (unsigned short)58239)) ? (16412661889576911563ULL) : (((/* implicit */unsigned long long int) 1001455253U)))))) : (((/* implicit */unsigned long long int) var_10)));
        arr_4 [(unsigned char)6] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_2 [i_0] [i_0]))) | (max((((/* implicit */unsigned long long int) arr_0 [(signed char)7])), (1098437885952ULL)))))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_5))))), (var_4))) : (((/* implicit */long long int) ((var_14) & ((~(((/* implicit */int) var_12)))))))));
    }
    var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) -7968282624674652403LL)) ? (((/* implicit */int) (unsigned char)255)) : (var_17)))))));
    var_22 = ((/* implicit */long long int) ((min((-729240794048505298LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_13))))))) != (((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)57)) / (var_10))) * (((/* implicit */int) var_0)))))));
}
