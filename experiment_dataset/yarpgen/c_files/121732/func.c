/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121732
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
    var_15 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_1)) ? (var_1) : (var_6)))))) ? (((((var_5) & (((/* implicit */long long int) ((/* implicit */int) var_12))))) << ((((~(((/* implicit */int) (_Bool)1)))) + (4))))) : (((/* implicit */long long int) ((((unsigned int) (_Bool)1)) >> (((((/* implicit */int) max((var_9), (((/* implicit */unsigned short) (_Bool)1))))) - (16573))))))));
    var_16 = (+(((((/* implicit */long long int) (~(((/* implicit */int) var_8))))) & ((((_Bool)1) ? (((/* implicit */long long int) var_6)) : (var_13))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 8; i_0 += 2) /* same iter space */
    {
        var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-26704)))))) ^ (max((((/* implicit */unsigned int) max((var_0), (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) var_0)) : (802046926U)))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) (short)-7906)), (268433408)))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 4; i_1 < 9; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_3] [i_4]);
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)143))))) ? (((((3061942703U) < (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) var_2)), (15728640U)))) : (((var_2) ? (arr_8 [i_3] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))) : (((/* implicit */long long int) (-(((((/* implicit */int) var_7)) - (((/* implicit */int) (_Bool)1)))))))));
                                var_20 |= ((/* implicit */int) ((((arr_7 [i_1 - 3] [i_1] [i_4] [i_0 - 3]) < (((/* implicit */unsigned int) arr_10 [i_0 - 2] [i_0] [i_1 - 1] [i_2] [i_2])))) ? (max((((/* implicit */unsigned int) (_Bool)0)), (2202541332U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_10 [i_0 + 2] [i_1] [i_1 + 1] [i_1] [i_1]) >= (((/* implicit */int) var_12))))))));
                                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)22405)), (((15940694357007143237ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8172)))))))) ? (((((/* implicit */_Bool) (signed char)-120)) ? (1935853008555180043ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3703))))) : (((/* implicit */unsigned long long int) var_13)))))));
                            }
                        } 
                    } 
                    arr_13 [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_10 [i_2] [i_1] [i_2] [i_0 + 2] [i_1])) ? (((/* implicit */long long int) arr_10 [i_0] [i_1] [i_1] [i_0 + 2] [i_2])) : (var_13))), (((/* implicit */long long int) (-(arr_10 [i_0] [i_1] [i_0] [i_0 - 1] [i_2]))))));
                }
            } 
        } 
    }
    for (long long int i_5 = 3; i_5 < 8; i_5 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned short) ((unsigned int) (-(((/* implicit */int) arr_14 [i_5 - 1])))));
        var_23 = ((var_10) | (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)8218))))));
        arr_18 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (max((((/* implicit */unsigned long long int) arr_5 [i_5] [i_5] [i_5])), (927495140695113301ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)4062)) / (-42003190))))));
        arr_19 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)242)) || (((/* implicit */_Bool) arr_12 [i_5] [i_5] [i_5]))))), (var_1)))) ? ((~(var_14))) : (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) 927495140695113316ULL))))))))));
        var_24 = ((/* implicit */int) max((3061942711U), (((/* implicit */unsigned int) (_Bool)1))));
    }
}
