/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12006
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
    var_15 = ((/* implicit */short) min((((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (var_12)))) | (var_5))), (((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 3108006153442808234LL)) ? (((/* implicit */int) var_3)) : (var_12)))) > (3108006153442808232LL))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (+(((((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_1])) + (((/* implicit */int) arr_0 [i_0]))))) & (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)126))) + (-2526836164737676037LL))))))))));
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (int i_3 = 1; i_3 < 18; i_3 += 1) 
                {
                    {
                        arr_12 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */short) ((_Bool) (_Bool)1));
                        var_17 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [7LL])) ? (((/* implicit */int) arr_5 [i_1] [i_1] [i_3 + 1])) : (((/* implicit */int) arr_3 [(unsigned char)17]))))) ? (((3108006153442808234LL) & (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3] [i_1] [i_2]))))) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_9))))))));
                        arr_13 [i_1] [i_1] [i_2] [2ULL] [i_1] [i_3 - 1] = ((/* implicit */unsigned char) arr_4 [i_0] [i_0] [i_0]);
                        arr_14 [(unsigned short)7] [i_1] [i_2] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_18 = ((/* implicit */_Bool) max((var_18), ((!(((/* implicit */_Bool) (~((~(((/* implicit */int) (_Bool)1)))))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) ((max((arr_17 [i_1] [i_5] [i_4] [9LL] [i_1]), (arr_17 [i_0] [i_1] [i_4] [i_5] [i_1]))) ? (((/* implicit */int) min(((unsigned short)1590), (((/* implicit */unsigned short) (_Bool)1))))) : (((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) ^ (((/* implicit */int) arr_5 [i_1] [(_Bool)1] [(_Bool)1]))))));
                            arr_22 [i_6] [i_6] &= ((/* implicit */long long int) (_Bool)1);
                        }
                    } 
                } 
                arr_23 [i_0] [i_0] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_4])) || (((/* implicit */_Bool) arr_1 [i_0]))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2526836164737676037LL)) && (var_4)))), (((var_14) ? (arr_21 [i_0] [i_0] [i_4] [i_1] [i_0] [i_4] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0])))))))));
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (_Bool)1))));
                arr_24 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)40020)) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-21))))) : (-3108006153442808232LL)));
            }
            for (long long int i_7 = 0; i_7 < 19; i_7 += 3) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned long long int) arr_28 [i_7] [i_0] [i_0] [i_0]);
                var_22 = (!(((/* implicit */_Bool) ((short) (_Bool)1))));
                var_23 = ((/* implicit */unsigned int) arr_20 [i_0] [i_1] [i_7]);
                /* LoopSeq 2 */
                for (signed char i_8 = 0; i_8 < 19; i_8 += 3) /* same iter space */
                {
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3108006153442808238LL)) ? (((/* implicit */int) (signed char)-10)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (short)-15)) || (((/* implicit */_Bool) var_13))))) >> (((/* implicit */int) var_4))))) : (arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] [(short)11])));
                    var_25 += ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1] [i_7] [i_8])) ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_11 [i_8] [i_7] [i_1] [i_1] [i_0]))) + (9223372036854775807LL))) >> (((((/* implicit */_Bool) arr_21 [i_8] [i_7] [i_7] [(short)12] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_7])) ? (((/* implicit */int) arr_17 [i_0] [i_1] [(short)14] [i_1] [4U])) : (((/* implicit */int) var_11))))) : (min((((/* implicit */long long int) arr_4 [i_8] [i_7] [14LL])), (3108006153442808229LL)))))));
                }
                for (signed char i_9 = 0; i_9 < 19; i_9 += 3) /* same iter space */
                {
                    var_26 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 887336240875532006LL))))) > (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (short)17477))))));
                    arr_34 [i_0] [i_0] [i_7] [i_7] [i_1] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)63927))));
                    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) min((((/* implicit */unsigned short) ((_Bool) arr_5 [i_0] [i_0] [i_0]))), (arr_18 [i_7]))))));
                    var_28 = ((/* implicit */long long int) max((var_28), (max((((((/* implicit */_Bool) var_10)) ? (((arr_9 [i_0] [(short)6] [i_7] [i_0] [i_9]) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_0] [(short)13] [i_7] [i_9]))) : (3108006153442808232LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_9] [(signed char)2] [i_0]))) >= (arr_2 [i_7]))))))), (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) (short)-18330)) > (((/* implicit */int) var_2))))))))))));
                }
            }
            /* vectorizable */
            for (long long int i_10 = 0; i_10 < 19; i_10 += 3) /* same iter space */
            {
                var_29 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_10] [i_1] [(unsigned short)4])) : (((/* implicit */int) var_3)))) | (((/* implicit */int) arr_5 [9LL] [i_1] [i_10]))));
                var_30 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_11 [0LL] [i_1] [i_10] [i_0] [i_10])) ? (926971714198609153LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) / (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0])))));
            }
            arr_38 [i_1] [i_1] = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_1])), (arr_37 [i_0] [i_1] [i_0] [i_1]))) <= (12443508539569721398ULL)));
        }
        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_0] [(_Bool)1] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (var_12)))) && (((/* implicit */_Bool) arr_37 [i_0] [i_0] [i_0] [(_Bool)1]))))) * (((((/* implicit */int) arr_7 [i_0] [(short)2] [i_0])) ^ (((/* implicit */int) ((var_10) >= (((/* implicit */long long int) ((/* implicit */int) var_11)))))))))))));
    }
}
