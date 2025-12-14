/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184057
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_13 ^= (+(((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (_Bool)0)))) - (((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_0 [(_Bool)1])))))));
        arr_3 [(unsigned short)0] [i_0] = ((/* implicit */int) var_5);
    }
    var_14 = ((/* implicit */_Bool) max((max((max((((/* implicit */int) (unsigned char)0)), (var_12))), (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (var_9)))))), (((((((/* implicit */int) var_4)) - (var_7))) % (var_7)))));
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (max((((/* implicit */int) (unsigned char)48)), (var_7))) : (((((/* implicit */int) var_8)) | (((/* implicit */int) var_3))))))) ? (((/* implicit */int) ((max((((/* implicit */int) var_0)), (var_1))) <= (((/* implicit */int) (!(var_6))))))) : (var_11)));
}
