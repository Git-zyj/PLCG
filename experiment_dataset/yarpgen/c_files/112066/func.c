/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112066
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
    var_20 = min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(9223372036854775807LL)))) != (((unsigned long long int) var_3))))), (min((max((((/* implicit */unsigned int) var_3)), (var_14))), (((/* implicit */unsigned int) max((var_19), (var_5)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */int) min((min((((/* implicit */long long int) var_11)), (arr_1 [i_0]))), (min((arr_1 [i_0]), (((/* implicit */long long int) (-(4294967288U))))))));
        arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) min((var_0), (9223372036854775807LL)))) ? (max((4294967295U), (((/* implicit */unsigned int) var_11)))) : (var_12)))) >= (((9223372036854775806LL) + (((/* implicit */long long int) -1694297826))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1694297826)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) (unsigned char)98)))))) : (((unsigned int) var_1))));
        var_21 -= ((/* implicit */unsigned short) 9223372036854775807LL);
        var_22 = ((/* implicit */int) ((short) arr_1 [i_1]));
    }
    var_23 -= ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) var_16)))));
    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_6)))))))) ? (((long long int) ((-2566590033193914501LL) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */long long int) var_12))));
    var_25 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned int) max((((/* implicit */int) var_6)), (389706210)))), (((var_9) | (var_17))))), (var_7)));
}
