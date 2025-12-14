/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185845
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
    var_20 = ((/* implicit */long long int) min((((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) > (var_14)))), (((/* implicit */unsigned long long int) var_8))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)194)) && (((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) min(((unsigned short)28748), (((/* implicit */unsigned short) var_16))))))))));
                var_22 = ((/* implicit */unsigned short) (-(((((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) < (((/* implicit */int) (unsigned char)46))))) << (((((/* implicit */int) (unsigned char)255)) - (224)))))));
                var_23 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) max((((((/* implicit */int) (_Bool)0)) >> (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((var_10), (((/* implicit */unsigned short) arr_1 [i_0]))))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (min((((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) var_15))))), (((((/* implicit */_Bool) (unsigned short)1112)) ? (var_17) : (((/* implicit */int) var_15)))))) : (((/* implicit */int) max((var_16), (((/* implicit */signed char) var_18)))))));
    var_25 = ((unsigned short) ((var_14) < (0ULL)));
}
