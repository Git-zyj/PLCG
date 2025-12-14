/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183812
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */long long int) var_5);
        arr_2 [i_0] = ((/* implicit */signed char) min(((+(((((/* implicit */int) var_10)) + (((/* implicit */int) var_9)))))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) == (max((var_8), (((/* implicit */long long int) var_9)))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 3; i_1 < 7; i_1 += 1) 
    {
        arr_6 [i_1 - 2] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_5))));
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (var_6)));
    }
    var_14 = ((/* implicit */_Bool) max((max(((~(((/* implicit */int) var_9)))), (((/* implicit */int) ((unsigned char) var_6))))), (((/* implicit */int) var_11))));
    var_15 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) min(((unsigned short)0), ((unsigned short)0)))) + (((((/* implicit */int) var_0)) << (((((/* implicit */int) (unsigned char)108)) - (100))))))), (((/* implicit */int) ((((var_0) ? (1548152655862472456ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4439))))) != (((/* implicit */unsigned long long int) 6993732088391954617LL)))))));
}
