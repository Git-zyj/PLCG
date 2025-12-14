/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169524
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
    var_17 |= ((/* implicit */signed char) min((((/* implicit */unsigned int) max((((var_15) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_6)))), (((/* implicit */int) var_12))))), (((((/* implicit */_Bool) var_5)) ? (max((((/* implicit */unsigned int) var_9)), (var_2))) : (((/* implicit */unsigned int) min((var_3), (((/* implicit */int) var_15)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_18 = ((/* implicit */long long int) (+(max((((/* implicit */int) var_15)), ((+(((/* implicit */int) var_11))))))));
        var_19 = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_0)))), (((/* implicit */int) max((var_12), (var_12))))));
    }
    var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_10))))), (var_13)))), (max((min((var_2), (((/* implicit */unsigned int) var_12)))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_11)))))))));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((var_2), (((/* implicit */unsigned int) var_5)))), (((/* implicit */unsigned int) var_5))))) ? (min((var_1), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))))))) : (((/* implicit */long long int) min((((/* implicit */int) var_0)), (min((var_3), (var_9))))))));
    /* LoopSeq 1 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [(unsigned char)8] [i_1] = ((/* implicit */signed char) var_15);
        var_22 = ((/* implicit */unsigned char) (+(var_1)));
        arr_7 [i_1] = ((/* implicit */short) var_10);
    }
}
