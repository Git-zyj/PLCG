/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146069
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
    var_19 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_17)) ? (max((((/* implicit */unsigned int) ((-460039593) / (var_1)))), (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) max((var_6), ((unsigned char)49)))) <= (((int) var_11))))))));
    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((5784521731477684854ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13519))))))));
    var_21 = ((/* implicit */int) (unsigned short)52016);
    /* LoopSeq 2 */
    for (long long int i_0 = 4; i_0 < 18; i_0 += 2) 
    {
        var_22 = min((min((((/* implicit */unsigned long long int) arr_0 [(unsigned short)5])), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) ^ (var_4))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(unsigned short)13])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) arr_0 [i_0 - 1]))))));
        var_23 = ((/* implicit */short) max((((((arr_1 [i_0] [i_0]) >> (((/* implicit */int) arr_2 [i_0])))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (unsigned short)13520)) : (((/* implicit */int) arr_0 [i_0]))))))), (max((var_9), (((/* implicit */unsigned int) (unsigned short)32768))))));
        var_24 *= ((/* implicit */signed char) (+((-(((/* implicit */int) arr_2 [i_0 - 2]))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_25 = ((/* implicit */unsigned char) max(((unsigned short)52029), (((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_1])) < (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6)))))))));
        var_26 = ((/* implicit */short) (+(min((((/* implicit */int) (unsigned short)51993)), ((-(((/* implicit */int) var_17))))))));
    }
}
