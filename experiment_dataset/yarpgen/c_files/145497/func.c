/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145497
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_0))))) < (min((min((var_9), (((/* implicit */unsigned long long int) 1925708160U)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-13))) == (1925708160U))))))));
                var_12 = ((/* implicit */long long int) (signed char)14);
                arr_4 [i_1] [i_1] [i_1] &= ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) << (((((((/* implicit */int) (signed char)-11)) + (37))) - (19)))))) < ((-(((2369259136U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) arr_2 [i_0] [i_0] [i_0]))));
                var_14 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned short) var_7)), ((unsigned short)30876))), (((/* implicit */unsigned short) (unsigned char)225))))) || (((/* implicit */_Bool) ((((0) <= (((/* implicit */int) (short)-4743)))) ? (min((((/* implicit */unsigned long long int) 1477289487U)), (var_3))) : (((/* implicit */unsigned long long int) var_1)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) ((((var_8) + (9223372036854775807LL))) << (((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 0)) || (((/* implicit */_Bool) var_6)))))) + (var_1))) - (4213152670U)))));
}
