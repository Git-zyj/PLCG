/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109583
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_11))))), (((/* implicit */long long int) var_9))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */_Bool) var_13)) ? (var_13) : (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) var_12)))) : (var_13)));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) /* same iter space */
                    {
                        arr_9 [i_0] [i_0] = ((/* implicit */unsigned int) var_14);
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) min((((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_2 [i_1 + 2])))), (((/* implicit */int) arr_2 [i_1 + 2])))))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_4]))) : (var_2)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_4]))))) : (arr_5 [i_0]))));
                        var_23 = ((/* implicit */long long int) arr_10 [i_0] [i_1] [i_4] [i_4]);
                        /* LoopSeq 1 */
                        for (signed char i_5 = 0; i_5 < 17; i_5 += 4) 
                        {
                            var_24 = ((/* implicit */short) var_14);
                            arr_15 [1ULL] [i_4] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)1)) ^ (((/* implicit */int) (unsigned char)254))));
                            var_25 = min((((((/* implicit */_Bool) var_19)) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_0])) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (arr_4 [i_0] [i_1] [i_0]))) : (((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_4] [i_4] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [(unsigned short)2] [i_0]))) : (arr_8 [(unsigned short)4] [i_4] [i_2] [i_4]))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_7 [i_1] [8U])), (var_16)))) ? (((/* implicit */unsigned long long int) var_9)) : (arr_8 [i_5] [i_4] [i_0] [i_0]))));
                        }
                    }
                    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((_Bool) max(((unsigned char)161), ((unsigned char)254)))) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_1 + 1] [i_1 + 1] [i_1 + 4] [i_1 + 3] [i_1 + 4])) ? (arr_4 [i_0] [i_1 + 1] [i_2]) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [i_6])), (var_18)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))))));
                        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0] [i_2] [i_6]))));
                        var_28 = ((/* implicit */signed char) min((((/* implicit */int) min((max((arr_18 [i_0] [i_0] [i_0] [i_2] [i_2] [i_6]), (((/* implicit */unsigned char) arr_2 [i_2])))), (((unsigned char) arr_4 [13LL] [i_1] [i_1]))))), (((((/* implicit */_Bool) 2053809143U)) ? (((/* implicit */int) (unsigned char)17)) : (((/* implicit */int) (short)-10267))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_22 [i_0] [i_0] [i_0] [i_7] = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0])), (min((arr_8 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_21 [i_1 + 1] [i_7])))))), (((/* implicit */unsigned long long int) arr_21 [i_1 + 3] [i_7]))));
                        var_29 = ((/* implicit */unsigned int) min((var_29), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_1 + 4] [4ULL] [i_0] [i_1 + 4] [i_0]))) / (var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_20 [i_2] [i_0]) >= (arr_20 [i_0] [i_0]))))) : (arr_20 [i_0] [i_0])))));
                        var_30 = ((/* implicit */long long int) ((signed char) arr_21 [i_1] [i_7]));
                    }
                    arr_23 [i_2] = min((((/* implicit */unsigned long long int) arr_14 [i_0] [i_1 + 1] [i_0] [i_1] [i_2])), (((unsigned long long int) var_14)));
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 17; i_9 += 1) 
                        {
                            {
                                var_31 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_19 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_2)))) : (((((/* implicit */_Bool) arr_10 [i_9] [i_0] [i_0] [i_0])) ? (arr_11 [i_8]) : (((/* implicit */unsigned long long int) arr_19 [i_8])))))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) == (arr_28 [i_0] [i_1] [i_2] [i_9] [i_9] [i_0] [i_9])))) | (((/* implicit */int) arr_26 [i_0] [i_0] [i_0])))))));
                                arr_30 [i_0] [i_0] [i_2] [i_8] [i_0] [i_8] = ((/* implicit */unsigned long long int) ((_Bool) min((((/* implicit */unsigned long long int) arr_19 [i_0])), (arr_8 [(signed char)7] [i_1] [i_2] [14LL]))));
                            }
                        } 
                    } 
                    arr_31 [1LL] [i_1 + 2] [i_2] &= arr_14 [i_0] [i_0] [i_0] [i_0] [i_0];
                    var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((((/* implicit */long long int) var_8)), (var_2))), (min((arr_19 [i_2]), (((/* implicit */long long int) arr_12 [i_0] [i_1 + 4] [i_0] [(signed char)3] [1] [(signed char)0] [i_1 + 4]))))))) ? (((/* implicit */long long int) min((var_3), (max((var_16), (var_12)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_10)) : (arr_11 [9LL])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [(signed char)2] [i_1 + 2]))) : (arr_16 [i_0] [(signed char)2] [i_2])))));
                }
            } 
        } 
        var_33 = ((/* implicit */unsigned long long int) max((var_33), (min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (arr_25 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))), (((/* implicit */unsigned long long int) min((arr_26 [i_0] [i_0] [i_0]), (arr_26 [i_0] [i_0] [i_0]))))))));
        var_34 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2884868909U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))) : (3217411473275250249LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0] [i_0] [i_0]))) : (((unsigned int) arr_3 [i_0] [i_0] [i_0])))), (((((/* implicit */_Bool) ((arr_28 [i_0] [0U] [i_0] [i_0] [i_0] [i_0] [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))) ? (((((/* implicit */_Bool) arr_6 [(short)9] [8U] [i_0] [i_0] [i_0] [(short)9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [8U] [i_0]))) : (arr_28 [i_0] [i_0] [1LL] [1LL] [8ULL] [12LL] [1LL]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0] [i_0] [i_0])))))));
    }
    for (unsigned char i_10 = 0; i_10 < 17; i_10 += 4) 
    {
        arr_34 [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_25 [i_10] [i_10] [i_10] [i_10] [i_10]))) ? (max((arr_5 [i_10]), (arr_33 [11U]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_10] [i_10] [14LL]))) : (min((((((/* implicit */_Bool) arr_3 [(unsigned char)16] [(unsigned char)16] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_10] [i_10] [i_10] [i_10]))) : (arr_11 [7]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) : (4879417440063610424LL))))))));
        arr_35 [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_11 [i_10]))) << (((/* implicit */int) min(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)1)))))));
    }
    /* vectorizable */
    for (unsigned int i_11 = 1; i_11 < 19; i_11 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_12 = 0; i_12 < 20; i_12 += 3) 
        {
            for (long long int i_13 = 0; i_13 < 20; i_13 += 4) 
            {
                for (unsigned char i_14 = 4; i_14 < 19; i_14 += 4) 
                {
                    {
                        var_35 = ((/* implicit */unsigned long long int) ((_Bool) arr_42 [i_11 - 1] [i_12] [i_14 - 3]));
                        var_36 = ((/* implicit */unsigned short) var_15);
                        var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_11 - 1])) ? (arr_40 [2U] [2U] [2U]) : (arr_40 [i_11 + 1] [i_13] [i_14])));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_15 = 2; i_15 < 18; i_15 += 3) 
        {
            for (unsigned char i_16 = 0; i_16 < 20; i_16 += 2) 
            {
                {
                    var_38 += ((/* implicit */unsigned char) arr_51 [i_16]);
                    var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (arr_43 [i_11 - 1] [i_15 + 1] [i_11] [i_15]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_11])))));
                }
            } 
        } 
        var_40 = ((/* implicit */short) ((((/* implicit */_Bool) arr_37 [i_11])) ? (arr_37 [i_11 + 1]) : (((/* implicit */unsigned long long int) arr_44 [i_11] [i_11 - 1] [(unsigned short)10] [i_11 - 1]))));
    }
}
