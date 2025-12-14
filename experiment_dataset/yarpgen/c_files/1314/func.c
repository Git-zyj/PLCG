/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1314
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
    var_12 = ((/* implicit */_Bool) min((var_4), (((/* implicit */short) (_Bool)1))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) (unsigned short)15)) | (((/* implicit */int) (unsigned char)234)))) : (((/* implicit */int) (unsigned short)13))));
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [15U])) ? (arr_0 [i_0]) : ((+(((/* implicit */int) (unsigned short)36409)))))))));
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        var_15 += ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)39896)) : (max(((((_Bool)0) ? (arr_0 [(unsigned short)2]) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max(((unsigned char)252), ((unsigned char)49))))))));
        var_16 *= ((/* implicit */unsigned short) var_6);
    }
}
