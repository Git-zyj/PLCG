/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171064
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
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) max((min((((/* implicit */long long int) (!(((/* implicit */_Bool) -3434230065976448052LL))))), (((var_14) ^ (var_0))))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((14033665809026236575ULL) > (((/* implicit */unsigned long long int) 3434230065976448052LL)))))) <= (var_10)))))))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 3434230065976448050LL)) > (min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) <= (var_12)))), (((4413078264683315040ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) arr_0 [i_0]))));
                arr_4 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) arr_0 [i_0]);
                arr_5 [0U] |= ((/* implicit */unsigned short) min((arr_0 [i_0]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0] [i_0])) >= (((/* implicit */int) var_3)))))));
                var_22 *= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_3 [i_1] [i_1])), ((~(17435890623217681205ULL)))));
                var_23 = ((/* implicit */signed char) (unsigned char)254);
            }
        } 
    } 
    var_24 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((3561199703U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))))), (min((((/* implicit */unsigned long long int) var_17)), (var_4)))));
}
