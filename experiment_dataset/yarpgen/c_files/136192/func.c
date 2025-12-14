/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136192
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)4))) == (18014398509449216ULL))) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (((var_9) + (((/* implicit */long long int) ((/* implicit */int) var_17)))))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))), ((-(18014398509449216ULL)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                var_20 *= ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-83)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [(unsigned char)7] [i_1 + 1] [i_0]))))))))));
                /* LoopSeq 3 */
                for (signed char i_2 = 1; i_2 < 18; i_2 += 4) 
                {
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned int) (unsigned short)18380)), (4294967295U))), (min((((/* implicit */unsigned int) arr_4 [i_0] [(_Bool)1] [i_2])), (0U)))))) ? (((/* implicit */unsigned long long int) arr_7 [2] [i_1] [i_2 + 1] [i_1])) : (max((((unsigned long long int) 14U)), (((/* implicit */unsigned long long int) (-(arr_7 [i_2] [i_2 - 1] [i_1] [i_0]))))))));
                    var_22 ^= ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 3] [i_0 - 1]))) > (4294967284U)))), (arr_2 [i_0])));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */int) (short)22831);
                                var_24 += ((/* implicit */long long int) (~(arr_7 [i_0] [i_0 + 2] [i_2 + 1] [i_2 - 1])));
                                arr_14 [i_0] [(_Bool)1] [i_2] [i_3] [i_4] |= ((/* implicit */signed char) (~(((((long long int) arr_6 [i_1] [i_4] [i_2 - 1])) % (((/* implicit */long long int) max((38U), (((/* implicit */unsigned int) arr_9 [11U] [i_1] [i_2 - 1] [i_3] [(signed char)12])))))))));
                                var_25 = ((/* implicit */unsigned long long int) (-(((long long int) 1U))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 2; i_6 < 18; i_6 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-22835)) && (((/* implicit */_Bool) arr_11 [i_5] [5] [i_1 + 2]))));
                                var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) (short)22835))))), (arr_10 [i_0 - 2] [3LL] [i_0 - 3] [i_6] [i_0 - 2])))) ? (((/* implicit */int) (((-(((/* implicit */int) arr_6 [i_2 + 1] [i_5] [i_2])))) >= (((/* implicit */int) arr_1 [i_1 + 2]))))) : ((~(((/* implicit */int) (short)-22825))))));
                                var_28 ^= ((/* implicit */_Bool) ((signed char) arr_2 [i_1 - 2]));
                                var_29 ^= ((/* implicit */unsigned int) ((arr_11 [i_6] [i_2 + 1] [i_1 + 2]) ^ ((-(((((/* implicit */int) (unsigned short)24184)) << (((arr_7 [i_0] [12U] [i_2 - 1] [14ULL]) - (12407359U)))))))));
                                var_30 = ((/* implicit */long long int) ((unsigned long long int) ((_Bool) 7764620465258607134ULL)));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */_Bool) max((var_31), (((((long long int) ((9223372036854775807LL) - (((/* implicit */long long int) arr_18 [i_0 + 2] [i_1] [i_1]))))) <= (((/* implicit */long long int) ((/* implicit */int) (short)-3947)))))));
                }
                for (unsigned int i_7 = 1; i_7 < 15; i_7 += 4) 
                {
                    var_32 = ((/* implicit */int) ((((4100819853U) >> (((((/* implicit */int) arr_9 [i_1] [i_1 + 1] [i_7 - 1] [i_7 + 1] [i_7 + 4])) - (51246))))) | (((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_0] [i_1 + 1] [i_1 + 1] [10] [i_7])) << (((((/* implicit */int) arr_9 [i_1] [i_1 + 1] [i_7] [i_7 + 2] [i_1])) - (51260))))))));
                    var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) 1675649032))));
                }
                for (unsigned short i_8 = 0; i_8 < 19; i_8 += 4) 
                {
                    var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_22 [i_0 + 3] [i_8]))))))));
                    var_35 |= ((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0 - 2] [i_1 - 1] [i_8]))) % (arr_20 [i_8] [i_1] [i_1 - 2] [i_0 + 3]));
                }
            }
        } 
    } 
    var_36 = ((/* implicit */short) var_14);
}
