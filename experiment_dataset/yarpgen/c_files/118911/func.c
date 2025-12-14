/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118911
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 3; i_2 < 13; i_2 += 1) 
                {
                    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_0 [i_0])), (arr_3 [i_1])))) | (((arr_5 [i_2] [(_Bool)0] [i_2] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(short)1] [i_1] [i_1]))))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2] [i_1] [i_0]))))))));
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_2 [1LL] [i_1] [i_2 - 1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_7))))))) : (arr_2 [3LL] [i_1] [i_1])));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_15 [4] [i_2] [i_2] [i_2 + 1] [(signed char)1] [3LL] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [5LL] [i_2 + 1])) ? (arr_2 [i_0] [11LL] [(_Bool)1]) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_12 [i_0] [i_0])))))))) ? ((-(((((/* implicit */_Bool) var_1)) ? (arr_8 [i_0]) : (3849782105U))))) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_4 [i_0] [2LL] [i_3])), (arr_9 [i_0] [(unsigned char)7] [i_2 - 2] [i_2 - 1]))))));
                                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) var_4))));
                                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_4])))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */_Bool) var_1);
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_9 [i_2 - 2] [i_2 + 1] [10U] [i_2 + 1])) / (9223372036854775780LL)))) ? (((((/* implicit */_Bool) 935284622U)) ? (((4290125996U) >> (((1840364892U) - (1840364883U))))) : (min((((/* implicit */unsigned int) arr_12 [i_0] [i_1])), (var_8))))) : (((((/* implicit */_Bool) var_5)) ? ((~(445185191U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2 - 1] [i_2] [i_2 - 1] [3] [i_2 - 3] [i_2 + 1])))))));
                }
                var_19 = ((/* implicit */unsigned short) (+((+(var_8)))));
                var_20 = ((((/* implicit */_Bool) ((max((1399620630), (((/* implicit */int) var_2)))) << (((((min((((/* implicit */long long int) arr_14 [(unsigned char)10] [12LL] [i_0] [i_0] [i_1] [i_1])), (1251840545495212411LL))) + (25638LL))) - (4LL)))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_1]))) : (max((((/* implicit */unsigned int) var_2)), (3849782082U))))) : (((/* implicit */unsigned int) (-(((((/* implicit */int) arr_0 [12U])) + (((/* implicit */int) arr_0 [i_0]))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_11))), ((-(max((var_11), (var_11)))))));
    /* LoopNest 3 */
    for (unsigned int i_5 = 1; i_5 < 9; i_5 += 2) 
    {
        for (long long int i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        var_22 = ((/* implicit */int) (-((~(arr_6 [(_Bool)1] [3U] [i_5 + 2] [i_8])))));
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [(short)9] [11LL] [i_7] [i_7])) ? (((((/* implicit */_Bool) 445185214U)) ? (((((/* implicit */_Bool) arr_12 [i_5] [10U])) ? (arr_7 [i_5] [i_5] [(unsigned char)6] [i_5] [9LL] [i_5 + 3]) : (((/* implicit */unsigned long long int) arr_3 [(_Bool)0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_13 [1] [i_6] [i_6]) == (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_7] [i_5] [i_7]))))))))) : (((/* implicit */unsigned long long int) 1909589855U))));
                        arr_26 [i_5] [i_6] [i_5] [i_8] = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) arr_11 [i_6] [i_6] [i_7] [i_8] [(_Bool)1] [i_6] [i_8])), (((unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) (~(-2389146359808671326LL))))));
                        arr_27 [i_7] [i_8] [(short)10] [8LL] |= ((/* implicit */int) arr_10 [8U] [i_6] [i_6] [i_6]);
                        var_24 |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_13 [i_5 + 2] [i_5] [i_5])) + ((+(min((((/* implicit */unsigned long long int) 4138550237U)), (arr_23 [i_5 + 3] [1U] [6] [3U])))))));
                    }
                    for (long long int i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        arr_32 [i_5] = ((/* implicit */int) ((long long int) min((1515962109688692631LL), (((/* implicit */long long int) var_3)))));
                        arr_33 [i_5 + 2] [i_5] [i_5] [i_5 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(1399620630)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2270665383994952641LL)) || (((/* implicit */_Bool) 6342260577656040586LL)))))) / (max((16547924460996238779ULL), (((/* implicit */unsigned long long int) arr_22 [(short)5] [i_5] [(_Bool)1])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                    }
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) 8263642617465782183LL))) ? (var_11) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_7)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 0; i_10 < 12; i_10 += 2) 
                    {
                        arr_38 [4] [i_6] [i_7] [i_10] &= ((/* implicit */_Bool) var_8);
                        arr_39 [i_5] [5LL] [i_6] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_5 + 2] [i_5] [10LL])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (arr_12 [i_5 + 1] [i_5 + 3])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) | (((/* implicit */int) var_3))))))))));
                        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((unsigned int) max((min((arr_17 [i_5 + 3]), (5644757490562250282LL))), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_4)), (var_9))))))))));
                        var_27 = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_25 [i_5] [i_5 - 1] [i_5])))) == (((/* implicit */int) ((((/* implicit */int) arr_25 [i_5] [i_5 + 1] [i_5])) <= (((/* implicit */int) arr_25 [i_5] [i_5 + 1] [i_5])))))));
                        arr_40 [i_5] [(_Bool)0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_4 [i_5] [i_6] [i_7]))))) ? ((~(((/* implicit */int) arr_28 [i_5] [i_10])))) : (((/* implicit */int) arr_28 [i_5] [i_10]))));
                    }
                    arr_41 [8] &= ((/* implicit */_Bool) max((((unsigned int) arr_25 [i_5 + 2] [i_5 + 3] [(unsigned char)4])), (((/* implicit */unsigned int) (!(var_10))))));
                }
            } 
        } 
    } 
}
