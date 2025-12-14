/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174730
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
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)172)) ? (((unsigned long long int) 9U)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
    var_16 = ((/* implicit */signed char) 4294967287U);
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_3)) ? (5616213064081533011ULL) : (((/* implicit */unsigned long long int) 9U)))), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */int) min((min((var_5), (((/* implicit */short) var_8)))), (((/* implicit */short) (_Bool)1))))) : (((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) -1755512496)) <= (2514666651U)))) : (((/* implicit */int) var_3))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) ((unsigned char) (_Bool)1));
        var_19 = ((/* implicit */long long int) ((int) (-2147483647 - 1)));
    }
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) /* same iter space */
    {
        arr_4 [(signed char)4] [i_1] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 5282059056482770534LL)), (((((/* implicit */_Bool) var_8)) ? (12830531009628018588ULL) : (((/* implicit */unsigned long long int) -113158834))))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)189)) : (16777215))));
        arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))))), (((((/* implicit */_Bool) (short)-699)) ? (((/* implicit */unsigned int) 1448427149)) : (2612255781U)))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) ((-16777231) < (((/* implicit */int) var_7)))))) : (var_13))) : (((((/* implicit */_Bool) 5266253161985497633LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-7996))) : (-5266253161985497633LL)))));
    }
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) ((unsigned int) min((var_13), (((/* implicit */long long int) 1448427149)))));
        var_21 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((signed char) 2322003897824759543ULL))), (((((/* implicit */_Bool) 7695932098601108350ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-4898261596570117675LL)))))), ((((_Bool)1) ? (16124740175884792066ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)189)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            for (unsigned char i_4 = 2; i_4 < 17; i_4 += 4) 
            {
                {
                    var_22 = ((/* implicit */int) 8689466884967467989ULL);
                    arr_12 [i_4 - 2] [i_3] [i_2] = ((/* implicit */unsigned short) 14467059455432340149ULL);
                }
            } 
        } 
    }
}
