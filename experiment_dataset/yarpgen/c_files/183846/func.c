/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183846
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
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)58375)) && (((/* implicit */_Bool) 761477336U)))))) : ((+(var_4)))));
                    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((_Bool) ((((/* implicit */int) (unsigned char)0)) - (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (_Bool)1)))))))))));
                    var_15 = (-(((/* implicit */int) (unsigned short)50045)));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(890605608216673437LL)))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) (+(var_9)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_2))))) : (((var_2) >> (((max((((/* implicit */int) var_7)), (var_9))) - (170)))))));
    var_17 = ((int) var_8);
}
