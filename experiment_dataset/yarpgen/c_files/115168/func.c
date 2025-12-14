/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115168
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        var_10 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) && (((/* implicit */_Bool) var_5))))) : (((/* implicit */int) arr_0 [i_0]))));
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0 + 1])));
        var_11 = ((/* implicit */unsigned char) (!((_Bool)0)));
    }
    for (long long int i_1 = 2; i_1 < 24; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 24; i_3 += 1) 
            {
                for (unsigned int i_4 = 3; i_4 < 22; i_4 += 2) 
                {
                    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        {
                            arr_17 [i_5] = ((unsigned int) (_Bool)1);
                            var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) (unsigned char)0)), (3881486886U)))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? ((+(var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_4 + 3])))));
                            var_13 = ((/* implicit */int) ((max((((/* implicit */long long int) max((((/* implicit */unsigned short) var_5)), (var_4)))), (((((/* implicit */_Bool) var_5)) ? (arr_12 [i_1] [i_1] [i_4]) : (var_8))))) < (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                            var_14 = ((/* implicit */unsigned char) (+((-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_10 [i_1] [(unsigned char)16] [i_4 - 1]))))))));
                            arr_18 [i_5] [4U] [19] [(signed char)19] = ((/* implicit */unsigned char) arr_8 [i_2] [i_4]);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_6 = 0; i_6 < 25; i_6 += 2) 
            {
                for (signed char i_7 = 0; i_7 < 25; i_7 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_8 = 2; i_8 < 24; i_8 += 1) 
                        {
                            arr_27 [i_1] [i_1] [(unsigned short)15] [(short)16] [(unsigned char)9] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)85)), (max((((/* implicit */unsigned long long int) var_2)), (arr_11 [i_6] [(short)16])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_7] [i_7] [i_1 + 1]))) : (((((/* implicit */_Bool) arr_19 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [(unsigned short)1] [i_1] [i_1] [i_1 - 1] [i_1] [i_8 + 1]))) : (arr_20 [i_1])))));
                            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((arr_19 [i_8] [i_6]), (arr_5 [i_1 + 1]))), (((/* implicit */unsigned long long int) arr_10 [i_1 + 1] [i_8 - 1] [i_6]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_26 [6ULL] [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */int) (_Bool)1))))))))) : (((unsigned int) arr_12 [i_1] [i_1] [i_1]))));
                        }
                        arr_28 [i_1] [i_1] [i_1] [(unsigned short)13] [i_1] [i_1] = (unsigned char)15;
                    }
                } 
            } 
            arr_29 [(_Bool)1] [i_2] [(_Bool)1] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_20 [i_1 + 1])) ? (arr_26 [(unsigned char)4] [i_2] [i_2] [(unsigned char)4] [i_1 + 1]) : (arr_26 [i_1] [i_1] [i_1] [i_2] [i_2])))));
        }
        for (unsigned int i_9 = 0; i_9 < 25; i_9 += 2) 
        {
            var_16 = ((/* implicit */unsigned long long int) min((var_8), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(3842212809U)))) && (((/* implicit */_Bool) arr_14 [i_1 + 1] [i_1 - 1])))))));
            var_17 = ((/* implicit */unsigned int) arr_21 [(short)5] [i_9] [i_9] [i_9]);
        }
        var_18 = ((/* implicit */_Bool) (~(arr_30 [i_1])));
        var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_1] [21LL] [i_1 - 2]))) < (((((/* implicit */_Bool) arr_19 [i_1 + 1] [i_1])) ? (arr_19 [i_1 + 1] [i_1]) : (arr_19 [i_1 + 1] [i_1])))));
        arr_32 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_22 [i_1] [i_1 - 2] [i_1 + 1] [i_1 - 2]))))) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)237))))) : (min((((/* implicit */long long int) var_0)), (arr_23 [i_1 - 1] [i_1 + 1] [(unsigned char)17] [i_1])))));
        /* LoopSeq 1 */
        for (long long int i_10 = 2; i_10 < 24; i_10 += 2) 
        {
            var_20 &= ((/* implicit */int) var_3);
            var_21 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((_Bool) var_1))), (max((var_2), (((/* implicit */unsigned int) arr_31 [i_10]))))))) ? (((((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) 0U))))) ? (((/* implicit */int) ((((/* implicit */long long int) var_3)) >= (var_8)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_33 [i_1])) : (((/* implicit */int) var_0)))))) : (((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1] [(unsigned char)2] [i_10] [i_1]))));
            var_22 += ((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))));
            /* LoopSeq 4 */
            for (signed char i_11 = 2; i_11 < 24; i_11 += 1) 
            {
                var_23 = ((/* implicit */unsigned short) arr_35 [i_1] [i_10] [i_11 + 1]);
                arr_38 [i_1] [i_10] [i_11] [i_1] = arr_6 [i_10];
                arr_39 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) var_1);
                var_24 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_9 [i_10 + 1] [i_11 - 2])))) ? ((~(arr_30 [i_11 + 1]))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_31 [i_11 - 2])))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_21 [i_11] [i_11] [i_11 + 1] [i_1 - 2]))))));
            }
            for (unsigned char i_12 = 0; i_12 < 25; i_12 += 2) /* same iter space */
            {
                arr_43 [i_1] [i_10] [i_1] = ((/* implicit */signed char) max((((/* implicit */int) arr_36 [i_12] [i_12] [7LL] [i_12])), ((-(((/* implicit */int) arr_36 [3] [i_12] [i_1] [i_1]))))));
                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [(unsigned char)9] [i_10] [i_10] [i_10])) ? (((/* implicit */long long int) 3232154241U)) : (((var_6) - (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_1])))))));
            }
            for (unsigned char i_13 = 0; i_13 < 25; i_13 += 2) /* same iter space */
            {
                var_26 &= ((/* implicit */long long int) (unsigned char)124);
                arr_47 [(unsigned char)17] = ((/* implicit */short) min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_25 [i_10 - 1] [i_1 - 1] [i_1 + 1]))))), (max((arr_25 [i_10 - 1] [i_10] [i_1 - 2]), (arr_25 [i_10 - 2] [i_1] [i_1 + 1])))));
                arr_48 [i_1] [i_1] [i_10] [i_13] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_35 [i_10 + 1] [i_1 - 1] [i_1 - 2])) && ((_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)0))))) : (min((var_6), (((/* implicit */long long int) ((arr_19 [i_1] [i_10]) > (((/* implicit */unsigned long long int) var_2)))))))));
            }
            for (unsigned char i_14 = 0; i_14 < 25; i_14 += 2) /* same iter space */
            {
                var_27 = min((((/* implicit */short) (_Bool)1)), ((short)-13));
                var_28 = ((/* implicit */unsigned char) arr_7 [i_1 - 2] [i_10 - 2] [i_1 - 2]);
                var_29 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_42 [i_1 - 1])))))));
            }
        }
    }
    var_30 = ((/* implicit */long long int) var_2);
    var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) (+(max((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (-1275553213)))), (var_8))))))));
}
