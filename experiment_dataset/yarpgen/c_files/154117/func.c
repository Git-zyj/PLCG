/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154117
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
    var_14 = ((/* implicit */unsigned int) max((var_14), (((var_4) * (min((((((/* implicit */_Bool) var_9)) ? (var_13) : (((/* implicit */unsigned int) var_2)))), (var_13)))))));
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) max((((/* implicit */long long int) ((signed char) var_2))), (var_9))))));
    var_16 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_11)), (((unsigned int) ((1986576501622946531LL) / (((/* implicit */long long int) var_7)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        {
                            var_17 = ((((((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) (signed char)74))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))) : (arr_5 [i_2]))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-94)))))));
                            var_18 = ((/* implicit */int) ((((((/* implicit */_Bool) 8U)) ? (arr_5 [i_2]) : (4294967295U))) * (arr_4 [i_2] [i_3])));
                            var_19 = ((/* implicit */signed char) ((3907337920327804230LL) << (((((/* implicit */_Bool) ((4294967289U) << (7U)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (((((/* implicit */_Bool) arr_0 [15LL] [15LL])) ? (((/* implicit */long long int) arr_0 [i_2] [i_1])) : (-1986576501622946531LL)))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (!(((/* implicit */_Bool) 2659451662U)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_12)))) ? ((+(((/* implicit */int) ((var_13) == (((/* implicit */unsigned int) 1888285106))))))) : (1888285127)));
}
