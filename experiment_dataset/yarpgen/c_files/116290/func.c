/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116290
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (min((var_10), (((/* implicit */long long int) (-2147483647 - 1))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 487768330238326282ULL))))))))) ? (max((-1545172029), (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)80)))))) : ((+(((/* implicit */int) var_1))))));
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) min((((/* implicit */int) var_4)), ((+(((((/* implicit */int) var_15)) / (((/* implicit */int) var_13)))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) var_3)) == (((/* implicit */int) min((((/* implicit */unsigned char) arr_2 [i_0])), (var_19)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) arr_5 [i_0])), ((short)22401)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_5 [i_0])))))));
                var_22 ^= ((/* implicit */signed char) (((((~(((/* implicit */int) ((arr_4 [i_0] [i_1] [i_0]) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5000)))))))) + (2147483647))) >> (((((min((((/* implicit */long long int) (short)-17704)), ((-9223372036854775807LL - 1LL)))) - (-9223372036854775799LL))) + (20LL)))));
            }
        } 
    } 
}
