/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153927
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
    var_17 = ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) << (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_16)) ^ (-7)))) : (max((9223372036854775807LL), (((/* implicit */long long int) var_2)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46793)))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((unsigned char) var_5)))))));
    var_18 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((4181788699U) - (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (max((((/* implicit */long long int) var_13)), (1023LL))))), (((/* implicit */long long int) (((~(((/* implicit */int) (signed char)-27)))) << (((/* implicit */int) ((_Bool) var_14))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_7 [i_1] = var_5;
                arr_8 [(unsigned char)18] = ((/* implicit */short) ((long long int) ((signed char) var_14)));
                arr_9 [i_0] [i_0] = ((((unsigned int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))) | (((/* implicit */unsigned int) ((/* implicit */int) min((max((((/* implicit */unsigned short) var_13)), (var_2))), (((/* implicit */unsigned short) var_12)))))));
                var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)245)) && (((/* implicit */_Bool) arr_2 [i_0] [i_1])))) ? (((/* implicit */long long int) ((int) arr_2 [i_0] [i_1]))) : (((long long int) arr_2 [i_0] [(signed char)24]))));
                var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) arr_3 [i_0]))))) ? ((-(((/* implicit */int) (signed char)-118)))) : (((/* implicit */int) ((unsigned char) -1013LL))))))));
            }
        } 
    } 
}
