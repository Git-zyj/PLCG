/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131465
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
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) var_1)) ? (2190104539U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned int) ((int) var_6))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) /* same iter space */
    {
        var_12 = ((/* implicit */int) ((-743653639069358095LL) - (((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))) + (((arr_1 [(unsigned char)9] [(unsigned char)9]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (3420821967U))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_1 [i_0] [i_0])) >> (((/* implicit */int) arr_1 [i_0] [(_Bool)1]))))));
    }
    for (signed char i_1 = 0; i_1 < 18; i_1 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) (unsigned char)183)) : ((-(((/* implicit */int) arr_0 [i_1])))))))));
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_1] [i_1])) - (((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((var_9) + (((/* implicit */int) var_7)))) : (((((/* implicit */int) var_5)) + (((/* implicit */int) var_3)))))))))));
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) min((((/* implicit */long long int) var_5)), ((~((+(arr_4 [i_1]))))))))));
        arr_5 [(signed char)10] = (((+(((/* implicit */int) var_3)))) + (((/* implicit */int) (signed char)0)));
    }
}
