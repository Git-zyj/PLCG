/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113589
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */int) ((long long int) arr_1 [i_0]));
        var_18 = ((/* implicit */signed char) arr_0 [i_0 + 1] [i_0]);
        var_19 = ((/* implicit */signed char) min((min((min((9LL), (((/* implicit */long long int) var_4)))), ((~(-9LL))))), (((/* implicit */long long int) (-(((/* implicit */int) min((var_16), ((short)30830)))))))));
    }
    for (unsigned int i_1 = 1; i_1 < 21; i_1 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) max(((-(4LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_1 - 1])))))));
        var_21 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) max((arr_1 [i_1 + 1]), (((/* implicit */unsigned short) arr_0 [i_1 + 1] [(unsigned char)10]))))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */long long int) var_11))))) ? (((unsigned int) var_0)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_1]))))))));
    }
    var_22 = ((/* implicit */unsigned long long int) var_1);
    var_23 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(((((/* implicit */_Bool) 6768168540701412637LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))), (var_7)));
}
