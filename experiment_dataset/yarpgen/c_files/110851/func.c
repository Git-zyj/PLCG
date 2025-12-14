/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110851
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] [(short)14] = ((/* implicit */unsigned short) ((unsigned long long int) max(((short)19206), ((short)19206))));
                arr_6 [5LL] [5LL] [i_1] = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) (short)2973)) <= (-255594496)))), (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [(unsigned char)11]))))));
                arr_7 [i_0] [(unsigned char)8] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) (short)-19195))) & (-4713120807014216510LL)))))) >= (max((var_6), (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) var_0)))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) var_6);
    var_15 *= ((/* implicit */short) ((var_2) / (((/* implicit */int) var_0))));
}
