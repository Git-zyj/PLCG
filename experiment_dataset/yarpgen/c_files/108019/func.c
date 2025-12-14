/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108019
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
    var_20 = ((/* implicit */short) ((((/* implicit */long long int) min((((((/* implicit */int) var_7)) | (((/* implicit */int) (short)6)))), (((/* implicit */int) (short)-6))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)121))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : ((+(var_19)))))));
    var_21 = ((/* implicit */long long int) var_4);
    var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_18))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (-(((/* implicit */int) max((((/* implicit */short) (signed char)-122)), ((short)6)))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)-99)) + (2147483647))) >> (((((/* implicit */int) (short)-6)) + (24)))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -6403151825353749242LL)) ? (((/* implicit */int) (signed char)26)) : (((/* implicit */int) var_13))))) || (((/* implicit */_Bool) (short)18)))) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_2 [i_0]))))));
    }
}
