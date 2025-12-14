/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138001
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
    var_16 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? ((~(((/* implicit */int) (unsigned char)202)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (var_14)))))) ? (((((/* implicit */long long int) (-(1138812777)))) ^ (((((/* implicit */long long int) ((/* implicit */int) var_2))) - (var_3))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */long long int) var_14)) > (1791849992428269471LL)))))))));
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65393)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))) : (((((/* implicit */_Bool) var_14)) ? (15360246404643262921ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned short)65395)))))))) : (((/* implicit */int) ((unsigned short) (+(var_14)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] &= ((/* implicit */_Bool) var_15);
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) % (2754313814U)))) ? (var_1) : (var_0)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (max((var_3), (var_3))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) > (var_10))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (var_0) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (unsigned short)142)))))))));
        var_19 = ((unsigned int) var_15);
        var_20 = ((/* implicit */unsigned short) var_2);
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) max((var_6), (var_8))))));
    }
}
