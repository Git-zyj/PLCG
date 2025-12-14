/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174845
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
    var_14 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((((((/* implicit */int) var_12)) + (2147483647))) >> (((2147483646) - (2147483619))))) & (((/* implicit */int) ((2147483646) != (188829716))))))) + (min((((var_1) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) ^ (((/* implicit */int) var_13)))))))));
    var_15 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((4294967295U), (var_11)))) ? (((/* implicit */long long int) 3943061582U)) : (var_8)))), (17836889528226373496ULL)));
    var_16 = ((((((/* implicit */_Bool) ((var_10) ? (((/* implicit */long long int) 3474421013U)) : (var_8)))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_2))));
    var_17 = ((/* implicit */short) (-(((((/* implicit */_Bool) min((820546292U), (((/* implicit */unsigned int) var_9))))) ? ((+(820546282U))) : (((((/* implicit */_Bool) 3580358046U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (3474421013U)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [(_Bool)1] [i_2] = ((/* implicit */unsigned long long int) (!(((((((/* implicit */_Bool) (short)-32745)) && (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1] [i_2])))) || (((((/* implicit */_Bool) 3926313027U)) || (((/* implicit */_Bool) var_11))))))));
                    arr_8 [8] [i_2] = max((min((((/* implicit */long long int) -469338710)), (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) / (arr_6 [i_0]))))), (arr_6 [i_1]));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) (unsigned short)48024);
                                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_4 [i_0 - 2]))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (820546292U) : (4294967293U)))) / (arr_5 [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) var_2)), (-5716466366054682393LL))), (((/* implicit */long long int) (~(((/* implicit */int) var_2))))))))));
                            }
                        } 
                    } 
                    var_20 = max(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (4294967295U) : (arr_10 [i_1] [i_1] [i_2] [i_0 - 2] [i_1] [i_1])))))), (((((/* implicit */_Bool) arr_6 [i_0])) || (((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_11)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        var_21 = ((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1] [i_1]);
                        var_22 = ((/* implicit */unsigned long long int) arr_17 [i_0] [i_1] [i_0 - 2]);
                        arr_19 [i_0] [i_1] [1] [i_1] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3980579813U)) ? (((/* implicit */int) (unsigned char)141)) : (((/* implicit */int) var_2))))) & (var_6)));
                    }
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned int i_6 = 4; i_6 < 10; i_6 += 4) 
        {
            arr_24 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((arr_20 [i_0] [i_0]), (var_7))))) < (((-4433385411313341272LL) / (((/* implicit */long long int) ((/* implicit */int) (short)30789)))))))))));
            /* LoopSeq 1 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 284089434U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)3))) : (((((/* implicit */long long int) ((int) var_0))) + (((arr_6 [i_0]) + (var_8)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_8 = 1; i_8 < 9; i_8 += 4) 
                {
                    arr_30 [i_0] [i_0] [i_6] [i_7] [i_8] = ((/* implicit */_Bool) (short)30720);
                    arr_31 [i_6] [i_6] [i_7] [i_6] = ((/* implicit */unsigned long long int) var_2);
                    arr_32 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) ((((arr_5 [3ULL] [i_6] [i_6] [i_8]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [(signed char)0] [8LL] [i_7]))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 820546300U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (3474421014U))))));
                }
                var_24 = ((/* implicit */unsigned char) ((((((((/* implicit */long long int) ((/* implicit */int) var_0))) == (9223372036854775807LL))) || (((/* implicit */_Bool) (signed char)-64)))) ? (((((/* implicit */unsigned long long int) 820546281U)) | (15688383250972737159ULL))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 42836569U)) ? (arr_1 [i_7]) : (((/* implicit */unsigned int) 469338697))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_6])) && (((/* implicit */_Bool) var_0)))))) : (arr_5 [i_0] [i_0 - 1] [i_7] [i_0])))));
            }
            var_25 = ((/* implicit */short) max(((unsigned char)182), ((unsigned char)92)));
            var_26 = ((/* implicit */short) ((unsigned int) ((arr_10 [i_0 - 1] [i_6 - 4] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_6 + 1]) == (arr_10 [i_0 + 1] [i_0 + 1] [4] [i_6] [i_0] [i_6 - 4]))));
            arr_33 [i_0] = ((/* implicit */long long int) arr_25 [i_0] [i_0] [i_0] [i_0]);
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
        {
            arr_36 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5887602779568927970LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_23 [i_9])))) ? (((/* implicit */int) ((arr_23 [i_0 - 2]) <= (((/* implicit */unsigned long long int) var_8))))) : (((/* implicit */int) ((arr_23 [i_9]) == (arr_23 [i_9]))))));
            arr_37 [3ULL] [i_0] [3ULL] = ((/* implicit */unsigned char) var_10);
        }
        /* vectorizable */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
        {
            arr_40 [i_0] [i_10] [(_Bool)1] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 820546312U)) / (var_6)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)13)) ^ (var_4)))) : (14432679677774023304ULL));
            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) == (arr_38 [i_10] [i_10] [i_0])));
        }
    }
}
