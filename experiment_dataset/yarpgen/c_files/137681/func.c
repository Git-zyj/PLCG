/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137681
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
    var_20 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned char) var_16))))) ? (((((/* implicit */unsigned long long int) var_17)) ^ (3808415153461082384ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)56)) : (((/* implicit */int) var_3)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_10 [i_3] [4ULL] [i_2] [i_2] [i_3] [i_3] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4] [i_3]))) & (3808415153461082392ULL))) != (3808415153461082372ULL)));
                                var_21 = ((/* implicit */long long int) arr_1 [i_0] [10LL]);
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */signed char) (-(var_2)));
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [7ULL] [i_0] [13U] [i_1])) ? (((/* implicit */int) ((((/* implicit */_Bool) 1043292440U)) && (((/* implicit */_Bool) arr_0 [i_0]))))) : (((((((/* implicit */int) var_13)) + (2147483647))) << (((3808415153461082372ULL) - (3808415153461082372ULL)))))));
            }
        } 
    } 
}
