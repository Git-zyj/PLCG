/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164863
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
    var_16 |= ((/* implicit */unsigned short) max((var_9), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) (unsigned short)0)) * (((/* implicit */int) (signed char)0)))) : (var_15))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */signed char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_11))))), (min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)120))) : (var_1))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)111)) : (((/* implicit */int) var_3)))))))));
                var_17 = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)65531)), (0U)))) || (((/* implicit */_Bool) var_4)))))) | (((((/* implicit */_Bool) ((1153366632209553824LL) - (((/* implicit */long long int) var_14))))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_3 [i_0] [i_1 + 1] [i_1 - 2]))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1 - 2]))))), (((((/* implicit */int) (unsigned short)65535)) / (arr_1 [i_1 - 2])))));
                            var_19 |= ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_2])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_6 [i_0] [(signed char)8]))))))) ? (((((_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((_Bool) arr_6 [i_1 - 1] [i_1 - 1]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
