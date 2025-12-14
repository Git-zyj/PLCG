/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133949
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
    var_11 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-88)) ? (((/* implicit */int) (signed char)87)) : (((/* implicit */int) (unsigned short)32464))))) * (((var_1) * (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)87)))))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) (((((~(var_9))) / (((var_9) ^ (((/* implicit */int) (signed char)98)))))) <= (((/* implicit */int) ((signed char) min((var_0), (((/* implicit */long long int) (_Bool)0))))))));
        var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((signed char) (-(((/* implicit */int) (short)408))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) arr_8 [i_0 - 1])), (10879346725606468453ULL))) > (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_7 [i_0] [i_0])))))))));
                    var_13 = ((/* implicit */signed char) (((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-26))));
                    var_14 = ((/* implicit */signed char) (((+(((/* implicit */int) arr_1 [i_0])))) >= ((-(((/* implicit */int) arr_1 [i_0]))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        var_15 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) (signed char)-105)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((unsigned char) ((12968686642631304096ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
                        arr_12 [i_0] [i_0] [i_2 - 2] [i_2 - 1] [i_0] [i_3] = ((/* implicit */long long int) (unsigned short)55548);
                        arr_13 [i_0] [i_1] [i_0] [i_2 + 1] [i_0] = ((/* implicit */unsigned short) (+(1658567175U)));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_0 - 1] [i_1] [(unsigned short)0] [i_0] = ((/* implicit */unsigned long long int) (_Bool)0);
                        arr_17 [(unsigned short)5] [i_0] [(_Bool)1] [i_4] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) var_3)) - (((/* implicit */int) var_3)))));
                        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0]))));
                    }
                }
            } 
        } 
        arr_18 [i_0] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) ((unsigned char) (_Bool)1))), ((~(arr_2 [i_0]))))) & (((/* implicit */unsigned long long int) (~((~(var_9))))))));
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_6 = 1; i_6 < 13; i_6 += 2) 
            {
                for (unsigned short i_7 = 3; i_7 < 12; i_7 += 4) 
                {
                    {
                        var_17 = ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_10)));
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [(unsigned char)2] [i_5] [2] [i_0] [i_5])) ? (((((((/* implicit */int) (unsigned char)65)) >> (((/* implicit */int) (signed char)25)))) >> (((/* implicit */int) ((((/* implicit */int) (unsigned short)47726)) == (((/* implicit */int) var_6))))))) : ((+(((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (unsigned short)14659))))))));
                            var_19 = ((/* implicit */int) arr_8 [i_0]);
                        }
                        var_20 = ((/* implicit */unsigned int) ((_Bool) ((unsigned long long int) max(((_Bool)1), (var_8)))));
                    }
                } 
            } 
            arr_30 [i_0] [i_0] [(signed char)12] = ((/* implicit */unsigned long long int) (!(((((((/* implicit */int) (signed char)-126)) ^ (1414918172))) < (((((/* implicit */_Bool) (signed char)-88)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_8 [i_0 - 1]))))))));
        }
    }
    for (unsigned short i_9 = 3; i_9 < 16; i_9 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_10 = 1; i_10 < 17; i_10 += 2) 
        {
            arr_36 [i_9] [i_10] = arr_35 [i_10 + 1] [i_9 - 3];
            /* LoopSeq 1 */
            for (signed char i_11 = 0; i_11 < 18; i_11 += 4) 
            {
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (signed char)49))) ? (arr_32 [i_10 - 1] [i_10]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_34 [14ULL] [8LL] [i_9])) ? (((/* implicit */int) (signed char)-26)) : (((/* implicit */int) (short)3000))))))))));
                var_22 = ((/* implicit */unsigned char) ((((904118276U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-88))))) << (((((((/* implicit */_Bool) arr_34 [i_9 - 2] [i_10] [i_9 - 2])) ? (arr_38 [i_9] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)126))))) - (362496167U)))));
            }
        }
        var_23 = ((/* implicit */_Bool) arr_31 [i_9] [i_9]);
        arr_39 [i_9] = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (short)10723))))));
        /* LoopSeq 4 */
        for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 3) 
        {
            arr_43 [i_12] [(unsigned short)12] = ((/* implicit */_Bool) ((unsigned short) arr_34 [i_9 + 1] [i_9 + 1] [i_12]));
            var_24 += ((/* implicit */unsigned short) ((long long int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))));
            arr_44 [i_9] = (signed char)-71;
            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) arr_35 [i_9] [(signed char)16]))));
            arr_45 [i_9] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_42 [i_9 + 2] [i_12]))));
        }
        for (unsigned int i_13 = 3; i_13 < 16; i_13 += 4) 
        {
            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) 2147483647)) ? (-2147483647) : (((/* implicit */int) (signed char)16))));
            /* LoopSeq 1 */
            for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
            {
                arr_52 [i_9] [i_13] [i_13] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_42 [i_14 + 1] [i_13 + 1]), (arr_42 [i_9] [i_13 + 2])))) ? (((/* implicit */int) var_6)) : (-2147483647)));
                arr_53 [i_14 + 1] [i_9] [i_9] = ((/* implicit */signed char) var_0);
                arr_54 [i_9] [i_13 + 2] [i_9] = ((/* implicit */signed char) arr_47 [i_9 - 2] [i_13 - 3] [i_13 - 1]);
            }
        }
        for (unsigned long long int i_15 = 1; i_15 < 17; i_15 += 4) 
        {
            var_27 = ((/* implicit */signed char) (-(arr_47 [i_9] [i_9 + 2] [i_15 - 1])));
            arr_57 [i_15] = (-(800094550));
        }
        for (unsigned char i_16 = 1; i_16 < 16; i_16 += 3) 
        {
            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((max((arr_38 [i_16] [i_9]), (((/* implicit */unsigned int) var_4)))) + (((/* implicit */unsigned int) (-(((/* implicit */int) var_8)))))))) ? (((((/* implicit */_Bool) -1922501297)) ? (arr_50 [i_9 - 1] [i_9 - 1] [i_16 + 1] [i_9 - 1]) : (arr_50 [i_9 + 1] [i_9 - 2] [i_16 - 1] [i_16]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
            arr_61 [i_9] [i_16 + 2] [i_9 + 1] = ((/* implicit */unsigned short) ((short) arr_37 [i_9] [i_16] [i_9 + 1]));
        }
    }
    for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
    {
        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((arr_63 [i_17 + 1] [i_17 + 1]), (arr_63 [i_17 + 1] [i_17 + 1])))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (6729928849583053936ULL))))))));
        arr_64 [i_17] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_62 [i_17])) - (((/* implicit */int) var_5))))) ? (((/* implicit */int) arr_63 [i_17] [i_17])) : (var_7))) | (((((/* implicit */_Bool) ((((/* implicit */int) arr_63 [i_17] [i_17])) | (((/* implicit */int) (unsigned short)57747))))) ? (((((/* implicit */_Bool) 1308050350)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_63 [i_17] [i_17])))) : (((/* implicit */int) ((unsigned short) arr_62 [i_17])))))));
    }
    for (unsigned long long int i_18 = 2; i_18 < 7; i_18 += 3) 
    {
        var_30 = ((/* implicit */signed char) min(((!(((/* implicit */_Bool) var_2)))), ((!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-31)))))))));
        arr_69 [9] [i_18] = ((/* implicit */signed char) (-((+(((/* implicit */int) arr_20 [i_18 + 2]))))));
        var_31 = ((/* implicit */int) min((var_31), (min((((((/* implicit */_Bool) arr_15 [i_18 - 1] [8] [i_18] [(short)8] [14ULL])) ? (((/* implicit */int) (signed char)33)) : (((/* implicit */int) arr_58 [i_18 - 1] [i_18])))), ((~(((int) (signed char)127))))))));
    }
    var_32 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (((((/* implicit */long long int) ((/* implicit */int) var_4))) | (var_0)))))), (min((((/* implicit */int) var_4)), (min((((/* implicit */int) var_6)), (1922501321)))))));
    var_33 = ((/* implicit */_Bool) var_9);
    var_34 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_8))));
}
