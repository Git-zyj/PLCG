/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132148
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
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (unsigned char)62))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_15 = var_10;
                    var_16 = 3833530176U;
                    var_17 = ((((/* implicit */_Bool) ((arr_1 [i_2]) + (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (max((((/* implicit */unsigned int) (unsigned char)223)), (284065185U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_1 [i_0])))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) arr_7 [i_3])) == (((/* implicit */int) (unsigned char)209)))))));
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (unsigned char)254)))))));
        var_20 = arr_7 [(unsigned char)12];
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_8 [i_3] [i_3]))) ? (((/* implicit */int) arr_8 [i_3] [i_3])) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_1)))))));
    }
    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 4) 
    {
        arr_13 [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_1), ((unsigned char)16)))) ? ((+(arr_9 [i_4]))) : (max((0U), (arr_9 [i_4])))));
        var_22 -= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_10 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned char)6)))) : (var_2))), ((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_11 [i_4])))))));
    }
    var_23 = var_4;
    /* LoopSeq 3 */
    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 2) 
    {
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_5] [i_5])) && (((/* implicit */_Bool) var_7))));
        /* LoopSeq 2 */
        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            arr_20 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_18 [i_5])) ? (arr_1 [i_6]) : (arr_14 [4U]))))) < (((/* implicit */int) (unsigned char)48))));
            arr_21 [i_5] [i_6] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) (-(((/* implicit */int) arr_7 [(unsigned char)1]))))))));
        }
        /* vectorizable */
        for (unsigned int i_7 = 2; i_7 < 12; i_7 += 2) 
        {
            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((arr_10 [i_7 + 2]) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1457904644U)))))))))));
            /* LoopSeq 1 */
            for (unsigned int i_8 = 0; i_8 < 14; i_8 += 2) 
            {
                var_26 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_5] [i_7 - 1]))) : (arr_17 [i_7 + 2])));
                arr_27 [i_8] [i_7 + 1] [i_5] = ((unsigned int) arr_19 [i_7] [i_8]);
                /* LoopSeq 4 */
                for (unsigned char i_9 = 0; i_9 < 14; i_9 += 1) 
                {
                    var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_7 - 2])) ? (((/* implicit */int) arr_23 [i_7 - 2])) : (((/* implicit */int) var_8)))))));
                    arr_30 [i_5] [13U] [8U] [i_9] [i_5] = ((/* implicit */unsigned char) (+(((arr_3 [i_5] [14U]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))));
                    var_28 = ((/* implicit */unsigned char) min((var_28), (arr_26 [i_7 - 2] [i_7 - 1] [i_7])));
                    var_29 = ((unsigned char) var_3);
                }
                for (unsigned char i_10 = 4; i_10 < 11; i_10 += 4) /* same iter space */
                {
                    var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((var_5) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63))))))));
                    var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) ((arr_15 [i_7 + 1]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [(unsigned char)10] [i_10 - 4] [i_10 - 4] [i_10 - 4]))))))));
                    arr_34 [i_7] [(unsigned char)6] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_16 [i_10 + 3]))));
                    var_32 = ((unsigned char) arr_25 [i_10 + 1] [6U] [i_10 + 1] [i_7 + 1]);
                    var_33 = ((/* implicit */unsigned char) 0U);
                }
                for (unsigned char i_11 = 4; i_11 < 11; i_11 += 4) /* same iter space */
                {
                    var_34 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_3 [i_5] [i_5]) : (3802077980U))))));
                    var_35 = (unsigned char)24;
                    var_36 = var_10;
                    var_37 = ((/* implicit */unsigned char) min((var_37), ((unsigned char)251)));
                }
                for (unsigned char i_12 = 4; i_12 < 11; i_12 += 4) /* same iter space */
                {
                    var_38 += ((/* implicit */unsigned char) ((((((/* implicit */int) var_6)) + (((/* implicit */int) (unsigned char)43)))) & ((-(((/* implicit */int) (unsigned char)97))))));
                    /* LoopSeq 4 */
                    for (unsigned char i_13 = 2; i_13 < 10; i_13 += 4) 
                    {
                        var_39 = ((/* implicit */unsigned char) ((arr_40 [i_5] [i_7]) ^ (arr_40 [i_13 + 1] [i_5])));
                        var_40 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_33 [i_12 - 1] [i_13 + 3] [i_8] [i_7 + 1]))));
                        var_41 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_38 [i_7 + 2])) + (((/* implicit */int) arr_38 [i_7 + 1]))));
                        var_42 &= ((/* implicit */unsigned char) ((arr_10 [i_12 - 3]) >> (((((var_11) >> (((((/* implicit */int) arr_38 [7U])) - (126))))) - (2811965U)))));
                    }
                    for (unsigned char i_14 = 0; i_14 < 14; i_14 += 4) 
                    {
                        arr_43 [i_5] [i_5] [i_5] [i_14] [i_5] = ((/* implicit */unsigned int) var_3);
                        var_43 = var_6;
                        arr_44 [i_5] [i_7] [i_8] [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_33 [i_7 + 1] [i_12 - 4] [i_12 + 2] [(unsigned char)8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_7 + 1] [i_12 - 1] [i_12 - 1] [i_14]))) : (var_9)));
                        var_44 = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)195))) & (4205649054U));
                        var_45 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_12 [i_7] [i_12 - 4]))))) >= (arr_4 [i_5] [i_5] [i_8])));
                    }
                    for (unsigned char i_15 = 0; i_15 < 14; i_15 += 4) 
                    {
                        arr_49 [i_5] [i_7] [i_8] [i_5] [i_12] [(unsigned char)9] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_12 [i_8] [i_7]))))) >= (((((/* implicit */_Bool) (unsigned char)60)) ? (arr_11 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_5] [i_7] [i_5])))))));
                        var_46 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_12 [i_7 - 1] [i_12 - 2]))));
                        arr_50 [i_5] [i_15] [i_12] [i_8] [i_5] [i_5] = 2503072807U;
                    }
                    for (unsigned char i_16 = 0; i_16 < 14; i_16 += 4) 
                    {
                        arr_55 [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8))));
                        var_47 = ((/* implicit */unsigned char) ((arr_15 [i_8]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_7 + 1])))));
                        arr_56 [i_5] [(unsigned char)2] [i_8] [(unsigned char)2] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4205649065U)) || (((/* implicit */_Bool) arr_46 [i_5] [i_7 + 1] [i_12 - 3] [i_12 - 3] [i_12 - 3]))));
                    }
                    var_48 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))) == (3833530167U)));
                }
            }
            var_49 -= (unsigned char)92;
            /* LoopSeq 1 */
            for (unsigned char i_17 = 0; i_17 < 14; i_17 += 3) 
            {
                var_50 = 461437122U;
                var_51 = ((/* implicit */unsigned char) min((var_51), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_5] [i_7 + 1])) ? (arr_3 [i_5] [i_7 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)87))))))));
            }
        }
        arr_60 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_51 [i_5] [i_5] [i_5] [(unsigned char)12]), (arr_51 [i_5] [i_5] [i_5] [i_5])))) ? (min((((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)97)))), ((-(((/* implicit */int) (unsigned char)5)))))) : (((/* implicit */int) var_12))));
        /* LoopSeq 1 */
        for (unsigned char i_18 = 0; i_18 < 14; i_18 += 3) 
        {
            var_52 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)50))))), (((arr_39 [i_5] [i_5] [i_5] [i_5] [i_18] [i_18]) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)103)))))));
            var_53 = ((/* implicit */unsigned char) max((var_53), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_5] [i_18])) ? ((+(arr_15 [i_18]))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_5] [i_5] [i_5])) / (((/* implicit */int) (unsigned char)143))))))))));
            arr_63 [i_5] [i_18] [i_5] = var_7;
        }
    }
    for (unsigned char i_19 = 0; i_19 < 10; i_19 += 4) 
    {
        var_54 = ((/* implicit */unsigned char) max((max(((-(((/* implicit */int) arr_37 [i_19] [i_19] [i_19] [(unsigned char)9] [i_19])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_19] [i_19] [i_19] [4U])) || (((/* implicit */_Bool) var_8))))))), (((/* implicit */int) arr_57 [i_19] [i_19] [i_19]))));
        var_55 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) arr_9 [9U])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_11)));
    }
    /* vectorizable */
    for (unsigned char i_20 = 4; i_20 < 22; i_20 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_21 = 2; i_21 < 23; i_21 += 1) 
        {
            arr_72 [i_21] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)101))));
            var_56 += ((/* implicit */unsigned char) (+(((/* implicit */int) arr_71 [(unsigned char)15] [i_20 - 3]))));
        }
        arr_73 [i_20 + 2] = ((unsigned char) 3948714139U);
        var_57 = ((/* implicit */unsigned char) max((var_57), ((unsigned char)87)));
    }
}
