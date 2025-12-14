/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1183
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */int) var_6)) < ((((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_3)))))))));
    var_18 = ((/* implicit */unsigned char) var_16);
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_2))))), (var_0)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) 0)), (708734710U))))))) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_20 |= ((/* implicit */unsigned int) (~((~((~(((/* implicit */int) var_9))))))));
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(2877506763U))))))) != (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0])))))))))));
                var_22 = ((/* implicit */_Bool) min((var_22), (((((((/* implicit */_Bool) max((((/* implicit */unsigned int) 1428785138)), (708734710U)))) ? (((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (unsigned short)11130)))) : (((/* implicit */int) var_14)))) <= (((/* implicit */int) (!(((/* implicit */_Bool) (~(var_8)))))))))));
                arr_6 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */unsigned long long int) max((arr_0 [i_0]), (arr_2 [i_1])))) / (var_8)))));
                var_23 = ((/* implicit */short) (~(((/* implicit */int) var_11))));
            }
        } 
    } 
}
