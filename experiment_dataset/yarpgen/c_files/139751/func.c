/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139751
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */int) max((((/* implicit */unsigned int) arr_4 [2])), (((((/* implicit */unsigned int) min((var_0), (((/* implicit */int) arr_1 [i_0] [i_0]))))) / (min((((/* implicit */unsigned int) 1071644672)), (952015641U)))))));
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_0 [i_0]))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) ((min((((/* implicit */unsigned int) var_0)), (var_5))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((var_6), (((/* implicit */unsigned long long int) 952015641U)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_4)));
    var_24 = ((/* implicit */unsigned short) var_5);
}
