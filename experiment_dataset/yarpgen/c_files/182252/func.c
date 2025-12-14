/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182252
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
    var_15 = ((/* implicit */long long int) var_2);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */signed char) arr_1 [i_1] [i_0]);
                    var_17 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) 2147483647)) <= (1029406505U)))), (505447682U))) >= (arr_7 [i_0] [i_1] [i_2] [i_2])));
                    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_2])))))));
                    var_19 = ((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned char) arr_0 [i_1] [i_0])), ((unsigned char)14)))) <= (((((/* implicit */int) (signed char)-56)) * (((/* implicit */int) (signed char)118))))));
                }
            } 
        } 
    } 
    var_20 &= ((/* implicit */unsigned char) ((max((max((1U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) var_13)))) > (var_3)));
}
