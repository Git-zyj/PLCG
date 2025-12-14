/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120230
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
    var_11 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)205))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (((_Bool)0) ? (2856926360629871250LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) ((unsigned short) var_2))))) % (((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */int) var_3)) / (((/* implicit */int) var_9))))))));
                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned short) var_0))))) ? (((((((/* implicit */int) var_8)) <= (((/* implicit */int) (unsigned char)190)))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (var_1))) : (((/* implicit */long long int) (+(((/* implicit */int) var_4)))))));
                var_14 = ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) 4577709080049616224LL)) ? (((/* implicit */long long int) var_7)) : (arr_1 [i_0] [i_1]))), (((/* implicit */long long int) (_Bool)0)))) > (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (min((6424738049613696355LL), (((/* implicit */long long int) (unsigned char)203)))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) ^ (var_1)))))));
            }
        } 
    } 
}
