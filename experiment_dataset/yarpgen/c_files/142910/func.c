/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142910
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_17 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)86)) ? (((/* implicit */int) (unsigned char)239)) : (((/* implicit */int) (unsigned short)31198)))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_14 [i_4] [i_3] [i_2] [i_0] = ((/* implicit */_Bool) ((((unsigned int) min((0LL), (8089750589208202962LL)))) >> (((-18LL) + (48LL)))));
                                var_18 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)34335))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1LL)))))) : (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                                var_19 += ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_2 - 2] [i_3] [i_3] [(unsigned short)11])) ? (((((((/* implicit */_Bool) arr_12 [i_4] [i_3])) ? (arr_13 [i_3] [i_3] [i_3] [9] [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2]))))) / (arr_7 [i_2 - 2] [i_2 - 2] [i_2 - 1] [i_2 + 1]))) : (((/* implicit */long long int) (-(((/* implicit */int) var_10))))));
                                var_20 = ((/* implicit */unsigned char) (-(3LL)));
                            }
                        } 
                    } 
                    var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3163749386U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-23712))) : (arr_11 [i_0] [19] [i_0] [i_0] [i_2 - 2])));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 2; i_6 < 18; i_6 += 3) 
                        {
                            {
                                arr_23 [i_6] [(short)3] [i_2 + 1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) 3999481966589987221LL);
                                var_22 = ((/* implicit */signed char) ((unsigned char) ((_Bool) ((unsigned char) arr_18 [i_6 - 1] [(unsigned char)16] [i_2 - 2] [1ULL]))));
                                var_23 = ((/* implicit */int) max((((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_5] [i_6 - 2])))))))), ((((+(var_12))) / (((/* implicit */long long int) ((((/* implicit */int) var_15)) * (((/* implicit */int) arr_5 [(_Bool)1] [(_Bool)1] [i_2])))))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_12 [i_2 - 2] [i_2 - 2])) >> (((/* implicit */int) arr_18 [i_2 - 2] [i_0] [i_0] [i_0]))))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned char) (~(((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_21 [i_0] [i_0]))))), (var_7))))));
        var_26 += ((/* implicit */short) ((_Bool) (~(min((arr_7 [(unsigned char)15] [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_21 [18U] [18U])))))));
    }
    for (signed char i_7 = 1; i_7 < 14; i_7 += 1) 
    {
        var_27 ^= ((/* implicit */unsigned char) min((((/* implicit */long long int) var_6)), (((((/* implicit */long long int) var_16)) & (var_12)))));
        /* LoopNest 3 */
        for (unsigned char i_8 = 0; i_8 < 18; i_8 += 3) 
        {
            for (long long int i_9 = 0; i_9 < 18; i_9 += 2) 
            {
                for (unsigned char i_10 = 3; i_10 < 17; i_10 += 3) 
                {
                    {
                        var_28 &= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_9 [i_7] [(unsigned char)5] [i_9] [i_10] [i_10 - 3])), ((-(((((/* implicit */_Bool) arr_20 [i_7 + 4] [i_7] [i_7])) ? (arr_28 [(signed char)16] [i_8] [i_8]) : (((/* implicit */unsigned long long int) arr_7 [i_10] [i_9] [i_8] [i_7]))))))));
                        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_7 + 2] [i_7 + 2] [i_7 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_10 + 1] [i_8]))) : (arr_28 [i_7 + 3] [i_7 + 1] [i_7 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) var_1)))))) : ((-(arr_28 [i_7 + 3] [i_7 + 1] [i_7 + 4])))));
                        var_30 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_7] [(unsigned char)13] [i_9] [i_10] [i_7] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_7 + 2] [i_7 + 2] [(_Bool)1] [(_Bool)1] [17]))) : (arr_27 [(signed char)3] [i_8] [i_10])));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_11 = 0; i_11 < 18; i_11 += 3) 
        {
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                {
                    arr_42 [i_12 - 1] [1LL] [i_7] = ((/* implicit */unsigned short) min((((arr_27 [i_7] [i_7] [i_7 + 4]) - (arr_27 [i_7] [i_7] [i_7 + 1]))), (max((arr_27 [i_7] [i_7] [i_7 + 3]), (((/* implicit */long long int) (unsigned char)64))))));
                    arr_43 [i_7] [(unsigned short)16] [i_7] [i_7 - 1] = ((/* implicit */signed char) (unsigned short)15141);
                }
            } 
        } 
        arr_44 [i_7] = ((/* implicit */short) arr_33 [(signed char)16] [(signed char)16]);
    }
    /* LoopNest 2 */
    for (long long int i_13 = 0; i_13 < 20; i_13 += 1) 
    {
        for (long long int i_14 = 1; i_14 < 19; i_14 += 4) 
        {
            {
                var_31 ^= ((/* implicit */unsigned int) (((((-(((/* implicit */int) (_Bool)0)))) - (((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_13] [i_13] [i_13] [i_14] [(short)7])) || (((/* implicit */_Bool) var_10))))))) + ((+(((/* implicit */int) arr_22 [i_14 + 1] [i_14 - 1] [i_14 - 1] [i_14 + 1] [i_14 - 1]))))));
                /* LoopNest 2 */
                for (unsigned int i_15 = 0; i_15 < 20; i_15 += 3) 
                {
                    for (long long int i_16 = 0; i_16 < 20; i_16 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */_Bool) (+(((-1LL) * (((/* implicit */long long int) 244320477U))))));
                            arr_54 [i_13] [i_13] [i_13] [i_16] [i_13] [i_13] &= ((/* implicit */short) ((signed char) (((-(var_13))) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)89))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_17 = 0; i_17 < 10; i_17 += 4) 
    {
        arr_58 [i_17] [i_17] = ((/* implicit */short) arr_11 [i_17] [i_17] [10] [i_17] [i_17]);
        var_33 = arr_15 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17];
        var_34 += ((signed char) (unsigned short)255);
        var_35 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) max((arr_36 [i_17]), (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */unsigned int) var_3)) / (3683554884U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_39 [i_17] [i_17] [i_17]) <= (((/* implicit */long long int) ((/* implicit */int) var_2)))))))))));
    }
    /* LoopNest 3 */
    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
    {
        for (long long int i_19 = 0; i_19 < 14; i_19 += 4) 
        {
            for (unsigned short i_20 = 1; i_20 < 10; i_20 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_21 = 0; i_21 < 14; i_21 += 4) 
                    {
                        for (unsigned char i_22 = 0; i_22 < 14; i_22 += 2) 
                        {
                            {
                                var_36 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) max((arr_51 [i_20] [(signed char)0] [i_22]), (((/* implicit */unsigned char) (_Bool)1))))) + (((/* implicit */int) ((short) var_8)))))) <= (arr_73 [i_22] [i_21] [i_20] [i_19] [i_18])));
                                var_37 = ((/* implicit */unsigned int) min((max((arr_26 [i_20] [(signed char)12] [i_20]), (((/* implicit */unsigned long long int) (~(67108863LL)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)156)), (1300371579U)))) ? (((/* implicit */long long int) max((arr_66 [i_21]), (0U)))) : (max((var_12), (((/* implicit */long long int) arr_17 [i_18] [i_18] [i_22])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_23 = 0; i_23 < 14; i_23 += 1) 
                    {
                        for (unsigned short i_24 = 4; i_24 < 12; i_24 += 3) 
                        {
                            {
                                var_38 = ((/* implicit */long long int) min((var_38), ((-(((((/* implicit */_Bool) (signed char)84)) ? (-18LL) : (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_18] [i_18 - 1] [(short)15])))))))));
                                arr_79 [i_18] [i_18] = ((/* implicit */unsigned char) max(((((_Bool)1) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)121))))) : (min((var_0), (((/* implicit */unsigned int) arr_1 [i_20 + 2] [i_19])))))), ((~(arr_66 [i_23])))));
                            }
                        } 
                    } 
                    arr_80 [i_18] [i_18] [i_18] [(unsigned short)2] = ((/* implicit */signed char) min(((unsigned short)65280), (((/* implicit */unsigned short) (signed char)121))));
                    var_39 = ((/* implicit */signed char) var_0);
                    arr_81 [3U] [i_19] [i_20] = ((/* implicit */short) max((((var_5) - (((/* implicit */unsigned int) var_16)))), (((/* implicit */unsigned int) arr_71 [i_20 + 3] [i_19] [(signed char)10] [i_18] [i_18]))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_25 = 1; i_25 < 9; i_25 += 3) 
    {
        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_27 = 1; i_27 < 9; i_27 += 3) 
                {
                    for (unsigned char i_28 = 0; i_28 < 10; i_28 += 3) 
                    {
                        for (int i_29 = 0; i_29 < 10; i_29 += 4) 
                        {
                            {
                                var_40 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (short)32767)))))) : (((((/* implicit */_Bool) 2068819388)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967292U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (2852787553U)))) : (((((/* implicit */_Bool) (signed char)117)) ? (arr_26 [i_25] [i_26] [i_25]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32766)))))))));
                                var_41 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_27 - 1] [i_27 + 1]))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_12 [i_27 - 1] [i_25]))))) : (arr_13 [i_25 - 1] [i_28] [i_28] [i_28] [i_29] [i_29])));
                                var_42 ^= ((/* implicit */short) (-(((/* implicit */int) ((signed char) ((-3501103894275672828LL) ^ (-5420005946375281398LL)))))));
                                var_43 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_7 [i_26] [i_25 + 1] [i_25] [i_25])) ? (((/* implicit */long long int) var_5)) : (arr_7 [i_28] [i_25 - 1] [i_25] [i_25]))) < (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_7 [i_29] [i_25 - 1] [i_25] [i_25]))))));
                            }
                        } 
                    } 
                } 
                var_44 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_25]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2248358607U))))) : (((/* implicit */int) (signed char)-114))));
                var_45 = arr_22 [i_25] [i_25] [i_26] [i_26] [i_26];
            }
        } 
    } 
}
