/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117975
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
    var_16 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_5))));
    var_17 += ((/* implicit */int) ((_Bool) var_2));
    var_18 = var_0;
    var_19 = ((/* implicit */unsigned short) var_4);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) 1174691789))));
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) (_Bool)0))))))) ? (((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (var_2)))) ? (arr_2 [i_0]) : ((~(((/* implicit */int) (_Bool)1)))))) : (max((arr_2 [i_1]), (arr_2 [i_0]))))))));
            }
        } 
    } 
}
