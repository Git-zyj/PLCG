/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107038
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_6 [1ULL] [1ULL] = ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) 2520606689U)) < (18446744073709551615ULL)))), (9223372036854775807LL)))) < (((((1ULL) / (var_0))) * (18446744073709551608ULL))));
                var_15 = ((/* implicit */unsigned int) max((max((8488288222175531353LL), (min((((/* implicit */long long int) var_8)), (3842330377704137144LL))))), (((/* implicit */long long int) 4167084549U))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            {
                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) var_0))));
                var_17 = ((/* implicit */long long int) ((max((((((/* implicit */unsigned long long int) var_5)) * (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) * (((/* implicit */int) (short)21479))))))) + (((/* implicit */unsigned long long int) ((((819264552) + (((/* implicit */int) var_13)))) * (((/* implicit */int) (unsigned char)1)))))));
                arr_12 [10U] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 8796092760064ULL)) ? (2147483641) : (((/* implicit */int) (unsigned short)48849)))), (((((/* implicit */int) (short)8188)) * (((/* implicit */int) var_13))))))) < (((((0ULL) * (((/* implicit */unsigned long long int) 4294967292U)))) - (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-16718))) - (var_10))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 17041172172314305340ULL))))), (4047419288U)))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 3509977705U)), (1ULL)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)990)), (4294967295U)))) : (min((((/* implicit */unsigned long long int) var_5)), (17932922805658704278ULL)))))));
}
