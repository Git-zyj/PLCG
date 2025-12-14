/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113072
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
    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) var_4))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_21 -= ((/* implicit */unsigned long long int) max((max((min((var_14), (((/* implicit */long long int) var_15)))), (((/* implicit */long long int) var_18)))), (((/* implicit */long long int) min((var_2), (((/* implicit */int) var_19)))))));
                            var_22 = min((min((min((((/* implicit */unsigned int) var_16)), (var_17))), (((/* implicit */unsigned int) max((((/* implicit */int) var_16)), (var_6)))))), (((/* implicit */unsigned int) var_10)));
                            var_23 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((max((((/* implicit */int) var_19)), (var_6))), (min((((/* implicit */int) var_13)), (var_11)))))), (max((((/* implicit */unsigned int) var_7)), (min((var_15), (((/* implicit */unsigned int) var_16))))))));
                        }
                    } 
                } 
                var_24 = min((((/* implicit */unsigned int) max((((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (var_19)))), (min((((/* implicit */int) var_12)), (var_11)))))), (max((((/* implicit */unsigned int) max((var_6), (((/* implicit */int) var_5))))), (min((((/* implicit */unsigned int) var_1)), (var_17))))));
                var_25 = max((((/* implicit */int) var_5)), (var_6));
                var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) min((max((((/* implicit */unsigned int) max((var_1), (((/* implicit */unsigned short) var_5))))), (min((((/* implicit */unsigned int) var_2)), (var_17))))), (((/* implicit */unsigned int) max((var_11), (((/* implicit */int) var_9))))))))));
            }
        } 
    } 
}
