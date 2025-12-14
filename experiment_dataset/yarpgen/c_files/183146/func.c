/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183146
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
    var_14 = ((/* implicit */signed char) max((min((((/* implicit */int) var_1)), (((((/* implicit */int) (signed char)84)) | (((/* implicit */int) var_0)))))), (min((((((/* implicit */int) (signed char)(-127 - 1))) & (((/* implicit */int) (signed char)22)))), ((~(((/* implicit */int) (signed char)25))))))));
    var_15 += ((/* implicit */signed char) ((((/* implicit */_Bool) min(((-(((/* implicit */int) var_8)))), ((~(((/* implicit */int) (signed char)0))))))) ? (((/* implicit */int) var_6)) : (min((((/* implicit */int) (signed char)4)), (((((/* implicit */int) (signed char)118)) >> (((((/* implicit */int) var_1)) + (24)))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)-76)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (signed char)24)))))) + (((/* implicit */int) (signed char)115))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0 - 1])) - ((-(((/* implicit */int) var_4))))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) ((((/* implicit */int) (signed char)-89)) * (((/* implicit */int) arr_1 [(signed char)20])))))) * (((((/* implicit */int) arr_0 [i_0 - 1])) / (((/* implicit */int) arr_0 [i_0 - 1]))))));
        var_16 *= arr_0 [i_0];
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_1 [i_0]))) && (((/* implicit */_Bool) ((signed char) (signed char)74)))))))))));
    }
}
