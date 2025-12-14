/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186176
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
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 4; i_1 < 12; i_1 += 3) 
        {
            arr_5 [i_1] [i_1 - 4] = ((/* implicit */unsigned char) (+(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-112)), ((unsigned char)200))))));
            var_15 ^= ((/* implicit */unsigned int) ((unsigned long long int) (-(arr_4 [i_0] [i_1 + 1] [i_0]))));
        }
        /* LoopSeq 2 */
        for (int i_2 = 3; i_2 < 13; i_2 += 2) /* same iter space */
        {
            arr_10 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) -734475274)) + (max((arr_3 [i_0] [i_2 - 1] [i_2 - 1]), (((/* implicit */unsigned long long int) var_9))))));
            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_9 [i_0] [i_2] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)192))))))))) || (((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) arr_8 [i_0]))))))));
            arr_11 [i_0] = ((/* implicit */unsigned long long int) arr_6 [i_2]);
        }
        for (int i_3 = 3; i_3 < 13; i_3 += 2) /* same iter space */
        {
            var_17 ^= ((/* implicit */signed char) min((max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_6)) : (5514998884224804865ULL))), (((((/* implicit */_Bool) (unsigned char)200)) ? (12931745189484746751ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)147))))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) + (33554432)))), (min((var_12), (((/* implicit */unsigned long long int) (unsigned short)2056))))))));
            var_18 = ((/* implicit */unsigned char) max((arr_13 [i_3 - 3] [i_3 - 2] [i_3 - 3]), (((/* implicit */unsigned int) var_10))));
            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1073725440U))))) ^ (((/* implicit */int) ((1617213045U) >= (((/* implicit */unsigned int) 268427264)))))));
            arr_15 [i_0] [i_3 + 1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_0]))))) ? (((((/* implicit */_Bool) arr_14 [i_0])) ? (((/* implicit */int) arr_14 [i_0])) : (((/* implicit */int) arr_14 [i_0])))) : ((-(((/* implicit */int) arr_14 [i_0]))))));
        }
        arr_16 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (arr_13 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) var_14))))) > ((-(arr_9 [i_0] [i_0] [i_0])))))), ((+(((/* implicit */int) (_Bool)1))))));
        var_20 = ((/* implicit */unsigned long long int) ((_Bool) (-(min((12931745189484746751ULL), (((/* implicit */unsigned long long int) 4186112U)))))));
    }
    for (signed char i_4 = 0; i_4 < 22; i_4 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_5 = 3; i_5 < 21; i_5 += 4) 
        {
            for (unsigned short i_6 = 2; i_6 < 20; i_6 += 3) 
            {
                {
                    arr_25 [i_4] [i_5] [i_4] = ((/* implicit */long long int) (unsigned char)200);
                    /* LoopSeq 2 */
                    for (long long int i_7 = 2; i_7 < 18; i_7 += 1) /* same iter space */
                    {
                        var_21 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1617213045U)) ? (2677754268U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)113)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) -539622535)) : (((((/* implicit */_Bool) arr_23 [i_7] [(short)18])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_4] [i_4] [i_4]))) : (var_12)))));
                        var_22 ^= (~(((((/* implicit */long long int) ((/* implicit */int) arr_27 [i_7] [i_5] [i_6] [i_7] [i_5 - 2] [i_7 + 3]))) - (((((/* implicit */_Bool) var_2)) ? (arr_26 [i_4] [i_4] [i_6 + 1] [i_6 + 1] [i_6 + 1]) : ((-9223372036854775807LL - 1LL)))))));
                        arr_28 [i_4] [i_5] [i_6] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_14), (((/* implicit */int) var_8))))) ? (((/* implicit */int) (!(arr_24 [i_4] [i_4] [i_7] [i_7 - 1])))) : (((((/* implicit */_Bool) arr_20 [i_4] [i_5] [i_5])) ? (2013265920) : (((/* implicit */int) (short)7800))))))) ? (((/* implicit */unsigned long long int) var_5)) : (arr_17 [i_6] [i_7]));
                        /* LoopSeq 3 */
                        for (signed char i_8 = 0; i_8 < 22; i_8 += 4) 
                        {
                            arr_33 [i_4] [i_5] [i_5] [i_7] [i_4] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(var_7))))));
                            var_23 ^= ((/* implicit */signed char) (unsigned short)20253);
                            var_24 = ((/* implicit */unsigned short) arr_26 [i_4] [i_5] [14] [i_7] [i_8]);
                            arr_34 [i_5] [i_5] [i_6] [i_7 + 2] [i_8] [i_5 - 2] [i_6 - 1] = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_4] [i_4] [i_5] [i_5] [i_6] [(unsigned char)18] [i_8]))))) % (arr_23 [i_6 + 2] [i_7 - 1]));
                        }
                        for (long long int i_9 = 3; i_9 < 21; i_9 += 3) /* same iter space */
                        {
                            var_25 ^= ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 2013265909)))) > (((((/* implicit */_Bool) 599519182U)) ? (656659645121717911ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7800)))))))), ((+(((/* implicit */int) (unsigned short)40890))))));
                            arr_38 [i_5] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) 2013265909)))))));
                            var_26 ^= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (arr_17 [i_7] [i_5 - 1])))) ? (6294927568498174743ULL) : (((/* implicit */unsigned long long int) ((int) arr_36 [i_6] [i_5] [i_6] [i_5] [1U])))))));
                        }
                        for (long long int i_10 = 3; i_10 < 21; i_10 += 3) /* same iter space */
                        {
                            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-82)) ? (((/* implicit */int) var_8)) : (2013265902)));
                            var_28 = ((/* implicit */long long int) (~(arr_31 [i_7] [i_7] [i_7] [i_7] [i_7] [i_4] [i_7])));
                            arr_41 [i_7] [i_7] [i_6] [i_5] [i_10 - 1] [i_7] = ((((/* implicit */_Bool) 8030937687768488149LL)) ? (((/* implicit */unsigned int) (+(1753695852)))) : ((((_Bool)1) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-122))))));
                        }
                    }
                    for (long long int i_11 = 2; i_11 < 18; i_11 += 1) /* same iter space */
                    {
                        var_29 ^= ((/* implicit */unsigned char) ((unsigned short) ((unsigned short) arr_43 [i_11 - 2] [i_5 - 3] [i_6 + 1] [i_5 - 3])));
                        var_30 = ((/* implicit */long long int) (-(arr_19 [i_5 - 2])));
                        arr_45 [i_4] [i_5] [i_6] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_19 [i_11 + 2]) * (arr_19 [i_11 - 1])))) ? ((((+(((/* implicit */int) arr_27 [i_4] [i_4] [i_11] [i_4] [i_4] [i_4])))) / ((-(var_4))))) : ((+((-(((/* implicit */int) var_0))))))));
                        arr_46 [i_6] [i_5] [i_5] [i_11] = ((/* implicit */int) arr_17 [i_4] [i_5]);
                        arr_47 [i_4] [i_5] [i_11] [i_11] [i_4] [i_11] = ((/* implicit */_Bool) 5865646691063569810LL);
                    }
                    arr_48 [i_4] [i_5] = ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) 2034250763)) : (12931745189484746751ULL));
                }
            } 
        } 
        arr_49 [i_4] = ((/* implicit */int) (((!(((/* implicit */_Bool) var_3)))) ? (max((-8030937687768488123LL), (((/* implicit */long long int) arr_22 [i_4])))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) != (arr_22 [i_4])))))));
    }
    for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 1) 
    {
        arr_53 [i_12] = ((/* implicit */unsigned int) max((((/* implicit */int) var_13)), (min((((-2034250764) - (((/* implicit */int) (short)63)))), (((/* implicit */int) (unsigned char)80))))));
        var_31 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) 2013265929)) ? (((/* implicit */unsigned long long int) 2058060326)) : (12931745189484746758ULL))))))));
    }
    /* vectorizable */
    for (short i_13 = 0; i_13 < 22; i_13 += 2) 
    {
        var_32 = ((/* implicit */long long int) ((int) (short)-44));
        arr_57 [i_13] [(unsigned short)12] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)15093)) ^ (-857803174)));
        var_33 = ((/* implicit */short) (-(-1)));
    }
    var_34 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(var_11)))) ? (((((/* implicit */_Bool) var_6)) ? (857803174) : (((/* implicit */int) (signed char)3)))) : ((~(-2034250763))))) - ((-(((/* implicit */int) (signed char)32))))));
}
