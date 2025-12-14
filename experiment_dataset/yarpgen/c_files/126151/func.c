/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126151
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
    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (((unsigned long long int) max((0ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))))));
    var_20 = ((/* implicit */short) ((signed char) var_5));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (1048575)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((2039992175U), (((/* implicit */unsigned int) (unsigned char)191))))), (((((/* implicit */_Bool) var_15)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-826)))))))) ? (((((_Bool) var_5)) ? (((1080362960) / (((/* implicit */int) var_0)))) : (((/* implicit */int) ((unsigned short) 1030861314))))) : ((((_Bool)1) ? (arr_1 [i_0] [i_0]) : (((/* implicit */int) (short)3883))))));
        var_23 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)255))));
        var_24 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) (unsigned short)65535)) - (((/* implicit */int) var_4)))));
        arr_2 [i_0] [0LL] |= ((/* implicit */unsigned long long int) ((_Bool) ((min((var_14), (((/* implicit */int) var_7)))) > (((((/* implicit */int) var_4)) % (((/* implicit */int) (unsigned short)18442)))))));
    }
}
