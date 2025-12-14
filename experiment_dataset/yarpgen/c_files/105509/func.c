/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105509
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
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (~(18446744073709551596ULL)));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            /* LoopSeq 3 */
            for (short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                var_18 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_2])) ? (((/* implicit */int) (unsigned char)178)) : (482050305)));
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((arr_8 [i_0] [i_1]) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) (_Bool)1)))))));
                var_20 = ((/* implicit */int) ((arr_2 [i_0]) ? (var_1) : (((/* implicit */unsigned long long int) (~(var_3))))));
            }
            for (int i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                arr_11 [17ULL] [(signed char)15] [(signed char)15] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1172712000938867776LL)) ? (((/* implicit */int) (unsigned short)41632)) : (482050303)));
                /* LoopSeq 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_15 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_1] [i_1] &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_4] [(unsigned short)19] [i_4] [i_4]))));
                    arr_16 [i_4] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4] [i_1] [i_1] [i_0]))) : ((~(-1172712000938867797LL)))));
                    var_21 -= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_9)))) ? ((~(((/* implicit */int) (short)-23210)))) : (((/* implicit */int) ((_Bool) var_8)))));
                    arr_17 [i_3] [i_1] [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) arr_14 [i_0] [i_1] [i_1] [i_4])) : (var_1)));
                    arr_18 [i_0] [i_0] [(short)16] [6] [i_4] [i_4] = (~(((/* implicit */int) arr_6 [(unsigned short)14] [i_4] [i_3] [i_4])));
                }
                for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    /* LoopSeq 1 */
                    for (short i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        var_22 = ((/* implicit */_Bool) var_17);
                        arr_23 [i_6] [i_3] [i_0] = 1U;
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_21 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0]))) : (var_1))));
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0] [i_1] [i_3] [i_5] [i_7])) ? (1924171471) : (((/* implicit */int) arr_9 [i_7]))))) ? (((/* implicit */int) ((arr_14 [i_7] [i_5] [i_3] [i_0]) <= (((/* implicit */int) var_11))))) : (((((/* implicit */int) (unsigned char)193)) - (1924171464)))));
                    }
                    for (int i_8 = 0; i_8 < 24; i_8 += 3) 
                    {
                        arr_29 [(_Bool)1] [i_0] [i_1] [i_3] [i_3] [i_5] [i_3] = ((/* implicit */unsigned int) arr_2 [i_1]);
                        arr_30 [(unsigned short)15] [i_1] [i_5] [i_5] [i_8] |= ((/* implicit */short) 4294967288U);
                    }
                }
            }
            for (short i_9 = 0; i_9 < 24; i_9 += 1) 
            {
                arr_35 [(_Bool)1] [i_1] [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)228))) * (21U)));
                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32758)) ? (((((((/* implicit */int) arr_26 [i_0] [i_0])) + (2147483647))) >> (((/* implicit */int) var_5)))) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_9] [(short)10]))));
                arr_36 [i_1] [10ULL] = ((/* implicit */unsigned int) ((unsigned char) arr_10 [i_0] [i_0] [i_9] [i_0]));
            }
            var_26 = (+(13U));
        }
    }
    for (int i_10 = 0; i_10 < 25; i_10 += 1) 
    {
        arr_40 [i_10] |= ((/* implicit */signed char) var_16);
        arr_41 [i_10] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (-(arr_38 [i_10] [i_10])))), (min((((/* implicit */unsigned long long int) var_12)), (max((((/* implicit */unsigned long long int) arr_38 [i_10] [i_10])), (arr_39 [i_10])))))));
    }
    for (unsigned char i_11 = 0; i_11 < 19; i_11 += 2) 
    {
        var_27 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_11]))) : (var_1))), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_17)), (arr_45 [i_11]))))))) ? (((((/* implicit */_Bool) (unsigned char)43)) ? (((((/* implicit */_Bool) arr_7 [i_11] [i_11] [i_11] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_15))) : (((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)-32756)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_11] [i_11]))))) >> (((min((((/* implicit */long long int) var_17)), (var_16))) - (50830LL))))))));
        arr_46 [i_11] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_42 [i_11])) ? (((((/* implicit */_Bool) (unsigned short)38650)) ? (176924054U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)621))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_11] [i_11])))));
        arr_47 [i_11] = ((/* implicit */short) min((((var_5) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-1)), (var_14)))) : (((/* implicit */int) ((unsigned char) arr_37 [i_11]))))), ((+((+(((/* implicit */int) (_Bool)1))))))));
    }
    var_28 = ((/* implicit */short) ((unsigned char) 4294967282U));
    /* LoopSeq 1 */
    for (unsigned int i_12 = 0; i_12 < 10; i_12 += 2) 
    {
        arr_50 [i_12] |= ((/* implicit */short) var_3);
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 10; i_13 += 2) 
        {
            for (unsigned char i_14 = 0; i_14 < 10; i_14 += 2) 
            {
                {
                    arr_56 [i_14] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [i_14] [i_13] [i_13] [i_12]))))), (min((min((((/* implicit */unsigned long long int) (unsigned short)13)), (14778888450335933215ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9007199254740991ULL)) ? (((/* implicit */int) (unsigned char)220)) : (((/* implicit */int) arr_54 [i_12] [i_12] [(unsigned char)2])))))))));
                    var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(237578115279851636ULL)))) ? (max((2147483647), (((/* implicit */int) arr_8 [i_13] [(short)8])))) : (((/* implicit */int) arr_25 [i_12] [i_12]))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_12))) / (var_16)))) ? (((((/* implicit */_Bool) arr_7 [8U] [20LL] [i_13] [i_12])) ? (((/* implicit */unsigned long long int) var_13)) : (arr_39 [i_14]))) : (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) 9207295330081192586LL)))))));
                }
            } 
        } 
        arr_57 [(short)4] = ((/* implicit */unsigned char) (~(min((((/* implicit */unsigned int) var_6)), (var_13)))));
        var_30 = ((/* implicit */short) max((((((/* implicit */int) (unsigned char)201)) + (((/* implicit */int) arr_21 [i_12])))), ((-(((/* implicit */int) arr_21 [i_12]))))));
        arr_58 [i_12] = ((/* implicit */long long int) ((short) min((((/* implicit */long long int) ((var_5) ? (((/* implicit */int) arr_53 [i_12] [i_12])) : (((/* implicit */int) arr_2 [i_12]))))), (9223372036854775786LL))));
    }
    var_31 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)50860)) ? (((/* implicit */int) (unsigned short)12)) : (((/* implicit */int) (short)-29997))));
}
