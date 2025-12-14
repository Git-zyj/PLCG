/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1018
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
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        arr_3 [i_0] |= ((/* implicit */unsigned long long int) (((((+(2147483647))) < (arr_0 [i_0 - 1]))) ? (var_4) : (((min((((/* implicit */int) var_14)), (arr_0 [i_0]))) >> (((max((arr_0 [i_0]), (arr_0 [(unsigned short)2]))) - (364444126)))))));
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))))) ? (((((/* implicit */int) (unsigned short)50904)) + (((/* implicit */int) (unsigned char)205)))) : (((/* implicit */int) arr_1 [i_0 + 3]))));
        arr_4 [i_0] [i_0 + 2] = arr_2 [i_0];
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            arr_7 [i_1] [i_1] [i_1] = ((/* implicit */signed char) 1207267507843431474LL);
            arr_8 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)51)), (3081302076U)))) ? ((~((+(-9119741437604027945LL))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)205))) + (9161875035973246128LL)))));
        }
        /* vectorizable */
        for (unsigned int i_2 = 2; i_2 < 11; i_2 += 3) /* same iter space */
        {
            var_16 = ((/* implicit */long long int) var_2);
            arr_12 [i_2] = ((/* implicit */unsigned short) arr_0 [i_0 + 3]);
            arr_13 [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) (signed char)102);
        }
        for (unsigned int i_3 = 2; i_3 < 11; i_3 += 3) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned short) min((var_17), (arr_5 [i_3])));
            arr_16 [i_0] [i_0] = ((/* implicit */short) arr_2 [i_0 + 1]);
            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)(-127 - 1))), (arr_5 [i_0 + 2]))))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 1770804548U)), (var_13)))) ? (((/* implicit */int) var_11)) : (max((var_9), (((/* implicit */int) var_14)))))) : (min((((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) (unsigned char)205)) : (((/* implicit */int) (signed char)102)))), (arr_0 [i_0 + 1])))));
            /* LoopSeq 3 */
            for (long long int i_4 = 2; i_4 < 11; i_4 += 3) 
            {
                var_19 ^= ((/* implicit */unsigned int) (signed char)102);
                arr_21 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) max((arr_0 [i_4 + 1]), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_3]))) >= (((unsigned long long int) (unsigned char)186)))))));
            }
            /* vectorizable */
            for (unsigned int i_5 = 1; i_5 < 10; i_5 += 2) 
            {
                arr_24 [i_5] [i_5] = ((/* implicit */short) ((arr_20 [i_3 + 2] [1U] [i_5]) ? (((/* implicit */int) arr_20 [i_3 - 1] [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) arr_20 [i_3 + 2] [i_0] [i_3]))));
                var_20 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned char)255)))) ? (((((/* implicit */_Bool) arr_9 [i_3] [i_3])) ? (-2469908698013042494LL) : (((/* implicit */long long int) arr_18 [i_3 - 1] [i_5] [i_3] [i_0 + 3])))) : (((/* implicit */long long int) ((/* implicit */int) (!(var_7)))))));
            }
            /* vectorizable */
            for (unsigned short i_6 = 0; i_6 < 13; i_6 += 1) 
            {
                var_21 = ((/* implicit */unsigned int) (signed char)(-127 - 1));
                /* LoopSeq 2 */
                for (short i_7 = 1; i_7 < 11; i_7 += 3) 
                {
                    var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_0] [i_3] [6] [i_7])) ? (((((/* implicit */int) arr_10 [i_6] [i_6] [i_6])) ^ (((/* implicit */int) arr_20 [i_0] [i_3] [i_0])))) : (((/* implicit */int) arr_5 [i_0 + 1]))));
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0 - 1] [i_0])) ? (((/* implicit */int) (short)19027)) : (((/* implicit */int) arr_5 [i_0 + 3]))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) & (arr_17 [i_3] [i_3] [i_6])))));
                    arr_30 [i_7] [i_6] [i_6] [2U] = ((/* implicit */int) ((arr_29 [i_3] [i_3]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 3])))));
                }
                for (int i_8 = 4; i_8 < 11; i_8 += 4) 
                {
                    var_24 = ((/* implicit */short) var_0);
                    arr_34 [i_6] = ((/* implicit */unsigned int) var_13);
                    arr_35 [1] [1] [i_6] [i_6] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_0] [i_0 + 1])) ? (arr_29 [i_8 + 1] [i_3 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
                    var_25 = arr_28 [i_8 - 2] [i_8 - 2] [i_6] [i_8 - 2];
                }
            }
            var_26 = ((/* implicit */int) max((var_26), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_0 + 3] [i_0 + 1] [i_0 + 1]))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) var_8))))) <= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) < (arr_23 [4U]))))))) : (((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_3 + 1])) && (((/* implicit */_Bool) (unsigned char)0))))) - (((/* implicit */int) arr_11 [i_0] [i_3 - 1] [i_0 - 1]))))))));
        }
        /* LoopSeq 3 */
        for (unsigned short i_9 = 0; i_9 < 13; i_9 += 1) 
        {
            var_27 = ((/* implicit */int) arr_26 [i_0]);
            /* LoopSeq 2 */
            for (int i_10 = 0; i_10 < 13; i_10 += 1) 
            {
                var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (signed char)-96)), ((unsigned char)254))))));
                var_29 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_26 [i_0 + 1])) ? (((/* implicit */int) arr_26 [i_0 - 1])) : (((/* implicit */int) arr_26 [i_0 + 3])))), (((/* implicit */int) max((arr_26 [i_0 + 3]), (((/* implicit */unsigned short) (short)-17492)))))));
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 13; i_11 += 3) 
                {
                    for (unsigned char i_12 = 0; i_12 < 13; i_12 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned char) max(((+(((((/* implicit */int) (unsigned char)51)) & (((/* implicit */int) var_14)))))), (-1)));
                            arr_46 [i_12] [(short)11] [(short)11] [(short)11] [(short)11] [(short)11] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) arr_11 [i_9] [i_10] [i_11])) : (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)255)), (arr_33 [i_9] [i_10] [2U] [i_10])))) >= ((+(-2104285781))))))));
                            arr_47 [i_12] = ((/* implicit */short) max((-1440256611407175735LL), (((/* implicit */long long int) (unsigned char)186))));
                            arr_48 [i_0] [i_0] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (892903845U)))));
                        }
                    } 
                } 
            }
            for (signed char i_13 = 0; i_13 < 13; i_13 += 4) 
            {
                arr_52 [i_0] = ((/* implicit */signed char) min((((/* implicit */short) ((var_13) == ((~(var_6)))))), (min((((/* implicit */short) (unsigned char)0)), (arr_27 [i_0 + 3] [i_9] [i_13] [i_13])))));
                arr_53 [i_0] &= ((/* implicit */unsigned int) arr_14 [i_0 + 3]);
                var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_40 [i_13] [i_9] [i_9] [i_0])), (arr_18 [i_0 + 2] [i_13] [2] [i_0])))) || (((/* implicit */_Bool) var_10))));
            }
        }
        for (unsigned int i_14 = 0; i_14 < 13; i_14 += 4) 
        {
            arr_58 [i_0] [i_14] = max((min((arr_49 [i_0 - 1] [i_0 + 1] [i_0 + 2] [i_0 - 1]), ((unsigned short)21399))), (((/* implicit */unsigned short) ((arr_19 [i_0 + 1] [i_0 + 3] [i_14]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_14] [i_0])))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_15 = 0; i_15 < 13; i_15 += 4) 
            {
                arr_61 [(unsigned short)1] [(signed char)9] = ((/* implicit */int) (~(arr_9 [i_0 + 2] [(short)2])));
                var_32 = ((/* implicit */int) arr_1 [i_0]);
                var_33 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_43 [i_0] [(unsigned short)3] [i_14] [i_15])) || (((/* implicit */_Bool) (unsigned char)0)))) && (((/* implicit */_Bool) var_0))));
                arr_62 [i_0] [i_0] [i_15] [i_14] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_2))));
            }
        }
        for (short i_16 = 4; i_16 < 12; i_16 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_17 = 0; i_17 < 13; i_17 += 1) 
            {
                for (unsigned long long int i_18 = 0; i_18 < 13; i_18 += 1) 
                {
                    {
                        arr_72 [i_0] [i_17] [i_17] [i_18] [i_16 - 3] [i_17] = ((/* implicit */_Bool) arr_22 [i_0] [i_16]);
                        var_34 = ((/* implicit */_Bool) var_6);
                        var_35 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)2366))) : ((-(arr_56 [i_17] [i_17])))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned int i_19 = 0; i_19 < 13; i_19 += 4) 
            {
                arr_76 [i_0] [i_0] [i_19] &= ((/* implicit */short) min((((/* implicit */long long int) ((var_4) & (((/* implicit */int) (short)-280))))), (((max((arr_42 [i_16]), (((/* implicit */long long int) (signed char)127)))) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_69 [i_0]))) : (arr_64 [(short)9] [i_16 + 1] [i_19]))))))));
                var_36 *= ((/* implicit */signed char) (+((~(arr_74 [12U] [i_16] [12U])))));
            }
        }
    }
    for (unsigned short i_20 = 0; i_20 < 10; i_20 += 1) 
    {
        arr_80 [i_20] [i_20] = ((/* implicit */unsigned char) arr_69 [i_20]);
        arr_81 [i_20] = ((/* implicit */unsigned int) var_10);
    }
    var_37 &= ((/* implicit */unsigned int) var_3);
}
