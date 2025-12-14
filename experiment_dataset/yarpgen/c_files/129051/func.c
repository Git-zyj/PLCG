/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129051
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
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned char)2)), ((-(((/* implicit */int) (!(((/* implicit */_Bool) -7943615015290938471LL)))))))));
                arr_7 [i_0] [10] [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1394221117)) ? ((-9223372036854775807LL - 1LL)) : (6878058059902418494LL)))) ? (-1394221093) : (((/* implicit */int) ((signed char) arr_4 [i_0] [i_1]))))), (1394221111)));
                var_12 = ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [12ULL] [12ULL])) ? (arr_6 [i_1]) : (((/* implicit */int) var_9))))) & (((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */unsigned int) var_5)) : (1362002824U))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 2; i_2 < 14; i_2 += 2) 
    {
        for (int i_3 = 3; i_3 < 14; i_3 += 4) 
        {
            {
                var_13 = min((((((/* implicit */_Bool) arr_9 [i_2 + 1])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2] [i_3]))))), (((/* implicit */long long int) arr_8 [i_2] [i_2])));
                var_14 *= ((/* implicit */signed char) -1920074844);
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 13; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        {
                            arr_17 [i_2] [i_2] [9] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 791637410U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)109))) : (4241212112U)))) ? (((/* implicit */int) (_Bool)1)) : (max((arr_16 [i_3 - 1] [i_2 + 1] [i_4 + 1] [i_5] [i_2] [8LL]), (arr_16 [i_3 - 2] [i_2 - 2] [i_4 - 1] [i_5] [(short)4] [i_5]))));
                            arr_18 [(unsigned char)9] [i_3] [i_3] [i_4 - 1] [i_4] [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((arr_12 [i_2 + 1] [i_3]) ? (1394221111) : (((/* implicit */int) arr_12 [i_2 - 1] [i_3]))))) > (((4241212122U) * (((/* implicit */unsigned int) ((1208840211) >> (((((/* implicit */int) arr_1 [i_3])) - (50169))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-7766)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_10)));
    /* LoopSeq 2 */
    for (short i_6 = 1; i_6 < 22; i_6 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */short) min((((/* implicit */long long int) (unsigned short)19326)), (2341829622903346852LL)));
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 24; i_7 += 2) 
        {
            for (unsigned int i_8 = 0; i_8 < 24; i_8 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 22; i_9 += 4) 
                    {
                        for (signed char i_10 = 4; i_10 < 22; i_10 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) (unsigned short)46209);
                                arr_33 [i_6 + 2] [i_6] [17U] [i_6] [i_6 + 1] = ((/* implicit */long long int) ((((637244089U) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)76))))) ? (((((/* implicit */_Bool) arr_30 [i_6 - 1] [i_9 + 2] [16U] [i_10 - 2])) ? (((/* implicit */unsigned long long int) -3432011751025948108LL)) : (arr_30 [i_6 + 2] [i_9 + 2] [i_9] [i_10 + 2]))) : (((((/* implicit */_Bool) arr_30 [i_6 + 2] [i_9 + 1] [i_6 + 2] [i_10 + 2])) ? (arr_30 [i_6 + 2] [i_9 - 2] [i_10 + 1] [i_10 - 1]) : (arr_30 [i_6 + 1] [i_9 + 1] [i_10] [i_10 - 3])))));
                            }
                        } 
                    } 
                    arr_34 [i_6 + 1] [i_6] [i_6] [i_6 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_19 [i_6] [i_7]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)40)) ? (((/* implicit */int) (_Bool)1)) : (2068424037)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)98))) + (arr_30 [i_6 + 2] [i_6] [i_6 + 2] [i_6])))))) ? (((/* implicit */unsigned int) (((!((_Bool)1))) ? (-1208840211) : (((/* implicit */int) (unsigned short)51153))))) : (4241212125U)));
                    arr_35 [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_21 [i_6]), (((/* implicit */long long int) ((4241212109U) / (((/* implicit */unsigned int) arr_22 [i_7] [i_6])))))))) ? (((((((/* implicit */_Bool) 1999751199U)) ? (-1208840195) : (((/* implicit */int) (unsigned short)29854)))) / (((/* implicit */int) min(((unsigned char)157), (((/* implicit */unsigned char) (signed char)-74))))))) : (((/* implicit */int) (short)-16480))));
                }
            } 
        } 
    }
    for (short i_11 = 1; i_11 < 22; i_11 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) max((var_18), (arr_32 [i_11] [i_11] [(unsigned short)16] [(short)20] [8])));
        arr_39 [i_11] [i_11] = ((/* implicit */unsigned char) arr_38 [i_11]);
    }
    /* LoopNest 3 */
    for (long long int i_12 = 0; i_12 < 24; i_12 += 2) 
    {
        for (unsigned short i_13 = 0; i_13 < 24; i_13 += 3) 
        {
            for (signed char i_14 = 3; i_14 < 22; i_14 += 4) 
            {
                {
                    var_19 -= ((/* implicit */unsigned char) ((((arr_30 [i_14 + 2] [i_14 + 2] [i_14 + 2] [i_14]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10385))))) ? (arr_26 [i_14 + 2] [i_14 + 2] [i_14 + 2] [i_14 - 3]) : (max((arr_26 [i_14 + 2] [i_14] [i_14 + 2] [(unsigned short)21]), (((/* implicit */unsigned long long int) 1920074844))))));
                    /* LoopNest 2 */
                    for (long long int i_15 = 3; i_15 < 21; i_15 += 3) 
                    {
                        for (int i_16 = 0; i_16 < 24; i_16 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */short) ((((_Bool) arr_19 [i_13] [i_14 - 3])) ? ((~(arr_19 [i_13] [i_14 - 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_19 [i_13] [i_14 - 3]))))));
                                var_21 = ((/* implicit */int) 3052933153U);
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_45 [i_12] [i_13] [i_15 + 3]), (((/* implicit */unsigned short) var_6))))) ? (((arr_20 [i_14 - 1]) ? (((/* implicit */long long int) ((((/* implicit */int) arr_47 [1U])) * (((/* implicit */int) arr_53 [i_12] [i_12] [i_14] [i_15] [i_16]))))) : (((((/* implicit */_Bool) var_9)) ? (7651099524714057020LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)32))))))) : (var_8)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
