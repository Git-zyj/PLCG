/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138843
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
    var_20 = ((/* implicit */long long int) var_8);
    var_21 = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_14)), (((((/* implicit */long long int) min((((/* implicit */int) var_19)), (var_10)))) % (min((((/* implicit */long long int) var_11)), (9223372036854775807LL)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned long long int) var_0);
                var_22 = (unsigned char)168;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (short i_3 = 4; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_15)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_1))))))) : ((-(((arr_1 [i_0]) & (((/* implicit */long long int) ((/* implicit */int) var_14)))))))));
                                arr_15 [i_0 + 1] [i_1] [i_2] [i_3] [i_4] |= ((/* implicit */int) ((short) var_10));
                            }
                        } 
                    } 
                } 
                var_23 *= ((/* implicit */unsigned char) ((var_16) == (min((3054240648915653053ULL), (((/* implicit */unsigned long long int) (short)-14941))))));
                arr_16 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)14941))))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (short)14940)) ? (((/* implicit */int) arr_10 [i_0] [i_1])) : (((/* implicit */int) arr_12 [i_0] [(_Bool)1] [i_0 + 1] [i_0]))))))) : (max((((/* implicit */unsigned long long int) var_10)), (arr_4 [i_0 - 1])))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_0)) / (((/* implicit */int) var_19))))) ? (((((/* implicit */_Bool) 7346923848797431212LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (1048575LL))) : (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) ((max((((/* implicit */int) (short)-14942)), (var_11))) & (var_10))))));
}
