/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159190
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
    var_17 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((5011720194908125770ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))), (max((1724875125U), (((/* implicit */unsigned int) (_Bool)0))))));
    var_18 = ((/* implicit */unsigned char) (((_Bool)1) ? (307312503) : (((/* implicit */int) ((short) -307312503)))));
    var_19 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) -3854980305825326301LL)) ? (var_6) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -307312524)) ? (1946181085U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 ^= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 3964172584162763218ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))));
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), (max((((/* implicit */unsigned long long int) (_Bool)0)), (((unsigned long long int) (_Bool)1))))));
                                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_6 [9ULL] [i_1] [i_1] [i_1])) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2826))) < (arr_12 [i_1] [i_1] [i_3] [i_1] [i_1])))))))))));
                                var_23 += ((/* implicit */long long int) max((((((/* implicit */_Bool) (signed char)46)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4382))) : (6ULL))))), (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (short)-4383)))))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [(short)11]))) : (var_6)))) ? (((((/* implicit */_Bool) (short)4382)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-12985)) ? (var_1) : (((/* implicit */int) (unsigned char)166))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (short)4383))) : (var_12))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_0 [i_0] [i_2])) : (((/* implicit */int) arr_0 [i_0] [i_1])))))));
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 381458633)) ? (((/* implicit */int) min(((short)4383), (((/* implicit */short) var_8))))) : ((~(((/* implicit */int) (unsigned char)16))))))) ? (max((15149368828146820805ULL), (((/* implicit */unsigned long long int) (short)5250)))) : (((((/* implicit */_Bool) (unsigned char)101)) ? (((/* implicit */unsigned long long int) var_1)) : (arr_12 [i_0] [i_0] [i_1] [i_1] [i_0])))));
                }
            } 
        } 
    } 
}
