/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161194
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
    var_17 = ((/* implicit */unsigned int) var_16);
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_13 [i_4] [i_1] [i_2] [i_1] [i_0 - 1] = ((/* implicit */_Bool) min((5504321859152258315LL), (((/* implicit */long long int) (signed char)0))));
                                arr_14 [i_4] [i_4] [i_2] [i_4] [i_0] = ((/* implicit */_Bool) min(((+(-932366492))), (((/* implicit */int) arr_12 [i_1 + 2] [i_1 + 1]))));
                                arr_15 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) var_1);
                            }
                        } 
                    } 
                    arr_16 [i_1] [i_1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 932366491)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_12))), (((/* implicit */unsigned int) max(((_Bool)0), ((_Bool)1))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) var_1);
}
