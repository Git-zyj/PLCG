/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10991
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */long long int) ((max(((-(arr_3 [i_1] [21]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) var_13))))))) & (max((32766U), (((/* implicit */unsigned int) ((short) var_12)))))));
                var_15 = ((/* implicit */signed char) ((((_Bool) ((((/* implicit */int) arr_2 [i_1])) >= (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9016)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)5)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : ((-(arr_0 [(signed char)6]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-8998)))));
                var_16 += ((/* implicit */int) arr_2 [(signed char)18]);
                var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_14))));
            }
        } 
    } 
    var_18 = (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))));
    var_19 = ((/* implicit */unsigned int) min((((/* implicit */int) var_13)), (536234077)));
}
