/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153687
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
    var_20 = ((((/* implicit */_Bool) var_0)) ? ((~(min((var_9), (((/* implicit */int) (signed char)-8)))))) : (((/* implicit */int) var_13)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_4 [i_0] [5ULL] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (arr_1 [i_1]))), (((/* implicit */unsigned int) (short)-6700))))) ? (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))))), (max((((/* implicit */unsigned long long int) var_16)), (var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)65)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)136))) : (arr_1 [i_1]))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [(signed char)16])))))))));
                arr_5 [i_1] [i_0] = ((/* implicit */unsigned long long int) ((arr_1 [i_0]) >= (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) -3903583178581941973LL);
    var_22 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (-(251722865U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_14)))) : (((((/* implicit */_Bool) var_13)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0)))) & (((/* implicit */int) ((((/* implicit */_Bool) (short)13799)) && (((/* implicit */_Bool) var_7))))))))));
    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */unsigned long long int) min((var_5), (((/* implicit */long long int) max((var_8), (((/* implicit */unsigned int) var_13))))))))));
}
