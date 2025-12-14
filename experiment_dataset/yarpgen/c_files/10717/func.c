/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10717
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
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned short)24657)) : (((/* implicit */int) var_15))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 412235643U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10))))) : (max((3882731671U), (((/* implicit */unsigned int) var_12))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned int) (unsigned short)31664);
                var_20 = min((max(((-(var_13))), ((~(arr_5 [i_0] [i_0]))))), (((/* implicit */long long int) ((((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0])) == (min((((/* implicit */long long int) arr_1 [i_0] [i_0])), (var_13)))))));
            }
        } 
    } 
}
