/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104044
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned char) min(((-2147483647 - 1)), (((/* implicit */int) ((unsigned char) arr_3 [i_1 + 3] [i_1 - 3])))));
                arr_6 [5] |= ((/* implicit */unsigned char) min(((!(((/* implicit */_Bool) (unsigned char)191)))), ((!((!(((/* implicit */_Bool) 2147483647))))))));
                arr_7 [i_0] [i_1] [i_0] = ((unsigned char) min((min((var_16), (((/* implicit */int) arr_5 [i_1])))), (((/* implicit */int) var_12))));
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) (+((~((-2147483647 - 1))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_2 = 3; i_2 < 10; i_2 += 4) 
    {
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_1 [i_2]))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) var_11)) ? ((-2147483647 - 1)) : (arr_1 [i_2 - 3]))) + (((/* implicit */int) arr_0 [i_2 - 2] [9LL]))))) : (max((arr_9 [i_2]), (((/* implicit */long long int) 2147483647))))));
        var_20 = ((int) ((((/* implicit */_Bool) arr_3 [i_2 - 2] [i_2])) ? (((/* implicit */int) (unsigned char)247)) : (arr_3 [i_2 + 1] [i_2 + 1])));
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_4 = 2; i_4 < 9; i_4 += 4) 
        {
            for (int i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_6 = 1; i_6 < 7; i_6 += 3) 
                    {
                        arr_22 [i_3] [i_4] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_4 + 1] [i_4 - 1] [i_4 - 2] [i_4 + 1]))));
                        var_21 = ((((/* implicit */_Bool) arr_15 [(unsigned char)9])) ? (arr_3 [i_4] [i_4 + 1]) : ((~(((/* implicit */int) arr_4 [i_3] [i_3] [i_3])))));
                        arr_23 [i_3] |= arr_4 [i_4 - 1] [i_4 - 1] [i_6 + 2];
                    }
                    for (unsigned char i_7 = 3; i_7 < 7; i_7 += 2) 
                    {
                        arr_28 [5] [2] [i_5] [(unsigned char)3] = (((+(((/* implicit */int) arr_19 [7] [i_3])))) * (((/* implicit */int) arr_21 [i_3] [i_3] [i_7 - 1])));
                        var_22 ^= ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_7 - 2] [i_4 - 2]))));
                        arr_29 [(unsigned char)8] [4] [i_5] [3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_5])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_3])))))));
                        arr_30 [i_3] [6] [6] [(unsigned char)5] [i_3] = ((/* implicit */int) (+(((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_4] [4]))) ^ (arr_9 [i_3])))));
                    }
                    for (int i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        var_23 = ((/* implicit */long long int) arr_25 [i_3] [9] [i_4] [i_5] [9] [(unsigned char)5]);
                        arr_34 [i_3] [i_4] [i_4] [i_8] [i_8] = ((/* implicit */unsigned char) ((2147483644) / (((((/* implicit */_Bool) -814951380)) ? (((/* implicit */int) (unsigned char)163)) : (-814951355)))));
                        var_24 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_4 - 1]))) : (arr_9 [i_4])));
                    }
                    var_25 *= arr_33 [i_3] [i_4];
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_15 [(unsigned char)6])) : (705086277)));
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 10; i_9 += 3) 
        {
            for (int i_10 = 0; i_10 < 10; i_10 += 1) 
            {
                for (unsigned char i_11 = 0; i_11 < 10; i_11 += 2) 
                {
                    {
                        arr_41 [i_11] [i_10] [i_10] [i_9] [i_3] = ((/* implicit */int) arr_20 [i_3] [(unsigned char)3] [(unsigned char)5] [1LL]);
                        arr_42 [5LL] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_37 [i_3] [i_9] [6] [i_11])) - (((/* implicit */int) arr_37 [(unsigned char)6] [i_9] [i_10] [i_9]))));
                        arr_43 [(unsigned char)9] |= (unsigned char)0;
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 2 */
    for (unsigned char i_12 = 1; i_12 < 14; i_12 += 4) 
    {
        var_27 = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_12] [i_12 + 1])) || (((/* implicit */_Bool) arr_2 [i_12 + 1]))))), (((((/* implicit */_Bool) (unsigned char)96)) ? (814951379) : (814951364)))));
        arr_46 [i_12] = ((unsigned char) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)157)) : (((/* implicit */int) arr_0 [i_12 - 1] [i_12 + 2])))), (((((/* implicit */_Bool) (unsigned char)153)) ? (((/* implicit */int) arr_44 [i_12] [i_12])) : (arr_45 [(unsigned char)0])))));
    }
    for (unsigned char i_13 = 0; i_13 < 25; i_13 += 3) 
    {
        var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_13])) ? (((/* implicit */int) arr_49 [i_13])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [i_13])))))))) ? (((min((((/* implicit */int) (unsigned char)255)), (-2147483647))) & ((~(((/* implicit */int) var_14)))))) : (((/* implicit */int) arr_49 [i_13])));
        /* LoopSeq 1 */
        for (int i_14 = 3; i_14 < 22; i_14 += 3) 
        {
            arr_54 [i_13] [(unsigned char)11] = ((/* implicit */int) min((arr_53 [i_14] [i_13] [i_14 + 1]), (arr_50 [i_13] [15] [i_13])));
            var_29 *= ((/* implicit */unsigned char) max((((/* implicit */int) ((((((/* implicit */int) (unsigned char)203)) != (-814951358))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (-867868677) : (var_0))))))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_50 [4] [i_14 + 2] [4]))))));
            arr_55 [i_13] [(unsigned char)8] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_53 [i_14 - 2] [4] [i_14]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [i_14 - 1] [22LL] [(unsigned char)20])) ? (((/* implicit */int) arr_53 [i_14 - 3] [22] [i_14 + 1])) : (((/* implicit */int) arr_53 [i_14 - 3] [4] [i_14])))))));
            /* LoopNest 2 */
            for (unsigned char i_15 = 0; i_15 < 25; i_15 += 4) 
            {
                for (int i_16 = 1; i_16 < 23; i_16 += 4) 
                {
                    {
                        arr_60 [(unsigned char)15] [i_14] [i_14] [i_13] [(unsigned char)19] = max((((((((/* implicit */_Bool) (unsigned char)24)) ? (arr_52 [i_13]) : (((/* implicit */int) arr_49 [i_13])))) & (((((/* implicit */_Bool) (unsigned char)52)) ? (((/* implicit */int) (unsigned char)120)) : (381494568))))), (-814951358));
                        arr_61 [i_13] = (-(((arr_58 [i_13] [i_13] [i_13] [(unsigned char)20] [i_13] [(unsigned char)8]) + (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))));
                        arr_62 [6LL] [i_14 - 2] [(unsigned char)16] [i_15] [i_16 + 1] |= ((/* implicit */unsigned char) min((((/* implicit */long long int) ((max((((/* implicit */int) arr_56 [i_13] [i_13] [(unsigned char)21])), (arr_52 [i_15]))) - (((/* implicit */int) arr_59 [i_13] [i_13] [i_14 + 3] [i_15] [i_15] [i_16 + 2]))))), (min((arr_51 [i_15]), (((/* implicit */long long int) arr_53 [i_16] [i_15] [i_16]))))));
                    }
                } 
            } 
        }
        arr_63 [i_13] = ((/* implicit */unsigned char) ((((((/* implicit */int) max((var_8), (arr_49 [i_13])))) < (2147483647))) ? (min((arr_51 [i_13]), (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) min((((/* implicit */int) arr_50 [i_13] [i_13] [i_13])), (var_0))))));
        var_30 = arr_58 [i_13] [i_13] [(unsigned char)15] [i_13] [i_13] [i_13];
        arr_64 [i_13] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) 28672)) ? (((/* implicit */long long int) ((/* implicit */int) arr_56 [(unsigned char)2] [i_13] [i_13]))) : (max((arr_51 [i_13]), (((/* implicit */long long int) var_15))))));
    }
}
