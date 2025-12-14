/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1221
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
    var_17 = ((/* implicit */short) (((!((!(((/* implicit */_Bool) var_10)))))) ? (((((((/* implicit */int) (signed char)115)) >= (((/* implicit */int) var_15)))) ? (((/* implicit */int) ((_Bool) (short)(-32767 - 1)))) : ((-(-2147483639))))) : (2147483623)));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483639)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (short)20943)))))) ? (((/* implicit */int) var_11)) : ((+(var_16))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (-8702594463727471701LL) : (((/* implicit */long long int) -2147483639))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)27020))))));
        var_19 = ((/* implicit */signed char) ((var_8) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_10)))))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) * (((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_1 [i_0] [i_0])), (var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) (unsigned char)50)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))))))));
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_4 [i_1] [(unsigned short)6]))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) + (7U)))) ? (-57448034) : (((/* implicit */int) arr_5 [i_1] [i_1]))))));
        arr_7 [i_1] = ((((((/* implicit */_Bool) arr_4 [i_1] [i_1])) && (((/* implicit */_Bool) var_14)))) ? (((/* implicit */int) ((unsigned short) arr_4 [i_1] [i_1]))) : (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1] [i_1])) == (var_6)))));
        arr_8 [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_13)) << (((/* implicit */int) arr_5 [i_1] [i_1])))) ^ (((var_16) & (((/* implicit */int) arr_5 [i_1] [i_1]))))));
    }
    var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (unsigned short)31686)) : (((/* implicit */int) (unsigned char)15))))))))));
}
