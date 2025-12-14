/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178293
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
    var_20 *= ((/* implicit */signed char) ((unsigned char) (+(var_12))));
    var_21 -= ((/* implicit */unsigned short) var_7);
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) : (min((max((((/* implicit */unsigned long long int) var_4)), (var_18))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_16)), (3089852898186539774LL))))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_7 [(unsigned short)2] [(unsigned short)2] &= ((/* implicit */unsigned short) ((long long int) (unsigned char)241));
                var_23 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? ((-(((/* implicit */int) (unsigned short)21123)))) : (((((/* implicit */_Bool) arr_3 [10ULL])) ? (((/* implicit */int) ((((/* implicit */int) arr_6 [(unsigned char)10] [(unsigned char)10])) <= (((/* implicit */int) arr_2 [i_0]))))) : (((/* implicit */int) ((unsigned char) var_15)))))));
            }
        } 
    } 
}
