/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161389
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
    var_16 = ((/* implicit */unsigned char) (_Bool)1);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_4 [i_0 + 1] [16LL] [i_0] = ((/* implicit */signed char) max((max((min((3539968420U), (2021760261U))), (((/* implicit */unsigned int) (short)-8662)))), (((/* implicit */unsigned int) (-(((/* implicit */int) min((var_6), (var_10)))))))));
                var_17 = ((/* implicit */_Bool) max(((-(arr_3 [i_0 + 2]))), (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (arr_3 [i_0])))));
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */long long int) var_9)) ^ (var_5)))))) ? (6379526806296580072LL) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                arr_5 [i_0 - 1] [10LL] [i_1] = ((/* implicit */long long int) var_14);
            }
        } 
    } 
}
