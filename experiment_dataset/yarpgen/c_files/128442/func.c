/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128442
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
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((((/* implicit */_Bool) (((+(((/* implicit */int) (_Bool)0)))) << (((unsigned long long int) (_Bool)0))))) ? (((unsigned long long int) var_8)) : (((unsigned long long int) ((257653488412572548ULL) < (var_3))))))));
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6)))))));
    var_21 &= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) var_12)))))))));
    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((unsigned long long int) var_5)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) 74904755313711850ULL))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_24 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_8)) : (var_17)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))) : (max((((/* implicit */unsigned long long int) var_13)), (var_18))));
                            arr_9 [i_0] [i_1] [i_2] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((var_10) + (14051408991074706348ULL))))))) << (max((((/* implicit */long long int) var_11)), (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)8))))))));
                            var_25 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_9) : (0ULL))))));
                        }
                    } 
                } 
                arr_10 [i_1] [i_0] |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_4)))) | ((+(var_18)))));
            }
        } 
    } 
}
