/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114971
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */short) (((-(((-7669597656068878314LL) + (7669597656068878341LL))))) + (((/* implicit */long long int) (-((+(((/* implicit */int) (unsigned char)128)))))))));
                    var_16 = ((/* implicit */long long int) min((var_16), (562945658454016LL)));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_3 = 3; i_3 < 12; i_3 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            var_17 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_3 - 1])) ? (arr_0 [i_3 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3 + 2])))));
            var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_3 + 2] [i_3 - 3])) ? (var_14) : (((/* implicit */int) (_Bool)1))));
        }
        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
        {
            arr_18 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)18834)) ? (((((/* implicit */_Bool) arr_9 [i_3 - 3])) ? (((/* implicit */int) var_9)) : (max((((/* implicit */int) var_6)), (var_14))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)46)))))));
            arr_19 [i_3] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (((-(((/* implicit */int) (signed char)46)))) / ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-18835))))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) min((((/* implicit */unsigned char) var_3)), (var_1))))));
            arr_20 [i_3 - 1] [i_5] [i_3] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (562945658454006LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? ((-(var_13))) : (((((/* implicit */_Bool) (short)8176)) ? (1563406581U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-8176)))))))), ((-(max((562945658454006LL), (((/* implicit */long long int) arr_6 [i_5]))))))));
        }
        for (int i_6 = 3; i_6 < 12; i_6 += 2) 
        {
            var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))));
            var_20 = ((((/* implicit */_Bool) 35175782154240LL)) ? (min((max((var_4), (((/* implicit */unsigned long long int) 1751387091U)))), (var_4))) : (((/* implicit */unsigned long long int) 2348575524091325758LL)));
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 2; i_8 < 12; i_8 += 3) 
            {
                for (short i_9 = 1; i_9 < 13; i_9 += 4) 
                {
                    {
                        arr_30 [i_3 + 1] [i_7] [i_7] [i_9 + 1] [i_3] = ((/* implicit */int) var_6);
                        arr_31 [i_7] [i_7] [i_8] [(unsigned char)2] |= ((/* implicit */unsigned int) var_4);
                    }
                } 
            } 
            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) var_1))));
        }
        for (unsigned char i_10 = 1; i_10 < 13; i_10 += 2) 
        {
            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(var_11))) >= (((/* implicit */unsigned long long int) 7669597656068878341LL)))))) : (var_4)));
            var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_28 [i_3] [i_10 - 1] [i_3] [i_3 - 1])) ^ (((((/* implicit */_Bool) arr_28 [i_3 - 3] [11LL] [i_3] [i_3 + 2])) ? (((/* implicit */int) arr_28 [i_3] [i_10] [i_3] [i_3 + 2])) : (((/* implicit */int) var_12))))));
            /* LoopNest 3 */
            for (unsigned int i_11 = 0; i_11 < 14; i_11 += 2) 
            {
                for (signed char i_12 = 0; i_12 < 14; i_12 += 1) 
                {
                    for (unsigned int i_13 = 2; i_13 < 10; i_13 += 4) 
                    {
                        {
                            var_24 = max((max((((/* implicit */short) (unsigned char)105)), (arr_32 [i_10 - 1] [i_10 + 1] [i_3]))), (arr_32 [i_10 - 1] [i_10] [i_3]));
                            var_25 = ((/* implicit */signed char) (((+(((((/* implicit */_Bool) 2348575524091325774LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)113))) : (2731560715U))))) | (((/* implicit */unsigned int) (+(arr_13 [i_3 - 1] [i_10 - 1] [i_11]))))));
                            var_26 = ((/* implicit */_Bool) min(((+(((/* implicit */int) arr_33 [i_3] [i_13 + 1] [i_3])))), (((/* implicit */int) max(((short)56), (((/* implicit */short) max((((/* implicit */unsigned char) var_3)), (arr_39 [i_3] [i_3])))))))));
                            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (arr_34 [i_11]) : (arr_34 [i_13]))))));
                        }
                    } 
                } 
            } 
        }
        var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) var_9))));
        /* LoopSeq 4 */
        for (unsigned char i_14 = 1; i_14 < 13; i_14 += 3) 
        {
            var_29 = max(((+(var_13))), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-8177))))));
            var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) var_3))));
        }
        for (unsigned int i_15 = 0; i_15 < 14; i_15 += 3) 
        {
            arr_47 [10U] [i_3] [10U] = ((/* implicit */unsigned long long int) var_7);
            var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) -262144))));
        }
        for (unsigned int i_16 = 2; i_16 < 13; i_16 += 2) /* same iter space */
        {
            arr_50 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_29 [(signed char)7] [i_16] [i_16] [i_3] [1ULL] [8U]))))), (min(((signed char)14), (((/* implicit */signed char) var_2)))))))));
            arr_51 [i_3] [5ULL] = ((/* implicit */unsigned int) ((short) 0U));
            var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6)))))))) : (min(((~(((/* implicit */int) var_0)))), (((/* implicit */int) arr_1 [i_16])))))))));
            var_33 |= var_4;
        }
        for (unsigned int i_17 = 2; i_17 < 13; i_17 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_18 = 0; i_18 < 14; i_18 += 4) 
            {
                arr_56 [i_3] = ((/* implicit */short) (~(((/* implicit */int) ((-2135167188696980842LL) >= (((/* implicit */long long int) 1563406588U)))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_19 = 0; i_19 < 14; i_19 += 4) 
                {
                    var_34 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_6)))))));
                    var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_12 [i_3] [i_3] [13ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (1563406602U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-16600))))))))));
                    var_36 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_17] [i_18] [i_19]))) * (var_5)));
                    var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) (+((+(3539540941U))))))));
                }
                arr_59 [i_3] [i_17] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (var_13) : (arr_34 [i_3])));
            }
            for (unsigned long long int i_20 = 4; i_20 < 12; i_20 += 2) 
            {
                var_38 = ((/* implicit */unsigned int) ((var_2) ? (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)197))))), (((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))));
                arr_62 [i_20] |= ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) arr_61 [i_20])) && (((/* implicit */_Bool) var_14))))));
            }
            arr_63 [i_3] [i_3] = ((/* implicit */int) var_9);
        }
    }
    /* vectorizable */
    for (long long int i_21 = 0; i_21 < 14; i_21 += 4) /* same iter space */
    {
        arr_66 [i_21] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)235))))) ? ((~(-7669597656068878341LL))) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
        arr_67 [(signed char)2] [(signed char)2] = ((/* implicit */short) (+((-(9223372036854775807LL)))));
        var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) ((((((/* implicit */_Bool) var_14)) ? (908420747142855732LL) : (arr_61 [i_21]))) & (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
    }
    /* vectorizable */
    for (long long int i_22 = 0; i_22 < 14; i_22 += 4) /* same iter space */
    {
        var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (var_14) : (((/* implicit */int) var_6))))) ? (((var_3) ? (((/* implicit */unsigned long long int) arr_22 [i_22] [(short)0] [i_22])) : (var_5))) : (((((/* implicit */_Bool) (short)-8177)) ? (var_4) : (((/* implicit */unsigned long long int) arr_54 [i_22] [i_22] [i_22] [11LL]))))));
        arr_70 [i_22] = ((/* implicit */_Bool) var_1);
    }
    var_41 = (+(((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_10)) ? (9178654796090576088ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)184)), (var_14)))))));
}
