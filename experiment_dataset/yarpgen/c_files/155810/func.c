/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155810
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
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) var_0))));
    var_13 = ((/* implicit */unsigned short) var_9);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1 + 2] [i_1 + 1]))))) * (max((var_5), (arr_5 [i_1 + 1] [i_1 + 2])))));
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) (unsigned short)54047);
                var_14 += var_8;
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((var_3), (-1152921504606846976LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_0)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (3093827140U)));
    var_16 *= ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned long long int) var_0))));
}
