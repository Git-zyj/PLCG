/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112374
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
    var_17 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_2))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_1))))))), (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (signed char)3)))))))))))));
        arr_2 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned char)204), (((/* implicit */unsigned char) arr_1 [i_0] [i_0]))))) ? ((+(((/* implicit */int) arr_1 [i_0] [i_0])))) : ((+(((/* implicit */int) arr_1 [i_0] [i_0]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(unsigned short)12]))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0] [(unsigned short)13]))))) ? (var_2) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)26)) + (0)))))));
    }
    var_19 = ((/* implicit */unsigned int) max(((unsigned char)26), ((unsigned char)230)));
}
