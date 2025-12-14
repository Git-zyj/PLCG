/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109229
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-24))) : (14690779005355630309ULL))) - (((((/* implicit */_Bool) arr_3 [i_0])) ? (min((3755965068353921307ULL), (3755965068353921307ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
        var_12 = ((/* implicit */short) ((min((493141396), (((/* implicit */int) (unsigned short)32676)))) | (((/* implicit */int) max((arr_1 [i_0]), (var_7))))));
    }
    var_13 = ((/* implicit */_Bool) (+(((var_10) ? (((/* implicit */unsigned long long int) ((var_1) % (((/* implicit */int) (short)5))))) : ((~(3755965068353921307ULL)))))));
    var_14 &= ((/* implicit */unsigned short) max((((/* implicit */int) var_7)), (((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */int) (!(var_4))))))));
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) var_2))));
}
