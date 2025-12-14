/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14138
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
    var_20 = ((/* implicit */unsigned short) var_9);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_21 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) var_1)) ^ (((/* implicit */int) (unsigned char)220)))) : (((/* implicit */int) ((unsigned char) (unsigned char)102))))));
        arr_3 [8LL] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_4)), ((unsigned short)43297)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) var_15))))))), (((/* implicit */int) (unsigned char)35))));
        var_22 -= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)46262)) | (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21920))) : (arr_2 [i_0])))));
    }
}
