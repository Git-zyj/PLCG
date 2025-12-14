/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117471
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_12 = ((/* implicit */signed char) min((((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0])))), ((+((+(((/* implicit */int) arr_1 [i_0]))))))));
        var_13 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (short)-1)), (min(((unsigned short)57845), ((unsigned short)7691)))))) : (((/* implicit */int) (!(arr_0 [i_0])))));
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            var_14 += ((/* implicit */short) ((min((((/* implicit */long long int) arr_1 [i_1 - 1])), (var_7))) != (((/* implicit */long long int) ((((/* implicit */_Bool) (short)255)) ? (((/* implicit */int) arr_1 [i_1 + 1])) : (((/* implicit */int) arr_1 [i_1 - 1])))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    {
                        var_15 = ((/* implicit */unsigned int) (unsigned short)7691);
                        var_16 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((arr_2 [i_3]) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))) ? (((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_1] [i_1 + 1] [i_1] [i_1 + 1] [i_2 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [21] [i_0] [i_1 - 1] [i_1] [i_1 + 1] [i_2 + 3]))) : (var_11))) : (((/* implicit */long long int) ((/* implicit */int) (short)-20216)))));
                    }
                } 
            } 
            var_17 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) arr_2 [(signed char)7])))), (((/* implicit */int) (unsigned short)7691))));
        }
    }
    for (short i_4 = 0; i_4 < 16; i_4 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_4] [6LL])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) max(((unsigned short)57845), (arr_12 [i_4]))))))) ? ((-(((/* implicit */int) arr_9 [i_4] [i_4] [13] [i_4])))) : (((/* implicit */int) arr_12 [i_4]))));
        arr_13 [(unsigned char)8] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-47))));
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (~(((((/* implicit */int) (unsigned char)1)) / (((/* implicit */int) (_Bool)1)))))))));
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 13; i_5 += 3) 
        {
            for (long long int i_6 = 0; i_6 < 16; i_6 += 3) 
            {
                for (long long int i_7 = 1; i_7 < 15; i_7 += 3) 
                {
                    {
                        var_20 &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_18 [i_7 + 1] [i_7 - 1]))))) <= (arr_17 [i_7 + 1] [i_6] [7LL])));
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 0; i_8 < 16; i_8 += 4) 
                        {
                            var_21 = ((/* implicit */int) (!(((arr_15 [i_5 + 2]) == (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_5 + 3] [4LL] [i_5 - 1] [i_7 + 1] [i_5 - 1] [i_7 + 1])))))));
                            arr_24 [i_7] [i_7] [i_6] [i_5 - 1] [(short)8] [i_7] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_4] [i_7] [i_7] [i_7] [i_8])) ? (((((/* implicit */int) var_6)) * (((/* implicit */int) (unsigned char)1)))) : (((/* implicit */int) arr_8 [i_5 + 2] [i_5 + 2] [i_5 + 1] [i_5 - 1]))))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)57847)) / (((/* implicit */int) (_Bool)1))))) ? ((-(var_0))) : (arr_15 [i_5 + 1])))));
                            var_22 = ((/* implicit */unsigned int) arr_16 [i_7]);
                        }
                        var_23 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_0) + (var_7)))) ? (var_0) : (var_11)))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) / (((/* implicit */int) (unsigned short)61538))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_4] [i_4] [i_4] [i_4])) == (((/* implicit */int) (short)24799)))))) : (min((var_7), (((/* implicit */long long int) arr_23 [i_4] [i_4] [i_4] [i_4] [i_4])))))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_19 [i_7] [i_6] [i_4] [i_4])) : (((/* implicit */int) (unsigned char)166)))), (((/* implicit */int) (unsigned char)21))))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (signed char i_9 = 0; i_9 < 11; i_9 += 3) 
    {
        for (signed char i_10 = 0; i_10 < 11; i_10 += 2) 
        {
            for (unsigned short i_11 = 0; i_11 < 11; i_11 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 11; i_12 += 1) 
                    {
                        for (signed char i_13 = 2; i_13 < 8; i_13 += 3) 
                        {
                            {
                                var_24 ^= ((/* implicit */long long int) arr_5 [i_13] [i_10] [i_9]);
                                var_25 |= ((/* implicit */int) arr_35 [i_9] [i_10] [i_11] [i_11] [i_11] [i_11]);
                                var_26 = ((/* implicit */short) arr_18 [i_13] [i_10]);
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned char) max((((var_0) & (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_9] [i_10] [i_11] [i_11]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_11] [i_10] [10LL])) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_34 [i_9] [i_10] [i_11])), (arr_14 [i_9])))) : (max((((/* implicit */int) arr_31 [(short)7])), (arr_26 [i_9]))))))));
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */unsigned int) var_0);
    var_29 = ((/* implicit */_Bool) (+(var_2)));
}
