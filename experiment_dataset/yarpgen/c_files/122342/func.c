/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122342
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
    var_16 = ((/* implicit */short) var_6);
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) var_6))));
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_12))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
            {
                arr_8 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) ((arr_7 [(_Bool)1] [i_2 + 1] [i_2 + 1] [i_2 + 1]) != (arr_7 [i_1] [i_2 + 1] [i_2] [i_2 + 1])))), (((((/* implicit */_Bool) var_4)) ? (arr_7 [i_0] [i_2 + 1] [i_2 + 1] [4LL]) : (arr_7 [(short)1] [i_2 + 1] [i_2 + 1] [i_2])))));
                arr_9 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)34353)) && (((/* implicit */_Bool) (unsigned short)34353))))), (8388576U)))) == (arr_1 [i_0])));
            }
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) /* same iter space */
            {
                var_19 ^= max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_15))))), (min((((long long int) (unsigned short)34338)), (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_2 [i_0]))))))));
                arr_13 [3] [i_0] [i_3] = ((/* implicit */unsigned short) arr_0 [i_0]);
                var_20 = ((signed char) arr_10 [i_1] [i_1] [i_1] [i_0]);
                var_21 ^= arr_11 [i_0] [i_0];
            }
            var_22 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_11 [i_0] [i_0])) ? (((/* implicit */int) arr_11 [i_0] [i_1])) : (((/* implicit */int) (unsigned short)31194)))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) /* same iter space */
        {
            arr_16 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (var_8)))) ? (var_8) : (((/* implicit */unsigned int) ((max((arr_0 [i_0]), (((/* implicit */int) var_15)))) >> (((((int) arr_10 [i_4] [i_4] [i_4] [i_4])) + (25581))))))));
            var_23 -= ((/* implicit */unsigned int) (+(((((/* implicit */long long int) arr_0 [(short)6])) - (arr_12 [i_4] [i_4] [i_4] [i_4])))));
            var_24 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4] [i_4] [i_4] [i_0])) ? (((/* implicit */int) (unsigned short)34360)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) arr_2 [i_4]))));
            arr_17 [i_0] [i_4] [i_4] = ((/* implicit */signed char) ((int) ((unsigned int) arr_2 [i_0])));
        }
        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 1) /* same iter space */
        {
            arr_21 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_4)) ? (arr_12 [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_5]))))) == (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_5] [i_5]))))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_5])) ? (arr_0 [i_0]) : ((-(((/* implicit */int) (unsigned char)87))))))));
            var_25 = ((/* implicit */unsigned char) ((unsigned long long int) arr_15 [(signed char)6] [(signed char)6]));
        }
        for (int i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            arr_25 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) * (arr_1 [i_0])))) ? (((((/* implicit */int) var_5)) * (((/* implicit */int) arr_2 [(unsigned short)2])))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)34332))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((unsigned char) (unsigned short)34318))))) : (arr_1 [i_0])));
            var_26 -= ((/* implicit */signed char) arr_23 [i_0]);
        }
        /* LoopSeq 2 */
        for (long long int i_7 = 0; i_7 < 11; i_7 += 3) 
        {
            var_27 = ((/* implicit */short) ((((((/* implicit */int) (unsigned short)38830)) != (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_7])))) ? (((/* implicit */long long int) arr_22 [i_0] [i_0])) : (((arr_12 [i_0] [i_0] [i_7] [i_7]) - (((/* implicit */long long int) arr_24 [i_0] [i_0]))))));
            var_28 *= ((/* implicit */unsigned int) ((long long int) (-((~(arr_0 [10]))))));
            arr_29 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) var_10)) < (((/* implicit */int) ((((/* implicit */int) arr_15 [i_0] [i_7])) <= (arr_23 [i_7])))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_12 [i_0] [(unsigned short)2] [i_7] [i_7]))))), (arr_11 [i_7] [i_7]))))));
        }
        for (unsigned short i_8 = 0; i_8 < 11; i_8 += 2) 
        {
            var_29 *= ((/* implicit */unsigned char) arr_20 [i_0] [i_0] [i_0]);
            /* LoopNest 3 */
            for (short i_9 = 0; i_9 < 11; i_9 += 3) 
            {
                for (int i_10 = 0; i_10 < 11; i_10 += 2) 
                {
                    for (unsigned short i_11 = 0; i_11 < 11; i_11 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_38 [i_11] [1U] [i_10] [i_9] [i_9] [i_8] [i_0]))) > (min((8126464LL), (((/* implicit */long long int) (signed char)-42))))));
                            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) (-(max(((+(((/* implicit */int) var_13)))), (arr_23 [i_0]))))))));
                            var_32 = ((/* implicit */unsigned long long int) arr_41 [i_0] [i_8] [i_9]);
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 1 */
        for (short i_12 = 3; i_12 < 7; i_12 += 1) 
        {
            arr_44 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((((/* implicit */_Bool) arr_36 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_38 [i_0] [(unsigned char)10] [(_Bool)1] [i_12] [(unsigned char)0] [(unsigned char)0] [i_12])) : (((/* implicit */int) var_9)))) > ((+(((/* implicit */int) var_12)))))))));
            var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) arr_3 [8LL]))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_13 = 0; i_13 < 11; i_13 += 2) /* same iter space */
            {
                arr_47 [i_0] [i_12] [i_12] [i_12 + 2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)34342)))))));
                /* LoopNest 2 */
                for (long long int i_14 = 0; i_14 < 11; i_14 += 3) 
                {
                    for (unsigned char i_15 = 0; i_15 < 11; i_15 += 1) 
                    {
                        {
                            var_34 = ((/* implicit */short) ((var_11) ? (((/* implicit */int) arr_11 [i_12 - 3] [i_12 - 3])) : (((/* implicit */int) arr_11 [i_12 + 3] [i_12 + 4]))));
                            var_35 *= ((_Bool) (!(((/* implicit */_Bool) var_15))));
                            var_36 = ((/* implicit */_Bool) ((unsigned char) -5008166797320519722LL));
                            arr_54 [i_15] [7LL] [i_0] [(signed char)7] [i_0] = ((/* implicit */long long int) ((unsigned long long int) arr_41 [i_12 - 3] [(_Bool)1] [i_12 - 2]));
                        }
                    } 
                } 
                arr_55 [1ULL] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)31169))));
            }
            for (long long int i_16 = 0; i_16 < 11; i_16 += 2) /* same iter space */
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_17 = 2; i_17 < 10; i_17 += 2) 
                {
                    var_37 = ((/* implicit */short) ((((/* implicit */int) var_10)) & (((/* implicit */int) arr_10 [i_0] [i_12 + 3] [i_16] [i_16]))));
                    var_38 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_17 - 2] [i_12 - 1] [0LL]))));
                    var_39 = ((/* implicit */unsigned long long int) (unsigned short)34339);
                    arr_60 [i_0] [i_12] = ((/* implicit */_Bool) ((((/* implicit */int) arr_38 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17 - 1] [i_17 - 1])) | (((/* implicit */int) arr_6 [i_17 - 2] [i_17 + 1] [i_17 - 1] [i_0]))));
                }
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)31163)) ? (((/* implicit */long long int) 133169152U)) : (max((arr_12 [i_0] [i_12] [i_16] [i_18]), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_4))))))));
                    var_41 |= ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned short)31221)) == (((/* implicit */int) var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_11 [i_12 - 2] [i_12 - 2])) != (((/* implicit */int) arr_36 [i_12 + 2] [i_12 + 3] [i_12])))))) : (((unsigned long long int) arr_36 [i_12 + 2] [i_12 - 2] [i_12]))));
                    var_42 = arr_46 [i_0] [i_0] [i_18];
                    var_43 = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_12 - 1] [i_12 - 3] [i_12 + 4]))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_15)))))))));
                }
                arr_64 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)127))))) ? (arr_57 [i_0]) : (arr_14 [i_0] [i_0])))) ? (min(((((_Bool)1) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)11)))), (((((/* implicit */int) arr_2 [i_16])) ^ (((/* implicit */int) var_12)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_52 [i_16] [i_12] [i_12] [6] [i_0])), (var_0)))))))));
            }
        }
        arr_65 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) arr_27 [i_0] [i_0]))));
        var_44 = ((/* implicit */int) var_7);
    }
    /* vectorizable */
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_20 = 1; i_20 < 8; i_20 += 3) 
        {
            for (unsigned char i_21 = 1; i_21 < 10; i_21 += 1) 
            {
                {
                    arr_75 [i_19] [3] [i_21] [i_21] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_70 [i_19] [i_19] [i_19]))));
                    arr_76 [(_Bool)1] [i_20] [(unsigned short)8] [i_21] |= ((/* implicit */unsigned long long int) (+(arr_40 [i_20 + 1] [2] [i_21 + 1] [2] [i_20 + 1])));
                    arr_77 [i_19] [i_20] [i_19] = ((/* implicit */int) arr_14 [i_20 + 1] [i_21 - 1]);
                }
            } 
        } 
        arr_78 [i_19] [i_19] = ((/* implicit */unsigned long long int) ((unsigned int) arr_5 [i_19] [i_19] [i_19]));
    }
}
