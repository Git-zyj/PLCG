/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107145
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
    var_16 = ((var_9) >= (max((((((/* implicit */_Bool) 7491086878622186964ULL)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)198))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 24; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_0 [i_0])), ((-(((/* implicit */int) arr_0 [i_0])))))))));
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 24; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                arr_13 [i_1] [i_1] [(signed char)24] [i_3] [i_3] = ((/* implicit */_Bool) ((signed char) ((min((var_10), (((/* implicit */unsigned long long int) (_Bool)1)))) << (((var_2) - (7962290669616110259LL))))));
                                var_18 = ((/* implicit */unsigned char) min((((unsigned long long int) arr_5 [i_2] [i_1 - 1] [i_2])), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_3] [i_0]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 += ((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))));
}
