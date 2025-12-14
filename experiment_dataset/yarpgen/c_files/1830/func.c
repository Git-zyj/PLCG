/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1830
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
    var_12 = ((/* implicit */unsigned int) min(((+((~(var_7))))), (((/* implicit */unsigned long long int) var_4))));
    var_13 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((1651349149), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)212))) < (var_11))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)-26)))) : (max((min((var_11), (var_7))), (((/* implicit */unsigned long long int) ((short) var_1)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((_Bool) 1651349149)) ? (var_11) : (((/* implicit */unsigned long long int) ((long long int) (unsigned short)26559)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_1))) ? (((/* implicit */int) max(((unsigned short)4700), (((/* implicit */unsigned short) var_4))))) : (((/* implicit */int) ((unsigned char) (unsigned char)48)))))) : (((unsigned int) ((((/* implicit */int) var_0)) != (1545162513))))));
                var_15 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1651349149)) ? (((arr_2 [i_1 - 1] [2LL] [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_2 [i_1 - 2] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)255))))));
                arr_4 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) var_8))) & (((((-6941733548216322905LL) + (9223372036854775807LL))) << (((((((/* implicit */int) var_4)) + (27654))) - (60))))))) * (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                var_16 += ((/* implicit */unsigned char) ((((((/* implicit */int) var_8)) != (((/* implicit */int) arr_1 [i_1])))) ? (((int) arr_2 [i_1] [i_1 - 3] [(short)14])) : (((/* implicit */int) ((((/* implicit */int) min(((unsigned short)65535), (var_2)))) > (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) (-(var_5)));
}
