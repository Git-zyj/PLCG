/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143725
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) (((((_Bool)0) && (((/* implicit */_Bool) var_15)))) ? (var_19) : (4294967279U)))) ? (var_1) : (((/* implicit */unsigned int) (((+(((/* implicit */int) var_11)))) & (((/* implicit */int) ((((/* implicit */int) (short)32749)) < (((/* implicit */int) var_7)))))))))))));
                                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((((/* implicit */short) var_8)), (var_18))))))), ((~((((_Bool)1) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))))));
                                var_22 = ((/* implicit */unsigned int) var_15);
                                var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((13857870260108114369ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)4)))))) ? (max((2714494709U), (((/* implicit */unsigned int) 2147483647)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-40))))))));
                            }
                        } 
                    } 
                } 
                var_24 |= max((((((/* implicit */_Bool) (unsigned short)37588)) ? (((/* implicit */unsigned long long int) ((4294967283U) >> (((891315358) - (891315352)))))) : (max((var_5), (((/* implicit */unsigned long long int) (_Bool)1)))))), (10254189138312553895ULL));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned char i_6 = 2; i_6 < 17; i_6 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((var_19) & (262143U)))) : (((((/* implicit */unsigned long long int) 1U)) / (var_4))))) != (((/* implicit */unsigned long long int) max((262143U), (((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))))))));
                            arr_18 [12ULL] &= ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-22677))) : (17U)))) + ((-(1917151264277817134ULL))))) - (((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) var_15)), (17U))), (((/* implicit */unsigned int) ((var_16) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = (+((((!((_Bool)1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32749)) ? (-891315359) : (((/* implicit */int) (_Bool)1))))) : (var_0))));
}
