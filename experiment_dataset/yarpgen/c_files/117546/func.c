/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117546
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
    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)5152)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) > (1964313306U)))))))));
    var_21 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)61649))))) ? (((unsigned long long int) var_11)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))), (((/* implicit */unsigned long long int) (unsigned short)2165))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned int) var_2);
        var_23 = ((/* implicit */unsigned char) ((unsigned short) max((var_12), (((/* implicit */unsigned int) arr_0 [i_0] [i_0])))));
        var_24 = ((/* implicit */_Bool) max((var_24), (((((/* implicit */int) ((-4136717988008833689LL) >= (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)20)))))))) >= ((+(((/* implicit */int) arr_0 [i_0] [i_0]))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) var_8))));
        var_26 = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_4)), (max((((/* implicit */long long int) max((arr_0 [4U] [i_1]), (((/* implicit */unsigned short) arr_5 [i_1]))))), (min((1412583307198825120LL), (((/* implicit */long long int) var_15))))))));
        arr_6 [i_1] [i_1] = ((/* implicit */int) arr_5 [i_1]);
        var_27 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) 1412583307198825120LL))) ? (((/* implicit */int) (unsigned char)169)) : (min((((/* implicit */int) (!(var_15)))), ((~(((/* implicit */int) (unsigned short)2166))))))));
    }
    var_28 = ((/* implicit */unsigned short) (~((-(max((var_12), (398862053U)))))));
}
