/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172822
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) var_3)) | (((/* implicit */int) (unsigned char)42))))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) var_9)))) < (((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */int) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))) : (((/* implicit */int) ((unsigned char) (unsigned char)65)))))));
        var_13 |= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min(((unsigned char)29), (arr_1 [i_0] [(unsigned char)4])))) ? (((/* implicit */int) ((unsigned char) var_0))) : (((/* implicit */int) var_7)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)61)))))));
        var_14 = min((arr_0 [(unsigned char)5] [i_0]), (((unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)253))))));
    }
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 1; i_2 < 9; i_2 += 1) 
        {
            for (unsigned char i_3 = 3; i_3 < 9; i_3 += 1) 
            {
                for (unsigned char i_4 = 1; i_4 < 9; i_4 += 1) 
                {
                    {
                        var_15 = arr_4 [i_2 - 1] [i_2];
                        var_16 = ((/* implicit */unsigned char) (-((+(((((/* implicit */int) var_6)) / (((/* implicit */int) var_0))))))));
                        var_17 = arr_0 [i_1] [i_2];
                        arr_11 [i_1] [i_3] [i_1] = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_7 [i_3] [i_4 + 1] [i_1])))) % (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_3] [i_2])) && (((/* implicit */_Bool) min(((unsigned char)3), (arr_6 [i_1] [i_2] [i_2])))))))));
                    }
                } 
            } 
        } 
        var_18 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) arr_2 [i_1])))));
        var_19 = ((/* implicit */unsigned char) max(((~(((/* implicit */int) (unsigned char)77)))), (max((((((/* implicit */int) var_6)) & (((/* implicit */int) arr_6 [i_1] [i_1] [i_1])))), (((/* implicit */int) min((arr_9 [(unsigned char)2] [(unsigned char)2] [i_1] [i_1]), (arr_3 [(unsigned char)5]))))))));
    }
    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) 
    {
        var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)80)) ? ((+(((/* implicit */int) (unsigned char)146)))) : (((/* implicit */int) (unsigned char)168))));
        /* LoopSeq 1 */
        for (unsigned char i_6 = 2; i_6 < 10; i_6 += 2) 
        {
            arr_19 [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)10)) >> (((((/* implicit */int) max(((unsigned char)81), ((unsigned char)1)))) - (80)))))) || (((/* implicit */_Bool) arr_14 [i_6 + 1] [(unsigned char)10]))));
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)156)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) (unsigned char)124)) : (((/* implicit */int) (unsigned char)251))))) || (((/* implicit */_Bool) min(((unsigned char)99), ((unsigned char)123))))))) : ((((~(((/* implicit */int) (unsigned char)229)))) | (((/* implicit */int) (unsigned char)232))))));
        }
        arr_20 [i_5] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) var_1)))));
    }
    for (unsigned char i_7 = 2; i_7 < 22; i_7 += 2) 
    {
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_22 [i_7 - 1])) == (((/* implicit */int) var_3))))) / (((((/* implicit */int) (unsigned char)78)) - (((/* implicit */int) (unsigned char)13))))));
        arr_23 [i_7] [i_7 + 1] = var_2;
        /* LoopSeq 4 */
        for (unsigned char i_8 = 4; i_8 < 21; i_8 += 2) /* same iter space */
        {
            var_23 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)29)) || (((((/* implicit */_Bool) max((arr_24 [(unsigned char)4]), ((unsigned char)165)))) || (((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_26 [i_8] [i_7]))))))));
            /* LoopSeq 2 */
            for (unsigned char i_9 = 3; i_9 < 21; i_9 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_10 = 1; i_10 < 21; i_10 += 3) 
                {
                    arr_34 [i_9] [i_8] [i_8] [i_7] = ((/* implicit */unsigned char) max((((((/* implicit */int) ((unsigned char) arr_30 [i_7] [(unsigned char)9] [i_9 + 1] [i_9]))) << (((((/* implicit */int) ((unsigned char) arr_29 [i_7 - 1] [i_8 - 4] [i_9]))) - (226))))), (((((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)205)))) % (((/* implicit */int) arr_24 [i_8 - 2]))))));
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)106))));
                }
                arr_35 [i_9] [i_9] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((arr_28 [i_9]), ((unsigned char)11)))) ? (((/* implicit */int) arr_22 [i_8 + 1])) : (((/* implicit */int) arr_28 [i_9])))), (max((((((/* implicit */_Bool) (unsigned char)122)) ? (((/* implicit */int) arr_33 [i_9 + 2] [i_7] [i_8 + 1] [i_7])) : (((/* implicit */int) arr_28 [i_9])))), (((/* implicit */int) (unsigned char)24))))));
            }
            for (unsigned char i_11 = 0; i_11 < 23; i_11 += 4) 
            {
                var_25 = max((max((((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)111)) > (((/* implicit */int) arr_31 [i_8] [i_8] [i_8]))))), ((unsigned char)234))), (arr_29 [i_7] [i_8] [i_11]));
                var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) max((((/* implicit */int) var_2)), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)252)) + (((/* implicit */int) arr_28 [i_7]))))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_9)))))))));
            }
            var_27 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned char)0), (var_6)))))))));
        }
        for (unsigned char i_12 = 4; i_12 < 21; i_12 += 2) /* same iter space */
        {
            var_28 -= ((/* implicit */unsigned char) (~(((((/* implicit */int) var_11)) << (((/* implicit */int) arr_26 [i_12 + 2] [i_7 + 1]))))));
            arr_41 [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_22 [i_7 + 1])))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) arr_26 [i_7 - 2] [i_7 + 1])) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)5)))) : (((((/* implicit */_Bool) arr_24 [i_7])) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) var_4))))))));
        }
        for (unsigned char i_13 = 4; i_13 < 21; i_13 += 2) /* same iter space */
        {
            var_29 = ((unsigned char) var_6);
            /* LoopNest 2 */
            for (unsigned char i_14 = 1; i_14 < 21; i_14 += 3) 
            {
                for (unsigned char i_15 = 0; i_15 < 23; i_15 += 1) 
                {
                    {
                        var_30 += ((/* implicit */unsigned char) (((+(((/* implicit */int) (unsigned char)101)))) / ((+(((/* implicit */int) (unsigned char)6))))));
                        arr_49 [i_7] [i_13] [i_14 + 1] [i_14 + 1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((unsigned char) var_2))) ? (((/* implicit */int) min((var_11), ((unsigned char)78)))) : (((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_2)))))), (((/* implicit */int) var_4))));
                        arr_50 [i_7] [i_7] [i_14] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) >> (((/* implicit */int) ((((/* implicit */int) arr_36 [i_7] [i_7] [i_7] [i_15])) > (((/* implicit */int) (unsigned char)203)))))))) ? (max((((/* implicit */int) max(((unsigned char)0), (var_8)))), (((((/* implicit */int) var_9)) | (((/* implicit */int) var_6)))))) : ((~(((/* implicit */int) var_6))))));
                    }
                } 
            } 
        }
        for (unsigned char i_16 = 2; i_16 < 20; i_16 += 4) 
        {
            arr_53 [i_7] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_51 [i_7 - 1] [i_7]), (arr_27 [i_7 - 2])))) ? (((/* implicit */int) ((unsigned char) max(((unsigned char)107), (arr_47 [(unsigned char)9] [(unsigned char)9] [i_16] [i_16]))))) : (((/* implicit */int) var_7))));
            arr_54 [i_7 - 2] &= ((/* implicit */unsigned char) (+((+(((/* implicit */int) arr_36 [i_7] [i_7] [i_7] [i_16 + 1]))))));
            arr_55 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */int) arr_43 [i_7 - 2] [i_16])) < (((/* implicit */int) arr_51 [i_16] [i_7])))) && (((((/* implicit */int) (unsigned char)247)) == (((/* implicit */int) (unsigned char)46))))))) % ((-(((/* implicit */int) arr_52 [i_16 + 1] [i_16 + 2] [i_16 + 3]))))));
            var_31 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_37 [i_16 + 1] [i_7 - 2] [i_7]))) || (((/* implicit */_Bool) ((unsigned char) arr_22 [i_7 - 2])))));
        }
        var_32 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [(unsigned char)21] [i_7])) ? (((/* implicit */int) (unsigned char)36)) : (((/* implicit */int) arr_40 [i_7]))))) ? (((/* implicit */int) (unsigned char)87)) : (((/* implicit */int) (unsigned char)68)))) != (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)234)) : (((/* implicit */int) (unsigned char)255))))));
        var_33 = ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) (unsigned char)78)) ? (((/* implicit */int) arr_40 [i_7 - 2])) : (((/* implicit */int) (unsigned char)234)))), (((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_2))))))) ^ (max((((/* implicit */int) (unsigned char)136)), (((((/* implicit */int) (unsigned char)0)) % (((/* implicit */int) arr_40 [i_7]))))))));
    }
    var_34 = ((unsigned char) var_1);
}
