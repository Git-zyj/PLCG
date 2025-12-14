/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137046
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
    var_20 = var_0;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */signed char) (((-((-(1152921504606846976LL))))) == (((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) -1152921504606846976LL)) ? (var_9) : (((/* implicit */long long int) 1484601188)))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_22 ^= min((var_1), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)127))))));
                                var_23 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2] [i_2])) ? (((7137708698636206294ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_3] [i_2] [i_0]))))))), (var_12)));
                                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((7232855752257832639ULL) <= (((/* implicit */unsigned long long int) (-(-1152921504606846956LL))))))) > (((/* implicit */int) ((-5858517377256070260LL) >= (-1152921504606846949LL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
