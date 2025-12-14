/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154768
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
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) var_7);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 += ((/* implicit */signed char) ((((/* implicit */long long int) max((arr_1 [i_0 - 1]), (arr_7 [i_0 - 1] [i_0 + 1])))) < ((-(arr_0 [i_0 - 1] [i_0 + 2])))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 4) /* same iter space */
                    {
                        arr_13 [i_1] [i_3] = ((/* implicit */_Bool) (~(arr_2 [i_0 + 1])));
                        var_17 = ((/* implicit */unsigned int) arr_12 [i_0] [i_1] [i_2] [i_3]);
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 4) /* same iter space */
                    {
                        var_18 ^= ((/* implicit */_Bool) ((arr_14 [i_0 + 1] [i_0 + 2] [i_1] [i_2] [i_4]) * (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_4])) : (((/* implicit */int) (unsigned short)6726)))))));
                        arr_17 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0 - 1])) ? (var_15) : (((/* implicit */unsigned int) arr_7 [i_0 - 1] [i_0 - 1]))));
                        arr_18 [i_1] [11ULL] [i_1] [i_1] [11ULL] = ((/* implicit */unsigned long long int) var_6);
                        var_19 = ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58814))) <= (var_4)));
                    }
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 4) /* same iter space */
                    {
                        arr_22 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (9223372036854775797LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (arr_7 [i_0 + 1] [i_0 + 2]) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                        arr_23 [i_0] [i_1] [i_1] [i_2] [i_5] = ((/* implicit */unsigned long long int) ((var_1) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2] [i_1])) || (((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [8U]))))))));
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58829))) % (var_15)));
                        var_21 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0 + 1] [5ULL] [i_1] [i_0 + 1] [i_5] [i_5]))) >= (var_6)))) >= (((/* implicit */int) arr_11 [i_0] [(short)0] [i_1] [i_1] [i_2] [i_5]))));
                    }
                    arr_24 [i_1] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) arr_21 [i_0] [i_1] [i_1] [i_0]))))));
                }
            } 
        } 
    }
    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 4) 
    {
        var_22 |= ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) min((arr_6 [(unsigned char)8] [i_6]), (((/* implicit */unsigned int) var_13))))), (var_12))) << (((arr_2 [i_6]) & (((/* implicit */int) arr_9 [i_6] [i_6]))))));
        var_23 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_9 [i_6] [i_6]))));
        /* LoopNest 3 */
        for (unsigned short i_7 = 0; i_7 < 11; i_7 += 3) 
        {
            for (unsigned char i_8 = 0; i_8 < 11; i_8 += 2) 
            {
                for (long long int i_9 = 0; i_9 < 11; i_9 += 2) 
                {
                    {
                        var_24 += ((/* implicit */_Bool) var_8);
                        arr_35 [i_6] [i_7] [i_6] = ((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned short)38907)) ? (arr_3 [i_6]) : (var_4))), (((/* implicit */unsigned long long int) ((arr_11 [i_6] [i_7] [i_7] [i_8] [i_8] [i_9]) ? (((/* implicit */int) arr_11 [i_6] [i_6] [i_7] [i_7] [i_7] [i_9])) : (((/* implicit */int) arr_11 [i_6] [i_7] [i_8] [i_8] [i_8] [i_9])))))));
                        arr_36 [i_6] [i_7] [i_7] [i_8] [i_7] [i_9] = ((/* implicit */short) (+(((min((0ULL), (((/* implicit */unsigned long long int) (unsigned short)58805)))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_7] [i_7] [(signed char)1]))))))))));
                        var_25 *= ((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) arr_20 [i_6] [i_6] [i_6] [i_7] [i_8] [i_9]))))), (min((arr_28 [i_6] [i_8] [i_9]), (arr_28 [i_6] [i_6] [i_6])))));
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((((/* implicit */_Bool) min((((/* implicit */long long int) var_3)), (((var_9) >> (((((/* implicit */int) (unsigned short)6707)) - (6693)))))))) ? (((min((var_12), (((/* implicit */unsigned long long int) var_2)))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_6] [i_6] [i_6])) ? (arr_0 [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_29 [i_6] [i_6])))))))));
        /* LoopNest 2 */
        for (unsigned int i_10 = 0; i_10 < 11; i_10 += 2) 
        {
            for (unsigned int i_11 = 3; i_11 < 9; i_11 += 4) 
            {
                {
                    var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((int) (_Bool)1)))));
                    arr_42 [i_6] [i_11] = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_27 [i_6] [i_11])), (arr_30 [i_6] [4U] [i_10] [i_11])))) & (var_7))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_6] [i_6] [i_6] [i_11]))) : (var_15)))) ? (min((4503599627370495ULL), (((/* implicit */unsigned long long int) (unsigned short)38907)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) >= (arr_7 [i_6] [i_6])))))))));
                    var_28 = ((/* implicit */short) min(((-(var_9))), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_8 [i_6] [i_6] [i_6] [i_6])), (arr_30 [i_11 + 2] [i_11] [i_11] [i_11]))))));
                }
            } 
        } 
    }
    var_29 = ((/* implicit */_Bool) var_2);
}
