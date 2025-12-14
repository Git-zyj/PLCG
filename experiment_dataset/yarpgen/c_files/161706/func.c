/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161706
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
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) -4120344882295805207LL)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) var_17)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (-(var_12))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) ((((/* implicit */int) (short)13537)) >= (((/* implicit */int) arr_1 [i_0])))))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_0 [i_0])), (1321938223564725285LL)))) ? (((/* implicit */int) arr_1 [i_0])) : ((-(((/* implicit */int) arr_0 [i_0])))))) : (((/* implicit */int) var_9))));
        var_20 ^= ((/* implicit */unsigned short) (!((!(((((/* implicit */_Bool) (unsigned char)230)) || (((/* implicit */_Bool) arr_0 [11U]))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) /* same iter space */
    {
        var_21 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((arr_5 [i_1] [i_1]) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) arr_1 [i_1])))), ((-(((/* implicit */int) arr_0 [i_1]))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [18ULL] [18ULL]))) : ((~(((((/* implicit */_Bool) (unsigned char)136)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : (var_12)))))));
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_0 [(short)18])) : (((/* implicit */int) arr_1 [i_1]))))))))))));
    }
    var_23 ^= ((/* implicit */short) (!(((/* implicit */_Bool) var_10))));
    var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_1)))))));
}
