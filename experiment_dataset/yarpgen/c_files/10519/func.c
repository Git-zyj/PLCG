/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10519
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_12 -= ((/* implicit */unsigned short) ((((/* implicit */int) max(((unsigned short)65535), (arr_4 [i_0])))) == (((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_1])) < (((/* implicit */int) (unsigned short)5269)))))));
                var_13 = var_0;
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) (unsigned short)29102)) : ((-(((/* implicit */int) (unsigned short)23622)))))) : ((+(((/* implicit */int) var_1))))));
            }
        } 
    } 
    var_15 -= var_8;
    var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max(((unsigned short)21632), ((unsigned short)19035)))) ? (((/* implicit */int) max(((unsigned short)43913), ((unsigned short)42090)))) : ((+(((/* implicit */int) var_11)))))) << (((((/* implicit */int) var_1)) - (9070)))));
    var_17 &= ((/* implicit */unsigned short) ((((((/* implicit */int) var_4)) / (((/* implicit */int) ((unsigned short) (unsigned short)36434))))) * (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)42090))))) ? (((/* implicit */int) max(((unsigned short)29102), (var_9)))) : (((/* implicit */int) var_4))))));
}
