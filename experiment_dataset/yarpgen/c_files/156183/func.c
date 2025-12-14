/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156183
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)50))))) / (min((max((-7009048671840456075LL), (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) var_7))))));
    var_13 = ((/* implicit */_Bool) var_2);
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_10))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) <= (var_3))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) <= (1LL))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
                var_15 = ((/* implicit */int) (!(((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) && (((/* implicit */_Bool) ((unsigned long long int) 8928849237552634432LL)))))));
                var_16 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))))) - (min((((/* implicit */long long int) var_4)), (arr_1 [6U]))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_4);
}
