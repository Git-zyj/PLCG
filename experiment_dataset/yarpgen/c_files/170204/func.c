/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170204
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
    var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)9475)) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_16)), (-8624294495184225904LL))))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)171)) < (((/* implicit */int) (unsigned short)9482)))))));
    var_19 |= ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (var_8) : (((max((var_7), (var_15))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56075))) > (var_0)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            {
                var_20 ^= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_0 [(unsigned char)2])) ? (((/* implicit */int) arr_0 [(short)12])) : (((/* implicit */int) arr_0 [12U])))), ((+(((/* implicit */int) arr_0 [(unsigned short)8]))))));
                arr_4 [i_0] [i_0] [i_1 + 1] = ((/* implicit */unsigned short) var_17);
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((((/* implicit */int) (unsigned short)9475)) % (((/* implicit */int) (unsigned short)9490)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2133533396U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (2U)))) ? (((((/* implicit */_Bool) arr_2 [i_0] [(short)4] [(short)4])) ? (((/* implicit */int) arr_2 [i_0 + 1] [(unsigned char)2] [i_1])) : (((/* implicit */int) var_17)))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)9475)) : (((/* implicit */int) var_10)))))))))));
                var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_2 [(short)5] [i_0] [i_1 - 1])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) (short)2702)))) : (((/* implicit */int) arr_0 [i_0]))));
            }
        } 
    } 
    var_24 = ((((/* implicit */_Bool) (+(((((/* implicit */int) var_1)) >> (((4160037817U) - (4160037790U)))))))) ? (((/* implicit */unsigned int) (-((+(((/* implicit */int) var_10))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((short) -5221085887171974661LL)))) % (2043440348U))));
}
