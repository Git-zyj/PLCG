/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130040
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)8))) : (3724025298U)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) var_19)) ? (((/* implicit */long long int) ((/* implicit */int) (short)2048))) : (1279789057637770759LL)))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248))) : (1056964608U)));
    }
    var_21 = ((/* implicit */_Bool) 11084827466007096915ULL);
    var_22 = ((/* implicit */short) ((_Bool) min((((((/* implicit */_Bool) 3238002688U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4432))) : (var_18))), (((/* implicit */unsigned long long int) min((var_17), (var_1)))))));
}
