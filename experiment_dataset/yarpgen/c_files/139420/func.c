/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139420
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
    for (int i_0 = 4; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_20 = ((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)28))))), (var_7))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) >= (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0])))))))));
                    var_21 += ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) min((var_15), (var_6)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_0 [i_1]))))))));
                }
            } 
        } 
        var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) (~(arr_4 [i_0 - 2] [(_Bool)1])))) ? (((/* implicit */unsigned int) max((((/* implicit */int) var_0)), (1072055898)))) : (arr_1 [i_0 + 1]))) - (((/* implicit */unsigned int) (-(1072055898))))));
        arr_6 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_3 [i_0] [i_0 + 1]), (max((var_18), (((/* implicit */int) (short)-30844)))))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_3 = 1; i_3 < 8; i_3 += 3) 
    {
        for (int i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_5 = 2; i_5 < 8; i_5 += 2) 
                {
                    for (signed char i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (unsigned char i_7 = 2; i_7 < 8; i_7 += 2) 
                            {
                                var_23 *= (+(((((/* implicit */_Bool) max((((/* implicit */signed char) var_8)), ((signed char)-29)))) ? (((((/* implicit */_Bool) -1072055899)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3] [i_3] [i_3] [i_3]))) : (13766971371418494012ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_3 [i_3] [i_4])))))));
                                arr_17 [i_3 + 1] [i_4] [i_5] [i_6] [i_6] [i_6] [2U] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_3 + 2] [i_5 + 2] [i_5 - 1] [i_7 + 2])) & (((/* implicit */int) arr_13 [i_3 + 1] [i_5 + 2] [i_5 + 2] [i_7 - 2]))))) ? (((/* implicit */int) max((arr_13 [i_3 - 1] [i_5 - 2] [i_5 - 1] [i_7 + 2]), (arr_13 [i_3 + 2] [i_5 - 2] [i_5 - 2] [i_7 + 1])))) : (((((/* implicit */int) arr_13 [i_3 + 1] [i_5 + 2] [i_5 + 2] [i_7 + 1])) & (((/* implicit */int) arr_13 [i_3 - 1] [i_5 + 2] [i_5 - 1] [i_7 - 1]))))));
                                arr_18 [i_6] [i_4] [i_5] [i_6] [i_7] = ((/* implicit */long long int) (~(arr_10 [i_4] [i_5 + 2] [(_Bool)1])));
                                var_24 = ((/* implicit */long long int) arr_3 [i_3] [i_6]);
                            }
                            for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 2) /* same iter space */
                            {
                                arr_22 [i_6] [(signed char)9] [i_5] [i_6] [i_6] [i_8] = ((unsigned int) 13766971371418494023ULL);
                                arr_23 [i_3] [9ULL] [i_5] [i_6] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */unsigned long long int) (~(arr_15 [i_3] [i_3] [i_3 + 1] [i_6])))) & (min((var_16), (((/* implicit */unsigned long long int) var_15)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((7361075534862960591LL) ^ (((/* implicit */long long int) 1400074213U))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_6]))) : (var_9))))));
                            }
                            for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 2) /* same iter space */
                            {
                                arr_27 [i_9] [i_6] [i_6] [i_4] [i_3] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_3 + 2] [i_3 + 2] [i_3] [i_3] [i_3] [i_3 - 1]))) == (max((((/* implicit */unsigned int) arr_5 [i_3] [i_4] [i_5])), (4294967282U))))))) ^ (min((max((var_1), (((/* implicit */long long int) arr_11 [i_3 + 1] [i_4] [i_5 - 1] [i_6])))), (((/* implicit */long long int) var_13))))));
                                arr_28 [i_6] [i_3] [i_4] [i_4] [i_5] [i_6] [i_9] = ((/* implicit */int) min((max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 2894893083U)) != (var_16)))), (min((2894893064U), (((/* implicit */unsigned int) arr_2 [i_6])))))), (((/* implicit */unsigned int) var_8))));
                                arr_29 [i_3] [i_4] [i_5] [i_6] [i_6] = ((/* implicit */unsigned long long int) var_9);
                            }
                            for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 2) /* same iter space */
                            {
                                var_25 += ((/* implicit */int) (!((!(((/* implicit */_Bool) 7810002111503162627LL))))));
                                arr_32 [i_6] [i_4] [i_5] [i_6] [i_6] = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_16 [i_6] [i_6] [i_6] [(_Bool)1] [i_6]))))), (((((/* implicit */_Bool) var_0)) ? (arr_19 [i_3] [i_4] [i_5] [i_6] [i_10] [i_10]) : (((/* implicit */unsigned long long int) arr_3 [(short)8] [i_4])))))), (((((arr_19 [(signed char)6] [i_4] [i_4] [(unsigned char)0] [i_6] [i_10]) | (((/* implicit */unsigned long long int) arr_25 [(short)3] [i_4] [i_5] [i_6] [i_6] [i_10])))) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6)))))))));
                                arr_33 [i_3 + 1] [i_6] [i_5] [i_6] [(unsigned char)8] = arr_11 [i_4] [i_5] [i_6] [(unsigned short)0];
                            }
                            var_26 += ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_5])) ? (((/* implicit */int) arr_0 [i_5])) : (((/* implicit */int) arr_0 [i_5])))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_5])))))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned int) ((arr_14 [i_3] [i_3] [i_4] [i_4] [0] [i_4]) < (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_4 [i_3] [i_4])))))))));
                /* LoopSeq 2 */
                for (short i_11 = 0; i_11 < 10; i_11 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_12 = 2; i_12 < 8; i_12 += 1) /* same iter space */
                    {
                        arr_38 [i_3] [i_3] [i_4] [i_3] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_3] [i_4] [i_4] [i_11] [3U] [i_12 + 1])) ? (arr_30 [i_3 - 1] [i_12 - 1]) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)52881)) != (((/* implicit */int) arr_13 [i_3 + 2] [i_4] [i_11] [7LL])))))));
                        var_28 += ((short) 649038101075101649ULL);
                        var_29 = ((/* implicit */unsigned char) (~(arr_16 [i_3] [i_3] [i_11] [i_11] [i_12])));
                    }
                    for (unsigned char i_13 = 2; i_13 < 8; i_13 += 1) /* same iter space */
                    {
                        var_30 = ((((/* implicit */_Bool) max((arr_14 [i_3] [i_3 + 1] [i_3] [i_3] [i_11] [i_13 - 2]), (arr_14 [i_3] [i_3] [i_3] [i_3] [i_11] [i_13 - 1])))) ? (((/* implicit */int) (!(var_6)))) : (((/* implicit */int) ((unsigned char) arr_25 [i_3] [i_3 - 1] [i_3] [i_3] [3LL] [i_3]))));
                        var_31 = ((/* implicit */short) min((((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3] [i_3 + 2] [i_3]))) ^ (((((/* implicit */long long int) arr_1 [i_3 + 1])) | (var_9))))), (((/* implicit */long long int) ((((7361075534862960614LL) > (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_3] [i_4] [i_11]))))) ? (((/* implicit */unsigned int) arr_36 [i_3] [i_4] [i_11] [1ULL])) : ((~(arr_40 [i_3] [i_3] [4LL] [i_13]))))))));
                        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_3] [i_11] [i_13 - 2]))))), ((-2147483647 - 1))))) ? (arr_30 [i_3] [i_4]) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_11] [i_13 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3] [(signed char)0] [i_11] [i_13]))) : (arr_15 [i_3 - 1] [i_4] [i_11] [i_11])))))))));
                        arr_42 [i_3] [i_4] [i_11] [(short)5] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_37 [i_13 + 2] [i_4] [i_3 - 1] [i_13 - 1])) && (((/* implicit */_Bool) arr_37 [i_13 + 2] [i_4] [i_3 - 1] [i_13])))) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4] [i_11] [(unsigned short)3])))));
                    }
                    var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((max((((/* implicit */long long int) arr_40 [i_3 - 1] [i_4] [i_4] [i_11])), (var_9))) != (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_3 + 2])))))))))));
                }
                for (short i_14 = 0; i_14 < 10; i_14 += 4) /* same iter space */
                {
                    var_34 -= ((/* implicit */unsigned long long int) arr_21 [i_3]);
                    arr_45 [i_3] [i_3] [i_3] = ((/* implicit */int) var_9);
                    var_35 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_36 [i_3] [8LL] [i_14] [(signed char)1])) ? (arr_11 [i_3 + 2] [i_3 - 1] [(short)9] [i_3]) : (max((arr_43 [i_3] [i_4] [i_14]), (((((((/* implicit */int) arr_21 [i_3])) + (2147483647))) << (((((/* implicit */int) arr_5 [(unsigned char)17] [i_4] [i_4])) - (41379)))))))));
                }
            }
        } 
    } 
}
