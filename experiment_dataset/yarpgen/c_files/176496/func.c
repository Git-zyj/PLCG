/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176496
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
    var_15 = ((/* implicit */int) ((signed char) var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = (~(((/* implicit */int) var_14)));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) arr_1 [1U]))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1200529596U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)12227))))) : (((/* implicit */int) (short)12242))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)12235)), (9223372036854775807LL)))) : ((((-(var_13))) + (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)5969))) & (var_11))))))));
    var_17 = ((/* implicit */_Bool) var_13);
    var_18 = ((/* implicit */unsigned char) max((((unsigned long long int) var_6)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */int) var_0)) - (((/* implicit */int) (unsigned short)64463)))) : (((/* implicit */int) var_8)))))));
}
