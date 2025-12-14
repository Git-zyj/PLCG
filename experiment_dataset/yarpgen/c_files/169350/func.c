/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169350
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((unsigned int) ((signed char) var_11))))));
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_1 + 2])) | (((/* implicit */int) arr_2 [i_1]))))) != (((arr_0 [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 + 3])))))));
                var_17 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (signed char)-3)))) || (((((/* implicit */_Bool) (short)31216)) || (((/* implicit */_Bool) (unsigned short)1939))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((var_1) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_13))))));
    var_19 = ((/* implicit */unsigned int) (signed char)2);
    var_20 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? ((+(((var_11) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (10237365953967522832ULL))))) : (var_1)));
    var_21 &= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)46049)) - (((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */int) (unsigned char)227)) : (((/* implicit */int) (short)9881))))))), (var_3)));
}
