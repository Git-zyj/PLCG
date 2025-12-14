/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118129
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
    for (unsigned int i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        var_18 += min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)91))))) : (((((/* implicit */_Bool) (unsigned char)142)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)165)))))))), (arr_1 [i_0 - 1] [(signed char)1]));
        var_19 += ((/* implicit */signed char) arr_1 [i_0] [i_0]);
        var_20 = ((/* implicit */unsigned long long int) ((-2613656571226474448LL) / (-1181293994398544486LL)));
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)84)) && (((/* implicit */_Bool) var_2))))) : (((/* implicit */int) ((((/* implicit */int) (signed char)15)) >= (((/* implicit */int) (signed char)-84)))))))) ? (max((((arr_0 [(unsigned short)1]) << (((/* implicit */int) (unsigned char)0)))), ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) (~(((((/* implicit */int) (signed char)35)) * (((/* implicit */int) var_0))))))))))));
        var_22 = ((/* implicit */unsigned int) var_4);
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) /* same iter space */
    {
        arr_4 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) (signed char)101)))));
        var_23 = ((/* implicit */unsigned short) (signed char)-73);
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) /* same iter space */
    {
        arr_7 [20ULL] [20ULL] = ((/* implicit */unsigned int) ((arr_3 [i_2] [i_2]) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)34212)) ? (((/* implicit */int) (unsigned short)46274)) : (((/* implicit */int) arr_2 [i_2])))))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            for (unsigned int i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                {
                    var_24 = ((/* implicit */signed char) -4244769799086610934LL);
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 20; i_6 += 3) 
                        {
                            {
                                var_25 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_9 [i_2]))))) != (((var_2) & (((/* implicit */unsigned long long int) arr_15 [i_2] [i_2] [i_4] [i_5] [i_2] [i_5]))))));
                                arr_19 [i_5] [i_5] [i_5] [i_3] [i_6] [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) -8241426989070073739LL)) + (var_14)));
                                arr_20 [i_2] [i_2] [i_4] [i_2] [i_2] [i_2] [i_2] |= ((/* implicit */unsigned long long int) (~(75300751U)));
                            }
                        } 
                    } 
                    arr_21 [i_2] [(unsigned short)10] [i_3] = ((unsigned short) arr_15 [i_2] [i_2] [i_3] [i_2] [i_4] [i_4]);
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 3) 
        {
            for (unsigned short i_8 = 0; i_8 < 21; i_8 += 3) 
            {
                for (unsigned long long int i_9 = 2; i_9 < 18; i_9 += 2) 
                {
                    {
                        /* LoopSeq 4 */
                        for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 4) /* same iter space */
                        {
                            arr_32 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) (-(0U)));
                            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 9196036541537961724ULL)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)27013))))) : (4294967291U))))));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 4) /* same iter space */
                        {
                            var_27 += ((/* implicit */long long int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) <= (6917529027641081856ULL)))));
                            arr_36 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) (+(arr_33 [i_2] [i_7] [i_8] [i_9] [i_11] [i_9])));
                        }
                        for (signed char i_12 = 2; i_12 < 20; i_12 += 2) 
                        {
                            var_28 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_17 [i_9 - 2] [i_12 + 1] [i_12] [i_12 - 2] [i_12] [i_12]))));
                            var_29 = ((/* implicit */unsigned short) 2097151U);
                            arr_40 [i_2] [(signed char)2] [i_8] [i_9 + 2] [(signed char)2] |= ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_2] [i_2] [i_2] [i_2] [i_2])) && (((/* implicit */_Bool) arr_9 [i_12])))))));
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 2) 
                        {
                            arr_44 [i_13] [i_2] [i_8] [i_7] [i_2] = ((/* implicit */unsigned short) var_15);
                            arr_45 [i_2] [i_2] [i_8] [i_8] [i_9] [i_13] [10U] = ((/* implicit */long long int) arr_31 [i_9] [i_9 + 3] [i_9 + 3] [i_9] [i_9 + 2]);
                            arr_46 [i_2] [i_7] [i_8] [i_8] [i_8] [i_9] &= ((/* implicit */unsigned long long int) (unsigned char)4);
                        }
                        arr_47 [i_2] [i_7] = ((/* implicit */unsigned short) ((arr_28 [i_2] [i_2] [i_8] [i_2] [i_8] [(signed char)12]) >= (((arr_1 [(unsigned char)12] [i_2]) - (((/* implicit */unsigned long long int) arr_5 [(signed char)3]))))));
                        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)255)))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_14 = 3; i_14 < 19; i_14 += 4) 
    {
        var_31 += (+(((((/* implicit */_Bool) 2048776972U)) ? (((unsigned int) var_15)) : (arr_3 [i_14 + 1] [i_14 + 1]))));
        arr_50 [i_14] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)8669))));
        var_32 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_3 [14ULL] [i_14])) + (max((9250707532171589892ULL), (3160791481700943355ULL))))))));
        arr_51 [i_14] [i_14] = ((/* implicit */unsigned int) 14948472090532816840ULL);
    }
}
