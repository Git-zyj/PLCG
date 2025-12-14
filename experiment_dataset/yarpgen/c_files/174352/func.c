/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174352
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) <= (2791179146U)))) : (max((-1040918204), (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [11LL])) || (((/* implicit */_Bool) arr_0 [i_0])))))))));
                var_19 = ((/* implicit */unsigned char) 281337537757184LL);
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    arr_8 [i_1 + 1] = ((/* implicit */unsigned short) min((arr_0 [i_1 + 2]), (((/* implicit */int) ((arr_0 [i_1 + 1]) != (((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 1] [i_1 + 1])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 10; i_3 += 3) 
                    {
                        for (signed char i_4 = 4; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)73))))), (arr_10 [i_0] [7LL] [0LL] [i_2] [(_Bool)1] [i_1])));
                                var_21 = ((/* implicit */_Bool) ((((max((((/* implicit */int) (unsigned char)181)), (1805305126))) > (max((arr_0 [i_4]), (((/* implicit */int) (unsigned char)105)))))) ? (((((/* implicit */_Bool) (short)-7422)) ? (378843544479273378ULL) : (((/* implicit */unsigned long long int) -2046560790)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)8959)) < (((/* implicit */int) (signed char)-47))))))));
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_11 [i_0] [i_3] [i_1 + 3] [i_0] [i_0] [i_3] [i_4 - 1])) >= ((-(((/* implicit */int) arr_4 [7ULL] [i_1] [i_0]))))))) * ((-(((arr_10 [i_0] [i_0] [i_1] [i_2] [i_3 + 1] [i_4 + 1]) * (((/* implicit */int) arr_7 [i_4] [11] [i_1] [i_0]))))))));
                            }
                        } 
                    } 
                    var_23 &= ((/* implicit */signed char) ((short) arr_9 [i_1] [i_1] [i_2] [i_0] [i_0]));
                }
                for (short i_5 = 1; i_5 < 8; i_5 += 2) 
                {
                    var_24 = ((/* implicit */unsigned char) arr_4 [i_0] [i_1 + 4] [i_5]);
                    arr_18 [i_5] [i_1 + 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) max((arr_14 [i_1 + 4]), (arr_14 [i_1 + 3])))) + (min((((/* implicit */int) max((((/* implicit */unsigned char) arr_4 [i_0] [i_1 + 2] [i_1 + 2])), (arr_2 [i_0])))), (arr_13 [i_5 - 1] [(_Bool)1] [i_5 + 4] [i_1 - 1] [(_Bool)1] [i_1 + 4])))));
                    var_25 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_2 [3U])) < (((/* implicit */int) (_Bool)1))))) * (((((/* implicit */int) (short)-13779)) & (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))))))) * (min((((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [2ULL] [9ULL] [i_1] [i_0])) ^ (((/* implicit */int) (unsigned char)11))))), (((arr_6 [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_5] [i_5] [5LL] [i_5 + 3])))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 12; i_7 += 2) 
                        {
                            {
                                arr_25 [i_7] [i_6] [i_5 + 1] [i_1] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (signed char)87)), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_10 [i_0] [(_Bool)1] [i_5 + 1] [i_6] [4] [3])) & (arr_19 [i_7] [i_6] [9] [(unsigned char)6])))) ? (((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_5] [i_7])) ? (arr_19 [i_0] [i_1] [i_7] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_7] [(unsigned char)6] [i_5] [(unsigned char)6] [(unsigned char)6]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -786287231)) ? (((/* implicit */int) arr_20 [i_0] [i_0] [8LL] [i_0])) : (((/* implicit */int) (_Bool)1)))))))));
                                var_26 = ((/* implicit */_Bool) arr_10 [i_0] [i_1 + 1] [(short)9] [i_6] [0LL] [i_7]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 9; i_8 += 2) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 12; i_9 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_1 + 4] [i_1] [i_1 + 4]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5 + 3]))) : (min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_17 [i_0] [i_1 + 3] [i_9])), (arr_22 [i_0] [i_0] [i_1 + 4] [i_0] [i_5 + 2] [i_8 + 2] [i_9])))), (min((((/* implicit */unsigned long long int) (unsigned short)65535)), (arr_19 [i_0] [i_0] [i_0] [i_0]))))))))));
                                var_28 &= ((/* implicit */signed char) (unsigned char)8);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)332)) && (((/* implicit */_Bool) (unsigned short)1))))) * (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (var_16))))))))))));
    /* LoopNest 3 */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        for (unsigned short i_11 = 0; i_11 < 17; i_11 += 3) 
        {
            for (unsigned char i_12 = 0; i_12 < 17; i_12 += 2) 
            {
                {
                    var_30 *= ((/* implicit */signed char) max(((unsigned short)65188), ((unsigned short)326)));
                    arr_39 [i_10] [i_10] = ((/* implicit */signed char) min((min((max((((/* implicit */unsigned long long int) arr_32 [i_11] [i_10])), (arr_34 [i_11] [i_10]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_34 [i_10] [i_10]))))))), (((/* implicit */unsigned long long int) (~(939689811))))));
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 0; i_13 < 17; i_13 += 2) 
                    {
                        for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                        {
                            {
                                var_31 = ((/* implicit */long long int) ((((((((/* implicit */long long int) -1)) != (8000629182450514575LL))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_32 [i_12] [i_14 + 1])) ? (((/* implicit */int) arr_32 [i_10] [i_10])) : (arr_38 [i_13] [i_11] [i_10])))) : (3145728U))) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1)))));
                                var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) 1503788149U)), (0ULL))))));
                                var_33 = ((/* implicit */signed char) arr_35 [i_10] [i_11] [i_13]);
                                var_34 = ((/* implicit */unsigned int) (+(((((((/* implicit */_Bool) 1503788150U)) || (((/* implicit */_Bool) 281337537757184LL)))) ? (arr_43 [i_14 + 1] [i_11] [i_12] [i_13] [i_14 + 1] [i_14]) : (((((/* implicit */_Bool) (unsigned char)0)) ? (arr_42 [i_10]) : (arr_36 [i_10] [(_Bool)1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
