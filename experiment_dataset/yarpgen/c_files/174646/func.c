/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174646
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_0)), (var_3))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) || (((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) || ((!(((/* implicit */_Bool) var_13))))))));
    var_20 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (3802845879426492319LL) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? (min((var_6), (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11)))) % (((/* implicit */int) min((var_0), (((/* implicit */short) var_14))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                var_21 *= min((((/* implicit */unsigned int) ((((/* implicit */int) min((arr_0 [(short)12]), (((/* implicit */unsigned short) var_14))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(unsigned char)0])))))))), (((((/* implicit */_Bool) arr_2 [(unsigned short)12] [i_0])) ? (((((/* implicit */_Bool) arr_0 [14U])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [(short)3] [14]))) : (2U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [(signed char)2] [15ULL])) || (((/* implicit */_Bool) arr_2 [i_0] [i_1 - 1])))))))));
                arr_5 [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_2 [i_0 + 2] [i_0 + 2])) ? ((-(7U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))));
            }
        } 
    } 
}
