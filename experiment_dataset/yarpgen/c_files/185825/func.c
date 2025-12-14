/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185825
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
    var_10 = ((/* implicit */unsigned int) var_2);
    var_11 = ((/* implicit */_Bool) var_7);
    var_12 = max(((-(var_5))), (((/* implicit */long long int) ((unsigned char) var_3))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_4 [i_4] [i_0])) ? (((/* implicit */unsigned long long int) 1506073565917473581LL)) : (9443763092634980762ULL))) << (((/* implicit */int) ((((/* implicit */_Bool) 1506073565917473581LL)) || (arr_7 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))))))))));
                                var_14 = ((long long int) (((+(((/* implicit */int) var_1)))) - (((((/* implicit */int) arr_0 [i_2])) + (((/* implicit */int) (signed char)81))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */signed char) arr_8 [i_1]);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) max(((~(9002980981074570854ULL))), (9002980981074570838ULL)))) ? (var_9) : (((unsigned long long int) var_6))));
}
