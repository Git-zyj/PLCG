/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140791
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned char) ((short) (+(var_3))));
                var_20 |= ((/* implicit */short) ((((/* implicit */_Bool) (-(min((((/* implicit */int) (short)14499)), (var_5)))))) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) (short)-21589)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_2 [10LL])))), (arr_4 [4] [i_1 - 2])))) : (max((min((4214020492074040741LL), (((/* implicit */long long int) arr_2 [i_0])))), (((/* implicit */long long int) (_Bool)1))))));
                var_21 = ((/* implicit */short) (+(((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_1])))) >= (var_5))))));
                var_22 = ((/* implicit */int) min((((/* implicit */unsigned int) (~(arr_4 [i_0] [i_1 - 3])))), (((unsigned int) ((arr_3 [i_0] [i_1 - 3] [i_0]) >= (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))))));
            }
        } 
    } 
    var_23 = var_4;
}
