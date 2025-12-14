/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146120
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
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) var_10)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) / (arr_1 [i_0 + 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(_Bool)1])))));
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) ((short) (short)1)))));
        arr_3 [i_0] = ((/* implicit */int) min((((/* implicit */long long int) (-(((/* implicit */int) ((var_3) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))), (((long long int) arr_2 [i_0]))));
        var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) (~(var_13)))))));
    }
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */int) (short)1)) | (((/* implicit */int) (unsigned char)240)))))));
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (9223372036854775807LL))) / (((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)15)))))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) * (((/* implicit */int) (signed char)32))))), (((((/* implicit */_Bool) var_6)) ? (var_2) : (9064930507045338453ULL))))))));
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_14)), (((((/* implicit */_Bool) (unsigned short)0)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))) ? (((((/* implicit */int) (short)2)) + (((/* implicit */int) (unsigned char)240)))) : ((((!(((/* implicit */_Bool) (signed char)-32)))) ? ((~(((/* implicit */int) var_10)))) : ((~(((/* implicit */int) var_4))))))));
}
