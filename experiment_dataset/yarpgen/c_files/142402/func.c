/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142402
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((1792480338U), (2502486947U)))) ? (((/* implicit */unsigned long long int) (+(1792480338U)))) : (max((((/* implicit */unsigned long long int) var_9)), (17592169267200ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_17)), (var_7))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_4) >= (-1899556858))))))))) : (((var_9) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((var_9) ? (((/* implicit */unsigned long long int) var_4)) : (var_11)))))));
    var_19 = var_12;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) + (((((/* implicit */_Bool) ((unsigned long long int) var_3))) ? (((((/* implicit */_Bool) 1792480338U)) ? (2502486957U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)249))))) : (min((1792480338U), (((/* implicit */unsigned int) arr_3 [i_1])))))))))));
                arr_5 [i_0] [i_0] = (~(((arr_4 [i_1] [i_0] [i_0]) ? (max((((/* implicit */unsigned int) var_2)), (var_3))) : (((/* implicit */unsigned int) ((int) (unsigned char)249))))));
                var_21 = ((/* implicit */int) (_Bool)1);
            }
        } 
    } 
}
