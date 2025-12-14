/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167166
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned char) ((signed char) (unsigned char)135))), ((unsigned char)115)));
                var_17 = ((/* implicit */unsigned char) min((min((min((-6278780102399735906LL), (((/* implicit */long long int) (unsigned char)0)))), (((/* implicit */long long int) (~(var_16)))))), (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_2 [i_0] [i_1])) && (((/* implicit */_Bool) var_1)))), (((((/* implicit */_Bool) (unsigned char)2)) && (((/* implicit */_Bool) var_12)))))))));
                var_18 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_9)) / (arr_1 [i_1] [i_0])))) ? (((arr_1 [i_1 + 3] [10LL]) / (arr_1 [i_1 + 1] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_4 [(unsigned char)1] [(unsigned char)1] [i_1])))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (((min((var_7), (((/* implicit */long long int) var_4)))) % (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65517)) / (((/* implicit */int) (unsigned short)65517))))))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
    var_20 = ((/* implicit */unsigned int) min((((((/* implicit */int) var_1)) / (((/* implicit */int) var_1)))), (((/* implicit */int) (unsigned short)65517))));
    var_21 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((var_15), (((/* implicit */unsigned long long int) var_8))))) || (((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_7)))))) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
}
