/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136826
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
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((long long int) (_Bool)0)))));
    var_21 = ((/* implicit */signed char) ((unsigned short) (unsigned char)184));
    var_22 = ((/* implicit */unsigned long long int) var_17);
    var_23 = ((/* implicit */unsigned short) min((((/* implicit */int) var_7)), (((((/* implicit */int) ((var_0) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)184)))))) - (((/* implicit */int) max((((/* implicit */unsigned char) var_1)), (var_5))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_3 [10ULL] [10ULL] = ((/* implicit */unsigned short) arr_0 [5ULL] [(unsigned char)8]);
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                for (unsigned short i_3 = 1; i_3 < 14; i_3 += 1) 
                {
                    {
                        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) min((((/* implicit */unsigned long long int) min((-404765355), (((/* implicit */int) (unsigned char)71))))), (min((((/* implicit */unsigned long long int) arr_9 [11] [i_3 + 1] [(unsigned char)2] [(signed char)10] [i_3 + 1])), (arr_4 [i_3 + 1] [10] [i_3]))))))));
                        var_25 = ((/* implicit */long long int) ((min((arr_9 [i_3] [i_1] [i_1] [i_3 + 2] [i_3]), (arr_9 [i_1] [(unsigned char)7] [7ULL] [i_3 + 2] [(signed char)11]))) & (((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_3 + 3]) > (arr_1 [i_3 + 2])))))));
                        arr_10 [i_2] [i_0] [(unsigned char)16] [i_3 + 1] = ((/* implicit */unsigned short) ((_Bool) (unsigned char)184));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 2; i_4 < 15; i_4 += 4) 
                        {
                            arr_15 [i_2] [(_Bool)1] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_9 [i_0] [i_1] [(_Bool)1] [i_4 + 2] [(signed char)13])) ? (((/* implicit */int) arr_12 [i_3 + 3] [15] [i_3] [i_2])) : (((/* implicit */int) arr_5 [i_3 + 2] [i_3]))))));
                            arr_16 [i_0] [i_2] [(unsigned short)15] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned long long int) min((arr_6 [i_4 + 2] [(signed char)13] [2LL]), (((/* implicit */unsigned long long int) (unsigned char)184)))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_5 = 4; i_5 < 15; i_5 += 4) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_21 [(unsigned char)15] [i_5 - 1] [(_Bool)1] [16ULL] = ((/* implicit */unsigned char) 2305843009213693951ULL);
                    var_26 = ((/* implicit */unsigned short) max((((((/* implicit */int) (unsigned char)48)) | (((((/* implicit */int) (unsigned char)72)) + (((/* implicit */int) (unsigned short)65531)))))), (min((arr_19 [i_5 + 2] [i_5 + 1]), (((((/* implicit */_Bool) 9223372036854775808ULL)) ? (((/* implicit */int) (unsigned short)2048)) : (var_16)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 2; i_7 < 15; i_7 += 3) 
                    {
                        for (signed char i_8 = 1; i_8 < 15; i_8 += 1) 
                        {
                            {
                                var_27 &= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_17 [i_7 + 1])), (max((arr_22 [i_0] [i_5 - 1] [i_8 + 1] [3U]), (arr_22 [(unsigned short)11] [i_5 - 3] [i_8 + 1] [16U])))));
                                var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_22 [i_5 - 2] [i_5] [i_7 + 1] [(unsigned char)7]), (arr_22 [i_5 - 2] [7LL] [i_7 + 1] [i_8 + 2])))) ? (max((arr_1 [i_5 + 2]), (arr_1 [i_5 - 1]))) : (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0] [i_0]))))), (min((((/* implicit */unsigned long long int) arr_19 [14U] [13])), (arr_6 [i_5] [i_5] [i_6])))))));
                                arr_28 [i_0] [i_0] [i_8] [i_0] [i_0] = ((/* implicit */signed char) (-(((unsigned long long int) (-(((/* implicit */int) arr_2 [i_5 + 2])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 2; i_9 < 15; i_9 += 4) 
                    {
                        var_29 -= ((((_Bool) (_Bool)0)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (signed char)100)))) : (((-2362250916047975156LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)26))))));
                        arr_32 [i_0] |= min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) >> ((((-(3535680615253345206ULL))) - (14911063458456206399ULL)))))), (((((arr_12 [i_0] [12U] [(signed char)12] [i_9]) ? (arr_14 [i_5] [i_5]) : (arr_13 [4ULL] [i_5] [(signed char)16] [i_9 + 2] [(unsigned short)12]))) | ((-(arr_26 [(unsigned char)12] [(_Bool)1] [i_6] [i_9]))))));
                        var_30 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_5] [i_6]))))) | (arr_19 [i_5 - 1] [i_9 - 1])))), (((unsigned long long int) arr_31 [i_5] [12ULL] [0U] [(signed char)11] [i_5 - 2]))));
                        arr_33 [4ULL] [9ULL] [i_5] [i_6] [(unsigned char)16] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((unsigned int) 18446744073709551615ULL))), (((((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_22 [i_6] [(signed char)10] [8] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_6))))))));
                    }
                    arr_34 [i_0] [3ULL] [(unsigned short)16] [15ULL] = ((/* implicit */long long int) max((14911063458456206385ULL), (((/* implicit */unsigned long long int) -124874746))));
                }
            } 
        } 
        var_31 -= ((/* implicit */unsigned long long int) ((unsigned int) min(((+(arr_13 [i_0] [(unsigned short)8] [(unsigned char)2] [(_Bool)1] [i_0]))), (((((/* implicit */_Bool) arr_29 [i_0] [i_0])) ? (3063809654684724706ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11))))))));
    }
}
