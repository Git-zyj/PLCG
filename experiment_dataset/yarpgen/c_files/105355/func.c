/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105355
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
    var_13 &= ((/* implicit */unsigned char) var_10);
    var_14 = ((/* implicit */int) ((((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((var_7) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_1))))) <= (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) <= (var_2)))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) 3865039150741221928ULL);
        arr_4 [i_0] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)19)) || (((/* implicit */_Bool) (unsigned short)30561)))) ? (16108709165365289096ULL) : (((/* implicit */unsigned long long int) ((long long int) (signed char)37)))))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) 0)) && (((/* implicit */_Bool) var_6))))))) : (var_8));
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) 894676706))));
    }
    for (int i_1 = 3; i_1 < 14; i_1 += 1) 
    {
        var_16 = ((/* implicit */signed char) max((((((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_6 [i_1 - 3]) : (((/* implicit */long long int) var_0)))) + (((arr_6 [i_1]) - (arr_6 [(unsigned short)11]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) -74393167)) || (((/* implicit */_Bool) min(((unsigned short)62382), ((unsigned short)3155)))))))));
        arr_7 [i_1 - 2] = ((/* implicit */unsigned long long int) max((-2), (((/* implicit */int) max(((signed char)63), (arr_5 [i_1 - 1]))))));
    }
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (+(((((/* implicit */long long int) max((((/* implicit */int) var_7)), (2)))) / (min((((/* implicit */long long int) (signed char)91)), (var_1))))))))));
}
