/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100201
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
    var_20 = ((/* implicit */int) var_7);
    var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-116))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 961977676U))));
        var_22 = (~((((!(((/* implicit */_Bool) var_11)))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((~(1071508132U))), (((/* implicit */unsigned int) (unsigned short)5344))))) ? (arr_1 [(unsigned char)0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) max((min((((/* implicit */unsigned short) (_Bool)1)), (var_9))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))))))));
    }
}
