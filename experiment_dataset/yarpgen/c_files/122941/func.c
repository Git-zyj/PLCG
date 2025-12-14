/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122941
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
    var_18 = ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
    var_19 = (unsigned short)45626;
    var_20 = ((/* implicit */int) var_13);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 19; i_3 += 4) 
                    {
                        for (int i_4 = 4; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_1 - 1] [i_4 - 1])) && (((/* implicit */_Bool) var_6))));
                                arr_14 [i_0] [i_4] [i_3] [i_3] [i_2 + 1] [i_1] [i_0] = ((/* implicit */int) (signed char)4);
                                arr_15 [i_0] [i_0] [(unsigned short)13] [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)7514))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] = ((/* implicit */signed char) ((arr_2 [i_0 + 2] [i_1 - 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                    var_22 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [5U] [i_1] [13LL] [i_2])) ? (((/* implicit */unsigned long long int) -1593549854)) : (((((/* implicit */_Bool) arr_7 [(unsigned short)6] [i_1] [i_1])) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [(signed char)10] [i_0] [(unsigned short)10])))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 20; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 2; i_6 < 18; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_7 = 2; i_7 < 18; i_7 += 4) 
                    {
                        for (int i_8 = 3; i_8 < 18; i_8 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) var_17))));
                                var_24 ^= ((/* implicit */int) (short)11842);
                                var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? ((~(((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [(unsigned short)10])) : (((/* implicit */int) arr_10 [i_0 - 3] [10ULL] [i_0 - 3] [i_8]))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */int) var_12);
                    arr_29 [(unsigned short)14] [(_Bool)1] [(short)14] |= ((/* implicit */int) arr_3 [(unsigned short)19] [(unsigned short)19] [5ULL]);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 3; i_9 < 12; i_9 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_10 = 1; i_10 < 11; i_10 += 1) 
        {
            for (unsigned char i_11 = 1; i_11 < 11; i_11 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 0; i_12 < 13; i_12 += 4) 
                    {
                        for (long long int i_13 = 1; i_13 < 12; i_13 += 1) 
                        {
                            {
                                arr_45 [i_13] [i_13] [i_9] [i_13] [i_9] [i_13] = ((/* implicit */unsigned long long int) (((+(var_5))) == (arr_3 [i_11 + 1] [i_10 + 1] [i_9 + 1])));
                                arr_46 [i_9] [i_9] [i_11] = ((/* implicit */signed char) var_14);
                                arr_47 [(unsigned char)2] [(unsigned char)2] [i_9] [i_12] [(unsigned char)2] [i_12] [(signed char)0] = ((/* implicit */unsigned char) var_9);
                            }
                        } 
                    } 
                    arr_48 [i_9 - 3] [8ULL] [i_9] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19884))) == (arr_4 [i_9] [i_10 - 1]))))) - (((((/* implicit */_Bool) arr_11 [i_9 + 1] [(unsigned char)17] [(unsigned short)8] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (0U)))));
                    arr_49 [i_9] [i_9] [i_11] = ((/* implicit */int) arr_43 [i_10] [i_11 + 1] [i_11] [i_11]);
                    arr_50 [i_10] [i_9] [i_10] = ((/* implicit */unsigned char) ((long long int) arr_19 [i_9 - 2] [i_10 + 2]));
                    arr_51 [i_9] [11ULL] [0LL] = ((/* implicit */int) ((var_14) + (((/* implicit */long long int) -376225918))));
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (~(((((/* implicit */int) var_2)) / (((/* implicit */int) (signed char)-5)))))))));
        var_28 += ((/* implicit */long long int) (+(1246988311)));
        /* LoopNest 2 */
        for (long long int i_14 = 1; i_14 < 12; i_14 += 3) 
        {
            for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 1) 
            {
                {
                    arr_56 [i_9 - 2] [i_14] [0LL] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_9] [i_9 - 2] [i_9])) ? (((/* implicit */int) arr_52 [i_9 - 3])) : ((+(((/* implicit */int) (unsigned short)19828))))));
                    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_28 [i_9 - 3] [i_14 + 1] [(unsigned short)0] [13LL] [i_14 + 1] [i_9 - 3])) ? (arr_28 [i_9 - 1] [i_9] [i_9] [i_9] [i_14 - 1] [(signed char)8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16383)))));
                }
            } 
        } 
        var_30 = ((/* implicit */signed char) ((long long int) (-(-1753787670889584875LL))));
    }
    for (unsigned short i_16 = 2; i_16 < 18; i_16 += 4) 
    {
        /* LoopNest 2 */
        for (short i_17 = 4; i_17 < 18; i_17 += 1) 
        {
            for (unsigned char i_18 = 0; i_18 < 20; i_18 += 1) 
            {
                {
                    var_31 -= ((/* implicit */unsigned short) min((max((((464007506) >> (((arr_24 [i_16] [(unsigned char)14] [i_18] [14]) - (1716874336104938363ULL))))), (((/* implicit */int) arr_26 [i_16])))), (((((((/* implicit */int) arr_12 [i_16 + 2] [i_17] [i_16 + 2])) | (((/* implicit */int) arr_10 [(unsigned char)17] [i_16 + 2] [i_16] [i_16 + 2])))) << ((((((~(((/* implicit */int) (unsigned short)7503)))) + (7520))) - (13)))))));
                    arr_64 [(short)13] [(short)16] [i_17 - 1] [(short)16] = max(((+(max((((/* implicit */int) (unsigned char)149)), (63))))), (((/* implicit */int) var_11)));
                }
            } 
        } 
        var_32 = ((((((/* implicit */_Bool) max((((/* implicit */long long int) var_13)), (2292664593363961838LL)))) ? (((/* implicit */int) arr_61 [i_16 - 1])) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [i_16 + 2])), ((unsigned short)63782)))))) & (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_14)) - (arr_2 [i_16] [i_16])))) || (((/* implicit */_Bool) min((((/* implicit */long long int) var_17)), (1152620010860102534LL))))))));
    }
    var_33 = ((/* implicit */unsigned short) var_14);
}
