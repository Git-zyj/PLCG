/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140244
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
    var_18 = ((/* implicit */_Bool) (+(var_16)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_19 -= ((/* implicit */short) (-(((/* implicit */int) var_12))));
                    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) ((((/* implicit */int) (short)-7516)) >= (268434944)))) : (((/* implicit */int) var_17))))), (((((/* implicit */_Bool) arr_4 [(signed char)3])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_1 [i_0] [i_0]))))))));
                    arr_8 [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (arr_4 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1] [i_1] [i_2])))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (arr_5 [i_0 - 1]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_3)))))))));
                    var_21 -= ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2]))) : (var_16)))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) arr_5 [i_1])) : (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))), (((/* implicit */unsigned long long int) arr_3 [i_0]))));
                }
            } 
        } 
    } 
    var_22 = ((var_8) == (((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_0)), (var_16))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
}
