/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161514
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
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -401294568664298042LL)) ? (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_1)) ? (-401294568664298042LL) : (((/* implicit */long long int) var_11)))) : (-401294568664298042LL))) : (min((min((401294568664298020LL), (((/* implicit */long long int) 3171664666U)))), (-401294568664298045LL)))));
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 401294568664298045LL)) ? (401294568664298026LL) : (((/* implicit */long long int) 897539663))));
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) var_11)) : (var_7)))) ? (((((/* implicit */_Bool) var_3)) ? (var_9) : (var_0))) : (((/* implicit */unsigned int) (-(740440011))))))) * (min(((+(var_10))), (((/* implicit */long long int) min((var_8), (((/* implicit */unsigned int) var_11)))))))));
                    arr_9 [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) var_11)) : (var_3)))), (((((/* implicit */_Bool) var_0)) ? (min((-6085754819859981725LL), (5794974133938927170LL))) : (((/* implicit */long long int) var_9))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [15] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) min((var_6), (var_8)))), (((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */long long int) var_9)))))))));
                                arr_17 [i_0] [i_0] [i_0] [15U] [i_0] = ((/* implicit */unsigned int) var_10);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_11)) : (((((/* implicit */_Bool) max((((/* implicit */long long int) 3174585399U)), (-4725318264980429758LL)))) ? (((/* implicit */long long int) max((var_5), (var_5)))) : (((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */long long int) var_7)))))));
    var_16 = ((/* implicit */int) (+(3719579023U)));
    var_17 = ((/* implicit */unsigned int) ((var_2) ^ (((/* implicit */long long int) var_5))));
}
