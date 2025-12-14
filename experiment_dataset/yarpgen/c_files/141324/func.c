/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141324
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
    var_14 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (unsigned char)215)), (var_10)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 += ((((/* implicit */_Bool) 577181371)) ? (((arr_5 [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21851))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((0U) > (0U))))));
                arr_6 [i_1] &= (+(((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) == (-1643623869)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 3; i_2 < 13; i_2 += 1) 
    {
        for (signed char i_3 = 3; i_3 < 15; i_3 += 3) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned short i_4 = 1; i_4 < 16; i_4 += 4) 
                {
                    arr_14 [i_2] [i_2] [(short)6] = ((arr_10 [i_4] [i_3] [i_2]) * (((/* implicit */unsigned int) ((/* implicit */int) ((arr_7 [i_4 + 1] [i_3]) <= (0U))))));
                    arr_15 [i_2] [i_3] [i_2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) ((4294967295U) != (((/* implicit */unsigned int) 8372224))))) < (((/* implicit */int) ((short) 4294967295U)))));
                    arr_16 [i_2] = ((/* implicit */long long int) ((short) arr_13 [i_2] [i_3 - 2] [i_2]));
                }
                for (int i_5 = 1; i_5 < 13; i_5 += 1) /* same iter space */
                {
                    var_16 *= max((min((4294967285U), (((/* implicit */unsigned int) (unsigned short)65535)))), (((/* implicit */unsigned int) ((max((4294967295U), (((/* implicit */unsigned int) arr_17 [i_2] [(signed char)14] [i_5])))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_5] [i_5] [i_5 + 1] [i_5 + 1])))))));
                    arr_19 [i_2] [i_3] = ((/* implicit */unsigned char) ((((unsigned long long int) -1286549216)) ^ (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_3] [i_5])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535)))))) : (((((/* implicit */_Bool) arr_17 [i_2 + 3] [i_2] [i_5 + 1])) ? (arr_7 [(unsigned short)0] [i_2]) : (((/* implicit */unsigned int) -1320973647)))))))));
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) arr_18 [7U] [i_3] [(unsigned short)9]))));
                }
                for (int i_6 = 1; i_6 < 13; i_6 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) min((((/* implicit */long long int) arr_20 [i_3 - 2] [i_3 - 1] [i_3 + 1])), ((((-(0LL))) >> ((+(22U))))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        arr_25 [i_2] = ((/* implicit */int) ((arr_10 [i_2 - 2] [i_2 + 2] [i_2 - 1]) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_2 + 2])) * (((/* implicit */int) (signed char)77)))))));
                        arr_26 [i_7] [i_3] [i_7] [i_7] [4LL] [i_7] &= ((/* implicit */long long int) (((-(((((/* implicit */_Bool) (short)1984)) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_2] [i_3 - 1] [i_2]))) : (arr_18 [i_2] [i_2] [i_7]))))) < (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_18 [i_6 + 3] [i_3 + 1] [i_2 + 2]))))));
                    }
                    for (unsigned int i_8 = 1; i_8 < 15; i_8 += 1) 
                    {
                        arr_30 [i_2] [i_6 + 4] [i_3 + 2] [i_2] = ((/* implicit */int) min((((/* implicit */unsigned int) ((_Bool) arr_27 [i_2] [5U] [i_8]))), ((-(((((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_2] [i_2] [i_2] [i_2]))) / (4294967295U)))))));
                        var_19 = ((/* implicit */int) (((~(arr_27 [i_2] [i_2 - 1] [i_2]))) ^ ((~(arr_27 [i_2] [i_2 - 1] [i_2])))));
                    }
                    arr_31 [i_2] [8LL] [i_2] [i_2] &= ((/* implicit */unsigned int) 1286549216);
                }
                for (int i_9 = 1; i_9 < 13; i_9 += 1) /* same iter space */
                {
                    arr_34 [i_2] [i_2] = ((/* implicit */unsigned char) 20U);
                    arr_35 [i_2] [10U] &= ((/* implicit */unsigned char) max(((!(arr_24 [i_2 - 1]))), ((_Bool)1)));
                }
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (+((-(arr_27 [i_2 + 3] [i_3 + 1] [i_2]))))))));
                arr_36 [(unsigned char)7] [(unsigned char)7] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)57925)) ? (((unsigned int) ((12300015515581707920ULL) >> (((/* implicit */int) arr_32 [i_2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_3 - 1])) ? (((/* implicit */int) arr_29 [i_2] [(unsigned char)2] [i_2] [i_3])) : (((/* implicit */int) (unsigned short)1))))) && (((/* implicit */_Bool) max((32760), (((/* implicit */int) (unsigned char)183)))))))))));
                arr_37 [i_2] [i_3 - 3] [i_3] = ((/* implicit */signed char) arr_13 [i_2 - 1] [i_3] [i_2]);
                arr_38 [i_2] [i_3] [i_2] = 4U;
            }
        } 
    } 
    var_21 &= ((/* implicit */unsigned int) var_7);
}
