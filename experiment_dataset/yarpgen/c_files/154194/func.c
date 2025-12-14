/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154194
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_9 [i_2] = ((/* implicit */short) (+(((((/* implicit */int) var_13)) ^ (max((84072021), (var_19)))))));
                    var_20 += ((/* implicit */long long int) (unsigned short)65535);
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) / (var_19)))) ? (max((var_16), (((/* implicit */long long int) 1215733955U)))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39773))) : (var_16)))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) var_3);
    var_23 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (14590724634633302057ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 9002801208229888LL)))))), (max((var_3), (((((/* implicit */_Bool) -1462986519)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (var_7)))))));
    var_24 = ((/* implicit */unsigned short) var_2);
}
