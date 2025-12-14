/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100983
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
    var_12 = ((/* implicit */unsigned int) var_6);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            var_13 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_1]))))), (max((18446744073709551609ULL), (((/* implicit */unsigned long long int) (~(var_2))))))));
            var_14 = ((/* implicit */long long int) arr_0 [i_0]);
            /* LoopSeq 4 */
            for (int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                arr_8 [i_1] [(unsigned short)5] [(unsigned char)5] = ((/* implicit */unsigned short) ((int) (+(((/* implicit */int) var_1)))));
                arr_9 [i_2] [(signed char)4] [5] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) arr_3 [8] [8]))));
                arr_10 [10] [i_1] [(unsigned short)1] [(unsigned char)7] = ((/* implicit */signed char) var_8);
            }
            for (signed char i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [i_3])) ? (((/* implicit */int) arr_12 [i_1] [i_1])) : (((/* implicit */int) arr_12 [i_1] [i_1]))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_12 [i_1] [i_3])) : (((/* implicit */int) var_8)))) : ((~(((/* implicit */int) arr_12 [i_1] [3]))))));
                arr_15 [(unsigned short)9] [0U] [i_1] [0U] = ((/* implicit */long long int) 4294967290U);
            }
            for (unsigned long long int i_4 = 4; i_4 < 12; i_4 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_5 = 4; i_5 < 13; i_5 += 4) 
                {
                    for (signed char i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        {
                            arr_24 [i_0] [3LL] [i_0] [9] [i_1] [i_1] = ((/* implicit */unsigned char) min(((+(1ULL))), (((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_2 [i_1])))) / (((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_5 - 1])))))));
                            var_16 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_5 [i_5 - 3] [i_4 + 1])) ? (((/* implicit */int) arr_5 [i_5 - 1] [i_4 + 2])) : (((/* implicit */int) arr_5 [i_5 - 1] [i_4 - 1]))))));
                        }
                    } 
                } 
                arr_25 [4] [(unsigned short)1] [(unsigned short)8] [i_1] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_3 [i_4 - 2] [i_4 + 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_3 [i_4 - 1] [i_4 + 1]))))));
                /* LoopSeq 1 */
                for (int i_7 = 1; i_7 < 11; i_7 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        var_17 = ((/* implicit */long long int) arr_14 [(signed char)9] [i_1] [i_1] [7U]);
                        arr_31 [10] [3U] [i_1] [(signed char)0] [i_1] [(unsigned short)2] [(signed char)0] = ((/* implicit */unsigned int) (((+(18446744073709551598ULL))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [(unsigned short)1] [i_4 + 2] [i_7 + 2] [i_7 + 2]))) / (6ULL)))));
                    }
                    for (long long int i_9 = 3; i_9 < 12; i_9 += 2) 
                    {
                        var_18 = (-(((/* implicit */int) arr_14 [6ULL] [6ULL] [i_1] [i_1])));
                        arr_34 [11U] [3LL] [(unsigned short)1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(arr_28 [(signed char)10] [i_9 - 3] [(signed char)10] [i_1] [(signed char)10])))) == (((((/* implicit */_Bool) arr_22 [i_0] [i_9 - 3] [9U] [9U] [2] [i_1] [i_4 + 2])) ? (((/* implicit */long long int) arr_28 [i_0] [i_9 - 3] [i_0] [i_1] [i_9 - 3])) : (arr_22 [(unsigned char)2] [i_9 - 3] [6U] [11LL] [1] [i_1] [i_4 + 2])))));
                        arr_35 [i_0] [i_0] [i_0] [i_1] [7LL] [(unsigned short)0] [i_1] = ((/* implicit */long long int) arr_17 [i_1] [8LL] [8LL] [8LL]);
                    }
                    arr_36 [i_1] [12U] [(unsigned char)7] [(signed char)7] [(unsigned short)10] [9ULL] = ((((((/* implicit */_Bool) var_1)) ? (arr_20 [i_4 - 1] [i_1] [2U] [i_4 - 1] [12LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) & (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) var_7))))) - (max((((/* implicit */long long int) var_7)), (arr_22 [(unsigned short)10] [i_1] [(unsigned short)12] [(unsigned short)10] [(unsigned short)10] [i_1] [5U])))))));
                    arr_37 [i_1] [i_1] [3LL] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_13 [i_7 + 1] [i_1] [(signed char)9]))))), (arr_18 [i_7 + 3] [i_1] [i_1] [i_1])));
                    arr_38 [i_1] = ((/* implicit */int) (~(max((((/* implicit */unsigned long long int) arr_13 [(unsigned short)6] [i_1] [i_7 + 3])), (((((/* implicit */_Bool) -1268577862)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [(signed char)8] [(unsigned char)7] [i_1] [2]))) : (0ULL)))))));
                }
                var_19 = arr_3 [i_0] [i_0];
                arr_39 [i_1] = ((/* implicit */int) ((((((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [12LL] [12LL] [12LL] [i_1])))))))) != (((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))))), (max((arr_18 [(unsigned short)12] [i_1] [6] [8LL]), (((/* implicit */unsigned int) var_1)))))))));
            }
            for (unsigned int i_10 = 0; i_10 < 14; i_10 += 2) 
            {
                arr_42 [7] [i_1] [7] = ((/* implicit */unsigned short) var_6);
                var_20 = ((/* implicit */signed char) arr_20 [i_0] [i_1] [i_10] [i_10] [i_10]);
                arr_43 [i_10] [i_10] [i_1] [i_10] = (i_1 % 2 == zero) ? (((/* implicit */unsigned char) min((arr_22 [i_0] [(signed char)4] [(signed char)4] [i_0] [i_0] [i_1] [(unsigned short)13]), (((/* implicit */long long int) (~(((((/* implicit */int) arr_11 [(signed char)0] [(signed char)0] [(unsigned short)0] [i_1])) >> (((((/* implicit */int) arr_21 [i_10] [i_10] [i_1] [i_10] [9])) - (7783))))))))))) : (((/* implicit */unsigned char) min((arr_22 [i_0] [(signed char)4] [(signed char)4] [i_0] [i_0] [i_1] [(unsigned short)13]), (((/* implicit */long long int) (~(((((/* implicit */int) arr_11 [(signed char)0] [(signed char)0] [(unsigned short)0] [i_1])) >> (((((((/* implicit */int) arr_21 [i_10] [i_10] [i_1] [i_10] [9])) - (7783))) - (10011)))))))))));
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_2)))) ? ((-(arr_19 [i_0] [i_0] [9ULL] [i_0] [i_1]))) : ((-(arr_19 [(unsigned short)13] [i_1] [i_0] [i_0] [i_1])))));
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65506)) ? (((/* implicit */int) min((arr_13 [(unsigned short)10] [i_1] [(unsigned short)1]), (arr_13 [i_0] [i_1] [i_10])))) : (((((/* implicit */int) (!(((/* implicit */_Bool) 17ULL))))) * ((-(((/* implicit */int) arr_5 [(unsigned char)4] [(unsigned char)4]))))))));
            }
            arr_44 [i_1] [13U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_40 [i_1])) ? ((+(18446744073709551609ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_40 [i_1])))))));
            arr_45 [i_1] [12LL] = ((/* implicit */unsigned int) 18446744073709551583ULL);
        }
        /* vectorizable */
        for (unsigned long long int i_11 = 1; i_11 < 12; i_11 += 1) 
        {
            var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 4036457798U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52568))) : (258509487U))) * (((((/* implicit */_Bool) var_8)) ? (arr_19 [12] [0U] [8LL] [(unsigned char)4] [12]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
            /* LoopSeq 1 */
            for (signed char i_12 = 0; i_12 < 14; i_12 += 1) 
            {
                var_24 = ((/* implicit */unsigned short) (~((+(((/* implicit */int) arr_13 [i_0] [i_12] [i_12]))))));
                var_25 = ((/* implicit */signed char) (-(((636344428) + (((/* implicit */int) (unsigned short)50253))))));
                var_26 = ((/* implicit */unsigned long long int) arr_16 [i_12] [(unsigned char)1] [12LL] [i_11 - 1]);
                var_27 = ((/* implicit */unsigned char) (unsigned short)18194);
            }
            var_28 = ((/* implicit */unsigned short) arr_48 [(unsigned short)6] [(unsigned char)3] [(unsigned char)3]);
        }
        var_29 = ((/* implicit */unsigned short) ((signed char) min((((/* implicit */long long int) (unsigned char)97)), (min((((/* implicit */long long int) (signed char)-26)), (arr_46 [10] [10] [10]))))));
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_3 [i_0] [(signed char)13])) - (((/* implicit */int) arr_27 [i_0] [i_0] [7] [(signed char)1]))))))) - (arr_6 [(unsigned short)0])));
    }
}
