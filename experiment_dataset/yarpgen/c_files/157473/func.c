/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157473
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
    var_10 = ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) (short)-11160)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_3))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)22467)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))))))), (max((((((/* implicit */_Bool) (short)11186)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-11160))) : (1143082314U))), (((/* implicit */unsigned int) var_2))))));
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (max((((/* implicit */unsigned long long int) 15U)), (5ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(short)15])) ? (((/* implicit */int) (short)11159)) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) 1143082332U)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (short)11145))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-34)) ^ (((/* implicit */int) (_Bool)0)))))))), (min((((arr_0 [(_Bool)1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (min((((/* implicit */unsigned long long int) var_0)), (arr_0 [i_0])))))));
        var_13 = min((((/* implicit */unsigned int) (unsigned char)245)), (3151884998U));
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((7349807907531847551ULL), (((/* implicit */unsigned long long int) arr_1 [i_0]))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-31)), ((unsigned short)48)))) : (((/* implicit */int) (signed char)127))));
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) var_1);
        var_16 -= ((/* implicit */unsigned long long int) (unsigned short)10566);
        var_17 = (i_1 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)121)) ? (((((/* implicit */int) (unsigned short)25823)) << (((((/* implicit */int) arr_3 [i_1])) - (16725))))) : (((/* implicit */int) (short)32767))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)121)) ? (((((/* implicit */int) (unsigned short)25823)) << (((((((/* implicit */int) arr_3 [i_1])) - (16725))) - (10832))))) : (((/* implicit */int) (short)32767)))));
    }
}
