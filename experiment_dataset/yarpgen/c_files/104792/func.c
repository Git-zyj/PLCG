/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104792
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
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */int) var_10)) - (((/* implicit */int) max((((/* implicit */short) (signed char)95)), (var_5)))))))));
    var_21 += ((/* implicit */int) var_11);
    var_22 = ((/* implicit */_Bool) min(((+(((var_8) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_4)) : (17471569600938802637ULL))) == (((/* implicit */unsigned long long int) min((var_19), (((/* implicit */int) (_Bool)0))))))))));
    var_23 = ((/* implicit */unsigned int) ((var_3) < (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) << (((1131176059) - (1131176036))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_24 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) var_10)) - (((/* implicit */int) ((short) arr_0 [i_0])))))), (((((/* implicit */_Bool) var_2)) ? (((arr_1 [i_0]) + (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) : (arr_1 [i_0])))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */signed char) arr_0 [i_0])), ((signed char)95)))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned char)255)))))))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) arr_3 [i_0]))))))));
        var_25 = ((((/* implicit */_Bool) (unsigned char)206)) ? (-798186788) : (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))))))));
        var_26 = arr_1 [i_0];
    }
}
