/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172761
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112))) : (4953589958073947819ULL)))) ? (((3039987152208620224ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11242))))) : (max((var_9), (((/* implicit */unsigned long long int) var_7))))))) ? (((/* implicit */unsigned long long int) var_4)) : (var_5)));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_6 [i_0] [9U] [i_1] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)11242)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-10)))));
                arr_7 [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) (signed char)9))));
            }
        } 
    } 
    var_12 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -808854083874844209LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-58))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (max((((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15851))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) != (974632466U))))))));
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 3) 
        {
            {
                var_13 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max(((unsigned short)1023), (((/* implicit */unsigned short) var_10))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (808854083874844209LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)205)))))))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) 18151027162264873880ULL))))))) : (max(((+(((/* implicit */int) var_10)))), (((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */int) (signed char)-47)) : (((/* implicit */int) (unsigned char)0))))))));
                var_14 = ((/* implicit */int) 7630972173184256021ULL);
                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_3), (((/* implicit */short) (signed char)-96)))))) * (18446744073709551615ULL)))) ? (((((/* implicit */unsigned long long int) min((1099511627760LL), (((/* implicit */long long int) var_7))))) % ((-(arr_11 [i_2] [i_2] [i_3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23267)))));
            }
        } 
    } 
}
