/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117793
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
    var_12 = ((/* implicit */unsigned short) var_4);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? ((((!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))) ? (var_3) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_5))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((3569312066U) | (arr_0 [i_1] [(signed char)2]))) == (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)9), (arr_2 [i_0] [i_1])))))))))));
                arr_4 [i_0] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [4LL]))) : (var_10)))) ? (((/* implicit */int) ((var_3) == (((/* implicit */unsigned int) -1593522240))))) : ((-(((/* implicit */int) (signed char)31)))))) <= (((/* implicit */int) var_6))));
            }
        } 
    } 
}
