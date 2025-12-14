/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108283
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((/* implicit */int) ((((/* implicit */int) var_12)) > (((/* implicit */int) (_Bool)1)))))));
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((-5229749990081639908LL), (-5229749990081639912LL))))))) : (min((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [14]) : (((/* implicit */int) var_4)))), (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_13)) - (63166)))))))));
    }
    for (unsigned short i_1 = 3; i_1 < 17; i_1 += 1) 
    {
        arr_7 [i_1] [i_1 + 1] = ((/* implicit */unsigned short) min((((long long int) 0)), (((/* implicit */long long int) max((max((arr_1 [i_1]), (((/* implicit */int) var_4)))), (((/* implicit */int) var_3)))))));
        var_17 = arr_1 [i_1];
        var_18 -= ((/* implicit */_Bool) max((((arr_1 [i_1 - 1]) - (arr_1 [i_1 + 1]))), (max((-1222524096), (arr_1 [i_1 - 1])))));
    }
    var_19 = ((/* implicit */short) var_5);
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) << (((var_5) - (7770085967029281198LL)))));
}
