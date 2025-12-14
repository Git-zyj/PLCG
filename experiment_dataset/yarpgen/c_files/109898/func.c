/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109898
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_19 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((_Bool) var_3))) : (((((/* implicit */int) var_11)) << (((/* implicit */int) (_Bool)1))))));
        var_20 += ((/* implicit */int) ((((/* implicit */_Bool) var_15)) ? (((unsigned long long int) var_10)) : (((/* implicit */unsigned long long int) ((unsigned int) var_13)))));
        var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) < (((/* implicit */int) arr_1 [i_0]))));
    }
    var_22 = ((/* implicit */unsigned char) (-(max((((((/* implicit */_Bool) (short)-24522)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_7)))))))));
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 12; i_1 += 1) 
    {
        for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        var_23 = ((((3739225331091087252LL) / (((/* implicit */long long int) var_3)))) * (((/* implicit */long long int) ((/* implicit */int) var_2))));
                        var_24 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [4U]))) : (9007199254740991LL))) ^ (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                    }
                    for (signed char i_5 = 1; i_5 < 11; i_5 += 1) 
                    {
                        var_25 = ((/* implicit */_Bool) arr_11 [9ULL] [i_5]);
                        var_26 = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) arr_14 [i_5] [i_5])))))) == (var_8));
                        /* LoopSeq 3 */
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
                        {
                            var_27 -= ((/* implicit */signed char) var_8);
                            arr_18 [i_1] [i_2] [i_3] [i_5] [i_2] &= ((/* implicit */short) ((((/* implicit */_Bool) ((var_18) / (((/* implicit */int) arr_4 [1U] [i_1 - 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_6 [i_1] [i_1] [i_3])))))) : (arr_5 [i_3] [i_6])));
                            var_28 -= ((((/* implicit */unsigned long long int) var_3)) | (arr_17 [(signed char)1] [i_2] [(short)7] [i_2] [i_2]));
                        }
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) /* same iter space */
                        {
                            var_29 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((-3739225331091087242LL) - (490963195450155244LL))))));
                            var_30 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)24519))));
                        }
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) /* same iter space */
                        {
                            var_31 = arr_8 [i_1] [i_1] [i_3] [9ULL];
                            arr_24 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) var_17)) >> (((arr_13 [i_1 - 1]) - (850003467)))));
                        }
                        var_32 |= ((/* implicit */unsigned long long int) arr_4 [i_3] [i_3]);
                        arr_25 [i_2] [i_2] [i_2] [i_2] |= ((/* implicit */long long int) arr_5 [i_1] [i_2]);
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 3; i_9 < 11; i_9 += 4) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_33 = ((/* implicit */unsigned long long int) max((var_33), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 - 1] [i_1] [i_1]))) * (var_0)))));
                                var_34 = ((/* implicit */int) max((var_34), (451276208)));
                                var_35 ^= ((/* implicit */short) ((((var_9) + (((/* implicit */unsigned long long int) var_12)))) | (((/* implicit */unsigned long long int) var_4))));
                                arr_32 [i_9] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned short)11423)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_21 [i_3] [10U] [i_3] [i_9] [i_10] [i_9]))));
                            }
                        } 
                    } 
                    var_36 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_14))));
                }
                var_37 = ((/* implicit */unsigned int) min((arr_10 [i_1] [i_1] [1ULL] [i_1]), (((/* implicit */unsigned long long int) var_2))));
            }
        } 
    } 
}
