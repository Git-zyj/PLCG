/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132105
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            {
                arr_4 [i_0] [(unsigned char)8] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_0])), (394238007)))) ? (-394238002) : (((/* implicit */int) min((var_5), (arr_3 [i_0] [i_0] [i_1 + 3]))))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_11)), ((unsigned short)25)))) ? (((var_0) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */long long int) (-(((/* implicit */int) var_5))))))) : (((long long int) arr_3 [i_1 - 3] [i_1 - 3] [i_1 - 3]))));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */signed char) max((max((((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_2 [i_0] [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_15))))), (((/* implicit */long long int) var_2)))), (((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_1 + 3])) ? (arr_2 [i_1] [i_1] [i_1 + 3]) : (arr_2 [i_1] [i_1] [i_1 - 1])))));
                arr_6 [i_0] = ((/* implicit */signed char) arr_2 [i_0] [i_1 + 2] [i_1]);
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))))));
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) arr_0 [i_1]);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) (~((((-(var_12))) & (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)169)), (var_15)))))))));
    var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -6162160788820664330LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_0))))) << (((((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_15)))) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (((long long int) var_17))))));
}
