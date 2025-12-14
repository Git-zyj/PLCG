/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10103
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
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6)))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 2])) ? (arr_0 [i_0 + 3] [i_0 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))), (((long long int) var_2))));
        var_17 = ((/* implicit */int) min((var_17), ((-((~(((/* implicit */int) var_1))))))));
    }
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) var_14))));
    var_19 = ((/* implicit */signed char) max(((-(((int) var_3)))), (((/* implicit */int) max((var_11), (((/* implicit */unsigned char) ((((/* implicit */int) var_12)) >= (((/* implicit */int) (unsigned char)0))))))))));
}
