/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185614
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
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned char) min((((/* implicit */int) ((arr_2 [i_0 - 1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))), ((~(((/* implicit */int) (unsigned short)23778))))));
                var_13 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 514407388)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 3])) ? (((/* implicit */int) arr_0 [i_0 + 3])) : (((/* implicit */int) arr_0 [i_0 - 1])))))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) var_6))));
    var_15 = ((/* implicit */long long int) ((int) min((((/* implicit */unsigned int) var_7)), (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) * (648496831U))))));
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) min((((int) ((int) var_4))), ((((+(((/* implicit */int) (unsigned char)230)))) - ((+(849109652))))))))));
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) var_2))));
}
