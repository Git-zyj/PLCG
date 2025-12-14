/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111350
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */int) var_9)) << (((((/* implicit */int) (signed char)97)) - (76)))));
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_9), (var_15)))) ? (((6508631181608648074ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15690))))) : (((/* implicit */unsigned long long int) min((min((var_4), (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_10)))))));
    var_18 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((((/* implicit */int) var_9)), (((((/* implicit */_Bool) 8306737243882374544ULL)) ? (((/* implicit */int) (short)-15690)) : (-972578813)))))), (10140006829827177072ULL)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) == (max((((/* implicit */int) arr_1 [i_0])), (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)-13)) : (((/* implicit */int) (signed char)19))))))));
        var_19 = (signed char)127;
    }
    var_20 = ((unsigned short) var_10);
}
