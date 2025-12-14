/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128572
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
    var_20 = ((/* implicit */unsigned short) max((((((unsigned long long int) (short)-3)) / (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) (signed char)112)), (1259164063)))))))));
    var_21 = ((/* implicit */long long int) max((max(((~(((/* implicit */int) (signed char)112)))), (((/* implicit */int) var_16)))), (((/* implicit */int) var_14))));
    var_22 = ((/* implicit */short) var_15);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            arr_4 [i_0] [i_1] = ((/* implicit */signed char) var_1);
            arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-1)) - (((/* implicit */int) var_15))))), (((((/* implicit */_Bool) max((arr_0 [i_0] [i_1 - 1]), (arr_3 [i_0] [i_1])))) ? (arr_2 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((18446744073709551612ULL) == (((/* implicit */unsigned long long int) var_13))))))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))) : (min((arr_6 [i_0] [i_1] [i_1 - 1]), (arr_6 [i_1] [i_1] [i_1 - 1])))));
                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)112)))))))))))));
                arr_10 [i_1] [11] [11] = ((/* implicit */unsigned short) arr_0 [i_0] [i_1]);
            }
            /* vectorizable */
            for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
            {
                var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) var_4))))))));
                var_26 = ((/* implicit */short) var_11);
                arr_13 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_15))));
            }
            /* LoopNest 3 */
            for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
            {
                for (short i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    for (int i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        {
                            arr_23 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_1] [i_1] [(signed char)1])) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_4)))) ? (((/* implicit */int) min((var_16), (((/* implicit */unsigned short) (short)-796))))) : (min((((/* implicit */int) arr_18 [i_1] [i_1] [i_4] [i_5])), (arr_9 [i_1] [i_6]))))) : (min(((~(((/* implicit */int) var_16)))), (((((/* implicit */_Bool) 19ULL)) ? (((/* implicit */int) arr_22 [i_0] [(unsigned short)7] [(unsigned short)7] [i_1])) : (((/* implicit */int) var_14))))))));
                            arr_24 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) var_6))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((var_2), (-234796588)))), (var_19)))) : (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24665))) : (((arr_6 [i_0] [i_1] [i_0]) >> (((/* implicit */int) var_10))))))));
                        }
                    } 
                } 
            } 
            arr_25 [i_1] = (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) > (arr_11 [i_1 - 2] [i_1] [i_0])))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (arr_6 [i_0] [i_1] [i_1 - 1])))))));
        }
        arr_26 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max((arr_8 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) var_9))))), (3893669919U)))) ? (max((((/* implicit */int) min(((short)-16710), (var_9)))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)-32195)) : (var_2))))) : (((/* implicit */int) max(((short)-23), ((short)16709))))));
    }
    for (unsigned int i_7 = 0; i_7 < 18; i_7 += 2) /* same iter space */
    {
        var_27 += ((/* implicit */short) max((((((/* implicit */_Bool) arr_1 [i_7])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)39280)))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_22 [i_7] [i_7] [i_7] [i_7])) : (((/* implicit */int) arr_18 [(short)10] [i_7] [i_7] [i_7]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_7] [i_7] [i_7])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_7] [i_7])))))))))));
        arr_29 [i_7] [i_7] = (~(arr_14 [i_7] [i_7] [i_7] [i_7]));
    }
    /* vectorizable */
    for (unsigned int i_8 = 0; i_8 < 18; i_8 += 2) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned int) var_13);
        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) ? (3893669919U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)8191)))));
    }
    for (unsigned int i_9 = 0; i_9 < 18; i_9 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_10 = 0; i_10 < 18; i_10 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (signed char i_11 = 0; i_11 < 18; i_11 += 2) 
            {
                arr_40 [i_9] [i_9] [(unsigned char)0] = ((/* implicit */int) ((((/* implicit */int) ((unsigned short) (short)16709))) != (((/* implicit */int) (short)-1))));
                var_30 -= ((/* implicit */signed char) ((((/* implicit */int) (short)-16711)) ^ (((/* implicit */int) var_7))));
                var_31 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_11])) ? (((/* implicit */int) arr_7 [i_10])) : (((/* implicit */int) arr_7 [i_9]))));
            }
            /* LoopSeq 2 */
            for (short i_12 = 0; i_12 < 18; i_12 += 2) 
            {
                arr_43 [i_9] = ((/* implicit */short) ((long long int) arr_21 [i_12] [i_9] [i_12] [i_9] [i_9]));
                var_32 = ((/* implicit */long long int) (-(((/* implicit */int) arr_21 [i_9] [i_9] [i_10] [i_12] [i_9]))));
                var_33 = ((/* implicit */_Bool) var_11);
            }
            for (unsigned int i_13 = 0; i_13 < 18; i_13 += 2) 
            {
                var_34 -= ((/* implicit */short) (((!(((/* implicit */_Bool) (short)0)))) && (((/* implicit */_Bool) arr_12 [i_9] [i_9] [i_9] [i_13]))));
                var_35 = ((/* implicit */short) arr_1 [i_13]);
            }
            arr_47 [i_9] [i_10] = ((short) 4194303);
            var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_9] [i_9] [i_9] [i_10] [i_10])) ? ((-(((/* implicit */int) arr_39 [i_9] [i_9] [i_9])))) : (arr_36 [i_10] [i_9] [i_9])));
        }
        for (unsigned short i_14 = 0; i_14 < 18; i_14 += 2) /* same iter space */
        {
            arr_51 [i_9] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */int) (short)-15475)) : (((/* implicit */int) (unsigned short)24))))) ? ((+(arr_50 [i_9] [i_9]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1)))));
            arr_52 [i_9] [i_9] = (~(((((/* implicit */_Bool) arr_14 [i_14] [i_14] [i_14] [10LL])) ? (max((1259164063), (((/* implicit */int) var_6)))) : (((/* implicit */int) min((arr_3 [i_9] [i_14]), (((/* implicit */short) (_Bool)1))))))));
        }
        arr_53 [i_9] [i_9] = ((/* implicit */signed char) ((var_8) << (((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */int) ((_Bool) var_0))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (short)-16711))))))));
        var_37 = (~(((var_10) ? (((((/* implicit */_Bool) arr_31 [i_9] [i_9])) ? (((/* implicit */int) (short)-15475)) : (((/* implicit */int) var_14)))) : (((/* implicit */int) arr_30 [i_9])))));
        var_38 = ((/* implicit */short) min((((/* implicit */signed char) (!(((/* implicit */_Bool) (+(4294967295U))))))), (arr_49 [i_9] [i_9])));
        var_39 = ((((/* implicit */_Bool) var_4)) ? (min((min((arr_28 [i_9] [i_9]), (((/* implicit */int) (unsigned char)101)))), (min((var_13), (((/* implicit */int) var_16)))))) : (((/* implicit */int) min((var_16), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_9])))))))));
    }
    var_40 = var_18;
}
