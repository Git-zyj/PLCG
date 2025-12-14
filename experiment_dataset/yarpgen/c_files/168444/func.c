/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168444
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
    var_12 = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) max((((/* implicit */unsigned short) var_2)), (var_5)))), ((+(var_0))))), (max((max((var_0), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) var_11))))));
    var_13 = ((/* implicit */signed char) max(((~(((/* implicit */int) max((var_4), (var_1)))))), (((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) max((max((50450080), (((/* implicit */int) (unsigned char)7)))), ((~(((/* implicit */int) arr_0 [i_0])))))))));
                var_15 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)244)))) * (((/* implicit */int) var_8))));
                var_16 = ((/* implicit */unsigned short) (-((((~(arr_2 [(signed char)9]))) / (arr_2 [i_0])))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) max((var_10), (((/* implicit */unsigned long long int) ((unsigned short) var_6)))));
}
