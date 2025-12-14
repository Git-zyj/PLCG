/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116624
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
    /* vectorizable */
    for (short i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (((~(2330026600U))) == (((/* implicit */unsigned int) arr_0 [i_0 - 1]))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 8; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 3) 
                        {
                            var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 275577513)) ? (arr_0 [i_1 + 1]) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) (+(var_18)))) : (((arr_6 [1ULL] [i_1] [i_1]) ? (arr_13 [i_0] [i_1] [(signed char)3] [(signed char)3] [i_4 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))));
                            arr_14 [7U] [i_0] [i_0] [i_3] = ((/* implicit */short) var_9);
                        }
                        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            arr_18 [0] [i_3] [i_2 + 3] [i_3] [i_5] = ((/* implicit */short) arr_9 [i_0] [i_2] [i_5]);
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7636)) ? (arr_13 [i_0] [i_1] [8] [i_3] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0 - 2] [i_3] [9U])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [(_Bool)1] [i_2] [i_5]))) : (arr_7 [i_0])))) : (((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (arr_13 [i_5] [i_5] [(short)0] [i_5] [i_5]) : (0ULL)))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 1) 
                        {
                            var_22 = ((short) ((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */long long int) var_10)) : (arr_4 [9ULL] [9])));
                            arr_21 [i_3] [(signed char)6] [(short)5] [7] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_19 [i_3] [i_2] [i_2] [i_3]) ^ (((/* implicit */unsigned long long int) arr_17 [i_0] [5] [i_2] [i_2 - 3] [i_3] [i_2] [5]))))) ? (((arr_5 [i_0 - 3] [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_9 [i_0] [i_0] [i_0]))) : (arr_13 [i_0] [i_1] [(unsigned char)4] [(signed char)1] [i_6])));
                            arr_22 [i_0] [i_1 - 1] [i_2 + 1] [i_3] [i_6] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 12; i_7 += 3) 
        {
            for (signed char i_8 = 2; i_8 < 11; i_8 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 0; i_9 < 12; i_9 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned int) (-((~(((/* implicit */int) arr_23 [i_0] [i_7] [i_8]))))));
                        var_24 = ((/* implicit */signed char) (+(var_0)));
                    }
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_0] [i_7] [i_8 - 1] [i_8])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 134217216U)) ? (1207524062U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0] [i_0] [i_8 - 1] [(_Bool)1])))))) : (arr_20 [i_8 + 1] [i_8 + 1] [i_8 + 1] [(unsigned short)11])));
                }
            } 
        } 
        arr_31 [i_0 - 2] [i_0 - 2] = ((/* implicit */long long int) arr_24 [i_0] [i_0] [i_0]);
        arr_32 [i_0] = ((/* implicit */unsigned char) arr_24 [7U] [i_0 + 1] [7U]);
    }
    for (short i_10 = 2; i_10 < 15; i_10 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_11 = 0; i_11 < 17; i_11 += 1) 
        {
            var_26 = ((/* implicit */short) arr_38 [i_10]);
            arr_39 [i_10] [i_10] = ((/* implicit */int) max((arr_35 [8U] [(_Bool)1]), (((unsigned int) arr_38 [i_10 + 1]))));
            arr_40 [i_10] [i_10] [i_11] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_33 [i_11])) ? (arr_33 [i_10 - 2]) : (((/* implicit */unsigned long long int) var_0)))) / ((~(arr_33 [(unsigned char)10])))));
        }
        var_27 = ((/* implicit */unsigned long long int) (unsigned char)45);
        arr_41 [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 601946235982303161ULL)) ? (((/* implicit */long long int) ((/* implicit */int) ((((long long int) arr_37 [i_10])) > (((/* implicit */long long int) (~(arr_36 [i_10 - 2] [i_10] [i_10])))))))) : (((((/* implicit */long long int) ((arr_36 [i_10] [i_10] [7]) - (var_10)))) + (arr_37 [i_10])))));
    }
    for (unsigned short i_12 = 4; i_12 < 15; i_12 += 1) 
    {
        arr_45 [i_12 - 1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_12] [i_12])) ? (var_15) : (((/* implicit */long long int) arr_43 [i_12]))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_44 [i_12] [i_12])) : (((/* implicit */int) arr_42 [i_12] [i_12])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [i_12 + 2] [i_12 + 2])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (601946235982303161ULL)));
        /* LoopSeq 2 */
        for (unsigned long long int i_13 = 1; i_13 < 18; i_13 += 1) 
        {
            arr_49 [6ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_46 [i_12 + 4] [i_13 + 1]) + (arr_46 [i_12 + 4] [i_13 - 1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_47 [i_12]), (((/* implicit */unsigned int) (unsigned short)6530))))) ? (((((/* implicit */_Bool) arr_44 [(short)4] [(short)4])) ? (var_6) : (var_17))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned int) var_13)) : (arr_43 [i_12])))))))));
            arr_50 [i_12] [i_12] [i_12] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_8)) ? (((long long int) arr_48 [i_13] [i_13])) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_48 [i_12 - 1] [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_12 + 4] [i_13]))) : (arr_43 [1LL])))))), (((/* implicit */long long int) var_2))));
            var_28 = max((((/* implicit */unsigned int) ((int) arr_46 [i_13 - 1] [i_12 - 4]))), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_48 [(_Bool)1] [(_Bool)1]))) | (arr_47 [i_12])))) ? (((unsigned int) 3888353452661413660ULL)) : (((/* implicit */unsigned int) var_0)))));
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            arr_54 [i_12] = ((/* implicit */unsigned char) ((((/* implicit */int) ((max((arr_43 [i_12]), (((/* implicit */unsigned int) var_7)))) <= (((/* implicit */unsigned int) ((/* implicit */int) max((arr_48 [(short)7] [i_12]), (((/* implicit */short) var_16))))))))) != (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_16))))))))));
            arr_55 [i_12 - 1] [i_14] [i_12] = max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_44 [i_14] [i_12 + 1])) ? (((/* implicit */int) (unsigned short)448)) : (((/* implicit */int) var_7)))) >> ((((-(((/* implicit */int) arr_48 [i_12] [i_14])))) - (2086)))))), (((((/* implicit */_Bool) (-(arr_47 [i_12 + 2])))) ? (arr_47 [i_14]) : (max((((/* implicit */unsigned int) arr_42 [i_12] [i_12])), (arr_43 [12]))))));
        }
        arr_56 [i_12] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [15U])) ? (((/* implicit */unsigned long long int) arr_43 [i_12])) : (arr_52 [i_12] [i_12] [6U])))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_4)), (1398970289U)))) : (max((((/* implicit */unsigned long long int) arr_42 [i_12] [i_12])), (arr_52 [i_12] [i_12] [(short)1]))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_44 [1ULL] [(_Bool)1])), (arr_47 [i_12 - 2]))))));
    }
    var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) 17844797837727248454ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(var_13)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (12276400178572732359ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) var_10)) : (134217728U))))))));
    var_30 = ((/* implicit */int) var_15);
}
