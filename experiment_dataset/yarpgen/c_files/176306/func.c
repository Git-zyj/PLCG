/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176306
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
    var_14 |= ((/* implicit */unsigned char) ((unsigned short) min((min((((/* implicit */long long int) var_7)), (var_0))), (((/* implicit */long long int) ((unsigned int) var_12))))));
    var_15 = ((/* implicit */unsigned int) max((((/* implicit */int) var_2)), ((((-(((/* implicit */int) var_4)))) / ((~(((/* implicit */int) (unsigned short)0))))))));
    var_16 = ((/* implicit */unsigned int) ((((var_0) & (((/* implicit */long long int) ((/* implicit */int) var_4))))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (-8920959722042960496LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))))))));
    var_17 = ((((((/* implicit */_Bool) 2813868027U)) ? (var_13) : (((/* implicit */unsigned long long int) (+(8920959722042960500LL)))))) & (((((((/* implicit */unsigned long long int) var_8)) != (var_6))) ? (((var_13) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_1 [i_0] [i_0])), (arr_0 [i_0])))) ? (((((((/* implicit */_Bool) var_3)) && (arr_1 [i_0] [i_0]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 6897630253597807226LL)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) : ((+(var_3))))) : (((/* implicit */long long int) ((arr_1 [i_0] [i_0]) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))))));
        var_19 = (!(((/* implicit */_Bool) arr_0 [i_0])));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) (unsigned short)13)) & (((/* implicit */int) (_Bool)1)))));
        var_21 -= ((/* implicit */unsigned int) 1323657596);
    }
}
