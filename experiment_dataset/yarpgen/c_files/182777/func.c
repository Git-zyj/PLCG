/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182777
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
    var_15 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (min((var_0), (((/* implicit */int) var_7)))) : (((/* implicit */int) min((((/* implicit */short) var_6)), ((short)32767))))))), (((unsigned long long int) (+(((/* implicit */int) var_13)))))));
    var_16 = ((/* implicit */_Bool) 33554431LL);
    var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */short) max((((/* implicit */unsigned int) var_7)), (((((/* implicit */_Bool) (signed char)15)) ? (4294967295U) : (4294967295U)))));
                var_19 += ((/* implicit */unsigned long long int) 4176281734601067769LL);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 3; i_3 < 8; i_3 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) (unsigned short)34335);
                            var_21 += ((/* implicit */signed char) max((((/* implicit */long long int) var_10)), (-1LL)));
                        }
                    } 
                } 
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [i_0])), (min((((/* implicit */long long int) arr_1 [i_0])), (8117517747039182643LL)))))) ? (((/* implicit */unsigned int) ((var_13) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [(_Bool)1] [i_1] [i_1]))))) : (max((((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_0] [9ULL])), (4294967295U)))));
            }
        } 
    } 
}
