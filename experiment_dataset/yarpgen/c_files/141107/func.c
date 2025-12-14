/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141107
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
    var_16 -= ((/* implicit */unsigned long long int) var_1);
    var_17 = ((/* implicit */int) ((unsigned int) (unsigned char)255));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1 + 1] [(_Bool)1] [i_1] = var_10;
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_2] [i_1] = ((/* implicit */unsigned long long int) 6792905418310563175LL);
                            var_18 ^= ((/* implicit */unsigned short) arr_0 [i_2 - 2]);
                            var_19 = ((((/* implicit */_Bool) 2147483647)) ? (((long long int) var_8)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3 + 3])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (signed char)13))))) ? (((-6361926152376507371LL) & (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [i_0])))))))));
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)3685)) ? (-7607277381103081911LL) : (((/* implicit */long long int) 1449331422U)))) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_3] [i_1 + 1] [i_1 + 1])))))))))));
                        }
                        for (int i_5 = 1; i_5 < 16; i_5 += 2) 
                        {
                            var_21 ^= ((/* implicit */int) var_3);
                            arr_17 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) min(((~((~(((/* implicit */int) arr_2 [(signed char)16])))))), ((~(((/* implicit */int) (_Bool)1))))));
                            arr_18 [i_0] [i_0] [i_5] [i_1] [i_0] [i_1 + 1] [i_5] = arr_4 [i_0];
                        }
                        arr_19 [i_3] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((int) 0U)) + (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (8281699638553245502ULL)));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 17; i_7 += 1) 
                        {
                            arr_24 [i_1] [18] [18] = ((/* implicit */int) 7543173136144087801LL);
                            arr_25 [3ULL] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_2 - 3] [(unsigned short)0] [i_0] [i_6] [i_7 + 1] [i_0] [i_1 + 1])) ? (arr_14 [i_0] [i_6] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                            arr_26 [i_0] [i_1] [i_2] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) arr_23 [i_1 + 1] [(unsigned short)13] [i_2 - 3] [i_7 + 1] [(signed char)6] [i_7] [(unsigned short)13])) % (((/* implicit */int) (signed char)-48))));
                            var_22 &= ((/* implicit */unsigned short) ((((2147483647) & (((/* implicit */int) (unsigned short)511)))) / (2147483647)));
                        }
                        for (int i_8 = 0; i_8 < 19; i_8 += 2) 
                        {
                            arr_30 [i_0] [i_1] [i_8] [4ULL] [16] [i_2 - 3] [i_1 + 1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((18073489162513630423ULL), (((/* implicit */unsigned long long int) arr_22 [i_8] [i_8] [2ULL] [i_6] [i_0] [i_1] [i_0])))), (((/* implicit */unsigned long long int) (signed char)127))))) || (((/* implicit */_Bool) arr_2 [i_0]))));
                            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */_Bool) var_15)) ? (((((((/* implicit */_Bool) var_15)) && (arr_29 [(signed char)0] [i_8] [(_Bool)1] [i_8] [i_8] [i_8]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_10 [i_0] [1] [i_2 - 2] [5LL] [i_6] [13LL]) < (((/* implicit */unsigned int) 2147483647)))))) : (((((/* implicit */_Bool) 1513390983)) ? (arr_10 [i_0] [(_Bool)1] [i_2 + 1] [i_6] [i_8] [i_8]) : (((/* implicit */unsigned int) arr_15 [i_8] [(unsigned short)13] [i_2] [i_1 + 1] [(unsigned short)2] [(unsigned short)2])))))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)1195), ((unsigned short)0))))))))));
                            var_24 = ((/* implicit */int) (_Bool)0);
                        }
                        var_25 ^= ((/* implicit */unsigned long long int) var_9);
                        var_26 = ((/* implicit */int) max((((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)0)) : (2147483647)))), (((((/* implicit */_Bool) min((464459252), (arr_5 [i_0] [i_2 + 1] [i_6])))) ? (1778563472067385352ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535))))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (int i_10 = 1; i_10 < 17; i_10 += 3) 
                        {
                            var_27 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 9007199254216704LL)) ? (((2147483647) & (arr_16 [i_0] [i_1 + 1] [i_2] [i_9] [i_10 + 1]))) : (((/* implicit */int) (_Bool)0))));
                            var_28 |= ((/* implicit */unsigned char) 6616033355089933549LL);
                            var_29 = ((/* implicit */int) max((var_29), (((((/* implicit */_Bool) -5688463453727669209LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))));
                        }
                        arr_35 [i_1] [i_0] [i_1 + 1] [i_1] = ((/* implicit */unsigned long long int) (-(arr_16 [i_0] [(_Bool)1] [i_0] [i_9] [(unsigned short)9])));
                        var_30 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_16 [i_0] [i_0] [(unsigned char)10] [i_2] [i_0])) | (((((/* implicit */_Bool) 274877906943ULL)) ? (((/* implicit */unsigned int) arr_28 [i_0] [2ULL] [i_1])) : (arr_10 [i_0] [i_0] [i_1 + 1] [i_0] [i_1 + 1] [i_9])))));
                    }
                    for (unsigned short i_11 = 0; i_11 < 19; i_11 += 2) 
                    {
                        var_31 = ((/* implicit */long long int) var_9);
                        arr_40 [i_0] [i_1 + 1] [i_1] [i_1] = (+(((/* implicit */int) max(((unsigned short)9147), (((/* implicit */unsigned short) arr_33 [i_0] [i_1 + 1] [i_2 - 2] [i_11] [i_2 - 2]))))));
                        var_32 ^= ((/* implicit */_Bool) arr_20 [i_11] [i_11] [i_11] [(unsigned short)4]);
                        arr_41 [i_1] [i_1 + 1] [i_1] [i_1] = ((/* implicit */_Bool) (signed char)-16);
                    }
                }
            } 
        } 
    } 
}
