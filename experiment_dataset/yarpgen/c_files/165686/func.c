/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165686
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
    var_17 = ((/* implicit */unsigned int) (+(4729685188686729016LL)));
    var_18 |= ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_16))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((-4729685188686729015LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) + (var_5)))))));
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) 735195848)) ? (((/* implicit */int) (signed char)119)) : (((/* implicit */int) (unsigned short)4095))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        var_20 = var_5;
        arr_3 [i_0] = ((/* implicit */_Bool) 137436856320ULL);
        arr_4 [i_0 + 1] |= 4193280LL;
        arr_5 [i_0] |= arr_0 [i_0 + 1] [i_0];
    }
}
