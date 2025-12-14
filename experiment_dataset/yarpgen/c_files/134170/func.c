/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134170
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
    var_13 ^= ((/* implicit */long long int) var_7);
    var_14 = ((/* implicit */unsigned char) var_1);
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (9074612207492048119LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (460066657U) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)19)) + (((/* implicit */int) arr_2 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) < (((330182910U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_16 &= ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) ((1302661867U) >> (((1302661878U) - (1302661849U)))))), (arr_4 [14LL] [i_1]))) <= ((-(arr_4 [(_Bool)1] [i_1])))));
        var_17 += ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [(short)4])) && ((_Bool)1)))), (16828570605705873306ULL)));
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        var_18 = ((/* implicit */signed char) (unsigned short)16692);
        var_19 ^= ((/* implicit */unsigned long long int) max(((~(min((((/* implicit */long long int) arr_8 [i_2])), (arr_0 [i_2 - 1]))))), (((/* implicit */long long int) ((short) var_1)))));
    }
}
