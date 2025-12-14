/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188824
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 7; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(5427504059127505645LL)))) ? (8028353145806644827LL) : (((/* implicit */long long int) var_13)))) + (-8028353145806644828LL)));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            arr_9 [i_1] [i_2] [i_0] [i_1] = 1927443126U;
                            arr_10 [2U] [i_1] [i_1] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-67))));
                            arr_11 [i_0] [i_1] [i_1 + 3] [i_2] [7U] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_3] [i_2] [i_1] [i_0]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 262143U)) ? (-8028353145806644813LL) : (((/* implicit */long long int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) ((9223372036854775807LL) != (((/* implicit */long long int) 28672U)))))) : (2107203744465522492LL)))) ? (((((/* implicit */_Bool) ((unsigned int) 4294938651U))) ? ((+(-8028353145806644827LL))) : (((((/* implicit */_Bool) 1073217536U)) ? (-5427504059127505631LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)123))))))) : (4611685949707911168LL))))));
}
