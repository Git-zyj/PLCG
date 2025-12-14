/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139171
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
    var_15 = ((/* implicit */signed char) var_11);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 *= ((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)100)), (arr_0 [i_0])))) + ((+(((/* implicit */int) min(((unsigned char)93), ((unsigned char)158))))))));
                    var_17 &= ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)93)) ? (((/* implicit */int) ((signed char) (unsigned char)93))) : (((/* implicit */int) (short)-6695))))), (max((((/* implicit */long long int) ((short) arr_6 [i_0] [i_1]))), (((((/* implicit */_Bool) var_8)) ? (-9223372036854775799LL) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)237))))) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((((/* implicit */int) arr_3 [i_2] [i_0])) * (((/* implicit */int) var_13))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)94)) : (((/* implicit */int) min(((signed char)42), (((/* implicit */signed char) (_Bool)1)))))))) : (((((/* implicit */_Bool) (unsigned char)158)) ? (2995266908U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(short)4] [i_1])))))));
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-20735)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_1]))))) ? (((8793945538560ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)1), (arr_3 [(unsigned char)1] [(unsigned char)1]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(short)20])))));
                    var_20 -= ((/* implicit */signed char) var_11);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) -2147483642);
    var_22 |= ((/* implicit */unsigned long long int) var_1);
}
