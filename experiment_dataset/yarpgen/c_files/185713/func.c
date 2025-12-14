/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185713
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
    var_15 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) & (-24LL)))) | (((unsigned long long int) -6898963988849984800LL))));
        arr_5 [(unsigned short)6] |= ((/* implicit */long long int) min((((/* implicit */int) var_1)), ((~(((/* implicit */int) arr_2 [(_Bool)1]))))));
        var_16 = ((/* implicit */unsigned long long int) (+(min((((/* implicit */int) var_1)), (var_12)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        var_17 -= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_6)) ? (7659355134573921973LL) : (var_7))), ((~(var_7)))))) ? (((((/* implicit */_Bool) 1572221190U)) ? (((/* implicit */int) (unsigned short)0)) : ((~(var_12))))) : ((((~(((/* implicit */int) (unsigned char)228)))) ^ (((((/* implicit */int) (unsigned short)2)) | (((/* implicit */int) var_1))))))));
        var_18 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_8 [i_1] [i_1]) : (arr_6 [i_1])))));
        arr_9 [i_1] = ((/* implicit */unsigned long long int) ((((-530984408745270490LL) | (((/* implicit */long long int) ((((/* implicit */_Bool) 1325996122)) ? (((/* implicit */int) (_Bool)1)) : (var_12)))))) | (((/* implicit */long long int) ((unsigned int) arr_3 [i_1])))));
    }
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)7298))))) ? (min((((/* implicit */long long int) 0U)), (530984408745270490LL))) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
}
