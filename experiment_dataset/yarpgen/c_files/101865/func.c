/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101865
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
    for (short i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_18 ^= var_8;
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) (((-(((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) arr_3 [i_0] [i_1]))));
                var_19 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (8252950443617496368ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_4 [i_0] [i_0]) + (((/* implicit */unsigned long long int) -860380717)))))))))));
                var_20 += ((/* implicit */unsigned char) (-(860380706)));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((var_15) <= (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) : ((-(((/* implicit */int) var_12))))))));
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        for (unsigned int i_3 = 3; i_3 < 22; i_3 += 2) 
        {
            {
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_3] [i_3 - 1] [i_3]))))))))));
                arr_15 [i_3] [(signed char)19] [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) -860380717)) ^ ((((~(var_5))) ^ (((/* implicit */unsigned long long int) (~(var_16))))))));
                var_23 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [10ULL] [i_2])) ? (((unsigned long long int) var_0)) : (((9ULL) | (((/* implicit */unsigned long long int) 860380717))))))) ? ((~(((((/* implicit */_Bool) -860380709)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_13))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63115)))));
                arr_16 [i_3] [i_3] [i_2] = ((/* implicit */int) ((((long long int) ((((((/* implicit */int) var_17)) + (2147483647))) >> (((((/* implicit */int) var_10)) - (61659)))))) * (((/* implicit */long long int) ((/* implicit */int) var_17)))));
            }
        } 
    } 
}
