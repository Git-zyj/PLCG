/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136209
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) << (((((((/* implicit */int) var_0)) + (23682))) - (22)))))) ? (var_2) : (((/* implicit */unsigned long long int) var_10))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (12910836764317815644ULL)))) ? (((((/* implicit */_Bool) 12910836764317815666ULL)) ? (5535907309391735988ULL) : (((/* implicit */unsigned long long int) -2191352446460197726LL)))) : (((/* implicit */unsigned long long int) (~(-2191352446460197705LL))))));
        arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (5535907309391735987ULL) : (((/* implicit */unsigned long long int) var_1))));
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) -2191352446460197695LL)) ? (var_2) : (2934905625380819363ULL))) : (((var_12) - (5535907309391735980ULL)))));
        /* LoopNest 3 */
        for (unsigned short i_2 = 1; i_2 < 7; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                for (signed char i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_14 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (signed char)84))));
                            arr_19 [i_1] [i_2 - 1] [i_3] [i_1] [(signed char)4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (signed char)103)) : (((/* implicit */int) (unsigned short)0))));
                            arr_20 [3LL] [3LL] [i_2] [i_3] [i_2] [i_1] = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)6)) : (((/* implicit */int) (unsigned char)0)));
                        }
                        arr_21 [i_1] [i_2] [i_2 + 1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-71)) ? (11LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)84)))));
                    }
                } 
            } 
        } 
    }
    var_15 = ((/* implicit */signed char) var_13);
    var_16 = ((/* implicit */unsigned int) (unsigned char)188);
}
