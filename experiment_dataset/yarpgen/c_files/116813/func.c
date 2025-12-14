/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116813
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
    var_13 = ((/* implicit */int) (_Bool)1);
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (_Bool)1))));
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (-2563035704714734126LL) : ((-9223372036854775807LL - 1LL))))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-22160)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)7)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 511ULL)) ? (((/* implicit */int) (short)-14935)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) -1LL)) ? (2203888030U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)23)))))))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)-31068))) : (1870185543247958101LL)))));
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)974))))) ? (((((/* implicit */_Bool) 2LL)) ? (((/* implicit */unsigned int) 1545581004)) : (2751573625U))) : (7U)))) ? (((/* implicit */int) (short)31084)) : (((((/* implicit */_Bool) 3430177307U)) ? (((/* implicit */int) (short)-31105)) : (((/* implicit */int) (short)-16702))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -87073278)) ? (((/* implicit */unsigned long long int) 2147431694U)) : (((((/* implicit */_Bool) 4043422641U)) ? (200916469355717257ULL) : (((/* implicit */unsigned long long int) -1))))))) ? (((/* implicit */int) (short)2672)) : (((/* implicit */int) (unsigned char)216))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 17; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (unsigned short)41096))));
                                arr_13 [i_1] [i_1] [i_2] [i_2] [i_1] [i_4] = ((/* implicit */int) 2960047336U);
                                var_19 = ((/* implicit */long long int) (_Bool)1);
                                var_20 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-23865)) ? (-2LL) : (((/* implicit */long long int) 2091079265U))));
                            }
                        } 
                    } 
                } 
                var_21 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2203888030U)) ? (-212865625080628526LL) : (-4LL)));
            }
        } 
    } 
}
