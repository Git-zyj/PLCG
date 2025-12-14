/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11747
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
    var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        var_16 -= (!(((/* implicit */_Bool) max((595283663), (((/* implicit */int) arr_1 [i_0 - 2] [i_0 + 2]))))));
        var_17 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) 961895844)) < (((((/* implicit */_Bool) arr_0 [22])) ? (arr_0 [20U]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
        var_18 ^= ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 3]))) : (arr_0 [0U]));
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)23014)) ? (((/* implicit */int) arr_1 [i_0] [i_0 + 3])) : (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (-961895844)))))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 595283663)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-69))))) + (6015248008438571473ULL)))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) 595283663))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 + 2])))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */short) ((arr_0 [i_1]) | (arr_0 [i_1])));
        var_22 ^= (!(((/* implicit */_Bool) arr_3 [i_1])));
        var_23 = 1393424535U;
    }
    for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
    {
        arr_8 [i_2] = ((/* implicit */short) max((max((((/* implicit */unsigned int) (short)0)), (arr_2 [i_2]))), (((/* implicit */unsigned int) ((signed char) (_Bool)1)))));
        var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_2]))));
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) /* same iter space */
        {
            arr_11 [i_2] [1U] = ((/* implicit */short) (-(((unsigned int) arr_10 [(_Bool)1] [i_3] [(_Bool)0]))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                var_25 = ((/* implicit */unsigned short) ((unsigned int) arr_12 [i_3 + 1] [i_3 + 1]));
                arr_15 [i_2] [(_Bool)1] [(_Bool)1] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [2] [i_3 + 1] [(unsigned short)12]))));
                var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) var_11))));
                var_27 &= ((/* implicit */signed char) var_10);
                var_28 += ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3 + 1]))) | (0U)));
            }
            var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((((((/* implicit */_Bool) max((2017439185U), (((/* implicit */unsigned int) arr_7 [i_3] [i_2]))))) ? (var_6) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_2] [i_3] [11])) * (((/* implicit */int) var_3))))))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_3]))))))));
            var_30 = ((/* implicit */unsigned short) min((((/* implicit */int) arr_10 [i_3] [i_3] [i_2])), (max((((/* implicit */int) arr_12 [i_2] [(signed char)5])), (((int) (_Bool)1))))));
        }
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
        {
            var_31 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)-17344)) / (((/* implicit */int) (signed char)-21))))) : (max((((/* implicit */unsigned int) arr_7 [i_2] [i_5])), (var_6)))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1393424535U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_2]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -595283663)) / (arr_0 [i_2])))) : ((+(12431496065270980143ULL)))))));
            /* LoopSeq 1 */
            for (short i_6 = 0; i_6 < 13; i_6 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_7 = 1; i_7 < 12; i_7 += 1) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_8 = 1; i_8 < 10; i_8 += 3) 
                    {
                        var_32 = ((/* implicit */unsigned int) (signed char)-3);
                        var_33 = var_0;
                        arr_27 [i_2] [(unsigned short)6] [i_6] [i_7] [i_8] = ((arr_0 [i_2]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_7] [i_7 + 1] [i_5 + 1] [i_7] [i_5 + 1] [i_6]))));
                        var_34 = ((/* implicit */signed char) ((((var_13) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_17 [i_2] [i_5] [i_2])))) < (((/* implicit */int) (short)0))));
                    }
                    /* vectorizable */
                    for (unsigned int i_9 = 2; i_9 < 9; i_9 += 2) 
                    {
                        var_35 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_31 [i_6] [i_5 + 1]))));
                        var_36 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)36)) ? (((/* implicit */int) arr_14 [i_2])) : (((/* implicit */int) (short)17343))));
                    }
                    /* vectorizable */
                    for (signed char i_10 = 1; i_10 < 12; i_10 += 3) 
                    {
                        arr_35 [5U] [5U] [i_6] [5] [5U] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_30 [3ULL]))) || ((!(((/* implicit */_Bool) (short)-17344))))));
                        var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) var_13))));
                        arr_36 [i_10] [i_7] [i_6] [i_6] [i_2] [i_2] = ((unsigned int) arr_2 [(_Bool)1]);
                        arr_37 [i_2] [i_5] [i_5] = ((/* implicit */int) arr_12 [i_5] [i_5]);
                    }
                    arr_38 [i_2] [i_2] [i_2] [i_6] [(_Bool)1] = (((!(((/* implicit */_Bool) arr_34 [i_2] [i_7 - 1] [i_6] [i_7])))) ? (max((((/* implicit */unsigned int) arr_34 [i_2] [i_7 + 1] [i_6] [i_7])), (2849697496U))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_34 [i_2] [i_7 - 1] [i_6] [(_Bool)1])) | (((/* implicit */int) arr_34 [i_2] [i_7 - 1] [i_7 - 1] [i_6]))))));
                    var_38 = ((/* implicit */int) 134152192U);
                    arr_39 [i_5] = ((/* implicit */unsigned short) (signed char)0);
                }
                /* vectorizable */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_39 = ((/* implicit */signed char) (!((_Bool)0)));
                    arr_43 [i_2] [i_6] [i_5 + 1] [i_5 + 1] [i_2] [i_11] |= ((/* implicit */unsigned int) ((((4160815103U) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)0))))) ? (((int) arr_33 [i_11] [i_6] [i_2] [i_2] [i_2])) : (((/* implicit */int) var_4))));
                }
                var_40 = ((/* implicit */signed char) ((_Bool) (~(((/* implicit */int) max((var_11), ((short)56)))))));
            }
        }
        /* vectorizable */
        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) /* same iter space */
        {
            var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_20 [i_2] [i_2] [i_2]))) || (((/* implicit */_Bool) 134152192U)))))));
            /* LoopSeq 1 */
            for (unsigned int i_13 = 0; i_13 < 13; i_13 += 2) 
            {
                arr_48 [i_2] [i_12] [i_13] [i_12] = ((/* implicit */unsigned long long int) var_6);
                arr_49 [i_12] [3U] [i_13] [i_13] = var_8;
                var_42 = ((/* implicit */signed char) ((((/* implicit */int) arr_12 [i_2] [i_2])) ^ (((/* implicit */int) arr_32 [i_2] [i_12 + 1] [i_13] [(short)9] [i_13]))));
            }
            var_43 = ((/* implicit */unsigned long long int) min((var_43), (((/* implicit */unsigned long long int) 4160815103U))));
        }
        var_44 = ((/* implicit */unsigned long long int) (((!(((930737020U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_2]))))))) ? (((((/* implicit */_Bool) ((var_9) << (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) arr_12 [i_2] [i_2])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32768)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_2] [i_2])))))) ? (((/* implicit */int) arr_20 [i_2] [i_2] [i_2])) : (((/* implicit */int) ((((/* implicit */int) arr_28 [i_2] [i_2] [i_2])) >= (((/* implicit */int) var_0)))))))));
    }
    var_45 = ((/* implicit */unsigned int) var_11);
    var_46 += ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_10)) >= (12431496065270980143ULL))))) >= (var_10)));
}
