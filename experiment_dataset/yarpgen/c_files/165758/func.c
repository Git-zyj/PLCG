/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165758
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
    var_15 = ((/* implicit */long long int) (unsigned short)29874);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((signed char) arr_2 [i_0])))));
                        /* LoopSeq 4 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_14 [i_0] [11LL] [i_3] [i_3 + 1] [i_4] = ((/* implicit */long long int) ((unsigned short) (-(((/* implicit */int) arr_8 [i_3 + 1] [i_1 + 1] [i_2] [i_2])))));
                            var_17 = ((/* implicit */short) ((((min((((/* implicit */int) arr_12 [i_3] [i_3 + 1] [0U] [0U] [i_3 + 1] [i_3] [i_3 + 1])), ((~(((/* implicit */int) arr_8 [i_0] [i_1 - 1] [i_2] [i_3])))))) + (2147483647))) << ((((+(((/* implicit */int) (unsigned short)43158)))) - (43158)))));
                        }
                        /* vectorizable */
                        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
                        {
                            var_18 = ((/* implicit */long long int) (signed char)115);
                            var_19 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */unsigned int) -1199441710)) : (arr_10 [i_3])))));
                            var_20 -= ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-83)) ? (arr_6 [i_2 - 3] [(_Bool)1] [i_3 + 1]) : (arr_6 [i_2 - 3] [i_2] [18U])));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_21 += (~((~(-707457755))));
                            arr_21 [i_3] [i_2 - 2] = ((/* implicit */signed char) (~(min((arr_15 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3] [i_3]), (arr_15 [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 1] [i_3])))));
                            arr_22 [i_3] [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned int) ((long long int) var_12)));
                            var_22 ^= (-((~((~(((/* implicit */int) (signed char)-37)))))));
                        }
                        for (short i_7 = 0; i_7 < 20; i_7 += 4) 
                        {
                            var_23 += ((/* implicit */long long int) (signed char)-90);
                            arr_26 [i_7] [i_3] [i_3] [i_3 + 1] [i_7] [i_3 + 1] [i_2] = ((/* implicit */unsigned char) ((long long int) min((arr_15 [i_1] [i_1] [i_1] [i_1] [i_3]), (((/* implicit */long long int) 13)))));
                            arr_27 [i_0] [i_0] [i_0] [1U] [i_0] [i_3] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) min(((unsigned short)61942), (((/* implicit */unsigned short) var_7)))))))));
                        }
                    }
                    var_24 += ((/* implicit */unsigned short) (+(8778913153024LL)));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 1; i_8 < 18; i_8 += 3) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 9223372036854775807LL)))) == (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [(unsigned short)10]))) : (arr_16 [i_0] [i_0] [(signed char)2] [i_0] [(signed char)6])))))))));
                                arr_33 [(unsigned short)1] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)5)) ? (14930905341504729603ULL) : (12360328448243790885ULL)));
                            }
                        } 
                    } 
                    var_26 ^= ((/* implicit */signed char) ((unsigned int) (~((~(((/* implicit */int) (short)18064)))))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) var_8)) < (((/* implicit */int) var_14)))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (min((var_13), (((/* implicit */int) var_2)))) : (((int) var_4)))) : (min((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))), ((+(((/* implicit */int) var_4))))))));
    /* LoopNest 2 */
    for (short i_10 = 0; i_10 < 14; i_10 += 1) 
    {
        for (unsigned int i_11 = 0; i_11 < 14; i_11 += 2) 
        {
            {
                arr_39 [i_10] [i_11] [i_11] = ((/* implicit */int) (signed char)50);
                /* LoopSeq 4 */
                for (int i_12 = 2; i_12 < 13; i_12 += 1) 
                {
                    var_28 = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) arr_23 [i_12 - 1] [i_12] [i_12 - 1] [i_12 + 1] [i_12 - 1])))));
                    var_29 -= ((/* implicit */unsigned char) min(((-((-(((/* implicit */int) (unsigned short)37696)))))), ((+((-(((/* implicit */int) (short)3545))))))));
                }
                for (long long int i_13 = 4; i_13 < 11; i_13 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (long long int i_14 = 0; i_14 < 14; i_14 += 1) 
                    {
                        var_30 = ((/* implicit */signed char) ((unsigned char) (+(((/* implicit */int) (signed char)-106)))));
                        var_31 = ((/* implicit */signed char) arr_48 [i_14] [i_13] [i_11] [i_14]);
                        var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) (~(((/* implicit */int) ((signed char) (unsigned short)55170))))))));
                        var_33 += ((/* implicit */signed char) (~((-(((/* implicit */int) ((short) 1965033812U)))))));
                        arr_49 [i_10] [i_13] [(signed char)12] [i_10] = (signed char)-71;
                    }
                    var_34 -= ((/* implicit */unsigned short) (unsigned char)98);
                    var_35 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_10] [i_10] [i_11] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_43 [i_10] [i_11] [i_13])))))) ? ((-(((unsigned int) arr_29 [i_10] [i_11] [i_11] [i_11])))) : (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)870)), (min((778603314), (((/* implicit */int) var_11)))))))));
                    var_36 ^= ((/* implicit */int) arr_42 [i_13] [i_11] [i_11] [i_10]);
                    arr_50 [i_10] [i_11] [i_13] = ((/* implicit */long long int) var_13);
                }
                for (long long int i_15 = 4; i_15 < 11; i_15 += 1) /* same iter space */
                {
                    arr_54 [i_10] [i_10] [i_15] [i_10] = ((/* implicit */unsigned char) 3469051756637378750LL);
                    arr_55 [i_15] [i_11] [i_15 - 2] = ((/* implicit */unsigned short) ((signed char) ((unsigned short) (~(3919181011U)))));
                    var_37 = ((/* implicit */int) (~((+(((3211725972U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [5LL] [i_11] [i_11] [i_15])))))))));
                }
                for (int i_16 = 0; i_16 < 14; i_16 += 4) 
                {
                    arr_60 [i_10] [i_10] [i_10] = ((/* implicit */signed char) arr_44 [i_16] [i_16] [i_11] [i_16]);
                    /* LoopSeq 1 */
                    for (int i_17 = 2; i_17 < 12; i_17 += 4) 
                    {
                        var_38 = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */int) arr_47 [i_10] [i_10] [i_16] [i_17 + 1])) != (((/* implicit */int) (short)-7113))))), (((((/* implicit */int) arr_47 [i_11] [9LL] [i_16] [i_17 + 2])) ^ (((/* implicit */int) arr_47 [i_11] [i_10] [i_10] [i_17 + 1]))))));
                        var_39 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)32)), ((short)-32767)))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) -403559697912731784LL))))))) : ((-(((/* implicit */int) arr_30 [i_17] [i_17] [i_17] [i_17] [i_17 - 2] [i_17]))))));
                        /* LoopSeq 2 */
                        for (short i_18 = 0; i_18 < 14; i_18 += 1) /* same iter space */
                        {
                            arr_65 [i_10] [i_11] [i_16] [i_17] [i_18] = ((/* implicit */unsigned short) min((arr_11 [i_10] [i_11] [(short)10] [i_17] [i_18]), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_48 [i_18] [i_16] [i_18] [i_18])) ? (((/* implicit */long long int) arr_35 [i_10])) : (arr_24 [i_18] [i_18] [i_17] [i_18])))))));
                            arr_66 [i_17] [i_17] = ((/* implicit */int) (_Bool)1);
                            var_40 = ((/* implicit */signed char) ((long long int) ((unsigned int) arr_64 [i_10] [i_10] [i_16] [i_17] [i_18] [i_18] [i_18])));
                            var_41 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_56 [i_16] [i_11] [i_11] [i_17 + 1]))));
                        }
                        for (short i_19 = 0; i_19 < 14; i_19 += 1) /* same iter space */
                        {
                            arr_69 [i_11] [i_17 - 1] [i_10] [i_10] [i_10] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_32 [i_10] [i_10] [i_10] [i_10] [i_10]))) ? (700823806U) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-125)))))));
                            var_42 += ((/* implicit */unsigned int) var_14);
                        }
                        var_43 = ((/* implicit */int) ((unsigned int) (short)5625));
                        arr_70 [i_17] [4LL] [i_11] [i_10] = ((/* implicit */long long int) (short)-9677);
                    }
                }
            }
        } 
    } 
    var_44 = ((/* implicit */unsigned int) (short)22889);
}
