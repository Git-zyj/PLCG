/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111572
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
    var_15 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((var_0) | (var_0)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) + (((((/* implicit */int) var_10)) + (((/* implicit */int) var_7))))))) : (((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_1)))) ? (((unsigned long long int) var_9)) : (((((/* implicit */_Bool) var_13)) ? (var_13) : (((/* implicit */unsigned long long int) var_8))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = var_1;
                    arr_10 [(unsigned short)11] [14] [(unsigned char)2] [(signed char)3] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_6 [i_0] [i_2])) ? (4742437468230861420LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1]))))), (min((((/* implicit */long long int) arr_6 [i_2] [i_1])), (var_12)))));
                    arr_11 [(signed char)14] [i_0] [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned char)170)) ? (2013265920) : (2013265901)))));
                }
            } 
        } 
    } 
    var_16 = var_8;
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) < (var_13)))), (((unsigned short) (unsigned char)44))))) ^ (((int) ((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */unsigned long long int) var_12)))))));
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 17; i_3 += 2) 
    {
        for (signed char i_4 = 4; i_4 < 16; i_4 += 2) 
        {
            {
                var_18 ^= ((/* implicit */signed char) (+(((/* implicit */int) ((-2013265921) <= ((-2147483647 - 1)))))));
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((arr_18 [(unsigned char)8] [i_4 - 1] [(short)14]) | (arr_18 [i_3] [i_4 - 4] [(short)11])))) : (var_3)));
                var_20 ^= ((/* implicit */long long int) (+(((/* implicit */int) var_11))));
            }
        } 
    } 
}
