/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166409
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned short) ((signed char) arr_3 [i_0]));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 11; i_1 += 1) /* same iter space */
        {
            var_13 = ((/* implicit */unsigned char) ((int) arr_5 [i_0]));
            var_14 = ((/* implicit */long long int) ((_Bool) arr_2 [i_0]));
            arr_7 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) arr_5 [i_0]));
        }
        for (short i_2 = 0; i_2 < 11; i_2 += 1) /* same iter space */
        {
            var_15 &= ((/* implicit */unsigned int) var_6);
            /* LoopNest 3 */
            for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                for (unsigned short i_4 = 4; i_4 < 8; i_4 += 1) 
                {
                    for (int i_5 = 3; i_5 < 10; i_5 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) var_7))) + (var_9))) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_9 [10]))))));
                            var_17 = ((/* implicit */short) var_11);
                        }
                    } 
                } 
            } 
        }
        arr_19 [i_0] = ((/* implicit */long long int) var_11);
        var_18 = ((/* implicit */int) arr_17 [i_0] [(short)1] [i_0] [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_19 += ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) arr_10 [(unsigned char)8] [(unsigned char)8])) && (((/* implicit */_Bool) arr_4 [6U])))));
        arr_24 [i_6] [i_6] = ((/* implicit */_Bool) ((unsigned long long int) var_9));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        arr_27 [i_7] = ((/* implicit */unsigned int) (((_Bool)0) || (((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_4 [(_Bool)1])))) && (((/* implicit */_Bool) ((unsigned int) var_11)))))));
        arr_28 [i_7] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
    }
    /* LoopSeq 2 */
    for (signed char i_8 = 0; i_8 < 14; i_8 += 1) 
    {
        arr_31 [i_8] = var_6;
        /* LoopSeq 1 */
        for (unsigned int i_9 = 0; i_9 < 14; i_9 += 4) 
        {
            arr_35 [i_8] [i_8] = ((/* implicit */unsigned int) ((unsigned long long int) max((arr_32 [i_8]), (arr_32 [i_8]))));
            /* LoopSeq 3 */
            for (unsigned char i_10 = 0; i_10 < 14; i_10 += 4) /* same iter space */
            {
                var_20 = ((/* implicit */unsigned long long int) var_6);
                arr_39 [i_8] = ((/* implicit */unsigned int) (_Bool)1);
            }
            for (unsigned char i_11 = 0; i_11 < 14; i_11 += 4) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned long long int) (((-(min((((/* implicit */unsigned int) -1672496708)), (var_11))))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_8] [i_8] [i_11])))));
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_30 [i_9]) & (arr_30 [i_8])))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)58))) & ((~(arr_41 [i_11] [i_8] [i_8] [i_8])))))) : (var_9)));
                /* LoopSeq 2 */
                for (unsigned char i_12 = 0; i_12 < 14; i_12 += 2) 
                {
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1672496692)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) ((min((((/* implicit */unsigned int) var_5)), (var_10))) == (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) - (var_3))))))))));
                    arr_44 [4] [i_11] [i_9] [i_11] |= ((/* implicit */long long int) var_7);
                }
                for (signed char i_13 = 0; i_13 < 14; i_13 += 2) 
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        arr_52 [i_8] [12ULL] [5LL] [i_14] [i_8] = ((/* implicit */long long int) ((short) arr_50 [3] [i_8] [i_11] [i_13]));
                        var_24 = ((/* implicit */unsigned char) ((short) arr_38 [i_14] [i_8] [i_8]));
                    }
                    for (unsigned short i_15 = 4; i_15 < 13; i_15 += 3) 
                    {
                        arr_55 [i_8] [i_8] [i_11] [i_8] [i_8] = ((/* implicit */unsigned char) ((unsigned long long int) -1672496708));
                        var_25 = ((/* implicit */long long int) ((unsigned int) ((unsigned char) (unsigned char)31)));
                        arr_56 [3LL] [i_8] [3LL] [i_11] [i_13] [(unsigned char)5] [i_8] = ((/* implicit */unsigned long long int) ((3837711749U) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_48 [i_15 - 2] [i_8] [i_15 - 1] [i_8] [i_15 - 3])) == (var_3)))))));
                        arr_57 [i_15] [i_11] [2ULL] [i_11] [2ULL] &= ((/* implicit */unsigned char) ((((min((var_1), (((/* implicit */long long int) (unsigned char)33)))) + (((/* implicit */long long int) ((/* implicit */int) var_5))))) - (((/* implicit */long long int) 0U))));
                        arr_58 [i_8] [i_13] [i_13] [(unsigned char)2] [i_9] [i_9] [i_8] = ((/* implicit */unsigned char) var_1);
                    }
                    for (unsigned long long int i_16 = 3; i_16 < 10; i_16 += 2) /* same iter space */
                    {
                        var_26 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : ((~(var_8)))))));
                        var_27 = (unsigned char)78;
                        arr_62 [i_8] [(unsigned short)8] [i_8] [4LL] [4LL] [4U] = ((/* implicit */unsigned int) (((+(var_6))) - (var_1)));
                        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) 609475272U))));
                        var_29 = ((/* implicit */long long int) (_Bool)1);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_17 = 3; i_17 < 10; i_17 += 2) /* same iter space */
                    {
                        arr_66 [i_9] [i_9] [i_11] [i_9] [6ULL] [i_9] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_49 [10] [i_17] [i_17 + 3] [i_17] [i_11] [(unsigned char)10]))));
                        var_30 = ((/* implicit */int) var_7);
                        arr_67 [5LL] [i_8] [i_11] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_54 [3LL] [i_13] [(unsigned short)7] [i_11] [(_Bool)1] [1ULL] [i_8])) ? (var_10) : (((/* implicit */unsigned int) arr_42 [i_8] [i_9] [i_8])))) != (arr_32 [i_17 + 4])));
                        arr_68 [i_8] [10LL] [10LL] [i_8] [i_17] = ((/* implicit */unsigned long long int) var_0);
                    }
                    var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_65 [i_8] [i_9] [2U] [i_9] [i_9] [0ULL])) + (((/* implicit */int) (((~(((/* implicit */int) (unsigned char)14)))) != (arr_46 [i_8] [i_8] [i_8] [i_8] [i_13] [i_8]))))));
                    var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) ((signed char) ((((/* implicit */int) var_4)) - (((/* implicit */int) arr_53 [i_8] [i_9] [i_8] [i_9] [(short)8]))))))));
                }
                var_33 = ((/* implicit */unsigned short) max(((~(arr_37 [i_8] [i_9] [11LL]))), (((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_2)))) + (((/* implicit */int) ((687489321U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)26)))))))))));
                var_34 = ((/* implicit */unsigned long long int) (!(((-1672496708) == (((/* implicit */int) (unsigned char)219))))));
            }
            for (unsigned char i_18 = 0; i_18 < 14; i_18 += 2) 
            {
                var_35 = ((/* implicit */unsigned char) (-(3289374885331051698LL)));
                /* LoopNest 2 */
                for (unsigned char i_19 = 0; i_19 < 14; i_19 += 2) 
                {
                    for (unsigned short i_20 = 0; i_20 < 14; i_20 += 2) 
                    {
                        {
                            var_36 = ((/* implicit */long long int) arr_32 [i_18]);
                            var_37 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_74 [i_8] [i_8] [i_8]))))));
                            var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_10)))))) == (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) == (var_1)))))))));
                            var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) var_10))));
                            var_40 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((short) arr_60 [i_8] [i_9] [i_8]))), (max((var_11), (((/* implicit */unsigned int) var_5))))));
                        }
                    } 
                } 
            }
        }
        var_41 ^= ((/* implicit */unsigned short) (+(((long long int) ((var_6) == (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_8] [(short)8] [(short)8]))))))));
        var_42 = ((/* implicit */unsigned long long int) (-(max((((/* implicit */unsigned int) arr_45 [i_8])), (134217727U)))));
    }
    for (signed char i_21 = 0; i_21 < 13; i_21 += 3) 
    {
        arr_80 [i_21] = ((/* implicit */int) (_Bool)0);
        arr_81 [i_21] [(unsigned char)12] &= ((/* implicit */int) (unsigned char)230);
    }
    var_43 = 1316847752U;
    var_44 = ((/* implicit */unsigned short) var_5);
}
