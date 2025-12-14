/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189079
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
    var_11 = ((/* implicit */short) (signed char)-124);
    var_12 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((+(var_8))), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_8)))))) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) var_9))));
    var_13 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) 735695267)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_2 [(short)0] [(short)0] = ((/* implicit */signed char) arr_0 [0U] [i_0]);
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 3) 
                {
                    {
                        var_14 *= ((/* implicit */unsigned int) ((signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1])) && (((/* implicit */_Bool) arr_10 [i_0] [i_0] [(signed char)17] [(signed char)17] [i_0] [i_3]))))), (arr_7 [(unsigned char)17] [i_1] [i_0]))));
                        arr_12 [i_2] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-909))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 2; i_4 < 17; i_4 += 3) 
                        {
                            arr_16 [i_4] [i_2] [i_0] [i_2] [i_0] = (+(((/* implicit */int) arr_9 [i_3 + 2] [i_3 + 2])));
                            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) arr_4 [i_2]))));
                        }
                        for (signed char i_5 = 1; i_5 < 17; i_5 += 2) 
                        {
                            arr_19 [9] [i_2] [9] [i_0] [i_2] [i_0] = ((/* implicit */long long int) 317405178U);
                            var_16 = ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_9 [i_1 - 3] [i_3 + 1])) >> (((/* implicit */int) arr_9 [i_1 - 3] [i_3 + 1]))))));
                            arr_20 [11U] [i_2] [i_2 + 1] [(_Bool)1] [i_5] = ((/* implicit */signed char) ((_Bool) (+(arr_7 [i_0] [i_1] [i_0]))));
                            arr_21 [i_0] [i_2] [i_2] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 0)) ? (arr_1 [i_2 + 1] [i_2 - 1]) : (((/* implicit */long long int) ((int) (unsigned char)131)))))));
                        }
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
                        {
                            arr_24 [i_0] [(unsigned short)6] [i_1 - 1] [i_2] [i_3] [i_6] [i_2] = ((/* implicit */int) (~(min((arr_11 [i_0] [i_1] [i_2 + 1]), (((/* implicit */unsigned int) arr_9 [i_1 - 3] [i_1 - 3]))))));
                            arr_25 [i_0] [(short)7] [i_1] [i_2 + 1] [i_2] [i_2] [6U] = min((((((/* implicit */_Bool) 450785200512241145ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24576))) : (8064801306077972208ULL))), (((/* implicit */unsigned long long int) min((arr_10 [i_6] [13U] [i_3] [13] [i_3 - 1] [i_2]), (((/* implicit */int) min(((signed char)-77), ((signed char)-125))))))));
                            var_17 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)127))))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)62))) : (((13721130119723732532ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50883))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))));
                            arr_26 [i_0] [i_0] [i_2] [i_2] [i_2] [i_3] [i_6] = max((((((/* implicit */_Bool) arr_0 [i_1 - 4] [i_3 + 2])) ? ((+(((/* implicit */int) arr_3 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [(short)15] [(unsigned char)6] [i_3] [i_3] [10U]))))))), ((~(((/* implicit */int) arr_18 [i_1] [i_1 - 1] [11ULL] [i_3] [i_3 + 2] [i_3 - 1] [(unsigned short)14])))));
                        }
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) /* same iter space */
                        {
                            arr_30 [4U] [i_1] [i_1] [i_0] &= ((/* implicit */unsigned long long int) ((_Bool) arr_5 [i_0] [8ULL] [i_0]));
                            arr_31 [i_1] &= ((/* implicit */signed char) (~(((/* implicit */int) min((arr_27 [i_3 - 1] [i_1 + 1] [i_0]), (arr_27 [i_3 + 1] [i_1 - 2] [i_0]))))));
                            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) min(((~(((/* implicit */int) arr_3 [i_1 - 1])))), (((((/* implicit */_Bool) arr_3 [i_1 - 2])) ? (((/* implicit */int) arr_3 [i_1 - 1])) : (((/* implicit */int) arr_3 [i_1 - 2])))))))));
                        }
                        arr_32 [i_0] [i_1] [i_1] [8ULL] &= ((/* implicit */int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_1 - 1] [i_0]))))), (((((/* implicit */_Bool) (~(13721130119723732532ULL)))) ? (min((arr_17 [i_0] [i_0] [i_2] [i_2] [i_3] [i_3]), (arr_17 [i_0] [i_1] [i_1] [i_1] [i_3] [i_3]))) : ((((_Bool)0) ? (((/* implicit */unsigned long long int) arr_1 [i_3 + 2] [i_2])) : (arr_8 [i_0] [i_1] [i_0])))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_8 = 1; i_8 < 21; i_8 += 3) 
    {
        /* LoopNest 2 */
        for (int i_9 = 4; i_9 < 20; i_9 += 3) 
        {
            for (unsigned char i_10 = 0; i_10 < 22; i_10 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_11 = 1; i_11 < 21; i_11 += 2) 
                    {
                        for (unsigned long long int i_12 = 1; i_12 < 20; i_12 += 2) 
                        {
                            {
                                arr_48 [i_8] [i_10] [i_10] [i_8] &= ((/* implicit */signed char) max((min((((((/* implicit */_Bool) (signed char)-15)) ? (-1622962935) : (735695267))), (((((/* implicit */_Bool) var_2)) ? (arr_36 [i_10]) : (((/* implicit */int) (short)-1)))))), (arr_42 [i_12] [i_10] [i_10] [i_10] [i_10] [i_8])));
                                arr_49 [i_8] [i_9] [i_8] [i_8] [i_12] = ((/* implicit */unsigned long long int) ((unsigned int) ((arr_34 [i_8 + 1] [i_12 + 2]) + (arr_34 [i_8 - 1] [i_12 + 1]))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */signed char) (~((~(arr_42 [(unsigned char)3] [i_8] [(_Bool)1] [i_8 + 1] [i_9 - 2] [i_9 - 2])))));
                }
            } 
        } 
        arr_50 [i_8] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (((_Bool)1) ? (10381942767631579408ULL) : (((/* implicit */unsigned long long int) -1622962935))))) ? (min((arr_43 [i_8] [i_8] [15U] [i_8] [i_8] [i_8]), (arr_40 [i_8] [i_8] [(signed char)17]))) : ((((_Bool)1) ? (8064801306077972211ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) arr_41 [i_8] [1]))));
        var_20 = ((/* implicit */unsigned long long int) (short)31673);
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (-(min((((/* implicit */int) (short)10522)), (arr_42 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)31678))))) ? ((-(((/* implicit */int) (signed char)-69)))) : (((((/* implicit */_Bool) arr_38 [21U] [i_8] [i_8])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_41 [i_8] [i_8]))))))) : (min((((unsigned long long int) (unsigned short)0)), (((/* implicit */unsigned long long int) min(((short)0), (((/* implicit */short) arr_45 [i_8] [i_8] [(signed char)6])))))))));
    }
    for (unsigned int i_13 = 0; i_13 < 14; i_13 += 3) 
    {
        var_22 *= ((/* implicit */short) ((_Bool) ((((/* implicit */int) (short)31678)) + (arr_51 [(unsigned short)12] [i_13]))));
        /* LoopSeq 1 */
        for (int i_14 = 0; i_14 < 14; i_14 += 3) 
        {
            arr_56 [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_33 [i_13])))) ? (((/* implicit */long long int) max((arr_33 [i_14]), (arr_33 [(signed char)11])))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)-77))) / (9223372036854775807LL)))));
            var_23 = ((/* implicit */unsigned int) (unsigned char)242);
            var_24 *= (((_Bool)1) ? (0ULL) : (((/* implicit */unsigned long long int) -375506227)));
            /* LoopNest 3 */
            for (unsigned long long int i_15 = 0; i_15 < 14; i_15 += 2) 
            {
                for (int i_16 = 0; i_16 < 14; i_16 += 3) 
                {
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        {
                            arr_65 [i_13] [i_14] [i_15] [i_13] [i_16] [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (arr_34 [21] [i_13]) : (arr_34 [i_15] [15])))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-31678))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [i_13] [i_14] [i_15] [i_16]))) - (arr_47 [i_13] [i_14] [i_15] [i_16] [i_17] [i_17])))) ? (((((/* implicit */_Bool) 6280617206805696005ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)33))) : (-8808890640574149043LL))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)-56)), ((short)-2257)))))))));
                            arr_66 [i_13] [i_14] [10] [i_16] [i_13] = ((/* implicit */long long int) min((((((/* implicit */int) (_Bool)1)) / (-5))), (((/* implicit */int) min(((signed char)-1), (((/* implicit */signed char) min(((_Bool)1), ((_Bool)1)))))))));
                        }
                    } 
                } 
            } 
        }
    }
    for (unsigned long long int i_18 = 4; i_18 < 11; i_18 += 2) 
    {
        var_25 = ((/* implicit */unsigned char) (!((_Bool)1)));
        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) (signed char)32))));
        arr_69 [i_18] &= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_42 [i_18] [i_18] [(signed char)16] [i_18 - 4] [i_18] [i_18])) ? (0U) : (arr_7 [i_18 + 1] [i_18 + 2] [i_18 + 1])))));
    }
    var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((long long int) min(((-(((/* implicit */int) var_2)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10))))))))));
}
