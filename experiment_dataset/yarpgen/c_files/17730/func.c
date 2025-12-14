/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17730
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
    var_20 = ((/* implicit */unsigned int) (~(9223372036854775806LL)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_1 [i_1])), (arr_0 [i_0])))))))));
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        arr_11 [i_0] [7LL] [7LL] [i_0] = ((/* implicit */long long int) ((short) min((arr_8 [i_0] [i_0] [i_0]), (arr_8 [i_1] [i_0] [i_1]))));
                        arr_12 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((arr_7 [i_2] [13U]), (((/* implicit */unsigned long long int) arr_3 [i_2]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1073741760U)) ? (9223372036854775798LL) : (-9223372036854775801LL)))) : (arr_8 [i_3] [i_0] [i_3]))) ^ (((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_3]))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (arr_0 [i_0]) : (arr_0 [i_0])))))));
                        arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~(min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0]))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [5LL] [5LL]))) & (arr_1 [2ULL])))))));
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) arr_8 [i_1] [i_0] [i_3])) ? (arr_8 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_1 [i_3])))));
                    }
                    arr_15 [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_0]))));
                    arr_16 [i_0] [i_1] [i_2] [i_2] &= ((/* implicit */long long int) max((((arr_7 [i_0] [i_0]) / (arr_7 [i_0] [i_2]))), (((arr_7 [i_2] [i_0]) * (((/* implicit */unsigned long long int) arr_6 [i_1] [i_2]))))));
                }
                for (short i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        for (short i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            {
                                arr_23 [i_0] [i_1] [0U] [i_6] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_7 [i_0] [0LL])) ? (arr_17 [i_0]) : (arr_17 [i_0])))));
                                arr_24 [i_0] [2ULL] [2ULL] [2ULL] [i_4] = ((/* implicit */unsigned int) (unsigned char)88);
                                arr_25 [i_1] [i_1] [i_1] [i_4] [i_4] = ((/* implicit */short) ((((arr_17 [i_0]) >= (arr_17 [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_6])) && (((/* implicit */_Bool) arr_17 [i_4])))))) : (min((arr_17 [i_0]), (((/* implicit */unsigned long long int) (unsigned char)11))))));
                            }
                        } 
                    } 
                    arr_26 [i_0] [i_1] [i_0] [i_4] = ((/* implicit */short) (-((-(arr_3 [i_4])))));
                }
                for (signed char i_7 = 0; i_7 < 18; i_7 += 1) 
                {
                    arr_29 [16U] [i_0] [i_7] = ((/* implicit */short) max((((/* implicit */long long int) 816575503U)), (6012252626963964408LL)));
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 18; i_8 += 4) 
                    {
                        for (short i_9 = 2; i_9 < 14; i_9 += 3) 
                        {
                            {
                                arr_34 [i_0] [i_0] [i_0] [i_1] [i_7] [i_8] [i_8] &= min((((((/* implicit */_Bool) arr_31 [i_1] [i_1] [i_0] [i_8] [i_9 + 4] [i_7])) ? (max((26ULL), (((/* implicit */unsigned long long int) arr_32 [i_7] [i_7] [i_7] [i_7] [i_7] [17LL] [i_7])))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_19 [(_Bool)1] [7LL] [7LL] [i_1] [i_1] [i_0])), (9223372036854775806LL)))))), (((/* implicit */unsigned long long int) arr_10 [(_Bool)1] [10U] [0LL] [i_8] [0LL] [i_8])));
                                arr_35 [i_1] [i_8] [i_7] [i_1] [i_1] |= ((/* implicit */long long int) arr_22 [i_0] [(_Bool)1] [i_0]);
                                arr_36 [i_0] [i_1] [i_1] [i_0] [i_9] [6LL] [2LL] &= ((/* implicit */_Bool) ((signed char) ((((((/* implicit */_Bool) arr_8 [i_0] [i_8] [i_9])) ? (((/* implicit */unsigned long long int) 1073741760U)) : (arr_27 [0LL]))) | (((/* implicit */unsigned long long int) arr_6 [i_1] [i_8])))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) var_14);
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)7373)), (1073741741U)))) ? (max((((/* implicit */long long int) (short)17521)), (-4112833661878374080LL))) : (var_18)));
}
