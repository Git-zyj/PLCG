/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128816
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
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) min((min((((((/* implicit */int) var_18)) | (((/* implicit */int) (unsigned short)12767)))), (min((((/* implicit */int) var_1)), (var_11))))), (((((((/* implicit */int) var_13)) >= (var_11))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)12789)) || (((/* implicit */_Bool) (unsigned short)12789))))) : (((/* implicit */int) ((short) (_Bool)1)))))));
        arr_3 [i_0] [i_0 + 1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_18))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_6), (((/* implicit */signed char) arr_0 [i_0 + 1] [i_0 + 1])))))) : (((((/* implicit */_Bool) var_4)) ? (6125943407797278798ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))) << (((/* implicit */int) min((min((((/* implicit */unsigned short) (signed char)85)), (arr_1 [i_0] [i_0]))), (((/* implicit */unsigned short) max((var_5), ((_Bool)1)))))))));
    }
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((var_15) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_6))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (-2043517378) : (((/* implicit */int) (signed char)-1)))) != (((/* implicit */int) (signed char)0))))) : (((/* implicit */int) var_12)))))));
}
