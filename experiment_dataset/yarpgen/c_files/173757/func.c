/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173757
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
    var_19 = ((/* implicit */signed char) min((var_2), (((/* implicit */unsigned long long int) 0U))));
    var_20 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_17))))), (890399661505146838ULL)));
    var_21 = 31916111U;
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 24; i_1 += 3) 
        {
            {
                arr_8 [i_1] = ((/* implicit */signed char) max((((/* implicit */long long int) ((short) (~(4263051184U))))), (((((/* implicit */_Bool) 1283145238U)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (31916136U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_18), (((/* implicit */unsigned long long int) (unsigned char)93))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)28))))) : (((((/* implicit */_Bool) (signed char)-4)) ? (var_18) : (((/* implicit */unsigned long long int) 2097151LL))))));
                                var_23 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)177)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */unsigned long long int) 7895004446181382180LL)) : (var_9))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
