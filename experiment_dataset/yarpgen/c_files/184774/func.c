/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184774
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
    var_19 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned short) var_6)), (var_2)));
    var_20 ^= ((/* implicit */unsigned short) var_12);
    var_21 = ((((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */long long int) var_15)) : (32767LL))) << (((((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (min((1877939005331635464LL), (1877939005331635464LL))))) - (43808LL))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            {
                var_22 = ((/* implicit */unsigned char) max((max((min((((/* implicit */long long int) var_1)), (arr_1 [i_0]))), (((/* implicit */long long int) min((arr_5 [(short)11] [i_1]), (((/* implicit */int) arr_0 [i_0]))))))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_2 [i_1]))))), (((1877939005331635464LL) + (((/* implicit */long long int) ((/* implicit */int) (short)25924)))))))));
                var_23 += ((/* implicit */signed char) max((max((((/* implicit */unsigned int) var_2)), (arr_2 [i_1 - 2]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1 + 2] [(unsigned char)16])) ? (max((((/* implicit */int) var_2)), (var_8))) : (((/* implicit */int) max((var_7), (var_7)))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) ((unsigned short) var_15));
}
