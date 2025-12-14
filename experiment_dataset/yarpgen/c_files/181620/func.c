/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181620
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
    var_19 = ((/* implicit */unsigned char) var_3);
    var_20 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) max((330151192U), (((/* implicit */unsigned int) -940748059))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(var_15))))) : ((-(var_17))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0] [i_0])))));
        var_22 = arr_1 [i_0] [i_0];
        arr_2 [i_0] = ((/* implicit */signed char) ((unsigned int) max((var_8), (var_17))));
    }
    var_23 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */long long int) var_0)) + (7022490130544712628LL)))) && (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) >= (4104440927339574775ULL))))) ? (330151189U) : (((/* implicit */unsigned int) max((var_14), (((((/* implicit */int) var_6)) + (var_5))))))));
}
