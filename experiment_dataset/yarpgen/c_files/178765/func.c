/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178765
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) var_17))))) ? (((/* implicit */int) (unsigned short)54955)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_11)) : (((int) var_2))));
    var_21 = ((/* implicit */long long int) (~(((/* implicit */int) var_2))));
    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) min((var_16), (max(((~(((/* implicit */int) (unsigned short)54941)))), (((/* implicit */int) (unsigned short)10581)))))))));
    var_23 = ((/* implicit */short) ((_Bool) var_11));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_24 *= ((/* implicit */unsigned long long int) (signed char)35);
        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) arr_2 [i_0]))));
        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) max((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)127))) / (((((/* implicit */_Bool) arr_2 [i_0])) ? (var_6) : (arr_0 [i_0]))))), (((/* implicit */long long int) ((((arr_2 [i_0]) >= (((/* implicit */int) (unsigned char)124)))) ? ((+(1158154756U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [(unsigned char)13] [i_0])))))))))))));
        var_27 += ((/* implicit */signed char) (unsigned short)54916);
    }
}
