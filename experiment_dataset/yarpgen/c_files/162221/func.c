/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162221
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
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_7))));
    var_19 -= var_10;
    var_20 |= var_8;
    var_21 &= ((((/* implicit */int) (!(((/* implicit */_Bool) (short)29161))))) <= (((((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_8)) - (154))))) >> (((/* implicit */int) max(((short)-29156), ((short)21)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (short)29155))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) : (((/* implicit */int) (unsigned char)29)))))));
        var_23 &= ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))) - (((/* implicit */int) arr_2 [i_0])));
        arr_4 [7U] = ((/* implicit */_Bool) ((((/* implicit */int) ((605931204) > (((/* implicit */int) arr_3 [i_0]))))) % (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) arr_0 [i_0])))))));
        var_24 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0]))))) ^ (((long long int) arr_3 [i_0]))));
    }
}
