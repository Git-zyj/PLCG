/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149498
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
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */int) min((min((6713960264201456339ULL), (((/* implicit */unsigned long long int) -3337001975100156420LL)))), (13104086794420217100ULL)));
                /* LoopSeq 3 */
                for (long long int i_2 = 1; i_2 < 13; i_2 += 3) 
                {
                    var_11 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(6713960264201456339ULL)))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned short)21016), (((/* implicit */unsigned short) (unsigned char)140))))) || (((/* implicit */_Bool) (~(((/* implicit */int) var_3))))))))));
                                var_13 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)-103)), (var_9)))) ? (((/* implicit */int) max((((/* implicit */short) arr_9 [i_0] [i_2 + 1] [13LL] [13LL] [i_4])), (var_0)))) : (var_5)));
                                arr_11 [10] [i_1] [i_2 + 1] [i_4] [i_4] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */long long int) (-(((/* implicit */int) var_4))))) == (((long long int) var_5)))));
                            }
                        } 
                    } 
                }
                for (long long int i_5 = 2; i_5 < 12; i_5 += 2) 
                {
                    /* LoopSeq 4 */
                    for (long long int i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        var_14 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))));
                        arr_16 [(short)8] [i_1] [i_5] [i_6] = arr_9 [i_5 - 2] [i_6] [i_6] [i_6] [(_Bool)1];
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        arr_20 [8ULL] [(unsigned short)5] [i_7] = ((/* implicit */_Bool) min(((~(((/* implicit */int) ((((/* implicit */int) (unsigned short)46256)) != (((/* implicit */int) arr_6 [i_0] [i_7] [i_5 - 1] [i_7]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_7])) ? (((/* implicit */int) arr_18 [i_0] [i_1] [i_5] [i_1])) : (((/* implicit */int) arr_5 [i_1] [i_1] [i_7]))))) ? (((/* implicit */int) ((short) var_2))) : (((/* implicit */int) arr_17 [i_5 - 1] [i_5 - 2] [i_5 - 1] [i_5 - 1]))))));
                        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((-5781129257376821075LL) & (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0] [i_1] [i_5 + 2] [i_0])))))))))))));
                        arr_21 [i_0] [i_1] [i_5 + 1] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)0)) << (((min((((/* implicit */long long int) arr_9 [i_0] [i_1] [i_5] [i_0] [i_7])), (-8873811546299448141LL))) + (8873811546299448149LL)))));
                        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (~(min((((/* implicit */long long int) arr_18 [i_0] [i_0] [(short)1] [i_5 + 1])), (var_1))))))));
                    }
                    /* vectorizable */
                    for (short i_8 = 0; i_8 < 14; i_8 += 1) 
                    {
                        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((11732783809508095281ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned char)130)))))))));
                        arr_24 [i_0] [i_0] [i_1] [i_1] [i_8] = ((long long int) arr_5 [(short)0] [i_5 - 1] [i_5]);
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 14; i_9 += 2) 
                    {
                        arr_27 [i_0] [i_0] [i_5 + 2] [i_9] [i_0] [i_1] = ((/* implicit */unsigned long long int) var_8);
                        var_18 = ((/* implicit */short) ((arr_19 [i_0] [i_1] [i_5 + 2]) ? (((long long int) arr_13 [i_1] [i_5] [i_5])) : (((((/* implicit */_Bool) arr_13 [i_0] [i_1] [10ULL])) ? (arr_22 [i_0] [i_1] [i_5] [i_9] [i_5 + 2] [i_9]) : (1761456391930666391LL)))));
                        arr_28 [7LL] [i_5] [i_9] = ((/* implicit */unsigned short) arr_26 [i_0]);
                        var_19 &= ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) / (((/* implicit */int) arr_17 [i_0] [i_1] [i_1] [i_9]))))) ? (arr_23 [i_5 + 2] [i_5 + 1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) 11732783809508095276ULL)) ? (((/* implicit */int) (unsigned short)44520)) : (((/* implicit */int) (unsigned char)116))))));
                    }
                    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((3050357224049531069LL), (((/* implicit */long long int) 1379531580)))))));
                    arr_29 [i_1] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) || (arr_19 [i_0] [i_1] [i_5 + 2])))), (((arr_19 [i_0] [(short)1] [i_5 + 2]) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [6LL] [i_1] [i_5 + 2]))) : (arr_22 [i_0] [i_5] [i_5 + 2] [i_0] [i_0] [i_0])))));
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 14; i_10 += 4) 
                    {
                        for (long long int i_11 = 0; i_11 < 14; i_11 += 3) 
                        {
                            {
                                var_21 += ((/* implicit */long long int) (~(((/* implicit */int) arr_6 [(_Bool)1] [i_0] [i_1] [i_5 + 1]))));
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) 2147483635)) < (-7683656010595371055LL)));
                                arr_36 [i_10] [i_10] [i_1] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)54967)) ? (((/* implicit */int) (unsigned char)140)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55273))) <= (((((/* implicit */_Bool) -955750405)) ? (11189352609791972048ULL) : (((/* implicit */unsigned long long int) 9223372036854775807LL)))))))));
                                var_23 = ((/* implicit */unsigned char) max((min((((/* implicit */int) arr_3 [i_1] [i_11])), ((~(((/* implicit */int) var_7)))))), (((int) var_6))));
                                var_24 = ((/* implicit */int) arr_26 [(_Bool)1]);
                            }
                        } 
                    } 
                }
                for (signed char i_12 = 0; i_12 < 14; i_12 += 4) 
                {
                    var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) 1379531600))));
                    /* LoopNest 2 */
                    for (int i_13 = 3; i_13 < 11; i_13 += 4) 
                    {
                        for (long long int i_14 = 1; i_14 < 12; i_14 += 1) 
                        {
                            {
                                arr_45 [(unsigned char)2] [i_1] [(unsigned char)2] [i_12] [(unsigned char)2] [i_13] [i_13] = ((/* implicit */short) (+(max((arr_42 [i_12] [i_13 - 3] [i_13 + 2] [i_13 + 2] [i_14 + 2] [i_14]), (arr_42 [i_12] [i_13 + 3] [i_13 - 2] [i_13 - 2] [i_14 + 1] [i_14 + 2])))));
                                arr_46 [i_12] [i_13] = ((/* implicit */signed char) arr_13 [i_13] [i_14] [i_13]);
                                var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) arr_10 [i_1] [i_12] [i_12]))));
                                arr_47 [i_0] [i_1] [i_12] [i_13] [i_14 + 2] [i_1] &= ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_12] [i_13] [i_1] [i_14])) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_12] [i_13] [i_13] [i_14])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_13] [i_13 + 2] [i_14]))))));
                            }
                        } 
                    } 
                }
                var_27 = ((/* implicit */int) arr_41 [i_0] [i_1]);
                arr_48 [i_0] [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0])) ? ((-(((/* implicit */int) (unsigned short)7)))) : (-2147483636))), (((arr_15 [i_0] [i_0] [i_0] [i_1]) ? (((/* implicit */int) arr_15 [(short)2] [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_1]))))));
            }
        } 
    } 
    var_28 = var_6;
}
