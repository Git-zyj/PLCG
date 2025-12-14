/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12664
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        var_20 += ((/* implicit */unsigned short) ((int) ((((/* implicit */int) (unsigned short)58734)) & (((/* implicit */int) (signed char)-127)))));
        var_21 &= ((/* implicit */int) 9007199120523264LL);
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((/* implicit */_Bool) (signed char)-46);
        var_22 = ((/* implicit */_Bool) min((var_22), ((!(arr_5 [i_1])))));
    }
    var_23 = ((/* implicit */unsigned long long int) max((var_23), ((((!(((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned short) var_11))))))) ? (((((/* implicit */_Bool) (unsigned short)6801)) ? (18446744073709551605ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)516))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18014398509481920LL)) ? (var_10) : (var_1)))) / (14142121629654421002ULL)))))));
    var_24 += (~(min((max((((/* implicit */int) var_18)), (1163995285))), (((/* implicit */int) var_7)))));
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_4 = 1; i_4 < 10; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) <= (((/* implicit */int) ((((/* implicit */int) ((var_17) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3])))))) <= (((/* implicit */int) min(((unsigned short)58724), (((/* implicit */unsigned short) arr_5 [i_5]))))))))));
                            arr_20 [i_2] [i_3] [i_3] [i_5] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [(signed char)7])) ? (max((arr_18 [i_5] [i_4 + 1] [(signed char)7] [i_4 + 1]), (((/* implicit */unsigned long long int) var_18)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)22)) >> (((((/* implicit */int) arr_17 [i_5] [i_4 - 1] [i_4] [i_4 - 1])) - (31))))))));
                            var_26 = (+(arr_1 [i_3]));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 2; i_7 < 7; i_7 += 3) 
                    {
                        var_27 = ((/* implicit */signed char) arr_19 [i_7 + 1] [i_7 + 1] [i_7] [i_7]);
                        arr_25 [i_2] [i_3] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((((183873372) | (var_2))), (((/* implicit */int) var_14))))) | (max((((/* implicit */unsigned long long int) arr_1 [i_6])), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)42))) : (arr_15 [i_7] [i_3] [i_2])))))));
                    }
                    for (short i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 4) 
                        {
                            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((~(var_1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_8]))))))))) : (((((/* implicit */_Bool) (unsigned short)65019)) ? (((unsigned long long int) arr_15 [i_3] [i_6] [i_6])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_6] [i_2] [i_9] [i_8])))))));
                            arr_33 [i_2] [i_3] [i_6] [i_6] [i_9] = ((/* implicit */int) max((min((((/* implicit */long long int) ((((/* implicit */unsigned int) arr_27 [(short)4] [(_Bool)1] [i_6] [i_6] [(short)4] [(short)4])) | (3306921135U)))), (max((var_0), (((/* implicit */long long int) arr_27 [10LL] [2LL] [2U] [3LL] [i_8] [i_9])))))), (((/* implicit */long long int) (~(((72243829) ^ (0))))))));
                            var_29 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_6])) ? (((/* implicit */int) arr_16 [i_2])) : (((/* implicit */int) arr_16 [(unsigned char)7]))))) ? (((/* implicit */int) ((short) ((short) var_14)))) : ((+(((/* implicit */int) arr_22 [i_2] [6] [i_2] [i_9])))));
                        }
                        for (int i_10 = 0; i_10 < 11; i_10 += 3) 
                        {
                            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) max((((((/* implicit */int) (short)28269)) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (153))))), (((((/* implicit */_Bool) arr_35 [i_10] [(_Bool)0] [(signed char)6] [(unsigned short)8] [i_10] [i_10])) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (signed char)-22)))))))));
                            arr_36 [i_6] [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) arr_31 [9LL] [i_3] [i_6])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((var_18) || (((/* implicit */_Bool) (unsigned short)38761)))))))) : (((((/* implicit */_Bool) arr_27 [i_2] [i_3] [i_3] [i_6] [i_8] [(signed char)3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [3]))) : (arr_18 [i_8] [i_6] [2] [i_2])))));
                            arr_37 [i_2] [(unsigned char)2] [i_2] |= ((/* implicit */signed char) arr_1 [(unsigned short)1]);
                            var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1073741824)) ? (576053822530584711LL) : (-8782750541075693156LL)));
                        }
                        for (long long int i_11 = 2; i_11 < 8; i_11 += 2) 
                        {
                            var_32 = ((/* implicit */signed char) max(((+(((/* implicit */int) var_18)))), (((/* implicit */int) (signed char)-53))));
                            arr_42 [i_6] = ((/* implicit */unsigned char) ((((long long int) (~(arr_6 [i_6] [6])))) >= (((/* implicit */long long int) ((/* implicit */int) max(((signed char)44), ((signed char)-16)))))));
                        }
                        var_33 |= ((/* implicit */unsigned short) ((9187343239835811840LL) & (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_2] [i_3] [i_6] [i_6] [i_8] [3U])))));
                    }
                    arr_43 [i_2] [i_3] |= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_11 [i_2])) || (((/* implicit */_Bool) arr_11 [i_2])))) ? (-564030681) : (((/* implicit */int) (!(((/* implicit */_Bool) 1073741824)))))));
                    var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) (signed char)-22))));
                    var_35 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (short)28269)) ? (((/* implicit */int) (short)32763)) : (((/* implicit */int) (signed char)-36)))), (-1053504039)));
                }
                var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) (signed char)21))));
                /* LoopNest 3 */
                for (short i_12 = 0; i_12 < 11; i_12 += 1) 
                {
                    for (int i_13 = 0; i_13 < 11; i_13 += 4) 
                    {
                        for (int i_14 = 3; i_14 < 8; i_14 += 1) 
                        {
                            {
                                arr_54 [i_2] [i_2] [4] [9LL] [i_2] [(signed char)2] = ((int) (+(((/* implicit */int) (short)16383))));
                                var_37 = ((/* implicit */unsigned long long int) ((((((1073741824) / (((/* implicit */int) arr_13 [3ULL] [2] [(signed char)5])))) == ((~(arr_14 [i_2] [(signed char)9]))))) ? ((~(max((arr_6 [i_2] [0U]), (-9187343239835811841LL))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_14 + 2]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
