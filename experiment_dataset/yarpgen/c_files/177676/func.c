/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177676
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)141)) ? (((/* implicit */unsigned long long int) arr_4 [i_1 + 1] [i_0] [i_1 + 1])) : (17989059344439551984ULL)))) ? (((/* implicit */unsigned long long int) ((int) (unsigned char)20))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) | (17989059344439551984ULL)))) ? ((~(arr_2 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)3)), ((unsigned short)65535))))))))))));
                arr_5 [i_1] [i_0] [i_0] &= ((/* implicit */int) min((min((var_7), (((/* implicit */unsigned long long int) arr_0 [i_1 - 1] [i_1 - 3])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-10))) : (2LL))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) var_1);
}
