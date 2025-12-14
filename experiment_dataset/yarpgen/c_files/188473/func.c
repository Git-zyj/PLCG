/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188473
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            {
                var_13 -= ((/* implicit */short) arr_3 [(signed char)7] [i_1]);
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    var_14 ^= ((/* implicit */signed char) max((((/* implicit */int) ((unsigned char) max((arr_5 [(signed char)6] [i_1]), (arr_2 [i_0] [i_0]))))), (((((((/* implicit */int) arr_3 [i_0] [i_2])) > (((/* implicit */int) arr_6 [i_0] [i_0] [7])))) ? (((/* implicit */int) ((signed char) arr_3 [i_2] [i_1]))) : (((/* implicit */int) arr_4 [(signed char)6]))))));
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */int) min((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_0] [i_2]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))))))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_5 [i_1] [i_1]))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_1])) & (((/* implicit */int) arr_1 [i_2]))))), (max((6970473861723236340ULL), (((/* implicit */unsigned long long int) (short)32767))))))));
                    arr_8 [(short)4] [i_1] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((arr_4 [i_1]), (((/* implicit */unsigned short) arr_1 [(_Bool)1]))))), (min((arr_2 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0]))))))) ? (((((/* implicit */_Bool) 10824787152327306571ULL)) ? (0ULL) : (10824787152327306571ULL))) : (((11ULL) | (11476270211986315275ULL)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_15 [i_4] [i_1] [i_4] [i_3] [i_4] [9ULL] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) min((arr_1 [i_0]), (arr_6 [i_0] [i_0] [i_2])))), (((((/* implicit */_Bool) arr_9 [i_0] [i_4])) ? (((/* implicit */int) arr_3 [i_2] [i_4])) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_0] [i_0]))))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) max((arr_12 [i_0] [i_0] [i_1] [i_2] [i_4]), (arr_6 [i_0] [i_1 - 1] [i_4])))), (((int) arr_2 [(_Bool)1] [i_4]))))) : (min((11476270211986315285ULL), (((/* implicit */unsigned long long int) (unsigned char)197))))));
                                arr_16 [i_0] [i_1] = ((/* implicit */signed char) max((((unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_1] [i_3] [i_4])) && (((/* implicit */_Bool) arr_2 [(short)5] [i_1]))))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_3])) & (arr_0 [i_1 - 1] [1])))) ? (arr_10 [i_2] [i_3] [i_2] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_1] [i_3] [(_Bool)1])) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_3])))))))));
                            }
                        } 
                    } 
                    arr_17 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_14 [i_0] [i_0] [i_2] [i_1] [(short)5] [(short)5])), (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (arr_0 [i_0] [(_Bool)1])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_11 [i_0] [i_0] [i_1 - 1] [(_Bool)1]), (arr_6 [i_0] [i_0] [(signed char)2]))))) : (min((arr_2 [i_1] [i_1]), (arr_5 [i_1] [i_2]))))) : (max((((/* implicit */unsigned long long int) min((arr_0 [i_1] [9ULL]), (((/* implicit */int) arr_3 [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_1 + 1] [i_0] [i_0] [i_2] [i_0]))) : (arr_13 [i_0] [i_0] [i_1] [i_2])))))));
                }
                for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) ((unsigned long long int) arr_4 [i_1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_5] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_0] [i_1])) || (((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_5]))))) : (((/* implicit */int) min((arr_6 [i_5] [i_0] [i_0]), (((/* implicit */unsigned char) arr_3 [i_1] [i_5])))))))) : (min((((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_10 [i_0] [i_0] [5] [(unsigned char)5]) : (arr_2 [0U] [i_1 + 2]))), (((/* implicit */unsigned long long int) max((arr_9 [i_1] [i_0]), (((/* implicit */int) arr_1 [i_1])))))))));
                    arr_20 [i_1] [(_Bool)1] [i_5] [i_5] = ((/* implicit */signed char) arr_1 [i_5]);
                }
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_6 = 0; i_6 < 18; i_6 += 1) 
    {
        arr_24 [6ULL] = ((/* implicit */unsigned short) arr_23 [i_6] [(signed char)17]);
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_21 [i_6] [i_6])) ? (arr_22 [i_6]) : (arr_22 [i_6]))), (((/* implicit */int) min((arr_23 [i_6] [i_6]), (arr_23 [(_Bool)1] [i_6]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((min((((/* implicit */short) arr_21 [i_6] [i_6])), (arr_23 [i_6] [i_6]))), (min((arr_23 [i_6] [i_6]), (((/* implicit */short) arr_21 [i_6] [i_6])))))))) : (((unsigned int) max((((/* implicit */int) arr_21 [i_6] [i_6])), (2147483647)))))))));
        arr_25 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 1181796589U)) ? (7621956921382245044ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */int) min(((unsigned char)91), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)32746)) || ((_Bool)1))))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_23 [i_6] [i_6])) ? (((/* implicit */int) arr_23 [13] [i_6])) : (arr_22 [i_6])))))));
    }
    for (unsigned int i_7 = 4; i_7 < 16; i_7 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_22 [i_7 - 4]))) ? (((/* implicit */int) ((short) arr_21 [i_7 + 1] [i_7]))) : (((((/* implicit */int) arr_26 [i_7] [i_7])) ^ (((/* implicit */int) arr_21 [i_7] [i_7]))))))) ? (((((/* implicit */_Bool) max((15930744209453778851ULL), (((/* implicit */unsigned long long int) (unsigned char)91))))) ? (((/* implicit */int) arr_23 [i_7 - 1] [i_7])) : (((/* implicit */int) min((((/* implicit */short) arr_27 [i_7])), (arr_26 [i_7] [i_7 - 3])))))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_23 [i_7] [5ULL])) ? (((/* implicit */int) arr_23 [i_7] [(unsigned short)14])) : (((/* implicit */int) arr_21 [i_7] [7ULL])))) == (((((/* implicit */_Bool) arr_21 [(unsigned char)1] [i_7 + 1])) ? (((/* implicit */int) arr_27 [i_7])) : (((/* implicit */int) arr_23 [i_7] [i_7])))))))));
        arr_28 [i_7] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)6242)) : (((/* implicit */int) (unsigned char)167))))) ? (4294967295U) : (((/* implicit */unsigned int) ((-1594156520) & (((/* implicit */int) (short)-27047))))))), (((/* implicit */unsigned int) (_Bool)1))));
        arr_29 [i_7] [i_7] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) arr_26 [i_7] [i_7 - 4])) ? (arr_22 [i_7 - 4]) : (((/* implicit */int) arr_26 [i_7 - 4] [i_7 - 3])))))), (((((((/* implicit */_Bool) 18446744073709551598ULL)) && ((_Bool)0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (((((/* implicit */_Bool) arr_22 [i_7])) ? (15930744209453778845ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_7] [i_7])))))))));
        var_18 = ((/* implicit */unsigned short) max((((((_Bool) arr_27 [i_7])) ? (((/* implicit */int) max((arr_23 [i_7 + 2] [i_7]), (arr_23 [i_7] [i_7 - 4])))) : (((((/* implicit */_Bool) arr_21 [i_7 - 3] [i_7])) ? (((/* implicit */int) arr_27 [i_7])) : (((/* implicit */int) arr_27 [1U])))))), (((/* implicit */int) arr_26 [i_7] [i_7]))));
    }
    for (unsigned int i_8 = 4; i_8 < 16; i_8 += 1) /* same iter space */
    {
        arr_33 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_8])) ? (arr_22 [i_8]) : (arr_22 [i_8])))), (((((/* implicit */_Bool) 3113170716U)) ? (7621956921382245053ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)165)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_21 [i_8] [i_8 - 3])) ? (arr_32 [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [3ULL] [i_8])))))))) : (((((/* implicit */_Bool) ((unsigned long long int) arr_30 [i_8]))) ? (((((/* implicit */_Bool) arr_23 [i_8] [i_8])) ? (arr_31 [i_8]) : (((/* implicit */unsigned long long int) arr_22 [i_8])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_21 [i_8] [i_8]))))))));
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_32 [i_8]) & (arr_32 [i_8])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [(unsigned char)16])) ? (((/* implicit */int) arr_27 [i_8])) : (((/* implicit */int) arr_27 [i_8]))))) : (((unsigned int) arr_23 [i_8] [i_8]))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((short) arr_22 [i_8]))), (((long long int) arr_23 [i_8] [15U]))))) : (((((/* implicit */_Bool) arr_32 [i_8])) ? (max((arr_32 [i_8]), (((/* implicit */unsigned long long int) arr_30 [i_8])))) : (((((/* implicit */_Bool) arr_27 [i_8 - 2])) ? (arr_32 [i_8]) : (((/* implicit */unsigned long long int) arr_30 [i_8]))))))));
        arr_34 [i_8] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_8 + 1])) ? (((/* implicit */unsigned long long int) arr_22 [i_8])) : (arr_31 [i_8])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_21 [i_8] [(short)16])), (arr_30 [i_8])))) : (max((arr_31 [i_8]), (arr_32 [i_8]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13633582367567589105ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-20811)))))));
        /* LoopNest 2 */
        for (int i_9 = 2; i_9 < 14; i_9 += 2) 
        {
            for (unsigned char i_10 = 1; i_10 < 16; i_10 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 1; i_11 < 17; i_11 += 2) 
                    {
                        arr_46 [i_8] [i_9] [i_9] [11LL] = ((/* implicit */short) max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_38 [i_8] [i_8] [i_10 - 1])) ? (arr_30 [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [16U] [i_9] [i_8] [(_Bool)1]))))), (((/* implicit */unsigned int) arr_23 [i_8 + 2] [i_9]))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)104)), (8935141660703064064ULL)))) ? (max((arr_31 [i_8]), (arr_32 [i_8]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_44 [i_11 + 1] [i_8] [i_8] [i_8]) && (((/* implicit */_Bool) arr_43 [i_8]))))))))));
                        var_20 = ((/* implicit */unsigned long long int) arr_37 [i_8] [i_9]);
                    }
                    arr_47 [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((arr_45 [i_8] [i_8] [i_9] [i_8] [i_9] [i_10]), (((/* implicit */unsigned long long int) arr_23 [i_8] [i_9 + 1])))) / (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)165)), ((short)-29373)))))))) ? (min((max((((/* implicit */unsigned long long int) arr_26 [i_8] [i_8 - 3])), (arr_31 [i_8]))), (((/* implicit */unsigned long long int) min((arr_22 [i_8]), (((/* implicit */int) arr_26 [i_8] [3U]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) (short)32761))) ^ (((/* implicit */int) ((unsigned char) 717810696801866573LL))))))));
                    arr_48 [i_8] [i_9] [i_8] [i_8] = ((/* implicit */_Bool) max((((((((/* implicit */unsigned long long int) arr_35 [i_8] [i_8] [(unsigned char)7])) > (arr_31 [i_8]))) ? (max((((/* implicit */unsigned long long int) arr_42 [i_8] [i_8] [i_8] [i_8] [i_8] [i_10 + 1])), (arr_32 [i_8]))) : (((((/* implicit */_Bool) arr_37 [(short)11] [(short)11])) ? (arr_31 [i_8]) : (((/* implicit */unsigned long long int) arr_38 [i_8] [i_9] [i_10 + 2])))))), (min((((/* implicit */unsigned long long int) min((arr_37 [i_8 + 1] [i_8 - 1]), (((/* implicit */unsigned int) arr_44 [i_8] [i_8 - 3] [i_8] [0ULL]))))), (((((/* implicit */_Bool) arr_30 [i_9])) ? (((/* implicit */unsigned long long int) arr_39 [i_10 + 2] [i_9] [i_8])) : (arr_31 [i_8])))))));
                    var_21 = ((((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_44 [i_8] [i_8] [i_8] [i_10 + 1])), (arr_30 [i_8])))) == (arr_45 [i_8] [i_8] [i_8] [i_8] [i_9 + 4] [i_10]))) ? (((((/* implicit */_Bool) (unsigned char)170)) ? (((/* implicit */int) (short)-1578)) : (((/* implicit */int) (short)255)))) : (max((1042755241), (((/* implicit */int) (short)4982)))));
                }
            } 
        } 
    }
}
