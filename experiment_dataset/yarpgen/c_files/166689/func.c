/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166689
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
    var_17 = ((/* implicit */short) (+((+(0ULL)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min((var_15), (((/* implicit */signed char) var_13))))), (((((/* implicit */_Bool) (unsigned short)20873)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_11)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) && ((!(((/* implicit */_Bool) (unsigned char)133))))));
                                arr_14 [i_0] [i_0] [10U] [i_0] [i_0] [i_0] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) var_13)), (var_9))))) : ((~(var_4)))))) ? (((/* implicit */unsigned int) min(((~(((/* implicit */int) var_14)))), (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned short)52206)) - (52201)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13))))) ? (((var_13) ? (var_16) : (var_16))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_3), (((/* implicit */unsigned short) var_0)))))))));
                                var_20 = ((var_11) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */int) var_15)) != (((/* implicit */int) var_2))))) : ((~(((/* implicit */int) var_6))))))));
                            }
                        } 
                    } 
                    arr_15 [i_2] [i_1] [i_2] |= ((/* implicit */signed char) (~(max((((((/* implicit */_Bool) var_4)) ? (var_7) : (4122714018U))), (((((/* implicit */_Bool) (unsigned short)42528)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
                }
            } 
        } 
    } 
}
