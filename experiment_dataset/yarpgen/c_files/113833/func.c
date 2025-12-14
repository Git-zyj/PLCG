/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113833
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
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)127)), (var_8))))))), ((+(((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */unsigned long long int) var_13)))))))))));
    var_16 = var_11;
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_17 *= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_8)))));
                var_18 = ((/* implicit */long long int) min((min((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)129)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61468))) : (arr_0 [i_0 + 1])))))), (((unsigned long long int) ((short) arr_3 [i_0] [i_0])))));
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))))), (((long long int) var_8)))));
            }
        } 
    } 
    var_19 -= ((/* implicit */unsigned short) (unsigned char)129);
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)149)))))))) ? (((var_6) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_4)))))));
}
