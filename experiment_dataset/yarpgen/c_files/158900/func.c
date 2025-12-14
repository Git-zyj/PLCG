/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158900
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
    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (527628809886716634ULL)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (9223372036854775788LL))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */long long int) (~(min((((/* implicit */int) (_Bool)1)), (var_3)))))) : (((var_10) ? (max((((/* implicit */long long int) var_5)), (var_4))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (var_6))))))))))));
    var_12 = ((/* implicit */_Bool) (-(((/* implicit */int) var_1))));
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) var_8))) | (((/* implicit */int) (!(var_9))))))) ? (((var_4) % (((/* implicit */long long int) ((((/* implicit */int) var_2)) / (((/* implicit */int) var_2))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9)))))))))));
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) var_2))))) ? (((/* implicit */int) var_10)) : ((+(((/* implicit */int) var_6))))))) / (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_6))) % (var_7)))) ? (((/* implicit */long long int) max((var_8), (var_3)))) : (var_4))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_15 = ((/* implicit */short) (-(var_7)));
        var_16 = ((/* implicit */unsigned short) max((var_16), (((unsigned short) arr_0 [i_0]))));
        var_17 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_10))));
        var_18 |= ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) >> (((/* implicit */int) var_10))))) ? (((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) (unsigned short)37490))))) : (((int) 18446744073709551615ULL)));
    }
}
