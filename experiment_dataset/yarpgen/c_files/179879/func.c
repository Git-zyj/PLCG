/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179879
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (unsigned int i_2 = 4; i_2 < 10; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((unsigned int) ((unsigned char) var_12)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -6900613615594233708LL)) ? (-6900613615594233717LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)60)))))) ? (max((var_12), (((/* implicit */unsigned long long int) var_2)))) : (((((/* implicit */_Bool) (unsigned short)19842)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))))))));
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((unsigned long long int) -1LL)))));
                }
            } 
        } 
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) max((arr_5 [i_0] [i_0]), (((/* implicit */signed char) arr_2 [i_0]))))), (max((var_1), (((/* implicit */unsigned short) var_2))))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)197))) : (((((/* implicit */_Bool) arr_5 [(unsigned char)3] [i_0])) ? (min((((/* implicit */long long int) (unsigned short)19842)), (-6900613615594233717LL))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) 1071738758))))))));
    }
    var_18 = ((/* implicit */unsigned char) var_5);
}
