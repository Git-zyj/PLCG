/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162465
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [3ULL] = ((/* implicit */signed char) min((min((((/* implicit */unsigned int) 16777214)), (190908800U))), (((unsigned int) 4398046380032ULL))));
        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) 16777228)) > (((long long int) (unsigned char)255))))))));
    }
    for (unsigned int i_1 = 1; i_1 < 11; i_1 += 3) 
    {
        var_13 = ((/* implicit */int) arr_6 [i_1 + 1]);
        var_14 ^= ((/* implicit */unsigned char) max((max((arr_4 [i_1 + 2]), (arr_4 [i_1 + 1]))), (min((arr_4 [i_1 + 2]), (arr_4 [i_1 - 1])))));
        arr_7 [i_1] = ((/* implicit */unsigned char) ((long long int) arr_4 [i_1 + 1]));
        arr_8 [i_1] = ((/* implicit */short) ((190908806U) ^ (min((190908803U), (190908803U)))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 4; i_2 < 15; i_2 += 3) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (var_4) : (((/* implicit */long long int) 2147483647)))));
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)24)) : (var_9)))) ? (((((/* implicit */_Bool) (signed char)90)) ? (var_6) : (((/* implicit */unsigned long long int) 4104058511U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2] [i_2 - 3])))));
    }
    var_17 = ((/* implicit */signed char) var_11);
    var_18 = ((/* implicit */unsigned int) (-(min((min((var_6), (((/* implicit */unsigned long long int) -2147483647)))), (((/* implicit */unsigned long long int) ((-2147483625) & (((/* implicit */int) (unsigned char)168)))))))));
    var_19 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((signed char) max((((/* implicit */unsigned long long int) 4104058501U)), (var_7))))), (var_4)));
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
    {
        for (unsigned char i_4 = 1; i_4 < 13; i_4 += 3) 
        {
            {
                var_20 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_11)), (var_5)));
                var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_4), (((long long int) arr_12 [i_3] [i_4]))))) ? (((/* implicit */unsigned long long int) arr_12 [i_4 + 1] [i_4 - 1])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (unsigned char)0))))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4] [i_3])))))));
            }
        } 
    } 
}
