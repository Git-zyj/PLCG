/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159285
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
    var_14 = ((/* implicit */_Bool) (-(((/* implicit */int) var_12))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (~(((/* implicit */int) min((min((var_0), (((/* implicit */unsigned short) arr_5 [7U])))), (((/* implicit */unsigned short) (_Bool)1))))))))));
                arr_6 [i_0] [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_11))))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (1529800576))) | (1395969088))))));
                var_16 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -497496263)) ? (((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 3])))) : (-497496263)));
                arr_7 [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) var_2);
                var_17 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (-719516233) : (5401225))))))) << (((((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) arr_1 [i_0])))) - (20758)))));
            }
        } 
    } 
}
