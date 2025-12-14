/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109030
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
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [(signed char)15])) ? (((/* implicit */int) max((arr_0 [i_0 - 1]), (arr_0 [i_0 - 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 2])))))));
        arr_3 [0ULL] [i_0] = ((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) arr_0 [i_0 - 1])), ((-9223372036854775807LL - 1LL)))), (((((/* implicit */_Bool) max((-4650093950442913111LL), ((-9223372036854775807LL - 1LL))))) ? (arr_1 [i_0 - 1]) : (((/* implicit */long long int) ((int) var_17)))))));
    }
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_1), (9223372036854775796LL)))) ? (((/* implicit */unsigned long long int) 1614693622)) : (var_7)));
    /* LoopSeq 2 */
    for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) 9223372036854775803LL);
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) min((2992724347208356705ULL), (((/* implicit */unsigned long long int) (unsigned short)4095)))))));
        var_22 = ((/* implicit */unsigned long long int) arr_6 [i_1] [10]);
    }
    for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        var_23 -= ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) arr_2 [i_2]))))));
        /* LoopSeq 2 */
        for (unsigned short i_3 = 2; i_3 < 13; i_3 += 3) 
        {
            arr_12 [i_2] [i_3] [i_3] = ((((/* implicit */_Bool) arr_4 [i_2])) ? ((-(((/* implicit */int) var_13)))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 2992724347208356705ULL)) ? (((/* implicit */unsigned long long int) arr_10 [i_2] [i_3] [i_2])) : (16013613631388711005ULL))))));
            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) arr_10 [9LL] [12LL] [i_2]))));
        }
        for (signed char i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            arr_15 [i_2] [i_4] = ((/* implicit */long long int) arr_5 [11ULL]);
            /* LoopSeq 3 */
            for (long long int i_5 = 1; i_5 < 12; i_5 += 1) 
            {
                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (~(min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_7 [i_4])) : (15454019726501194910ULL))), (((/* implicit */unsigned long long int) ((long long int) 16013613631388710983ULL))))))))));
                arr_19 [i_2] [5ULL] [i_2] = ((/* implicit */int) arr_6 [i_2] [i_2]);
                arr_20 [i_2] [i_2] [9LL] = ((/* implicit */long long int) min((var_4), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_5 - 1] [i_4] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [(signed char)10]))) : ((+(arr_16 [2LL] [2LL] [2LL]))))))));
            }
            for (unsigned long long int i_6 = 1; i_6 < 12; i_6 += 1) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_7 = 0; i_7 < 14; i_7 += 3) 
                {
                    var_26 = -1614693633;
                    var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) arr_23 [13LL] [i_6] [i_4] [i_2]))));
                    arr_27 [i_2] [i_2] [10LL] [i_2] [i_2] = ((/* implicit */unsigned short) ((signed char) arr_9 [i_2]));
                    var_28 = ((/* implicit */unsigned long long int) arr_7 [i_6 + 1]);
                }
                arr_28 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) max(((unsigned short)21953), (arr_11 [i_4])))) : (min((1614693622), (((/* implicit */int) (unsigned short)43597))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) 6218636099447301022LL)) : (arr_17 [i_2] [i_2])))))))) : (max((-2626033637068371714LL), (((/* implicit */long long int) ((signed char) var_7)))))));
            }
            for (int i_8 = 0; i_8 < 14; i_8 += 3) 
            {
                /* LoopSeq 2 */
                for (signed char i_9 = 0; i_9 < 14; i_9 += 3) 
                {
                    var_29 = ((/* implicit */long long int) (~((-(((/* implicit */int) (unsigned short)64495))))));
                    var_30 = ((/* implicit */unsigned short) var_16);
                    var_31 = var_0;
                }
                for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 3) 
                {
                    var_32 = ((/* implicit */unsigned short) min((((/* implicit */int) min(((unsigned short)4102), (((/* implicit */unsigned short) arr_5 [i_2]))))), (((((/* implicit */int) arr_5 [i_10])) ^ (((/* implicit */int) arr_5 [i_2]))))));
                    /* LoopSeq 2 */
                    for (long long int i_11 = 0; i_11 < 14; i_11 += 4) 
                    {
                        arr_37 [i_2] [(signed char)2] [i_2] [i_2] [i_2] [9ULL] [i_2] = ((/* implicit */unsigned short) (-(var_5)));
                        arr_38 [i_2] [i_10] [(unsigned short)13] [i_2] [i_2] = max((((/* implicit */unsigned long long int) (unsigned short)7595)), (4349026643033854654ULL));
                    }
                    for (long long int i_12 = 0; i_12 < 14; i_12 += 3) 
                    {
                        var_33 = ((/* implicit */int) min((((((/* implicit */_Bool) -3552630780912816199LL)) ? (var_17) : (((/* implicit */unsigned long long int) arr_7 [i_2])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_10])))))));
                        arr_42 [i_12] [i_2] [i_8] [i_2] [i_2] = min((max((arr_25 [i_2] [i_4]), (-374952108513903694LL))), (((/* implicit */long long int) (-(arr_18 [i_4] [i_10] [9ULL])))));
                    }
                    arr_43 [i_2] [2] [9] [(signed char)8] [i_10] = ((/* implicit */unsigned long long int) arr_23 [i_2] [i_4] [0ULL] [i_10]);
                }
                var_34 ^= ((unsigned short) (-(((/* implicit */int) arr_39 [i_4] [i_4]))));
                arr_44 [i_2] [2LL] [i_2] = ((/* implicit */int) arr_30 [i_2] [i_2] [i_2]);
            }
            var_35 *= max((((/* implicit */unsigned long long int) arr_13 [i_2] [4LL])), (((((/* implicit */_Bool) arr_30 [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1022))) : (arr_31 [i_2] [i_2] [i_2] [i_2] [(signed char)10] [i_4]))));
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_13 = 0; i_13 < 14; i_13 += 1) 
        {
            var_36 = ((/* implicit */signed char) ((((/* implicit */int) arr_8 [7ULL])) >> (((((/* implicit */int) arr_8 [i_13])) - (49622)))));
            var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_2] [2ULL] [2ULL])) ? (arr_26 [(signed char)0] [4LL] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [(unsigned short)12] [i_13] [8LL] [(unsigned short)12]))))))));
        }
        for (unsigned short i_14 = 3; i_14 < 12; i_14 += 1) 
        {
            arr_50 [i_2] [0ULL] = ((((long long int) -1LL)) % (((long long int) arr_45 [i_14] [i_2])));
            arr_51 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((94245218046077030LL) < (((/* implicit */long long int) -574593481))));
            arr_52 [i_2] [1] = ((/* implicit */unsigned long long int) -1868385130019632671LL);
        }
        for (signed char i_15 = 2; i_15 < 13; i_15 += 3) 
        {
            var_38 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_7 [(unsigned short)9]), (arr_7 [i_2]))))));
            var_39 = arr_41 [i_15] [12ULL] [i_15 - 2] [13LL] [0ULL] [i_15 - 2];
        }
        var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((long long int) arr_24 [2LL] [i_2] [2LL] [2LL])), (arr_48 [i_2] [7LL] [(signed char)1])))) ? (((((/* implicit */_Bool) arr_39 [12LL] [i_2])) ? (((/* implicit */int) arr_39 [(signed char)12] [(signed char)12])) : (((/* implicit */int) arr_39 [10ULL] [i_2])))) : (((/* implicit */int) ((unsigned short) arr_4 [i_2]))))))));
        arr_56 [10LL] [i_2] = ((((/* implicit */_Bool) var_14)) ? (34359736320ULL) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)121)), (16LL)))));
    }
}
