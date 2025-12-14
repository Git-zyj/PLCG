/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162737
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)243))) < (arr_4 [2LL]))))) * ((-(arr_0 [i_1])))))) || (((((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) > (((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))))));
                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (signed char)20))) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)55)) || (((/* implicit */_Bool) ((((/* implicit */int) var_13)) | (827563606))))))))))));
                var_18 += ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_1])) / (((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (arr_4 [i_0]))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) ((short) min((arr_4 [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-52))) - (arr_0 [i_1])))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) (signed char)-56)) > (((/* implicit */int) (signed char)28))))), (var_14)))) != (((((/* implicit */_Bool) var_14)) ? ((-(((/* implicit */int) (signed char)-55)))) : (((/* implicit */int) var_1)))))))));
}
