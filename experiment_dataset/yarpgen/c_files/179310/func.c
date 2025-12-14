/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179310
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
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_7 [i_2] [i_1] |= ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)-26))));
                    arr_8 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0 - 2]))))) & (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) ^ (-7637631876468282173LL)))));
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [i_0 + 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)0), ((unsigned char)21))))) : (min((2746278861U), (((/* implicit */unsigned int) (signed char)100))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        var_15 = ((/* implicit */unsigned char) ((short) (signed char)-123));
                        var_16 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_1] [i_1 + 2])) ? (67108863ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 2] [i_0 - 2] [i_1 + 1])))))));
                    }
                }
            } 
        } 
        arr_13 [(signed char)4] &= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 + 1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (0ULL))) < (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0] [i_0 - 2] [i_0])) | (((/* implicit */int) arr_6 [i_0] [i_0 - 2] [4ULL])))))));
        arr_14 [i_0] [i_0 - 1] = ((/* implicit */long long int) arr_1 [i_0 + 1]);
    }
    for (signed char i_4 = 3; i_4 < 20; i_4 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) arr_16 [i_4] [i_4 + 1])))), (((/* implicit */int) min(((signed char)0), (var_2))))));
        arr_19 [i_4] = ((/* implicit */signed char) arr_18 [i_4 + 1] [i_4]);
        arr_20 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4760627915422625947ULL)) ? (16071936706676257225ULL) : (((/* implicit */unsigned long long int) arr_15 [i_4]))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_17 [i_4])) : (((/* implicit */int) arr_16 [i_4] [i_4])))) : (min((var_3), (((/* implicit */int) arr_18 [3LL] [i_4])))))) >> (((((((/* implicit */_Bool) 65535ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)64))) : (17592186044415ULL))) - (62ULL)))));
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 3) 
        {
            for (int i_6 = 1; i_6 < 18; i_6 += 4) 
            {
                {
                    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_13)))) ? (((((/* implicit */int) var_1)) - (((/* implicit */int) arr_26 [i_4] [i_5] [i_4])))) : (((/* implicit */int) arr_27 [i_6 - 1] [i_6 + 2] [i_6 + 2] [i_6 + 2]))))) ? (var_3) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
                    /* LoopSeq 3 */
                    for (signed char i_7 = 0; i_7 < 21; i_7 += 3) /* same iter space */
                    {
                        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) 2147483647))));
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) 1413933501U)) <= ((+((-9223372036854775807LL - 1LL))))))) >> (((var_10) - (491502467))))))));
                        arr_30 [i_4 - 3] [i_4 - 3] [i_6] [i_6] [i_6] [i_4] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((arr_29 [i_4 - 3]) ^ (2303591209400008704LL)))), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)86))) : (16072999810180170133ULL)))));
                    }
                    for (signed char i_8 = 0; i_8 < 21; i_8 += 3) /* same iter space */
                    {
                        var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) var_7))));
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 0; i_9 < 21; i_9 += 4) 
                        {
                            arr_36 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned char) var_5))), (((((/* implicit */_Bool) (~(5764032617129322765ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_4] [i_4 + 1] [i_4] [i_4 - 1]))) : (var_12)))));
                            arr_37 [i_4 - 1] [4] [i_6] [i_8] [i_8] [i_9] [i_4] = ((/* implicit */unsigned short) 15775760104882459065ULL);
                        }
                    }
                    for (signed char i_10 = 0; i_10 < 21; i_10 += 3) /* same iter space */
                    {
                        var_22 &= ((/* implicit */short) arr_25 [i_5 - 1] [(signed char)18]);
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_29 [i_6 + 2])) ? (((/* implicit */int) arr_18 [i_6 + 1] [0U])) : (((/* implicit */int) (unsigned short)578)))))))));
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) == ((-9223372036854775807LL - 1LL)))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_39 [i_4] [i_5 - 1] [i_5] [i_4] [i_5 + 1] [i_5 - 1]))))) : (((((/* implicit */_Bool) arr_38 [i_10] [i_4] [(unsigned short)18] [i_4] [i_4 + 1])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_35 [(signed char)13] [i_5] [(signed char)13] [i_5] [i_5]))))) : (arr_24 [i_4])))));
                        arr_40 [i_4] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) (unsigned char)194)) ? (((/* implicit */int) arr_16 [i_4] [i_4 + 1])) : (((/* implicit */int) arr_16 [i_4] [i_4 - 3])))));
                    }
                }
            } 
        } 
        /* LoopSeq 2 */
        for (short i_11 = 4; i_11 < 19; i_11 += 4) 
        {
            arr_44 [i_4] = ((/* implicit */long long int) var_2);
            var_25 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) arr_41 [i_4] [i_4 - 1] [i_11 + 2]))))));
        }
        for (long long int i_12 = 0; i_12 < 21; i_12 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        var_26 = ((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) (short)-1022)));
                        arr_53 [i_4] [9] [10LL] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? (min((((/* implicit */long long int) ((signed char) arr_17 [i_4]))), (0LL))) : (max((var_12), (((/* implicit */long long int) arr_31 [i_4] [i_14]))))));
                        arr_54 [20LL] [20LL] [i_13] [i_4] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */int) min(((unsigned char)163), (((/* implicit */unsigned char) (_Bool)1))))), (((((/* implicit */int) arr_17 [i_4])) | (((/* implicit */int) arr_17 [i_4]))))));
                        var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))));
                        var_28 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((unsigned short) arr_39 [i_4] [i_12] [i_12] [i_12] [i_14] [i_14]))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_51 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]))))))) >> (((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) (+(((/* implicit */int) var_8))))))))));
                    }
                } 
            } 
            var_29 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)48984)) ? (((/* implicit */int) (short)-512)) : (((/* implicit */int) (unsigned char)239))));
            arr_55 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_4] [i_4 - 3] [2U] [i_12])) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)83))))) : (((((/* implicit */_Bool) arr_34 [i_12] [i_4] [i_4 - 2] [i_4] [i_4])) ? (8439924493844645264LL) : (arr_34 [i_4] [i_4] [i_4 - 1] [i_4 + 1] [i_4])))));
            arr_56 [17ULL] [i_4 - 2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)75)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)228))) : (9337956416422845170ULL)));
        }
    }
    /* vectorizable */
    for (short i_15 = 0; i_15 < 23; i_15 += 4) 
    {
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_58 [i_15])) ^ (((/* implicit */int) var_1))));
        /* LoopSeq 1 */
        for (short i_16 = 0; i_16 < 23; i_16 += 3) 
        {
            arr_61 [i_15] = ((/* implicit */unsigned short) ((arr_60 [i_15]) ? (((((/* implicit */_Bool) (unsigned char)136)) ? (arr_57 [i_15]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_59 [i_16]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
            arr_62 [(unsigned char)3] [i_16] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_57 [(unsigned char)22])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_58 [i_15]))))));
            var_31 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_59 [i_15])) ? (65535) : (((/* implicit */int) arr_59 [i_15]))));
            var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -2028191587)) ? ((~(arr_57 [i_15]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_58 [i_15]))))))));
        }
        var_33 = arr_59 [i_15];
    }
    var_34 = (~((~(((/* implicit */int) (signed char)-105)))));
}
