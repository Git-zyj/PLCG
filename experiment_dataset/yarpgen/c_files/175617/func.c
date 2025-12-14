/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175617
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
    var_19 = ((var_10) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */int) ((0) <= (((/* implicit */int) (unsigned char)0))))) : (((((/* implicit */_Bool) var_2)) ? (var_16) : (((/* implicit */int) var_15))))))));
    /* LoopSeq 2 */
    for (short i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((int) 2834526217U)) <= ((~(((/* implicit */int) (signed char)7))))));
        arr_3 [i_0 - 3] = ((((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)126)) & (((/* implicit */int) (unsigned char)129))))) : (arr_0 [i_0 - 3]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)126)), (arr_1 [i_0 - 4]))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 23; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_20 = ((/* implicit */short) (+(arr_9 [i_2] [i_2] [i_1 - 1])));
                    var_21 = ((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [i_3])) ? (((/* implicit */int) (unsigned char)153)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_1]))) * (arr_9 [i_1 - 1] [8U] [8U])))));
                    arr_14 [i_1] [i_2] [21] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_5 [i_1])) ? (17345836107368810592ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)134))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    var_22 ^= ((/* implicit */unsigned char) (~(arr_11 [i_1 + 1] [19ULL] [(unsigned short)24])));
                }
            } 
        } 
        var_23 += ((/* implicit */signed char) ((2305843009211596800ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1 + 1] [i_1 - 2] [i_1 - 1])))));
    }
    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */int) var_2)) & (((/* implicit */int) (_Bool)1)))))));
}
