/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120376
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                var_20 = arr_2 [(signed char)5];
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((min((((((/* implicit */int) arr_4 [i_1])) >= (((/* implicit */int) arr_3 [i_1] [i_1] [(signed char)0])))), (arr_3 [3] [i_1 + 1] [i_1]))) && (((/* implicit */_Bool) ((int) var_19))))))));
                var_22 = ((signed char) (+(((/* implicit */int) (signed char)-4))));
                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_1 [i_0])), (arr_0 [i_0])))) : ((-(var_0))))), (((/* implicit */long long int) var_19)))))));
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) ((379051809U) > (((/* implicit */unsigned int) -39153053)))))));
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) var_0);
}
