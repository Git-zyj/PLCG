/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166636
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [(unsigned char)0] &= ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) var_5)))));
        var_11 |= ((/* implicit */_Bool) (unsigned char)38);
    }
    for (unsigned char i_1 = 2; i_1 < 11; i_1 += 4) 
    {
        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)217))))) ? (((/* implicit */int) ((short) arr_6 [i_1 - 2] [(signed char)3]))) : (((/* implicit */int) max(((unsigned char)49), (((/* implicit */unsigned char) (signed char)85)))))));
        arr_7 [i_1] [i_1] |= ((/* implicit */unsigned short) (~(((/* implicit */int) var_5))));
        arr_8 [i_1 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */unsigned char) var_9)), ((unsigned char)211)))), (max((((/* implicit */long long int) (signed char)-85)), (1184946106562438645LL)))))) ? (((/* implicit */int) ((short) var_8))) : (((/* implicit */int) ((_Bool) (~(((/* implicit */int) (signed char)99))))))));
    }
    var_13 = max((var_10), (((/* implicit */short) var_9)));
}
