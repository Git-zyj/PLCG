/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105960
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
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) 2321491217719326924LL)) ? (var_3) : (var_9)))), (var_8))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (68348378U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))))));
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) 68348378U)) ? ((~(2321491217719326925LL))) : (((/* implicit */long long int) var_3))));
    var_16 = ((/* implicit */short) var_11);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_17 |= ((/* implicit */unsigned int) -2321491217719326925LL);
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) min((var_18), (min((2321491217719326925LL), (2321491217719326920LL)))));
                            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((-3467221449323839587LL), (((/* implicit */long long int) (unsigned short)61618))))) && (((-2321491217719326939LL) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
