/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122150
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_9)))) && (((/* implicit */_Bool) var_10)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_0] [11] [i_0])) : (arr_3 [i_0] [i_0])));
            var_13 = ((/* implicit */unsigned short) var_4);
        }
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_3 = 1; i_3 < 11; i_3 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        {
                            arr_14 [i_0] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */unsigned char) arr_2 [i_0] [i_3 + 1] [i_3 + 1]);
                            arr_15 [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */signed char) var_8);
                            var_14 = (((-(0U))) != (4294967288U));
                            var_15 |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_8 [i_0]))));
                            arr_16 [i_0] [i_0] [i_3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) var_6);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_6 = 0; i_6 < 12; i_6 += 3) 
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        arr_21 [i_3] [i_6] [i_3 - 1] [i_2] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 4593671619917905920LL)) && (((/* implicit */_Bool) 4294967283U)))) ? ((~(((/* implicit */int) var_7)))) : (var_2)));
                        arr_22 [(_Bool)1] [i_6] [i_3] [i_3] [i_2] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_4)) && (arr_11 [i_3] [i_3]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 13U))))) : ((+(((/* implicit */int) arr_2 [11LL] [i_3] [2U]))))));
                    }
                    for (short i_8 = 1; i_8 < 11; i_8 += 3) 
                    {
                        arr_26 [i_0] [i_2] [i_3] [i_6] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)32722)) > (((/* implicit */int) (unsigned short)53142)))))) > (((((/* implicit */_Bool) arr_18 [i_0] [(unsigned short)6] [i_3] [i_6] [i_8] [i_8])) ? (arr_0 [i_6]) : (var_3)))));
                        arr_27 [i_0] [i_3] [i_3 - 1] [i_6] = ((/* implicit */unsigned int) (short)16915);
                        var_16 = ((/* implicit */int) max((var_16), (arr_23 [9] [i_2] [i_3] [i_6] [i_3])));
                    }
                    for (unsigned short i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        arr_32 [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((12U) / (29U)))) ? ((~(arr_1 [i_0] [i_6]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [(unsigned short)5] [i_0])) && (((/* implicit */_Bool) arr_0 [i_0]))))))));
                        var_17 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) var_2)) : (arr_0 [i_0])))) && (((/* implicit */_Bool) arr_23 [i_3] [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_6])));
                        var_18 = ((/* implicit */int) ((((/* implicit */int) var_1)) >= (((((/* implicit */_Bool) arr_1 [i_3] [(unsigned short)2])) ? (((/* implicit */int) arr_7 [i_0])) : (arr_23 [3LL] [i_0] [i_3 + 1] [i_6] [i_9])))));
                        var_19 = ((((/* implicit */_Bool) var_10)) && (((((/* implicit */int) var_7)) > (((/* implicit */int) arr_18 [i_0] [i_2] [i_3 - 1] [i_6] [i_3 - 1] [i_2])))));
                    }
                    for (long long int i_10 = 0; i_10 < 12; i_10 += 4) 
                    {
                        arr_36 [i_0] [i_3] [i_3] [i_3] = 11U;
                        var_20 = ((/* implicit */unsigned int) var_7);
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_11 = 0; i_11 < 12; i_11 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (~(((/* implicit */int) ((-12LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53142)))))))))));
                        arr_39 [i_0] [i_2] [i_3] [i_3] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_9 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3 - 1])))));
                    }
                    for (unsigned short i_12 = 0; i_12 < 12; i_12 += 1) /* same iter space */
                    {
                        var_22 |= ((/* implicit */int) arr_18 [i_12] [i_12] [i_0] [i_3 - 1] [i_0] [i_0]);
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((((/* implicit */unsigned long long int) var_3)) >= (arr_8 [i_0]))) && (((/* implicit */_Bool) arr_24 [i_3] [(unsigned short)9] [i_3] [11U] [i_0])))))));
                    }
                    var_24 = ((/* implicit */long long int) var_10);
                }
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_6))));
                arr_46 [i_0] [8U] [i_2] [8U] = ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_13])))))) ? (arr_1 [i_0] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_0] [(unsigned char)7] [i_13] [(unsigned short)4] [i_13]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
            }
            arr_47 [10LL] [(short)5] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */int) (short)8983)) << (((4294967282U) - (4294967280U)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_9 [i_2] [i_2] [i_0] [i_0])));
            arr_48 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [(unsigned short)7] [i_2])) - (((/* implicit */int) arr_34 [i_0] [i_2] [i_2] [1] [(unsigned short)11] [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_29 [i_0] [i_0] [i_0] [i_2]), (((/* implicit */unsigned short) arr_28 [i_0] [i_0] [i_0] [(unsigned short)3] [i_0])))))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), (arr_37 [i_0])))) ? (min((var_3), (var_10))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (32U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
        }
        arr_49 [9] &= ((/* implicit */signed char) (((((((_Bool)1) && (((/* implicit */_Bool) -967787139)))) && (((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_4)))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) max((0U), (((/* implicit */unsigned int) arr_43 [i_0] [(unsigned short)7] [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) var_0)) ? (arr_10 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_0] [i_0]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])) != (((((/* implicit */int) (unsigned short)23557)) - (((/* implicit */int) var_0))))))))));
    }
    var_26 = var_11;
    var_27 *= ((/* implicit */_Bool) max((((/* implicit */int) min((var_11), (((/* implicit */unsigned char) (_Bool)1))))), ((+(var_8)))));
    var_28 = ((/* implicit */_Bool) max((var_28), (((((/* implicit */_Bool) ((((4593671619917905920LL) > (((/* implicit */long long int) ((/* implicit */int) var_0))))) ? (-2625803872685256731LL) : (((/* implicit */long long int) 4294967272U))))) && (((/* implicit */_Bool) -7206822021061876562LL))))));
}
