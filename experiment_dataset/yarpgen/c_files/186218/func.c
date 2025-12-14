/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186218
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_16 -= ((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_7 [i_1] [i_1] [18ULL])) - (((/* implicit */int) arr_7 [6U] [i_3] [6U])))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [0ULL] [(short)4]))) == (arr_12 [20LL]))))));
                                var_17 ^= ((/* implicit */unsigned long long int) max((((/* implicit */int) var_8)), (max((-2219298), (((/* implicit */int) (unsigned char)94))))));
                            }
                        } 
                    } 
                } 
                var_18 -= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_7))))) & (((/* implicit */int) (short)-14533))))) == (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)0)))), (((((/* implicit */_Bool) var_9)) ? (arr_5 [4]) : (((/* implicit */unsigned long long int) var_6))))))));
                /* LoopNest 3 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    for (int i_6 = 3; i_6 < 21; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 2; i_7 < 21; i_7 += 1) 
                        {
                            {
                                var_19 -= ((/* implicit */long long int) (-(max((var_13), (((/* implicit */unsigned int) -2219298))))));
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (~((~(((/* implicit */int) arr_0 [1U] [1U])))))))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) 16777184U))));
            }
        } 
    } 
    var_22 |= max((((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) > (13579411827636749619ULL))) ? (((/* implicit */int) ((var_10) > (((/* implicit */int) var_3))))) : (((/* implicit */int) var_2))))), ((((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))) : (var_0))));
    var_23 ^= ((/* implicit */long long int) 7503557874251685482ULL);
    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((((/* implicit */_Bool) (short)-10649)) ? (((/* implicit */unsigned long long int) -144466054)) : (8382789040975180387ULL)))));
    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) var_12))));
}
