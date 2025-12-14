/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1136
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
    var_20 = ((/* implicit */short) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) * (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_15))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned char) (+(min((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (short)-10833)) : (((/* implicit */int) (short)-6357)))), (((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) (short)-16501))))))));
                var_22 = ((/* implicit */int) max((((/* implicit */unsigned int) arr_0 [i_0])), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_17)))) ? (max((45711759U), (((/* implicit */unsigned int) var_18)))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) * (((/* implicit */int) (short)16507)))))))));
                arr_5 [i_0] [i_1] = (-(9223372036854775807LL));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) ((short) var_8));
    var_24 = max((((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)17)) == (((/* implicit */int) var_0))))), (var_18));
}
