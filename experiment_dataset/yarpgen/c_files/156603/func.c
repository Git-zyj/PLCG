/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156603
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_17 *= ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((arr_9 [i_0] [i_0] [i_0]), (((/* implicit */int) arr_0 [15LL]))))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_15 [20] [20] [i_1] [20] [(signed char)23] [i_3] [i_4] = ((/* implicit */long long int) ((((_Bool) arr_12 [i_4] [i_4] [i_4 + 2] [i_4 + 2] [i_4 + 2])) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_4 + 1] [i_4 + 1] [i_4] [i_4] [i_4 + 1])))))));
                                var_18 -= ((/* implicit */_Bool) 3945502933244972438ULL);
                                var_19 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_2] [(unsigned char)18] [i_4 + 1] [(unsigned char)18] [i_4 + 1] [i_4] [i_4 + 2])) ? (arr_14 [i_2] [i_2] [i_4 + 1] [i_4 + 2] [i_4 + 2] [i_4] [i_4]) : (arr_14 [i_2] [i_4] [i_4 + 1] [i_2] [i_4] [i_4 - 1] [(signed char)11])))) ? (((arr_14 [i_2] [i_4 + 1] [i_4 + 1] [i_4] [i_4 - 1] [i_4 - 1] [i_4]) - (arr_14 [i_1] [i_1] [i_4 + 1] [i_4] [i_4] [i_4] [i_4]))) : (((((/* implicit */_Bool) arr_14 [i_1] [i_2] [i_4 + 1] [i_1] [i_4 + 2] [i_4] [i_4])) ? (arr_14 [i_3] [i_3] [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_4] [i_4]) : (arr_14 [2] [i_0] [i_4 + 1] [(unsigned char)2] [i_4] [2] [i_4 - 1])))));
                                arr_16 [i_0] [i_1] [i_4] [i_3] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_4] [i_2])) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [(_Bool)1] [(signed char)5])) : (((/* implicit */int) arr_5 [i_1] [14ULL]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65530)) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_2]))))))));
                                var_20 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_11 [i_4] [i_2] [i_2] [i_1] [i_0])) && (((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_2] [i_2] [(unsigned short)21] [6LL])))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_5 [i_1] [i_3]), (((/* implicit */unsigned char) arr_1 [i_2])))))) : (((((/* implicit */_Bool) 18446744073709551614ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_4]))) : (arr_8 [11LL] [i_1] [i_2] [i_3]))))) & (((/* implicit */long long int) ((int) (((_Bool)1) ? (13266904992029748125ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)18)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_0]))))), (min((15457855834991504534ULL), (20ULL))))) : (min((((/* implicit */unsigned long long int) ((arr_14 [i_0] [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0])))))), (((((/* implicit */_Bool) -7985145753445865394LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)57))) : (3945502933244972438ULL)))))));
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) 2ULL))));
        arr_17 [(unsigned char)6] = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0]))))), (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (arr_14 [(unsigned char)1] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [0] [0]))) : (arr_8 [i_0] [i_0] [i_0] [i_0])))))));
        var_23 = ((/* implicit */unsigned short) (~(min((15457855834991504534ULL), (((/* implicit */unsigned long long int) 1896666702U))))));
    }
    var_24 |= ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) 1896666684U)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_5)))))))));
}
