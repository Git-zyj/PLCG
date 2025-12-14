/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145825
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_4 [i_0] [i_0] [(signed char)14]) - (((/* implicit */long long int) (-(arr_2 [i_1]))))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)8))) : (max((var_4), (((/* implicit */long long int) (unsigned char)83))))));
                arr_6 [(unsigned short)15] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1U))))) : (((/* implicit */int) arr_0 [i_1]))))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))) : (var_3))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)22))));
                var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (arr_4 [i_0] [i_0] [i_1]) : (var_0))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) < (var_3)))))), (((((/* implicit */_Bool) var_9)) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) (unsigned char)254))))));
    var_20 = ((/* implicit */_Bool) 1140912383U);
    var_21 -= max((((((/* implicit */_Bool) var_1)) ? (max((var_14), (((/* implicit */unsigned long long int) (unsigned char)128)))) : (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) var_5)));
    var_22 = ((/* implicit */signed char) var_7);
}
