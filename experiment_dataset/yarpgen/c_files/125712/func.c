/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125712
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
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            arr_9 [i_0] [i_0] [11ULL] [i_3] [i_0] [i_2] |= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) var_6)))))) * (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) 4326541945772436360LL)) : (arr_4 [i_0] [i_1]))))) << (((max((((/* implicit */long long int) ((((/* implicit */_Bool) 4326541945772436360LL)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3])) : (((/* implicit */int) var_3))))), (((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (arr_3 [i_2] [i_0] [i_0]) : (var_8))))) - (3918724054439899204LL)))));
                            arr_10 [i_0] [i_0] [i_0] [i_0] [i_2] [(signed char)5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(2713298678512163236ULL))))));
                        }
                    } 
                } 
                var_20 &= ((/* implicit */unsigned int) 15733445395197388379ULL);
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_4 = 0; i_4 < 17; i_4 += 1) 
    {
        for (long long int i_5 = 2; i_5 < 16; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 2; i_6 < 15; i_6 += 2) 
            {
                {
                    var_21 = (+(((((/* implicit */_Bool) ((-3919968474816420111LL) + (((/* implicit */long long int) var_4))))) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (short)-14911)))))));
                    var_22 = ((signed char) ((short) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_16 [i_4] [i_4] [i_4])))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_6))));
    var_24 &= ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_16) : (((/* implicit */unsigned long long int) var_4))))) ? ((+(var_17))) : (min((var_16), (((/* implicit */unsigned long long int) (signed char)97)))))), (((/* implicit */unsigned long long int) var_18))));
}
