/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104861
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
    var_18 = ((/* implicit */long long int) min((((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned char)75)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) var_11))))))), (((((/* implicit */_Bool) var_15)) ? (min((((/* implicit */unsigned int) var_10)), (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_14)), (var_12)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((1769341726U), (((/* implicit */unsigned int) (unsigned char)75))))) ? (((((/* implicit */int) (unsigned char)181)) >> (((-1196606838) + (1196606861))))) : (((/* implicit */int) (short)13601)))))));
                    var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_17))));
                    var_21 ^= ((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */int) (unsigned char)75)) < (((/* implicit */int) (signed char)39))))), ((signed char)-50)));
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned int) (_Bool)1)), (0U))), (((/* implicit */unsigned int) arr_4 [i_2 + 1] [i_1 - 1]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_6 [i_2] [i_0 + 3] [i_0 + 3])) == (((/* implicit */int) arr_6 [i_0 + 1] [i_0 - 1] [i_0 + 1]))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_1] [9ULL]))))) ? ((-(((/* implicit */int) arr_1 [i_0] [i_0])))) : ((-(((/* implicit */int) arr_6 [i_0] [i_1 - 1] [i_2]))))))));
                }
            } 
        } 
    } 
}
