/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115044
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
    var_12 = ((/* implicit */_Bool) max((((var_6) + (((/* implicit */int) var_9)))), (max((((1356873704) << (((((/* implicit */int) var_7)) - (182))))), (((/* implicit */int) var_5))))));
    var_13 = ((/* implicit */unsigned short) max(((+(((/* implicit */int) max((((/* implicit */short) var_3)), ((short)18021)))))), (min((((var_6) / (((/* implicit */int) var_10)))), (((((/* implicit */int) var_9)) * (((/* implicit */int) var_1))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) max((var_7), (((/* implicit */unsigned char) (_Bool)1))));
                arr_5 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (var_6) : (((/* implicit */int) min((var_4), (((/* implicit */unsigned short) (short)-18021))))))))));
                var_14 *= ((/* implicit */unsigned char) var_5);
                arr_6 [i_0] = min((((/* implicit */int) max((((/* implicit */unsigned short) (short)-18022)), ((unsigned short)52328)))), (((((/* implicit */int) (short)-18026)) | (arr_1 [i_0] [i_1]))));
                arr_7 [i_1] [(short)8] |= min((((((/* implicit */_Bool) (short)-20146)) ? (((/* implicit */int) arr_0 [(short)6])) : (((/* implicit */int) var_1)))), (((/* implicit */int) min((((/* implicit */unsigned short) (short)-9089)), ((unsigned short)42301)))));
            }
        } 
    } 
    var_15 = var_8;
    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (_Bool)1))));
}
