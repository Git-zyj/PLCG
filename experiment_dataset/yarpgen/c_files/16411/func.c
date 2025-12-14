/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16411
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
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            {
                arr_5 [i_1] [9ULL] = ((/* implicit */signed char) ((((long long int) min((arr_4 [i_0]), (((/* implicit */unsigned long long int) 2501377561152629338LL))))) < (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) arr_1 [i_1]))))))))));
                var_15 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_4 [i_1 - 3])) ? (arr_4 [i_1 - 3]) : (arr_4 [i_1 - 1]))), (min((arr_4 [i_1 - 3]), (arr_4 [i_1 + 2])))));
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) != (((/* implicit */int) ((signed char) max((((/* implicit */signed char) (_Bool)1)), (var_0)))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) /* same iter space */
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) % (((/* implicit */int) (signed char)56)))));
                    arr_10 [i_0] [i_0] [i_0] [i_0 + 3] = ((/* implicit */long long int) (+(((/* implicit */int) ((short) arr_3 [i_2] [i_0] [i_0])))));
                    var_17 = ((/* implicit */signed char) (+(15484915325006400783ULL)));
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [2LL] [i_1 - 2] [2LL] [2LL])) && (((/* implicit */_Bool) (+(((/* implicit */int) (short)23749)))))));
                }
                /* vectorizable */
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) /* same iter space */
                {
                    arr_13 [i_0] [i_3] = ((/* implicit */_Bool) arr_0 [i_1]);
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(17592186044412ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 3]))) : ((+(arr_3 [i_0] [i_0] [0U])))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_4 = 3; i_4 < 10; i_4 += 3) 
                    {
                        arr_16 [i_0 + 3] [i_1] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_4 [i_0 - 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) arr_8 [i_4] [i_4])) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_1] [i_3] [i_4 + 1])))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 3) 
                        {
                            var_20 = ((/* implicit */signed char) (((-(16382LL))) / (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_4] [i_4 + 1] [i_4] [i_4 - 1] [i_4 - 1] [i_4 + 1])))));
                            var_21 = ((/* implicit */unsigned long long int) arr_14 [i_0] [i_1] [i_3] [i_4] [i_5]);
                        }
                        var_22 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_1 - 2] [i_3] [i_0]))));
                    }
                    for (signed char i_6 = 0; i_6 < 11; i_6 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_6] [i_0])) && (((/* implicit */_Bool) var_5))));
                        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (short)23749))));
                        arr_22 [i_6] = ((/* implicit */long long int) 18446726481523507203ULL);
                    }
                    for (signed char i_7 = 2; i_7 < 10; i_7 += 4) 
                    {
                        var_25 ^= arr_4 [i_1 + 1];
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_26 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (arr_25 [i_0] [i_0] [i_3] [i_7]))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_0))))));
                        arr_27 [i_0] [(unsigned char)8] [i_0] [i_0 + 2] [i_0] = ((/* implicit */_Bool) arr_6 [i_3] [5ULL] [i_1 - 3] [i_1 - 3]);
                    }
                    var_27 = ((/* implicit */unsigned int) arr_6 [i_0] [i_0 + 2] [i_0 + 2] [i_3]);
                }
                var_28 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_1]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
    {
        for (short i_9 = 1; i_9 < 17; i_9 += 2) 
        {
            {
                var_29 = (+((((!(var_8))) ? (min((18446744073709551615ULL), (7325062989743036002ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_30 [i_8]), (arr_31 [i_8]))))))));
                /* LoopSeq 1 */
                for (signed char i_10 = 0; i_10 < 19; i_10 += 2) 
                {
                    arr_35 [i_9] = min((((/* implicit */unsigned long long int) arr_30 [i_8])), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (arr_34 [i_9])))) ? (((/* implicit */unsigned long long int) 65011712U)) : (min((arr_34 [i_9]), (((/* implicit */unsigned long long int) var_11)))))));
                    var_30 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_10]))) <= (max((((/* implicit */unsigned int) (short)-18823)), (var_4))))));
                    var_31 = ((/* implicit */unsigned short) var_3);
                    var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) (+(4279753126U))))));
                }
                var_33 += ((/* implicit */unsigned int) 13155376874169947078ULL);
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_11 = 0; i_11 < 14; i_11 += 4) 
    {
        for (signed char i_12 = 1; i_12 < 13; i_12 += 1) 
        {
            for (unsigned char i_13 = 0; i_13 < 14; i_13 += 3) 
            {
                {
                    var_34 = ((/* implicit */unsigned int) ((short) ((unsigned int) max((10992713759588422828ULL), (((/* implicit */unsigned long long int) var_10))))));
                    var_35 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_36 [i_12 - 1])), (arr_32 [i_12 - 1]))))));
                    arr_43 [i_12] [i_12] = ((/* implicit */unsigned char) -3160667309231826372LL);
                }
            } 
        } 
    } 
}
