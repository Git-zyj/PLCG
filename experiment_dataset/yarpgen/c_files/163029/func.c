/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163029
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
    var_10 *= ((/* implicit */short) max((((/* implicit */long long int) var_0)), ((+(var_4)))));
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) min((var_7), (var_0)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_9))))) : (((/* implicit */int) max((var_6), (var_8)))))) : (((/* implicit */int) ((unsigned char) ((unsigned int) (short)-6128))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [10] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (short)6123))) & (9007199254739968LL))) ^ (((/* implicit */long long int) (~(var_7))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 1893192459U)) || ((_Bool)1)))) : (((int) (+(((/* implicit */int) arr_1 [(short)11] [i_1])))))));
                var_12 = ((/* implicit */_Bool) var_5);
                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6148)) ? (2631141729U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39732)))));
            }
        } 
    } 
}
