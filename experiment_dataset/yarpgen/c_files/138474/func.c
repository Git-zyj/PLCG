/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138474
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
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 17; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((max((((var_4) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [(_Bool)1]))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) arr_1 [i_0] [i_0])), ((unsigned char)152)))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) var_10)) <= (var_8))) && (((/* implicit */_Bool) arr_0 [i_0 - 1]))))))));
        var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27822))) : (247165765U)))) > (max((var_13), (((/* implicit */unsigned long long int) (-(var_14))))))));
    }
    for (short i_1 = 1; i_1 < 17; i_1 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((((/* implicit */int) (unsigned char)104)) >= (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */long long int) (-(4294967295U)))) : (((min((arr_0 [12]), (((/* implicit */long long int) arr_5 [i_1])))) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1 + 1] [7])) && ((_Bool)1))))))))))));
        var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [(_Bool)1] [(_Bool)1])) + (((/* implicit */int) var_1))))) ? (((3856567947639776191LL) << (((/* implicit */int) var_5)))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_5 [i_1])), (var_11))))))) / (max((var_9), (((/* implicit */long long int) arr_3 [0ULL]))))));
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) arr_1 [15U] [i_1 + 1]))));
    }
    var_21 = ((/* implicit */int) var_7);
}
