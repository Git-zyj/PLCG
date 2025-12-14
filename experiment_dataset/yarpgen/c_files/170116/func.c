/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170116
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
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 2) /* same iter space */
        {
            var_12 *= ((/* implicit */unsigned int) ((((((((/* implicit */int) min(((signed char)-78), (((/* implicit */signed char) arr_1 [i_1 + 1]))))) + (2147483647))) << (((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [15] [i_1]))) / (var_3))))) | (((((/* implicit */_Bool) ((arr_2 [i_1]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40300)))))) ? ((+(((/* implicit */int) arr_6 [i_0] [(short)21] [i_0 - 3])))) : (((((/* implicit */int) (unsigned char)33)) + (((/* implicit */int) arr_1 [i_0 - 1]))))))));
            arr_7 [19LL] [i_1] [i_1] = ((/* implicit */short) (((!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0))))))) && (((/* implicit */_Bool) max((((((/* implicit */int) var_10)) * (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_6 [i_0 - 3] [i_0 - 3] [i_1])) : (((/* implicit */int) var_8)))))))));
            var_13 += ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0 - 1] [i_1 - 2])) & (((/* implicit */int) arr_4 [i_0 - 2] [i_1 + 2]))))), ((~(((((/* implicit */_Bool) 1928753708107305998LL)) ? (var_9) : (((/* implicit */unsigned long long int) 16383))))))));
        }
        for (unsigned short i_2 = 2; i_2 < 18; i_2 += 2) /* same iter space */
        {
            arr_11 [i_0 - 2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) ((arr_9 [i_0]) >= (arr_9 [i_0])))) << (((/* implicit */int) ((((/* implicit */_Bool) (signed char)9)) || (((/* implicit */_Bool) 18325031909873130543ULL)))))))) / (min((((-1752839999694188183LL) | (var_0))), (((/* implicit */long long int) ((((/* implicit */int) var_5)) * (((/* implicit */int) (unsigned char)255)))))))));
            /* LoopSeq 1 */
            for (long long int i_3 = 2; i_3 < 19; i_3 += 4) 
            {
                var_14 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) * (((((/* implicit */int) arr_5 [i_0] [i_2] [i_3])) - (((/* implicit */int) (signed char)-6))))))), (min((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) << (((((/* implicit */int) var_7)) - (9703)))))), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) & (2774015436U)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        {
                            var_15 |= ((/* implicit */long long int) ((((((var_9) << (((/* implicit */int) arr_6 [i_2] [i_3] [i_4])))) >> (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))) == (536608768LL)))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) max((((1462345054U) == (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), ((!(((/* implicit */_Bool) arr_14 [i_0 + 1] [i_0]))))))))));
                            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((max((((((/* implicit */int) arr_4 [i_2] [i_5])) % (((/* implicit */int) (unsigned short)30087)))), (((/* implicit */int) max((((/* implicit */signed char) arr_1 [i_0])), ((signed char)-1)))))) == (max((((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_5)))), (((/* implicit */int) max((arr_14 [i_4] [(short)11]), (((/* implicit */unsigned short) var_4))))))))))));
                            arr_19 [i_0] [(unsigned short)20] [i_3] [i_4] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) var_8)) << (((((/* implicit */int) var_4)) - (77))))) > (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) var_1))))))))) | (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) < (((/* implicit */int) (signed char)0)))))) & (((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_2] [i_3 + 1] [i_3 + 1]))) & (var_3)))))));
                            arr_20 [i_0] [i_2] [i_3 + 3] [i_4] = ((/* implicit */unsigned char) ((min((((7909264306973958977LL) | (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_2] [(unsigned char)13] [i_4] [i_4] [13LL]))))), (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_2] [i_3] [i_2]))))))) > (((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_2 - 1] [i_2])) * (((/* implicit */int) arr_8 [i_2 + 4] [i_2])))))));
                        }
                    } 
                } 
                arr_21 [i_0] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */int) arr_17 [i_0] [(unsigned short)4] [i_0] [i_2 - 2] [(unsigned char)15])) * (((/* implicit */int) var_8))))))) && (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_3] [i_0])) && (((/* implicit */_Bool) 4294967295U))))) << (((((((/* implicit */_Bool) arr_8 [i_0] [i_3 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-7))) : (var_9))) - (18446744073709551589ULL))))))));
            }
            var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_9 [i_2 - 1]), (((/* implicit */long long int) 2021427908U))))) ? (((((/* implicit */int) (_Bool)1)) << (((arr_9 [i_0]) - (5745881935997299362LL))))) : (((/* implicit */int) min(((unsigned char)108), (((/* implicit */unsigned char) arr_18 [i_0 + 1] [i_0] [i_0] [i_0] [(unsigned short)19] [19U] [i_2])))))))) * (((((/* implicit */_Bool) (unsigned char)0)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_2 - 1] [i_2 + 3] [i_2]))) | (var_2))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0] [(unsigned char)20] [i_2 + 2])) & (arr_13 [i_0]))))))));
        }
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((((((/* implicit */int) (signed char)-1)) + (2147483647))) << (((((/* implicit */int) (unsigned char)4)) - (4))))) : ((-(((/* implicit */int) var_11)))))) == (((/* implicit */int) max((((((/* implicit */int) arr_18 [i_0] [(signed char)9] [(short)16] [i_0] [i_0] [5ULL] [i_0])) == (((/* implicit */int) arr_10 [i_0] [i_0] [i_0])))), (((arr_9 [i_0]) == (((/* implicit */long long int) ((/* implicit */int) (signed char)-9)))))))))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_6 = 1; i_6 < 22; i_6 += 3) 
    {
        for (long long int i_7 = 0; i_7 < 23; i_7 += 1) 
        {
            {
                arr_28 [i_6] [i_6] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [(unsigned short)11] [14LL] [i_7]))) / (11651854972808433543ULL)))))) ? (((var_3) | (-8854509371084452477LL))) : (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -7909264306973958978LL)))))) / (var_1)))));
                var_19 = ((/* implicit */int) ((((((((/* implicit */_Bool) arr_26 [i_6] [i_7] [i_6])) && (((/* implicit */_Bool) var_10)))) || ((!(((/* implicit */_Bool) var_6)))))) && (((/* implicit */_Bool) min((4050743872U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) 5987761035132978823LL))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_8 = 4; i_8 < 22; i_8 += 2) 
    {
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((var_1) / (((/* implicit */long long int) ((arr_31 [i_8]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [(unsigned char)15])))))))))));
        arr_32 [i_8] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) 2315281365218395951ULL)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_29 [i_8]))))) : ((~(arr_31 [i_8])))));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        arr_37 [i_9] = ((/* implicit */short) ((((arr_9 [i_9]) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_9])) || (((/* implicit */_Bool) (unsigned short)4041)))))))) > (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) (unsigned short)7230)) / (((/* implicit */int) (signed char)-2)))) >= (((((/* implicit */int) arr_17 [i_9] [i_9] [i_9] [i_9] [i_9])) / (((/* implicit */int) arr_22 [i_9]))))))))));
        var_22 = ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_9] [i_9]))) / (2004531016U)))) / (((var_1) << (((var_0) - (4235499325113732794LL))))));
        var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((var_0) * (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_9]))))) : (((((/* implicit */_Bool) arr_30 [i_9] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_2 [i_9]))))) > ((((((-9223372036854775807LL - 1LL)) & (arr_16 [i_9] [i_9] [i_9] [i_9]))) & (((/* implicit */long long int) max((((/* implicit */unsigned int) var_8)), (2664389961U))))))));
        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((((/* implicit */int) (signed char)-87)) + (2147483647))) << (((((((/* implicit */int) (signed char)-106)) + (133))) - (27)))))))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) (short)-17820)) || (((/* implicit */_Bool) 2315281365218395951ULL))))))) : (((((/* implicit */int) ((((/* implicit */int) arr_25 [i_9])) != (((/* implicit */int) arr_6 [(unsigned char)8] [i_9] [i_9]))))) + (((/* implicit */int) arr_26 [i_9] [i_9] [i_9])))))))));
    }
}
