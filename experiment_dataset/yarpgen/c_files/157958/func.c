/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157958
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
    var_14 -= ((/* implicit */unsigned short) var_9);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_15 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) (unsigned short)511)), (1537023007U))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
            /* LoopSeq 3 */
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                arr_7 [i_2] [i_0] [i_0] [(short)13] = ((/* implicit */unsigned int) (signed char)116);
                arr_8 [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((short) 6320899525778197722ULL));
                var_16 |= ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)121))));
            }
            for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) /* same iter space */
            {
                arr_12 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)108)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_3]))))), (1547407315U)));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_4 = 0; i_4 < 14; i_4 += 3) 
                {
                    var_17 = ((/* implicit */unsigned int) 15057809134426189996ULL);
                    arr_16 [i_0] [i_3] [i_3] [i_4] [i_4] |= ((/* implicit */short) (((((_Bool)1) ? (12125844547931353884ULL) : (((/* implicit */unsigned long long int) -380681033)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10093)))));
                    var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) 0)) ? (12125844547931353891ULL) : (10183498648900344415ULL)));
                    arr_17 [i_4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((697703618U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-52)))))) ? (((((/* implicit */_Bool) -864401811)) ? (2730953514853231585ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1] [i_3])))));
                }
            }
            for (unsigned char i_5 = 0; i_5 < 14; i_5 += 2) /* same iter space */
            {
                arr_22 [i_0] [i_1] = ((/* implicit */_Bool) 0);
                var_19 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (12125844547931353905ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-21)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 1733471648)) >= (7472153764083388899ULL))))) : (((((/* implicit */_Bool) 2147483646)) ? (12125844547931353894ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) -1)))));
            }
        }
        arr_23 [i_0] = ((/* implicit */_Bool) (short)-10088);
        arr_24 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)74)) ? ((-(max((((/* implicit */unsigned long long int) 0)), (12125844547931353905ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -13)) - (914381320U))))));
    }
    /* vectorizable */
    for (unsigned int i_6 = 0; i_6 < 22; i_6 += 2) 
    {
        var_20 &= ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)112))));
        arr_27 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)133)) ? (arr_26 [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)112)))));
        var_21 *= arr_26 [i_6] [i_6];
        /* LoopSeq 1 */
        for (unsigned int i_7 = 3; i_7 < 21; i_7 += 1) 
        {
            var_22 -= ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)127))));
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)112)) ? (914381342U) : (((/* implicit */unsigned int) -1))));
            arr_31 [i_7 - 2] = ((var_3) / (arr_25 [i_7 + 1]));
        }
    }
    for (short i_8 = 0; i_8 < 11; i_8 += 1) 
    {
        var_24 += ((/* implicit */unsigned int) max(((~(4680859971731993973ULL))), (((/* implicit */unsigned long long int) max((arr_15 [11U]), (arr_15 [i_8]))))));
        /* LoopNest 2 */
        for (signed char i_9 = 0; i_9 < 11; i_9 += 4) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    var_25 = ((/* implicit */unsigned long long int) var_1);
                    arr_39 [i_10] [i_9] [i_10] = 3380585986U;
                    arr_40 [i_10] [i_10] [i_8] [i_10] = arr_32 [i_10];
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 2; i_11 < 9; i_11 += 2) 
                    {
                        for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 2) 
                        {
                            {
                                arr_47 [i_8] [i_10] [i_10] [i_10] [7ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) != (914381320U)));
                                arr_48 [i_10] [i_10] = ((/* implicit */int) ((((((/* implicit */_Bool) 4253981858U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)112))) : (arr_13 [i_11 - 2] [i_11 + 1] [i_11 - 1] [i_11 - 1] [(short)7] [i_11 - 1]))) & (((/* implicit */unsigned int) -88577300))));
                                arr_49 [i_11] [i_11] [i_10] [i_11 + 2] [i_12] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((3ULL), (0ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)7635))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_11 - 2] [i_10] [i_8])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 1) 
        {
            arr_53 [i_13] [7ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)203)), ((unsigned short)36372)))) ? (((/* implicit */int) max((((/* implicit */short) (signed char)45)), ((short)-7625)))) : (((/* implicit */int) max(((unsigned short)16510), (((/* implicit */unsigned short) (signed char)-75)))))));
            arr_54 [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_8] [0ULL] [i_13])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)-22251))))) ? (min((9223372036854775807LL), (((/* implicit */long long int) 0U)))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)54)))));
            arr_55 [(unsigned short)4] [i_13] = ((/* implicit */unsigned short) (+(0)));
        }
    }
    var_26 *= ((/* implicit */unsigned int) ((14131068879684139680ULL) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) 2424296007U))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (((((/* implicit */_Bool) 9462821328832108626ULL)) ? (821996249U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-75))))))))));
}
