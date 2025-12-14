/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131688
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_17 = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) == ((+(((/* implicit */int) arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 8; i_4 += 2) 
                        {
                            {
                                arr_10 [i_0] [i_1] [i_1] [i_2] [0LL] [i_4 - 2] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))) * (min((var_6), (((/* implicit */unsigned long long int) arr_7 [i_4] [i_3] [i_2]))))))) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned short)18367)))) * (((/* implicit */int) (unsigned char)248))))) : (((((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_2])) - (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))) * (max((((/* implicit */unsigned int) var_5)), (4294967295U)))))));
                                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((1656485457U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)178))))) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1])) * (((/* implicit */int) (unsigned char)0))))))))));
                                var_19 = ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)18382)))))))) <= (((((/* implicit */int) arr_3 [i_3 - 1] [i_4] [i_4 - 2])) - (((/* implicit */int) arr_3 [i_3 + 1] [i_4] [i_4 + 2])))));
                                var_20 += ((/* implicit */long long int) (((-(((/* implicit */int) var_16)))) > (((((/* implicit */int) arr_2 [i_3 + 1])) * (((/* implicit */int) arr_2 [i_3 - 1]))))));
                            }
                        } 
                    } 
                    var_21 -= ((/* implicit */unsigned long long int) arr_8 [i_2] [i_2] [i_2] [i_1] [i_0] [i_1] [i_0]);
                    arr_11 [i_2] [i_2] = ((/* implicit */signed char) min((min((max((((/* implicit */int) (unsigned short)55763)), (arr_6 [i_1] [i_1] [i_1] [i_1] [i_0]))), ((-(((/* implicit */int) arr_2 [i_0])))))), (((/* implicit */int) arr_2 [i_0]))));
                    arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0] [i_1] [i_2])) < (((/* implicit */int) min((((/* implicit */short) arr_7 [i_1] [i_1] [i_1])), (arr_2 [i_2]))))));
                }
            } 
        } 
        var_22 ^= ((/* implicit */_Bool) ((arr_9 [i_0] [i_0]) / (((/* implicit */long long int) ((((/* implicit */int) (signed char)110)) >> (((((/* implicit */int) (unsigned short)49744)) - (49741))))))));
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
        {
            for (int i_6 = 4; i_6 < 7; i_6 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        arr_19 [i_0] [i_0] [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((((((/* implicit */int) arr_7 [i_6] [i_6 - 2] [i_6])) * (((/* implicit */int) arr_7 [i_6] [i_6 + 2] [i_6])))) & (((((/* implicit */int) var_4)) - (((/* implicit */int) arr_7 [i_6] [i_6 - 2] [i_6]))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 0; i_8 < 10; i_8 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned char) max((arr_2 [i_6 - 3]), (((/* implicit */short) ((((/* implicit */int) arr_2 [i_6 - 4])) > (((/* implicit */int) arr_2 [i_6 - 4])))))));
                            arr_22 [i_6] [i_8] [i_6] [i_7] [i_8] [i_7] [i_8] = ((/* implicit */unsigned char) arr_14 [i_0] [7U]);
                        }
                        var_24 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)47160))));
                    }
                    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_6 - 4] [i_5])) ? (((/* implicit */int) arr_17 [(unsigned short)3] [i_5] [i_6 - 3] [i_6])) : (((/* implicit */int) arr_17 [i_6] [i_0] [i_6 - 2] [i_6]))))) ? (((((/* implicit */_Bool) arr_17 [i_0] [i_5] [i_6 + 2] [i_0])) ? (((/* implicit */int) arr_17 [i_0] [i_5] [i_6 - 3] [i_5])) : (((/* implicit */int) arr_17 [i_0] [i_5] [i_6 + 3] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_5] [i_6 - 1] [i_6]))))))))));
                }
            } 
        } 
    }
    for (unsigned short i_9 = 2; i_9 < 17; i_9 += 1) 
    {
        arr_25 [i_9] [i_9] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_23 [i_9] [i_9 + 1])) <= (((/* implicit */int) arr_24 [i_9]))))) < (((/* implicit */int) (short)-24)))))));
        /* LoopNest 3 */
        for (short i_10 = 0; i_10 < 18; i_10 += 1) 
        {
            for (unsigned short i_11 = 0; i_11 < 18; i_11 += 1) 
            {
                for (unsigned int i_12 = 3; i_12 < 17; i_12 += 1) 
                {
                    {
                        var_26 = (i_9 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_31 [i_9 + 1] [i_10] [i_9]) << (((arr_31 [i_9] [i_10] [i_9]) - (654310505U)))))) ? ((-((~(2638481846U))))) : (min((((/* implicit */unsigned int) arr_24 [i_9 - 1])), (max((((/* implicit */unsigned int) arr_23 [i_9] [i_10])), (arr_32 [i_9] [i_9] [i_9] [i_9] [i_9 + 1])))))))) : (((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_31 [i_9 + 1] [i_10] [i_9]) << (((((arr_31 [i_9] [i_10] [i_9]) - (654310505U))) - (4256232875U)))))) ? ((-((~(2638481846U))))) : (min((((/* implicit */unsigned int) arr_24 [i_9 - 1])), (max((((/* implicit */unsigned int) arr_23 [i_9] [i_10])), (arr_32 [i_9] [i_9] [i_9] [i_9] [i_9 + 1]))))))));
                        var_27 += ((/* implicit */unsigned long long int) var_5);
                        /* LoopSeq 2 */
                        for (short i_13 = 4; i_13 < 14; i_13 += 1) /* same iter space */
                        {
                            arr_38 [i_9] [i_10] [i_9] [i_9] [i_13 - 1] = ((/* implicit */_Bool) 12282879376459791876ULL);
                            arr_39 [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_9 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (-603067893) : (((/* implicit */int) var_13))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [(signed char)10]))) / (9231262959316379222ULL)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)55752)) ? (((/* implicit */int) arr_34 [i_10] [i_11] [i_9])) : (((/* implicit */int) arr_34 [i_9 - 1] [i_10] [i_9])))))));
                            arr_40 [i_9 - 1] [i_11] [i_12] [i_9] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_27 [i_9 + 1] [i_10])) ? (arr_27 [i_9 + 1] [i_10]) : (arr_27 [i_9 + 1] [i_9 - 2])))));
                            arr_41 [i_9] [i_10] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (arr_35 [i_9] [i_10] [i_10] [i_12] [i_11]))))))) << (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) < (arr_33 [i_9] [i_11] [i_9] [i_9]))))));
                        }
                        for (short i_14 = 4; i_14 < 14; i_14 += 1) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned int) min((((((((/* implicit */int) var_8)) <= (((/* implicit */int) (unsigned short)18356)))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -18LL)))))))), (((/* implicit */unsigned long long int) arr_31 [i_9] [i_10] [i_9]))));
                            var_29 = ((/* implicit */short) arr_26 [i_9] [i_10]);
                            arr_44 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_9] [i_10] [i_10] [i_12 - 1] [i_14] [i_14]))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_9])))))))) ? (((((/* implicit */int) arr_23 [i_10] [i_14 - 2])) + (((/* implicit */int) var_2)))) : (min((((/* implicit */int) (unsigned char)228)), (((((/* implicit */int) (unsigned short)47168)) * (((/* implicit */int) (signed char)-65))))))));
                        }
                    }
                } 
            } 
        } 
        var_30 *= ((/* implicit */unsigned long long int) (signed char)2);
        var_31 -= ((/* implicit */unsigned short) (-(((/* implicit */int) min((arr_42 [i_9] [i_9] [i_9 - 2] [i_9 + 1]), (arr_42 [i_9] [i_9] [i_9 - 2] [i_9]))))));
    }
    var_32 = ((/* implicit */_Bool) var_16);
}
