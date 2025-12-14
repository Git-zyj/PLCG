/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152353
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned short) arr_4 [i_0] [(short)8] [6U]);
                var_13 = ((/* implicit */unsigned int) (((_Bool)0) ? (-2927295503192267932LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-20689)))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((unsigned int) var_11)) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)252)) | (((/* implicit */int) var_10)))))))) ? (max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)24483)) : (((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-98))))))) : (((/* implicit */int) (unsigned char)136))));
}
