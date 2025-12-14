/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177992
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
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */_Bool) (short)25610)) ? (max(((~(((/* implicit */int) (short)25610)))), ((~(((/* implicit */int) (short)-25618)))))) : (((/* implicit */int) min(((short)-25624), (((/* implicit */short) (signed char)114))))))))));
    var_13 = ((/* implicit */_Bool) var_1);
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        var_14 += ((/* implicit */unsigned char) arr_2 [i_0 + 2]);
        arr_4 [i_0] = ((332321544U) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)25590))));
    }
    var_15 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_9)) ? (min((((/* implicit */unsigned int) (short)-4630)), (332321576U))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) & (((/* implicit */int) (short)-32744)))))))));
    var_16 = ((/* implicit */_Bool) ((unsigned char) var_1));
}
