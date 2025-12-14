/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161585
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
    var_18 = ((/* implicit */long long int) var_17);
    var_19 = ((/* implicit */unsigned int) var_6);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_4 [(unsigned short)2] [i_0] = ((/* implicit */unsigned int) max(((((!(((/* implicit */_Bool) (unsigned short)896)))) ? (((((/* implicit */_Bool) var_8)) ? (var_9) : (arr_3 [i_0] [i_0]))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0]))))))), (max((max((var_9), (arr_3 [i_0] [(short)3]))), (((((/* implicit */_Bool) 481306008U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48610))) : (arr_3 [i_0] [i_0])))))));
        var_20 = max((((/* implicit */long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)65535))))), (2273582345U)))), (((((/* implicit */_Bool) (~(-6246057137739056207LL)))) ? (max((var_2), (arr_3 [i_0] [(signed char)9]))) : (((/* implicit */long long int) ((/* implicit */int) min((var_5), ((unsigned short)65519))))))));
        var_21 -= ((/* implicit */long long int) (~(((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned short)53013)) : (((/* implicit */int) (unsigned short)12518))))));
        arr_5 [i_0] = ((/* implicit */_Bool) (~(min((max((((/* implicit */long long int) (unsigned short)12540)), (var_9))), (((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_0])))))))));
    }
}
