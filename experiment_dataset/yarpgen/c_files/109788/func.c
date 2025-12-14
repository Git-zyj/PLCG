/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109788
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) /* same iter space */
    {
        var_15 ^= ((/* implicit */unsigned short) (~(((arr_1 [i_0]) / (arr_1 [i_0])))));
        var_16 += ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) / (928884333624000669ULL))) << (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0])))))));
    }
    for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_1] [i_2]))) ? ((~(arr_7 [i_1] [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)5685)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)92)) : (((/* implicit */int) (short)14280)))) : (((/* implicit */int) (signed char)(-127 - 1))))))));
            arr_10 [8U] = ((/* implicit */int) ((((((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) arr_9 [i_1] [i_2] [i_2])) : (var_2))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))) != (var_7))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (signed char)104)))) : (((((/* implicit */_Bool) (signed char)-82)) ? (264031227U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64)))))));
        }
        /* vectorizable */
        for (short i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            arr_15 [i_1] = ((/* implicit */_Bool) (+(arr_6 [i_1])));
            /* LoopSeq 1 */
            for (int i_4 = 0; i_4 < 14; i_4 += 3) 
            {
                var_18 = ((/* implicit */long long int) ((4030936059U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)251)))));
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    for (unsigned int i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        {
                            arr_26 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) arr_25 [i_3] [(unsigned char)13] [i_5] [11U])) : (((66427442357587476LL) >> (((((/* implicit */int) (unsigned short)511)) - (478)))))));
                            arr_27 [6U] [i_4] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (-8992029967165233218LL) : (8992029967165233190LL)))) ? (arr_11 [i_6] [6U] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_1] [i_3] [i_3] [i_3])))));
                            arr_28 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) arr_4 [i_3]);
                        }
                    } 
                } 
                var_19 = ((/* implicit */int) arr_0 [i_1]);
            }
            var_20 = ((var_13) | (((/* implicit */unsigned long long int) arr_14 [i_3] [i_1])));
            arr_29 [i_1] [i_3] = ((/* implicit */short) ((arr_9 [i_1] [i_1] [i_3]) - (((/* implicit */int) arr_24 [i_1] [i_1] [i_1] [i_3] [i_3]))));
        }
        var_21 *= ((/* implicit */unsigned char) (((-(arr_12 [i_1]))) <= (((/* implicit */unsigned long long int) 4030936048U))));
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 1; i_7 < 13; i_7 += 3) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 2) 
            {
                {
                    arr_34 [i_1] [i_7] [i_7] = arr_19 [i_1];
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((((/* implicit */_Bool) (~((+(((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */unsigned int) arr_2 [i_7 + 1] [i_7 - 1])) ^ (var_11))) : ((+(arr_33 [i_7 - 1] [i_7 - 1])))))));
                    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? ((-(arr_19 [i_8]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_1])) || (((/* implicit */_Bool) arr_19 [i_1])))))))))));
                    arr_35 [(short)8] [i_7] [i_1] = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) arr_5 [i_7 + 1])) && (((/* implicit */_Bool) var_11))))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_12 [i_1]) + (arr_12 [i_1])))) ? (((((/* implicit */_Bool) arr_12 [i_1])) ? (arr_12 [1U]) : (arr_12 [i_1]))) : (((/* implicit */unsigned long long int) (-(-8992029967165233219LL))))));
    }
    /* vectorizable */
    for (unsigned char i_9 = 0; i_9 < 14; i_9 += 3) /* same iter space */
    {
        var_25 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_9] [i_9] [13U] [i_9] [6LL] [i_9])) ? (((/* implicit */int) arr_23 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) : (((/* implicit */int) arr_23 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))));
        arr_40 [i_9] = ((((var_11) < (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_9] [i_9] [(short)11] [i_9]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_1 [i_9])))) : (arr_6 [i_9]));
        arr_41 [i_9] [i_9] = ((((/* implicit */_Bool) arr_22 [i_9] [i_9])) ? (((/* implicit */unsigned long long int) arr_19 [i_9])) : ((~(65535ULL))));
        arr_42 [i_9] [i_9] = ((/* implicit */short) (-(arr_11 [i_9] [i_9] [i_9])));
        arr_43 [i_9] [(unsigned short)11] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_9] [i_9] [i_9] [i_9]))) ^ (var_8)));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_10 = 1; i_10 < 15; i_10 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */signed char) ((arr_45 [i_10 - 1] [i_10 + 1]) | (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_10 + 1])))));
        arr_48 [8U] [(short)1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(arr_47 [(unsigned char)10])))) - (((((/* implicit */_Bool) var_13)) ? (arr_45 [(unsigned short)12] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_10])))))));
    }
    for (unsigned int i_11 = 1; i_11 < 15; i_11 += 2) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) (+(-8992029967165233215LL))))));
        var_28 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_46 [i_11 + 1])) ? ((+(((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) arr_50 [10LL])) ? (((/* implicit */int) arr_46 [i_11])) : (((/* implicit */int) arr_44 [i_11] [i_11]))))));
        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(264031227U)))) ? (((((/* implicit */int) arr_49 [i_11 - 1] [i_11 + 1])) * (((/* implicit */int) arr_49 [i_11 - 1] [i_11 + 1])))) : (((((/* implicit */_Bool) arr_47 [i_11 + 1])) ? (((((/* implicit */_Bool) arr_47 [i_11 - 1])) ? (((/* implicit */int) arr_46 [(_Bool)0])) : (((/* implicit */int) arr_49 [i_11 - 1] [i_11])))) : (((/* implicit */int) arr_49 [i_11 + 1] [i_11 + 1])))))))));
    }
    var_30 = ((/* implicit */unsigned int) var_0);
    var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) && ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (16665446103147282476ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))))))));
}
