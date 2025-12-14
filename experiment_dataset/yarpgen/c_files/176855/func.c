/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176855
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
    var_14 -= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_8)) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)110))) ^ (-670436852051497874LL))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) var_12)), (3255975210U)))))), (((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)50872)) : (((/* implicit */int) (short)29546))))) & (((((/* implicit */_Bool) 3573070420U)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_4)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) var_11))));
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])));
        var_17 = ((/* implicit */unsigned int) var_11);
        var_18 ^= ((/* implicit */unsigned short) ((4294967295U) ^ (3984480640U)));
    }
    for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) arr_0 [(_Bool)1] [(_Bool)1]);
        var_19 = ((/* implicit */long long int) (!(((min((((/* implicit */unsigned long long int) var_13)), (var_9))) > (((/* implicit */unsigned long long int) max((var_0), (((/* implicit */unsigned int) (unsigned short)50866)))))))));
    }
    var_20 = ((/* implicit */int) min((14586592203176632460ULL), (((/* implicit */unsigned long long int) (short)-3871))));
    var_21 = ((/* implicit */long long int) (-((((~(var_3))) & (((((/* implicit */int) var_5)) | (var_8)))))));
    var_22 = ((/* implicit */int) var_1);
}
