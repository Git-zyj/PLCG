/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156633
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_0] [9LL] = ((((/* implicit */_Bool) (+(var_0)))) ? (min((((((/* implicit */_Bool) var_12)) ? (var_11) : (arr_2 [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && (((/* implicit */_Bool) var_3))))))) : (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)106))))) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) var_8)))))))));
                var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) >> (((((/* implicit */int) (unsigned short)61227)) - (61205))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) var_13)), ((short)1625)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_14)))))));
}
