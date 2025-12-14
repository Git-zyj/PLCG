/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124852
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
    for (short i_0 = 0; i_0 < 14; i_0 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min(((+(arr_1 [i_0]))), (arr_1 [i_0])))) == (((unsigned long long int) (+(var_4)))))))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                for (short i_3 = 1; i_3 < 13; i_3 += 4) 
                {
                    for (signed char i_4 = 1; i_4 < 13; i_4 += 2) 
                    {
                        {
                            arr_13 [i_0] [i_0] [4LL] [11ULL] [i_3] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) min((arr_6 [i_2] [i_0]), (((/* implicit */signed char) (_Bool)1)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3183497631051706306LL)) ? (arr_5 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1 + 1] [i_1 + 1])))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) arr_10 [i_0] [i_1] [i_0] [i_3] [8LL])) : (arr_0 [i_0]))) : ((-(var_10)))))));
                            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((arr_9 [i_2] [i_1] [i_1 - 1] [0]) >= (((/* implicit */long long int) (-(arr_11 [i_0] [i_1] [i_1 + 1] [(short)12] [i_1])))))))));
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) min((((/* implicit */long long int) (-(arr_1 [i_1 - 1])))), (((((/* implicit */_Bool) arr_11 [9] [7U] [i_1 + 1] [i_0] [i_1 + 1])) ? (((/* implicit */long long int) arr_11 [i_0] [i_0] [i_1 + 1] [i_1 + 1] [i_1])) : (arr_9 [12] [12] [i_1] [i_1 + 1]))))))));
        }
        for (unsigned int i_5 = 1; i_5 < 13; i_5 += 3) /* same iter space */
        {
            arr_18 [i_0] [i_0] [(unsigned short)10] = ((/* implicit */long long int) (((+((~(arr_1 [i_0]))))) < ((-(arr_11 [i_0] [(unsigned short)5] [i_5 + 1] [i_5 + 1] [i_5])))));
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 14; i_6 += 2) 
            {
                for (long long int i_7 = 2; i_7 < 12; i_7 += 4) 
                {
                    {
                        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (((+(((/* implicit */int) var_0)))) % (((((/* implicit */int) max((arr_14 [i_0]), (((/* implicit */unsigned short) (_Bool)0))))) + (((/* implicit */int) ((signed char) var_8))))))))));
                        var_20 = ((/* implicit */signed char) min((min((arr_23 [i_7 + 2] [i_7 + 2] [i_7 + 1] [i_7 - 2] [i_7 - 1]), (arr_23 [i_7 - 1] [i_7 - 1] [i_7 + 2] [i_7] [i_7 - 2]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3183497631051706306LL)) ? (3183497631051706284LL) : (-3183497631051706303LL))))));
                    }
                } 
            } 
            arr_24 [i_0] [i_5] [(signed char)4] = ((/* implicit */unsigned int) arr_23 [i_0] [0ULL] [0ULL] [i_5] [i_5]);
            arr_25 [i_0] = ((/* implicit */signed char) var_10);
        }
        for (unsigned int i_8 = 1; i_8 < 13; i_8 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_9 = 3; i_9 < 12; i_9 += 3) 
            {
                for (short i_10 = 0; i_10 < 14; i_10 += 2) 
                {
                    {
                        var_21 = (i_0 % 2 == zero) ? (((/* implicit */short) ((((((((/* implicit */_Bool) min((arr_21 [i_0] [i_0]), (((/* implicit */long long int) arr_16 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (arr_21 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)219))))) : (((/* implicit */long long int) min((((/* implicit */int) arr_4 [i_0] [i_9] [i_9])), (arr_27 [i_0] [i_8] [i_0])))))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) (unsigned short)51523)) ? (3183497631051706316LL) : (3183497631051706281LL))) - (3183497631051706297LL)))))) : (((/* implicit */short) ((((((((((/* implicit */_Bool) min((arr_21 [i_0] [i_0]), (((/* implicit */long long int) arr_16 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (arr_21 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)219))))) : (((/* implicit */long long int) min((((/* implicit */int) arr_4 [i_0] [i_9] [i_9])), (arr_27 [i_0] [i_8] [i_0])))))) - (9223372036854775807LL))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) (unsigned short)51523)) ? (3183497631051706316LL) : (3183497631051706281LL))) - (3183497631051706297LL))))));
                        arr_32 [i_0] [i_0] [i_9 - 2] [i_10] [i_9 - 2] = ((/* implicit */unsigned long long int) (_Bool)1);
                        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (3183497631051706306LL)))), ((-(var_11)))))) ? (((((((/* implicit */long long int) ((/* implicit */int) (signed char)-19))) != (3183497631051706306LL))) ? (8026060528765450765LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)135)))));
                        var_23 = ((/* implicit */_Bool) ((max((arr_16 [i_0] [(signed char)0]), (arr_16 [i_0] [i_8]))) * ((~(arr_20 [i_0] [i_0] [i_9 + 1] [i_10])))));
                    }
                } 
            } 
            arr_33 [i_0] [i_0] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_22 [i_0] [i_8 - 1] [i_8 - 1] [i_8] [i_0])))) && (max(((!(((/* implicit */_Bool) arr_3 [i_0] [(_Bool)1])))), (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) && (((/* implicit */_Bool) 3183497631051706284LL))))))));
            /* LoopNest 2 */
            for (unsigned int i_11 = 0; i_11 < 14; i_11 += 4) 
            {
                for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 1) 
                {
                    {
                        arr_38 [(signed char)12] [i_11] &= (short)6544;
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_13 = 0; i_13 < 14; i_13 += 4) 
                        {
                            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775797LL)) ? (-7475553553264609922LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-32142)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))) : (var_9))))));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-21144)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 913816064U))))) : ((((_Bool)1) ? (((/* implicit */int) arr_36 [10U] [i_8 - 1] [i_12] [i_8 - 1] [i_11])) : (((/* implicit */int) (signed char)20))))));
                        }
                        for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 3) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) max((arr_9 [i_0] [i_0] [i_11] [6U]), (-3183497631051706317LL)))) ? (max((((/* implicit */long long int) arr_30 [i_8 - 1] [i_0])), (var_1))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_40 [i_0] [i_0] [i_0] [(unsigned short)13] [i_0] [i_0])), ((unsigned char)65)))))))));
                            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-76))) : (arr_26 [i_0] [i_8] [i_14])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)1041)) << (((((/* implicit */int) arr_34 [i_8] [i_12] [i_8])) - (220)))))) : (((((/* implicit */_Bool) (short)1019)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_0 [3LL])))))), ((~(max((-3183497631051706285LL), (((/* implicit */long long int) arr_35 [i_0] [i_0] [i_11] [i_0])))))))))));
                            arr_43 [i_0] [5LL] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) | (arr_1 [i_0])))) ? ((+(((/* implicit */int) (short)21142)))) : (((/* implicit */int) min((arr_36 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_36 [(unsigned short)11] [6U] [i_11] [i_12] [i_14])))))) >> (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [(short)4]))) == (((((/* implicit */_Bool) -3183497631051706298LL)) ? (arr_19 [i_0] [9U] [i_11] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_8] [12ULL] [i_12] [i_8]))))))))));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_15 = 0; i_15 < 14; i_15 += 3) /* same iter space */
                        {
                            arr_46 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [9U] = ((((/* implicit */_Bool) (~(arr_45 [i_0] [i_8] [i_0] [i_12] [(signed char)2] [i_15])))) ? (arr_23 [i_0] [i_8] [i_11] [i_0] [i_15]) : (((/* implicit */unsigned long long int) arr_37 [i_8 + 1] [i_8 - 1] [i_8 + 1])));
                            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) arr_1 [i_8 - 1]))));
                            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_11) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0)))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) - (arr_16 [7LL] [i_15]))))));
                            var_30 += ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) (unsigned short)7827)) & (((/* implicit */int) (signed char)-34)))));
                        }
                        for (signed char i_16 = 0; i_16 < 14; i_16 += 3) /* same iter space */
                        {
                            arr_50 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)95)) < (((/* implicit */int) var_7))))))))));
                            arr_51 [i_0] [i_8 + 1] [i_8 + 1] [(signed char)9] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)32759)) : (((/* implicit */int) arr_6 [i_8 - 1] [i_0]))))) ? (((min((((/* implicit */unsigned long long int) arr_27 [2ULL] [2ULL] [i_16])), (arr_23 [i_0] [(unsigned char)1] [i_0] [i_0] [i_0]))) + (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_28 [(signed char)8] [i_8])) & (3183497631051706316LL)))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_36 [i_8 - 1] [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_8 - 1])))))));
                        }
                    }
                } 
            } 
        }
        var_31 = ((/* implicit */unsigned int) -3183497631051706314LL);
        var_32 = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_49 [i_0] [(unsigned char)3] [i_0] [i_0] [i_0])))))))) : (((((/* implicit */_Bool) arr_48 [i_0] [i_0] [i_0] [i_0])) ? (-3183497631051706307LL) : (arr_26 [i_0] [i_0] [(unsigned short)5]))));
    }
    for (short i_17 = 0; i_17 < 14; i_17 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_18 = 0; i_18 < 14; i_18 += 3) 
        {
            var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((min((arr_37 [i_17] [i_17] [i_17]), (min((var_8), (((/* implicit */unsigned int) arr_3 [(unsigned short)8] [(unsigned char)6])))))) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3183497631051706281LL)))))))))));
            arr_57 [i_17] [(short)6] [(short)6] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) min((-3183497631051706267LL), (arr_47 [i_18] [i_18] [(short)8] [i_18] [6LL])))) != (((((/* implicit */_Bool) 3183497631051706307LL)) ? (arr_48 [(short)12] [(short)12] [(short)12] [(short)10]) : (((/* implicit */unsigned long long int) arr_47 [4ULL] [i_18] [4ULL] [i_17] [i_17])))))))));
            arr_58 [i_18] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((signed char) arr_27 [i_17] [9U] [i_17]))) && (((/* implicit */_Bool) max((((/* implicit */int) (_Bool)0)), (arr_10 [i_17] [i_17] [i_17] [i_17] [3LL])))))) ? (((min(((_Bool)1), ((_Bool)1))) ? (arr_0 [i_17]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))))) : (max((((/* implicit */unsigned int) ((unsigned short) 4294967295U))), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_17] [13] [i_17] [i_17] [i_17]))) : (arr_30 [10] [(short)0])))))));
        }
        var_34 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((var_10), (arr_1 [i_17])))) ? (((((/* implicit */_Bool) var_4)) ? (arr_20 [(unsigned short)6] [(unsigned short)6] [(unsigned char)12] [(unsigned short)6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]))))) > (((/* implicit */unsigned int) ((/* implicit */int) min((var_7), (((/* implicit */unsigned short) ((short) (short)-19318)))))))));
    }
    for (long long int i_19 = 3; i_19 < 13; i_19 += 4) 
    {
        arr_61 [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)50)) ? (((/* implicit */unsigned long long int) -3183497631051706282LL)) : (9301086728148182489ULL)));
        arr_62 [i_19] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)189)) : (((/* implicit */int) arr_44 [i_19] [i_19] [i_19] [i_19] [i_19]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_44 [i_19 - 1] [i_19] [i_19 + 1] [i_19 - 1] [i_19 - 2])) + (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_19] [i_19]))) + (3020011065U))))) >> (((((unsigned int) min((((/* implicit */long long int) arr_4 [(signed char)4] [(signed char)4] [i_19])), (1125899906826240LL)))) - (14709U)))));
        var_35 |= ((/* implicit */unsigned long long int) max((min((((((/* implicit */_Bool) arr_47 [i_19] [i_19] [4LL] [i_19 - 2] [i_19 - 1])) ? (1778087574625090572LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)184))))))), (((/* implicit */long long int) var_0))));
        var_36 = ((((/* implicit */int) arr_59 [i_19 - 1])) >= (((/* implicit */int) var_6)));
    }
    var_37 = ((/* implicit */_Bool) min((((/* implicit */long long int) var_10)), (min(((~(var_1))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)19318)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_9))))))));
    var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_0)), (var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-19313))) : (((unsigned int) var_9))))) : ((+(max((((/* implicit */long long int) (short)-27002)), (5813367798204696917LL)))))));
}
