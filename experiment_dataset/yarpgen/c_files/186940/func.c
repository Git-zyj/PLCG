/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186940
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
    for (signed char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_18 = ((/* implicit */short) ((signed char) max((((unsigned char) (short)734)), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)88))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)188)) && (((/* implicit */_Bool) (unsigned char)29)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)208)) || (((/* implicit */_Bool) (short)0))))) : (((/* implicit */int) ((signed char) (signed char)-125)))))) ? (((((((/* implicit */_Bool) (unsigned char)63)) || (((/* implicit */_Bool) (signed char)-119)))) ? (((/* implicit */int) max((var_0), (((/* implicit */unsigned char) (signed char)51))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)16986)) : (((/* implicit */int) (short)27551)))))) : (((/* implicit */int) arr_1 [(unsigned char)1] [(unsigned char)1]))));
        var_19 = ((/* implicit */signed char) max((((/* implicit */int) ((unsigned char) arr_1 [i_0 + 1] [i_0 + 2]))), ((-(((/* implicit */int) arr_0 [i_0 - 1] [(signed char)12]))))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) arr_0 [i_0 - 1] [i_0]))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0])))))));
        var_21 = ((unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_11))) ? (((((/* implicit */int) arr_1 [i_0] [i_0])) + (((/* implicit */int) arr_1 [(short)1] [i_0])))) : (((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) arr_1 [i_0] [i_0]))))));
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        var_22 = ((/* implicit */short) max((((((/* implicit */int) ((unsigned char) (unsigned char)114))) << (((((/* implicit */int) ((signed char) var_8))) + (24))))), (max((((/* implicit */int) (!(((/* implicit */_Bool) var_16))))), (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_4))))))));
        var_23 = ((unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)23937))))) ? (((/* implicit */int) max(((unsigned char)0), ((unsigned char)200)))) : (((((/* implicit */int) var_9)) | (((/* implicit */int) arr_6 [i_1]))))));
    }
    var_24 = var_11;
    /* LoopSeq 1 */
    for (unsigned char i_2 = 1; i_2 < 21; i_2 += 3) 
    {
        arr_11 [(unsigned char)11] = ((/* implicit */unsigned char) ((signed char) (unsigned char)135));
        arr_12 [(short)3] = ((/* implicit */signed char) var_6);
    }
}
