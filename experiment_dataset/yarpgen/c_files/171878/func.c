/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171878
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
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 8; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((-523373312098230085LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24465)))))) * (((/* implicit */int) (short)24208))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (int i_2 = 0; i_2 < 11; i_2 += 3) /* same iter space */
            {
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((unsigned int) ((584893804U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-9)))))))));
                /* LoopSeq 2 */
                for (unsigned int i_3 = 2; i_3 < 9; i_3 += 4) 
                {
                    arr_10 [i_0 - 2] [i_2] [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)2007)) <= (2147483647)));
                    /* LoopSeq 1 */
                    for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        var_18 = ((8454244829928015549ULL) + (((/* implicit */unsigned long long int) arr_12 [i_3] [1U] [i_3] [i_3 - 1] [i_3])));
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_1])) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_3] [i_3 - 2] [i_3 + 2] [i_3 - 2] [i_3 - 2])))));
                        var_20 = ((/* implicit */unsigned long long int) ((short) var_15));
                        arr_13 [i_0] [i_1] [i_2] [i_3 - 1] [i_3] [i_2] = ((/* implicit */signed char) (+(arr_7 [i_0 - 3] [i_2] [i_0 - 3] [i_0 + 3])));
                        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-2)) ? (-282237277) : (((/* implicit */int) (short)6812)))))));
                    }
                }
                for (unsigned short i_5 = 2; i_5 < 10; i_5 += 3) 
                {
                    arr_17 [i_2] [i_1] [i_2] [i_5 - 2] = ((/* implicit */unsigned int) (short)6832);
                    arr_18 [(short)4] [i_0] [i_0] [i_2] [i_2] [(signed char)9] = ((/* implicit */signed char) (unsigned char)192);
                    var_22 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [(signed char)5]))) ^ (14238349632773849243ULL))));
                }
            }
            for (int i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
            {
                arr_23 [i_0 + 3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0 + 3])) ? (arr_16 [i_0 - 1] [i_0 - 1] [i_0 + 3] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)13)))));
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-27024))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (signed char)13))));
            }
            var_24 |= ((/* implicit */unsigned int) 33554400);
        }
        /* LoopSeq 1 */
        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) 
        {
            arr_27 [i_0 - 1] [i_0 - 1] [i_7] = ((/* implicit */unsigned int) (+(((((/* implicit */int) (signed char)126)) + (((/* implicit */int) (short)27024))))));
            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((unsigned int) (_Bool)1)))));
        }
        arr_28 [i_0] = ((/* implicit */unsigned short) ((signed char) arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 3]));
    }
    for (unsigned long long int i_8 = 3; i_8 < 9; i_8 += 4) 
    {
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 1934792861U)) || (((/* implicit */_Bool) -1)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [(signed char)3] [i_8 - 3] [i_8 - 3]))) : (((arr_24 [i_8] [i_8 - 2] [i_8]) / (-8448764831984252328LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (signed char)1)))) : (var_9)));
        var_27 = ((/* implicit */int) arr_22 [i_8 - 3] [i_8]);
        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)111)) ? (((/* implicit */int) (unsigned short)6962)) : (((/* implicit */int) (unsigned char)250))));
        arr_31 [8LL] |= 6459012552303785211ULL;
    }
    var_29 = ((/* implicit */unsigned short) var_9);
    var_30 = ((/* implicit */unsigned long long int) ((18376133475309005678ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
}
