/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161632
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
    var_19 = ((/* implicit */signed char) -1LL);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 6810751621750035432ULL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)74))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) max((((/* implicit */unsigned short) var_17)), (var_12)))))) : ((~(((/* implicit */int) var_4))))));
                var_21 = ((/* implicit */signed char) var_2);
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((arr_1 [i_0]), (arr_1 [i_1])))) ? (((int) var_2)) : (((/* implicit */int) arr_0 [i_1])))) <= (((/* implicit */int) ((arr_1 [i_0]) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [8U] [8U])) ? (var_13) : (((/* implicit */int) var_5)))))))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) max((((/* implicit */long long int) var_16)), (var_6)));
    var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) -1LL)))));
}
