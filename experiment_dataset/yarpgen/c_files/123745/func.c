/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123745
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
    var_19 *= ((/* implicit */unsigned short) (+(4257171929U)));
    var_20 -= ((/* implicit */unsigned int) (-((+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_16)) : (11095977453699264275ULL)))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) max(((-(arr_2 [i_0] [i_1]))), (((/* implicit */unsigned int) ((arr_1 [i_0] [i_1]) != (((((/* implicit */_Bool) 59519330U)) ? (arr_1 [i_0] [i_1]) : (16775168U)))))))))));
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (+(268427264U))))));
            var_23 = ((/* implicit */int) ((2582481772887938730ULL) * (((/* implicit */unsigned long long int) (~(4257171909U))))));
            var_24 = ((/* implicit */short) arr_0 [i_0] [i_0]);
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            arr_7 [i_0] [i_0] [i_2] = ((/* implicit */short) 268427264U);
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                for (unsigned short i_4 = 3; i_4 < 19; i_4 += 1) 
                {
                    {
                        var_25 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)59823)) ? (17389708833182351892ULL) : (((/* implicit */unsigned long long int) 268434944U)))) % (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_0] [i_2] [i_3] [i_4])))))));
                        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) arr_9 [i_0] [i_0]))));
                        /* LoopSeq 3 */
                        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 3) 
                        {
                            arr_15 [i_0] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)11)))))));
                            var_27 = (unsigned char)224;
                        }
                        for (long long int i_6 = 0; i_6 < 22; i_6 += 2) /* same iter space */
                        {
                            var_28 += ((((/* implicit */_Bool) arr_4 [(unsigned char)21] [i_2 - 1] [i_4 + 3])) ? (min((((/* implicit */unsigned int) arr_5 [i_4 + 3] [i_4 - 2] [i_2 - 1])), (arr_2 [i_4 + 3] [i_4 + 1]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 1] [i_4 - 2]))))));
                            var_29 &= ((/* implicit */unsigned char) arr_8 [i_6] [i_2 - 1] [i_4 - 1]);
                        }
                        for (long long int i_7 = 0; i_7 < 22; i_7 += 2) /* same iter space */
                        {
                            arr_23 [i_0] [i_2] [i_0] [i_4] [i_0] = arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [(signed char)12] [i_0];
                            var_30 = ((/* implicit */unsigned char) min(((+(arr_17 [i_0] [i_4 + 3]))), (((/* implicit */long long int) (unsigned char)239))));
                            var_31 = ((/* implicit */unsigned short) arr_22 [i_2 - 1] [i_2 - 1] [i_0] [i_3] [i_4 - 2]);
                        }
                    }
                } 
            } 
        }
        for (signed char i_8 = 0; i_8 < 22; i_8 += 3) /* same iter space */
        {
            arr_27 [i_0] [i_0] [i_0] = ((/* implicit */int) (signed char)28);
            arr_28 [i_0] [i_8] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_8] [i_8] [i_0] [i_0]))))), (min((((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_8])), (2304717109306851328ULL)))));
            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) (unsigned short)17944)), (((max((((/* implicit */unsigned long long int) arr_16 [(_Bool)1] [i_8] [(_Bool)1] [i_0] [i_0])), (arr_21 [i_0]))) | (((/* implicit */unsigned long long int) 3017388005U)))))))));
            arr_29 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [(unsigned short)0] [i_8] [i_8] [i_8])) ? (((((/* implicit */_Bool) (-(-5019923944374691415LL)))) ? (arr_26 [i_0] [12LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)112))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0])))));
        }
        /* vectorizable */
        for (signed char i_9 = 0; i_9 < 22; i_9 += 3) /* same iter space */
        {
            var_33 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_0])))))));
            var_34 += ((/* implicit */signed char) (!(((/* implicit */_Bool) 11136774834743250394ULL))));
            arr_32 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_30 [i_0] [i_0])) * (((/* implicit */int) arr_30 [i_0] [i_9]))));
            /* LoopSeq 1 */
            for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_11 = 0; i_11 < 22; i_11 += 4) 
                {
                    for (short i_12 = 0; i_12 < 22; i_12 += 3) 
                    {
                        {
                            var_35 += ((/* implicit */signed char) ((arr_26 [i_0] [i_9]) << (((((/* implicit */int) (signed char)-86)) + (126)))));
                            arr_40 [i_0] [i_9] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((arr_25 [i_0]) ? (((/* implicit */int) arr_25 [i_0])) : (((/* implicit */int) arr_25 [i_0]))));
                            var_36 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_35 [i_11]))));
                        }
                    } 
                } 
                var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) ((arr_25 [(short)4]) ? (arr_2 [i_10] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                arr_41 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_0] [(unsigned short)14]))));
                arr_42 [i_0] = ((((((/* implicit */int) (unsigned char)17)) != (((/* implicit */int) arr_33 [(unsigned char)9] [(unsigned char)9])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45781))) : (7350766620010287352ULL));
            }
        }
        arr_43 [i_0] [i_0] = ((/* implicit */signed char) arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] [(signed char)11]);
        arr_44 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) % (((/* implicit */int) arr_4 [i_0] [(unsigned char)3] [i_0]))))) == (min((((/* implicit */unsigned long long int) 17592186043904LL)), (arr_35 [i_0])))));
    }
    for (unsigned long long int i_13 = 2; i_13 < 12; i_13 += 4) 
    {
        var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) max(((((!(((/* implicit */_Bool) 1502680453)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_13] [i_13] [i_13])))))) : ((+(arr_17 [i_13] [i_13]))))), (((/* implicit */long long int) (unsigned short)50379)))))));
        arr_47 [i_13] = ((/* implicit */unsigned char) max((arr_45 [i_13]), (((/* implicit */unsigned long long int) ((arr_2 [i_13] [13ULL]) >> ((((+(arr_20 [i_13] [i_13] [2U] [i_13] [i_13] [i_13] [i_13]))) + (6471625124293557250LL))))))));
        var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_13 - 2])) ? (((((/* implicit */_Bool) arr_3 [i_13 - 1] [i_13])) ? (arr_17 [i_13] [i_13 + 4]) : (((/* implicit */long long int) arr_3 [i_13 + 3] [i_13])))) : (max((((/* implicit */long long int) (unsigned short)378)), (5019923944374691414LL)))));
    }
    /* vectorizable */
    for (unsigned short i_14 = 0; i_14 < 15; i_14 += 4) 
    {
        var_40 = ((/* implicit */unsigned long long int) (-((~(252700187)))));
        var_41 = ((/* implicit */long long int) arr_14 [i_14] [i_14] [i_14] [i_14] [i_14]);
        var_42 = ((/* implicit */unsigned int) 4123643799063146595ULL);
    }
}
