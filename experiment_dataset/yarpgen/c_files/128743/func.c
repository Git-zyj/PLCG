/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128743
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
    var_12 = ((/* implicit */unsigned short) var_6);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((2668339050649841634LL), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))))) : (15303348237057548864ULL)))) ? (14811790635213884259ULL) : (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */int) (_Bool)1)))))));
                arr_7 [(signed char)5] = ((/* implicit */signed char) (+((+(arr_0 [(short)7])))));
                var_14 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_3 [i_1] [i_1])), ((+(1627344989U)))))) ? (((((/* implicit */_Bool) (short)12288)) ? ((+(((/* implicit */int) var_6)))) : (((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1] [i_1 + 1])))) : (((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (arr_0 [i_1 + 2]) : (arr_0 [i_1 + 3]))));
                arr_8 [(unsigned char)8] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) var_8))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (-1912288435)))) : ((~(arr_1 [i_0 + 1] [i_0 + 1])))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) var_10);
    var_16 = ((/* implicit */unsigned char) var_6);
    var_17 = ((/* implicit */short) var_7);
}
