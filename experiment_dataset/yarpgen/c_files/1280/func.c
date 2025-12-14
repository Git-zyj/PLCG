/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1280
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
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((min((((/* implicit */int) (unsigned char)252)), (((((/* implicit */int) var_12)) - (((/* implicit */int) var_1)))))) == (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)10)) || (((/* implicit */_Bool) var_10))))))))));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_18)))) ? (((((/* implicit */_Bool) max(((unsigned short)23141), (((/* implicit */unsigned short) (signed char)-124))))) ? (var_18) : (((/* implicit */int) var_5)))) : (((/* implicit */int) (unsigned short)16529))));
    var_21 = ((/* implicit */_Bool) ((min((((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) var_8)))), (((/* implicit */int) var_9)))) - (((((/* implicit */_Bool) ((((/* implicit */int) var_15)) | (((/* implicit */int) var_13))))) ? (((/* implicit */int) ((unsigned short) var_3))) : (((/* implicit */int) var_1))))));
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (var_3)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)22314))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                var_23 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1 + 2] [i_0]))) >= (min((((/* implicit */unsigned long long int) ((arr_4 [i_1]) / (((/* implicit */int) (unsigned char)19))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) | (arr_1 [i_0] [i_1 + 1]))))));
                var_24 *= ((/* implicit */unsigned int) max((10704845718148715874ULL), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_0 [7U])))) - (arr_1 [i_1 + 4] [i_1 + 4])))));
            }
        } 
    } 
}
