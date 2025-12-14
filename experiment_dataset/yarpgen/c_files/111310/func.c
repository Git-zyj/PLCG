/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111310
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
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) var_13))));
        var_15 += ((/* implicit */_Bool) min((((((/* implicit */int) var_6)) / (((/* implicit */int) ((signed char) arr_0 [i_0] [(signed char)5]))))), (min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-4)))), (((/* implicit */int) arr_1 [i_0]))))));
        var_16 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_1 [i_0]))));
    }
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)255)))))));
    var_18 &= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)185)) % (((/* implicit */int) (_Bool)1))));
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (+(((var_5) ? (((/* implicit */int) min(((signed char)114), (((/* implicit */signed char) var_7))))) : (((/* implicit */int) var_2)))))))));
    var_20 = ((/* implicit */signed char) ((((((/* implicit */int) (_Bool)1)) / ((-(((/* implicit */int) (signed char)35)))))) - (((/* implicit */int) ((((/* implicit */int) min((var_0), (var_4)))) != (((/* implicit */int) max((var_4), (var_11)))))))));
}
