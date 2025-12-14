/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188381
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
    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) var_12))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_14 += ((/* implicit */signed char) min((((unsigned short) max((arr_0 [i_0]), (arr_0 [i_0])))), (((/* implicit */unsigned short) var_5))));
                var_15 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)209)) & (arr_2 [i_0] [i_0])))) ? (min((var_1), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_3 [i_0] [i_0])))))), (((/* implicit */unsigned long long int) min((min((((/* implicit */int) (unsigned char)252)), (-1948582377))), (((/* implicit */int) max((arr_0 [i_1]), (var_12)))))))));
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) min((min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0]))), (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */int) arr_3 [i_0] [i_1]))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)17)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (unsigned char)3)))) + (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)254)), ((unsigned short)42470))))))) : (min((((/* implicit */unsigned long long int) ((_Bool) var_11))), (var_0)))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((min((var_12), (((/* implicit */unsigned short) var_2)))), (max((var_12), (((/* implicit */unsigned short) var_4))))))) - (((/* implicit */int) ((short) min((var_12), (((/* implicit */unsigned short) var_2))))))));
}
