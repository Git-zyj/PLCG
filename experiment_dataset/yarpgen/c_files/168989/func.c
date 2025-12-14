/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168989
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
    for (unsigned long long int i_0 = 4; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (~(max((((/* implicit */long long int) arr_1 [i_0 - 2])), (var_11)))));
        var_16 -= ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) ((1152921504606846944ULL) / (((/* implicit */unsigned long long int) arr_1 [i_0]))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)174)), (var_0)))))));
    }
    for (short i_1 = 2; i_1 < 7; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */int) (~(arr_4 [i_1])));
        /* LoopSeq 2 */
        for (int i_2 = 1; i_2 < 9; i_2 += 4) 
        {
            arr_10 [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) arr_4 [i_1 - 1]);
            arr_11 [i_2] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_5 [i_2])) ? (17293822569102704662ULL) : (arr_4 [i_1]))))))));
            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) arr_8 [i_2] [i_2]))));
            var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 4294967295U))));
        }
        for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            var_19 = 17293822569102704649ULL;
            arr_14 [i_3] = ((/* implicit */_Bool) (+(0ULL)));
            /* LoopSeq 4 */
            for (signed char i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                var_20 = ((/* implicit */long long int) arr_16 [i_1] [i_1 - 1] [i_4]);
                arr_17 [i_3] [i_3] [i_4] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)48839))));
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    for (unsigned char i_6 = 3; i_6 < 8; i_6 += 2) 
                    {
                        {
                            arr_25 [i_1] [i_3] [i_4] [i_5] [i_3] = ((/* implicit */unsigned char) max(((~(arr_3 [i_1 - 2] [i_6 + 2]))), (((/* implicit */long long int) max((((/* implicit */unsigned short) arr_22 [i_3] [i_6 - 3] [i_6] [i_6] [i_6] [i_6] [i_6])), (arr_9 [i_1 - 2] [i_6 + 2]))))));
                            var_21 = ((/* implicit */unsigned long long int) (~(max((var_2), (((((/* implicit */_Bool) 6771946846375334164LL)) ? (((/* implicit */long long int) arr_16 [i_1] [i_3] [i_4])) : (arr_5 [i_6])))))));
                        }
                    } 
                } 
                arr_26 [i_1] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) 4294967295U);
            }
            for (unsigned long long int i_7 = 1; i_7 < 7; i_7 += 1) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_8 = 0; i_8 < 10; i_8 += 1) 
                {
                    var_22 = ((/* implicit */short) (~(arr_31 [i_3] [i_3] [i_7 - 1] [i_8] [i_1 + 3] [i_3])));
                    var_23 = var_6;
                }
                for (short i_9 = 0; i_9 < 10; i_9 += 4) 
                {
                    arr_35 [i_3] [i_9] [i_3] [i_9] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_34 [i_1] [i_3])) ? (arr_28 [i_1] [i_7] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) (~(0U))))))) ? ((+(((/* implicit */int) (unsigned short)48839)))) : (((/* implicit */int) arr_15 [i_1] [i_3] [i_9]))));
                    var_24 = (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))));
                    var_25 = ((/* implicit */signed char) arr_32 [i_3] [i_7 + 3] [i_7]);
                }
                var_26 -= ((/* implicit */signed char) var_4);
                arr_36 [i_7] [i_3] [i_7] = ((/* implicit */short) arr_19 [i_1] [i_1] [i_1] [i_1]);
                var_27 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_19 [i_7 + 2] [i_7 - 1] [i_3] [i_1])) || (((/* implicit */_Bool) arr_19 [i_1 - 1] [i_3] [i_7] [i_1])))) || (((((/* implicit */_Bool) arr_19 [i_1 + 3] [i_3] [i_7] [i_3])) || (((/* implicit */_Bool) arr_19 [i_1] [i_3] [i_7] [i_7 + 1]))))));
            }
            /* vectorizable */
            for (long long int i_10 = 0; i_10 < 10; i_10 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_11 = 0; i_11 < 10; i_11 += 1) 
                {
                    for (long long int i_12 = 0; i_12 < 10; i_12 += 3) 
                    {
                        {
                            arr_45 [i_12] [i_1] [i_10] [i_3] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) - (((/* implicit */int) (unsigned char)158))))) == ((-(10887042831900232213ULL)))));
                            arr_46 [i_1] [i_3] = ((/* implicit */signed char) arr_3 [i_1] [i_10]);
                            var_28 = 4294967293U;
                            arr_47 [i_1] [i_3] [i_10] [i_3] = ((/* implicit */signed char) ((0ULL) << (4ULL)));
                        }
                    } 
                } 
                arr_48 [i_3] [i_1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_12 [i_10])))) ? (arr_5 [i_1]) : (arr_37 [i_1] [i_1 + 2] [i_10])));
            }
            for (long long int i_13 = 0; i_13 < 10; i_13 += 4) /* same iter space */
            {
                var_29 = ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_13 [i_3] [i_13]))))) ^ (((((/* implicit */_Bool) (short)-27401)) ? (arr_8 [i_1 - 2] [i_1]) : (arr_8 [i_1 + 3] [i_13])))));
                /* LoopSeq 3 */
                for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 2) 
                {
                    arr_53 [i_3] [i_3] [i_13] [i_14] [i_13] [i_13] = ((/* implicit */unsigned char) (signed char)-125);
                    arr_54 [i_14] [i_3] [i_3] [i_1] = ((/* implicit */unsigned short) (signed char)39);
                }
                /* vectorizable */
                for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 1) 
                {
                    var_30 = ((/* implicit */short) ((arr_28 [i_1 + 2] [i_1] [i_1]) != (arr_28 [i_1 + 2] [i_1] [i_1])));
                    var_31 -= ((/* implicit */unsigned short) (~(-9059139180640286431LL)));
                    arr_58 [i_1] [i_3] [i_13] [i_15] [i_15] [i_13] = ((/* implicit */signed char) (+(((/* implicit */int) arr_15 [i_13] [i_3] [i_1 + 2]))));
                    var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1] [i_1 - 1]))) : (((long long int) var_10)))))));
                }
                for (unsigned int i_16 = 1; i_16 < 7; i_16 += 4) 
                {
                    arr_61 [i_1] [i_1] |= ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) var_3)) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1023))) : (4294967295U)))));
                    arr_62 [i_1] [i_1] [i_1] [i_3] = arr_42 [i_1] [i_3] [i_13] [i_16];
                    var_33 = var_12;
                }
            }
        }
        var_34 |= ((/* implicit */unsigned short) ((unsigned long long int) 4294967278U));
        arr_63 [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) ((-1819084250) <= (((/* implicit */int) (_Bool)0))))))));
    }
    var_35 = ((/* implicit */unsigned char) max((max((var_0), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (short)-295))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_14)) : (8710041139120887297LL)))) || (((/* implicit */_Bool) var_10)))))));
    /* LoopNest 2 */
    for (long long int i_17 = 2; i_17 < 15; i_17 += 4) 
    {
        for (unsigned short i_18 = 3; i_18 < 15; i_18 += 4) 
        {
            {
                var_36 = ((/* implicit */unsigned int) arr_65 [i_17]);
                var_37 -= ((/* implicit */unsigned char) (_Bool)1);
                arr_68 [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)992)) ? (2U) : (((/* implicit */unsigned int) (((+(((/* implicit */int) (unsigned short)64477)))) << (((((arr_66 [i_18] [i_17]) >> (((arr_67 [i_18]) - (6955156348860803980ULL))))) - (8008605912737ULL))))))));
            }
        } 
    } 
    var_38 |= ((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)12742))))) : (var_0))) : (var_0)));
}
