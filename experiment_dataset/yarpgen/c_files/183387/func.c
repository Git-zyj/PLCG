/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183387
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_18 = min(((~(var_11))), (((/* implicit */unsigned int) ((signed char) arr_1 [i_0]))));
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (signed char)-117))));
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */int) ((unsigned short) min((var_17), (((/* implicit */long long int) var_12)))))) != (min((((/* implicit */int) ((var_14) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))), (((((/* implicit */int) var_5)) << (((((/* implicit */int) var_10)) - (223)))))))));
        var_20 -= ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) var_7)) - (34))))), (((/* implicit */int) var_10))));
        var_21 = ((/* implicit */int) min((((((/* implicit */unsigned long long int) 1176676391517626221LL)) - (var_16))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11)))))));
    }
    var_22 = ((/* implicit */unsigned long long int) var_17);
    var_23 = ((/* implicit */unsigned short) ((min((min((var_13), (((/* implicit */unsigned long long int) var_17)))), (min((((/* implicit */unsigned long long int) var_1)), (var_13))))) != (((/* implicit */unsigned long long int) min((((/* implicit */int) ((-712397505) != (((/* implicit */int) (signed char)-24))))), (-859989142))))));
}
