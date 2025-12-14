/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173068
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned long long int) (-((+(var_7)))));
            arr_6 [10U] [i_1 + 1] = ((/* implicit */_Bool) -860815159);
        }
        /* LoopSeq 2 */
        for (unsigned int i_2 = 3; i_2 < 10; i_2 += 1) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned int i_3 = 2; i_3 < 11; i_3 += 2) 
            {
                var_20 = ((/* implicit */_Bool) var_9);
                var_21 -= ((/* implicit */long long int) (-(-860815170)));
            }
            for (int i_4 = 1; i_4 < 12; i_4 += 1) 
            {
                var_22 = ((/* implicit */unsigned short) (-(var_1)));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    arr_18 [i_2] [i_4] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) ((arr_9 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4 + 1]) ? (1734193481) : (((/* implicit */int) (signed char)-2))));
                    arr_19 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)102))) & (arr_13 [i_5] [i_5] [i_5] [i_5])))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_4 [i_2] [i_4] [i_5])))) : (((/* implicit */int) (!((_Bool)1))))));
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        arr_23 [i_5] [i_5] [i_5] [i_6] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) -860815154)) : ((~(var_7)))));
                        var_23 ^= ((/* implicit */unsigned long long int) ((arr_3 [i_2 + 4] [i_4 + 2] [i_6 - 1]) == (arr_3 [i_2 + 1] [i_4 - 1] [i_6 - 1])));
                    }
                    arr_24 [i_0] [i_2 - 2] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 312445422)) || (((/* implicit */_Bool) arr_12 [i_5]))));
                    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)31195)) ? (((/* implicit */int) arr_9 [i_4 + 2] [i_4 - 1] [(unsigned char)3] [i_0])) : (((/* implicit */int) (unsigned short)0))));
                }
                arr_25 [i_2] [i_2 - 1] [i_2 + 3] [i_2] = ((/* implicit */unsigned int) ((arr_13 [i_4] [i_4 + 1] [i_2 + 1] [i_0]) & (((/* implicit */long long int) ((((unsigned int) var_10)) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)28006)) : (((/* implicit */int) (unsigned short)0))))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_7 = 2; i_7 < 11; i_7 += 2) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_8 = 1; i_8 < 13; i_8 += 3) 
                    {
                        var_25 -= ((/* implicit */unsigned int) (-(((/* implicit */int) (short)32753))));
                        var_26 = ((((/* implicit */_Bool) arr_11 [i_4 + 1] [i_4 + 2] [i_4 + 2])) ? (arr_11 [i_4 - 1] [i_4 - 1] [i_4 + 2]) : (arr_11 [i_4 - 1] [i_4] [i_4]));
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-28008)) - (((/* implicit */int) (unsigned char)233))));
                        arr_30 [i_8] [i_2] [i_7] [i_8] [i_0] = ((/* implicit */unsigned char) (+(8609501188870094683LL)));
                    }
                    for (unsigned char i_9 = 0; i_9 < 14; i_9 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_22 [8U] [8U] [i_2] [i_2 + 3]))));
                        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((arr_3 [i_4 - 1] [i_2] [i_2]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)44)))))));
                    }
                    for (unsigned int i_10 = 1; i_10 < 11; i_10 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) (short)32756)))));
                        arr_37 [i_10] [i_2 + 2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)125)) ? (arr_11 [i_4 - 1] [i_7 + 3] [i_10 + 1]) : (arr_11 [i_4 + 2] [i_7 + 3] [i_10 - 1])));
                        var_31 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (var_2) : (((/* implicit */int) (short)-28004)))) + (((/* implicit */int) arr_2 [i_2]))));
                        arr_38 [i_4 - 1] [i_4] [5U] [i_4 + 1] [i_4] [i_4 + 2] = ((/* implicit */unsigned char) arr_15 [i_2 + 2]);
                    }
                    var_32 = ((/* implicit */unsigned int) ((((arr_0 [3U] [i_7]) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_14 [i_0] [i_0] [i_0] [i_0]))) >> (((((/* implicit */int) arr_36 [i_7 + 3] [i_4 - 1] [i_4 + 2] [i_2 - 2] [i_4 - 1])) - (155)))));
                    arr_39 [i_0] [i_0] [i_4] [i_7] = ((/* implicit */short) arr_26 [i_7 + 3] [i_7 + 3] [i_7] [7] [i_7 + 3] [i_0]);
                }
            }
            for (int i_11 = 1; i_11 < 11; i_11 += 2) 
            {
                arr_42 [3U] [i_2] [i_2] = ((/* implicit */unsigned short) 0U);
                var_33 = ((/* implicit */unsigned long long int) (((+(min((3936668607U), (11U))))) + ((+(var_6)))));
                var_34 = ((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 553881901U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [i_2 + 3] [i_2 - 2] [i_11 + 2]))) : (var_5)))))));
                arr_43 [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((max((288230376151711744LL), (((/* implicit */long long int) -860815170)))) & (((/* implicit */long long int) ((var_10) >> (((/* implicit */int) (_Bool)1))))))))));
            }
            arr_44 [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_12) + (((/* implicit */int) arr_28 [i_2 - 2] [i_2 - 2] [i_2 + 4] [i_2] [i_2 - 2] [i_2]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_28 [i_2 - 3] [i_2 - 3] [i_2 + 3] [i_2] [i_2 + 4] [i_2])) : (((/* implicit */int) arr_28 [i_2 + 3] [i_2] [i_2 - 3] [i_2 + 3] [i_2 + 1] [i_2])))))));
            var_35 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 860815154)) ? (288230376151711744LL) : (((/* implicit */long long int) 79472301U)))))))) < (((/* implicit */int) ((var_6) == (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2 + 3]))))))));
        }
        for (unsigned int i_12 = 2; i_12 < 13; i_12 += 1) 
        {
            var_36 = ((/* implicit */unsigned int) (signed char)125);
            arr_47 [i_0] [i_12] [i_12] = ((int) (~(((((/* implicit */unsigned int) 2147482624)) | (arr_1 [i_0])))));
        }
        arr_48 [i_0] &= ((/* implicit */_Bool) (+(((8609501188870094683LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
        var_37 = ((/* implicit */long long int) max((((((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))))) >> (((((/* implicit */int) (unsigned short)65535)) - (65533))))), (((((/* implicit */_Bool) ((2031616ULL) - (((/* implicit */unsigned long long int) 2213377833U))))) ? (((/* implicit */int) ((unsigned short) var_0))) : (((/* implicit */int) ((908969524) != (((/* implicit */int) arr_12 [9U])))))))));
    }
    var_38 = ((/* implicit */unsigned char) var_6);
    var_39 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_14)), (var_3)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (2504297645U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)10281)))))))))));
}
