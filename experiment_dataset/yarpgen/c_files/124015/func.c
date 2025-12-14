/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124015
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
    for (long long int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned char) (~((((~(((/* implicit */int) (short)0)))) & (((/* implicit */int) var_9))))));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 22; i_2 += 2) 
                {
                    for (signed char i_3 = 2; i_3 < 21; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                            {
                                arr_13 [i_1] [i_0 + 1] [i_2] [i_3] [i_3] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (_Bool)0))) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : ((((_Bool)1) ? (1108307720798208LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-16964)))))));
                                var_15 *= ((/* implicit */int) (short)14635);
                                var_16 |= ((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) 4U)))));
                                var_17 = ((/* implicit */_Bool) ((arr_2 [i_0 - 2]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))));
                                arr_14 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 2]))) : (arr_1 [i_0 - 2])));
                            }
                            arr_15 [i_0] [i_1] [i_1 + 1] |= ((/* implicit */unsigned char) ((short) max((((/* implicit */long long int) ((_Bool) (short)-16970))), ((-(-677229268724239871LL))))));
                            arr_16 [i_2] [i_2 + 1] [i_2] [i_2] = ((/* implicit */short) (unsigned char)255);
                        }
                    } 
                } 
                arr_17 [i_0] = ((_Bool) ((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? ((-(-1))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_6 [i_0] [12U])) : (((/* implicit */int) (unsigned short)3))))));
            }
        } 
    } 
    var_18 |= ((/* implicit */unsigned long long int) var_1);
    var_19 = ((/* implicit */_Bool) var_7);
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) 
    {
        for (int i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            {
                arr_24 [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) var_3);
                var_20 = ((/* implicit */unsigned long long int) (short)-32762);
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    for (long long int i_8 = 1; i_8 < 13; i_8 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) min((((((/* implicit */int) min(((short)0), ((short)2734)))) != (((/* implicit */int) ((unsigned short) (short)0))))), ((_Bool)1)));
                            arr_30 [i_5] [i_7] [i_7] [i_8] [i_7] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)2736))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_8 - 1] [i_7 + 1] [i_7 + 1])) && (((/* implicit */_Bool) 9223372036854775807LL))))) : (arr_22 [i_8 + 1] [i_7 + 1] [i_7 + 1])));
                            /* LoopSeq 4 */
                            for (short i_9 = 2; i_9 < 13; i_9 += 2) 
                            {
                                var_22 = (signed char)1;
                                var_23 = ((/* implicit */int) (((-(4294967295U))) != (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_10)), (arr_19 [(short)6] [i_5])))))));
                                arr_33 [i_5] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_6 [i_7] [i_8 + 1])) : (((/* implicit */int) arr_6 [i_7] [i_6]))))) ? ((-(((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) arr_6 [i_7] [i_6])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_6 [i_7] [i_7]))))));
                                var_24 = ((/* implicit */_Bool) max((var_24), (((((((((/* implicit */int) arr_23 [i_6] [i_8 + 1])) == (((/* implicit */int) arr_23 [i_6] [i_7])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : ((-(12ULL))))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) 2632076802U))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) arr_22 [10U] [i_8] [i_9])) ? (-1108307720798181LL) : (((/* implicit */long long int) var_12)))))))))));
                                var_25 ^= ((/* implicit */int) (-(((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_5])) & (((/* implicit */int) var_11))))) ^ (((unsigned long long int) (short)-3484))))));
                            }
                            for (signed char i_10 = 3; i_10 < 11; i_10 += 2) 
                            {
                                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_5] [i_6] [i_7] [i_8] [i_10 - 2] [i_8 - 1])) ? (((((/* implicit */int) arr_29 [i_5] [i_6] [i_5] [i_8] [i_10 - 2] [i_8 - 1])) + (((/* implicit */int) arr_29 [i_5] [(signed char)13] [(signed char)13] [i_8] [i_10 - 2] [i_8 - 1])))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_29 [i_5] [12] [i_7] [i_8 - 1] [i_10 - 2] [i_8 - 1])) : (((/* implicit */int) arr_29 [i_5] [i_6] [i_7 + 1] [i_8] [i_10 - 2] [i_8 - 1]))))));
                                var_27 = ((/* implicit */long long int) (+(arr_1 [i_10 - 1])));
                            }
                            for (unsigned short i_11 = 2; i_11 < 13; i_11 += 2) 
                            {
                                var_28 -= ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)16))) : (((((/* implicit */_Bool) arr_1 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_21 [i_5] [i_6]))))));
                                var_29 = ((/* implicit */unsigned int) var_11);
                                var_30 = arr_23 [i_5] [i_6];
                                arr_41 [i_5] [i_7] [i_5] [i_5] [i_11 - 1] = ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1)));
                            }
                            for (long long int i_12 = 3; i_12 < 10; i_12 += 2) 
                            {
                                var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) arr_36 [i_5])) % (arr_28 [i_7] [i_8] [i_12 + 3])))))) ? ((-(((long long int) arr_5 [i_8])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_34 [i_8] [i_8 + 1] [i_8 + 1] [i_8] [i_7])) : (((/* implicit */int) ((signed char) arr_28 [i_7] [i_7] [i_7 + 1]))))))));
                                var_32 = ((/* implicit */short) ((((/* implicit */_Bool) arr_21 [i_5] [i_12])) ? (min((((/* implicit */unsigned long long int) arr_32 [i_5] [i_5] [4] [i_8] [i_12 - 2])), (max((((/* implicit */unsigned long long int) 1240265279)), (arr_7 [i_5] [i_12] [i_7 + 1] [i_8]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)2)))));
                            }
                            arr_44 [i_7] [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)44)) / (((/* implicit */int) var_10))));
                        }
                    } 
                } 
            }
        } 
    } 
}
