/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146212
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
    var_18 = ((/* implicit */unsigned short) max((var_18), (var_6)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    {
                        var_19 += ((/* implicit */unsigned short) var_1);
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((var_0) ? (arr_10 [i_3] [i_2]) : (arr_10 [i_3] [i_3]))))));
                        var_21 += ((/* implicit */unsigned int) var_3);
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))));
    }
    /* LoopSeq 2 */
    for (signed char i_4 = 0; i_4 < 22; i_4 += 2) 
    {
        var_23 = ((/* implicit */unsigned short) var_4);
        var_24 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_14 [(unsigned short)13] [i_4])), (((((/* implicit */_Bool) ((0ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4] [i_4])))))) ? (var_2) : (min((((/* implicit */unsigned long long int) arr_2 [i_4])), (var_5)))))));
        var_25 = ((/* implicit */int) arr_7 [i_4] [i_4] [i_4]);
    }
    for (signed char i_5 = 0; i_5 < 21; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            for (int i_7 = 1; i_7 < 18; i_7 += 2) 
            {
                {
                    arr_24 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) max((((/* implicit */signed char) arr_23 [i_7 - 1] [i_7 + 1] [i_7 + 1])), ((signed char)-28)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                    arr_25 [i_5] [i_6] [i_7] [i_5] = max((((/* implicit */unsigned long long int) arr_2 [i_5])), (((((/* implicit */_Bool) arr_4 [i_7])) ? (((/* implicit */unsigned long long int) arr_10 [i_5] [i_7 + 2])) : (var_5))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 4) 
                        {
                            var_26 = ((/* implicit */int) var_9);
                            arr_31 [i_5] [i_6] [i_7] = ((/* implicit */signed char) (unsigned short)56206);
                            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((var_4) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_8] [i_8] [i_8] [i_8] [i_8]))))))));
                            var_28 = ((/* implicit */unsigned short) 619059925);
                            arr_32 [i_5] [i_6] [i_6] [(signed char)7] [i_5] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned short)34890)) ? (((/* implicit */unsigned long long int) -1361780147)) : (max((9014427457909769339ULL), (var_4))))), (((/* implicit */unsigned long long int) (-(min((((/* implicit */int) var_0)), (var_16))))))));
                        }
                        for (int i_10 = 0; i_10 < 21; i_10 += 3) 
                        {
                            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? ((+(((arr_18 [i_7] [i_8] [i_7]) ? (arr_10 [i_8] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_6] [i_6] [i_8]))))))) : (((((/* implicit */_Bool) arr_14 [i_7 - 1] [i_7 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_7 + 1] [i_6] [i_7] [i_6] [i_10]))) : (arr_14 [i_7 + 3] [i_7 - 1])))));
                            var_30 = ((/* implicit */unsigned short) arr_0 [i_6]);
                        }
                        /* vectorizable */
                        for (int i_11 = 1; i_11 < 19; i_11 += 3) 
                        {
                            var_31 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) | (var_17)))) ? (arr_17 [i_8] [i_6] [i_7 - 1]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)31)))))));
                            arr_39 [i_7] [i_11] [i_7] [i_6] [i_11] [i_11] [i_5] = ((/* implicit */signed char) ((arr_38 [i_6] [i_7 + 3] [i_11] [i_8] [i_11 + 2]) | (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (arr_27 [i_5] [i_5] [20U] [i_8] [i_11]))))));
                        }
                        var_32 ^= ((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)122)), (var_15)));
                        arr_40 [i_8] [16] [i_6] [i_5] = var_12;
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) min((((/* implicit */int) var_12)), (var_16)))) | (min((((/* implicit */unsigned long long int) arr_3 [i_5] [i_6])), (3075434113924900413ULL))))))))));
                        arr_44 [i_5] [i_6] [i_12] [i_12] = ((/* implicit */int) max((11095598560431203350ULL), (((/* implicit */unsigned long long int) (unsigned short)64631))));
                        var_34 -= ((((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_7 + 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_5] [i_5] [i_7 + 2] [i_7] [i_7 + 2] [i_12]))) : (max((((/* implicit */unsigned long long int) var_1)), ((-(20ULL))))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_35 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_41 [i_5] [i_7 + 2] [i_7 + 1] [i_7 - 1] [i_7 + 3])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_5] [i_5] [7] [i_7] [i_5] [i_13])) ? (arr_28 [i_13] [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((unsigned int) 7ULL)) : (((((/* implicit */_Bool) arr_6 [i_5])) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_5] [i_5] [i_7 + 1]))))))) : (((/* implicit */unsigned int) ((arr_18 [i_5] [i_6] [i_7 + 2]) ? (((/* implicit */int) arr_18 [i_7] [i_7] [i_7 + 2])) : (((/* implicit */int) var_3)))))));
                        var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_5]))) | (((((/* implicit */_Bool) arr_43 [i_7] [i_13] [i_7] [i_6] [i_6] [i_5])) ? (((((/* implicit */_Bool) (signed char)-68)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_5] [i_5] [i_6] [(signed char)9] [i_13] [i_6]))))) : (((/* implicit */unsigned int) arr_29 [i_13] [i_6] [i_7] [i_5] [i_5] [i_7 + 1])))))))));
                    }
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        var_37 ^= ((((((/* implicit */_Bool) 10541623281862312575ULL)) ? (((/* implicit */int) (unsigned char)27)) : (((/* implicit */int) (signed char)-34)))) / (((((/* implicit */int) arr_4 [i_6])) * (((/* implicit */int) min((arr_46 [i_5] [i_5] [i_5] [12]), (((/* implicit */unsigned char) arr_5 [i_5] [i_5] [i_5]))))))));
                        var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) var_8))));
                        arr_49 [i_5] [i_5] [i_14] [i_5] = ((/* implicit */unsigned int) ((unsigned short) ((max((((/* implicit */unsigned long long int) var_7)), (var_5))) | (((/* implicit */unsigned long long int) ((var_13) | (((/* implicit */int) arr_22 [i_14 - 1]))))))));
                        arr_50 [i_14] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_26 [i_7 + 1])) | (((/* implicit */int) (signed char)-120)))) | (((((/* implicit */_Bool) arr_26 [i_7 - 1])) ? (((/* implicit */int) arr_26 [i_7 - 1])) : (((/* implicit */int) arr_26 [i_7 + 2]))))));
                    }
                    var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_12 [(unsigned short)20])), ((unsigned short)0)))) | (((((/* implicit */int) var_1)) | (-1)))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_15 = 0; i_15 < 21; i_15 += 4) 
        {
            for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_17 = 2; i_17 < 20; i_17 += 2) 
                    {
                        for (signed char i_18 = 0; i_18 < 21; i_18 += 3) 
                        {
                            {
                                var_40 += ((/* implicit */unsigned short) ((1944545357) | (((((var_0) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_11)))) | (((/* implicit */int) (_Bool)1))))));
                                var_41 = ((/* implicit */_Bool) var_12);
                            }
                        } 
                    } 
                    var_42 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_61 [i_5] [i_5] [i_5] [i_5] [i_5]))) * (arr_34 [i_5] [i_5] [i_5] [i_5] [i_5])));
                    var_43 = ((/* implicit */unsigned short) ((((arr_33 [i_5] [i_5] [i_15] [i_16 + 1] [i_16 + 1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_16]))))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_45 [i_16] [i_16] [i_16 + 1] [i_16 + 1])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_19 = 0; i_19 < 21; i_19 += 2) 
                    {
                        for (unsigned long long int i_20 = 0; i_20 < 21; i_20 += 3) 
                        {
                            {
                                var_44 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) 246517719)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)15145))))) : (((/* implicit */int) ((short) (unsigned short)29109)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 101130899837117074ULL)) ? (((/* implicit */int) (unsigned short)26677)) : (459020711)))));
                                arr_69 [i_20] [i_20] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (var_16) : (((int) arr_19 [i_5] [i_5] [i_20]))))) | (var_4)));
                                arr_70 [i_5] [i_20] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) max((-777687987), (((/* implicit */int) arr_63 [i_5] [i_20])))))));
                                var_45 = ((((/* implicit */unsigned long long int) 3241733613U)) | (min((((18446744073709551592ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)122))))), (((arr_20 [i_16] [i_16 + 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_2))))));
                            }
                        } 
                    } 
                    arr_71 [i_15] [i_5] [i_15] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)242))))) | (((((/* implicit */_Bool) arr_43 [i_16 + 1] [i_16] [i_16 + 1] [i_16 + 1] [i_16 + 1] [i_16 + 1])) ? (((/* implicit */unsigned long long int) 459020724)) : (var_2)))));
                }
            } 
        } 
    }
}
