/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172387
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
    var_15 &= min(((+(max((((/* implicit */long long int) (unsigned char)140)), (var_8))))), (((/* implicit */long long int) ((short) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_7)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        var_16 = ((/* implicit */short) (~(((/* implicit */int) var_2))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_0 [i_0 - 3] [i_0 - 3]) : (((/* implicit */int) (unsigned char)53))))) ? (((/* implicit */int) (unsigned char)129)) : (((/* implicit */int) (unsigned char)140))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_17 = ((/* implicit */long long int) arr_1 [i_1]);
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) arr_0 [(signed char)0] [15U]))));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) (unsigned short)39181)))));
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) -1LL))))) ? ((+(var_8))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (var_2))))))) != (((/* implicit */long long int) ((/* implicit */int) ((short) var_4)))))))));
    }
    var_20 -= ((/* implicit */unsigned short) ((var_14) != (((/* implicit */long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) (short)16368))))), (max((((/* implicit */unsigned int) (unsigned short)39181)), (var_11))))))));
    var_21 = ((/* implicit */int) ((((var_11) - (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) >> (((((/* implicit */int) var_3)) + (13736)))));
}
