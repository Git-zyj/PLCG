/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165237
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
    var_14 = ((/* implicit */unsigned char) var_13);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) min((arr_3 [i_0] [i_0]), (((/* implicit */unsigned int) (!(((arr_2 [i_0] [i_0]) < (var_9))))))));
        arr_5 [17U] = ((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) & (arr_3 [i_0] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */int) (short)32762)) != (((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) (short)27284)))))))));
    }
    for (signed char i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
    {
        arr_10 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-33)) || (((/* implicit */_Bool) var_12)))))) | (((((arr_0 [i_1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) * (min((var_9), (((/* implicit */unsigned long long int) (signed char)-45))))))));
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */int) var_5)) - (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
        arr_11 [(unsigned char)5] [5U] |= ((/* implicit */unsigned long long int) ((unsigned char) ((_Bool) arr_8 [i_1])));
        var_16 = ((/* implicit */unsigned char) -1);
    }
    for (signed char i_2 = 0; i_2 < 23; i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 3; i_3 < 22; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_22 [i_2] [i_2] [(short)7] [i_3] = ((/* implicit */unsigned char) (+(((288230376151711743LL) / (((/* implicit */long long int) -15))))));
                    /* LoopSeq 3 */
                    for (signed char i_5 = 1; i_5 < 21; i_5 += 2) 
                    {
                        var_17 = ((/* implicit */short) (~((-((~(var_12)))))));
                        var_18 = ((/* implicit */unsigned char) var_6);
                        var_19 = arr_23 [i_3] [6] [i_3 - 3] [(signed char)19] [i_3];
                    }
                    for (unsigned char i_6 = 1; i_6 < 20; i_6 += 1) 
                    {
                        arr_27 [(_Bool)1] [i_3] [i_3] [i_6] [i_4] [(short)11] = var_5;
                        var_20 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)100)) >> ((((-(((/* implicit */int) (unsigned char)233)))) + (235)))));
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (signed char)116))));
                        var_22 = ((((((/* implicit */_Bool) (short)-27313)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-90)))) << (((/* implicit */int) (_Bool)1)));
                        arr_28 [i_2] [i_3] [i_3] [i_6] = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((int) var_1))) + (var_6))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -175461080870822176LL)) ? (2133822754508566623LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)67))))))));
                    }
                    for (unsigned int i_7 = 3; i_7 < 22; i_7 += 3) 
                    {
                        var_23 ^= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) 1486746326U)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -922380490)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_7] [(signed char)22] [i_4] [i_3 - 1] [(signed char)12])) ? (175461080870822154LL) : (985162418487296LL)))) : (((((/* implicit */_Bool) 61653394)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))))));
                        arr_31 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */short) (+(((((/* implicit */_Bool) (unsigned char)236)) ? (((((/* implicit */_Bool) (unsigned short)35969)) ? (((/* implicit */int) arr_18 [i_2] [i_2] [i_2] [i_7])) : (((/* implicit */int) (unsigned char)40)))) : (((/* implicit */int) (unsigned short)28049))))));
                        var_24 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_21 [(short)3] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_2] [i_2] [i_3 + 1] [i_4] [i_3]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_2] [i_2] [i_2] [i_2]))))));
                    }
                }
            } 
        } 
        var_25 += ((/* implicit */unsigned char) min((((/* implicit */int) (short)32479)), (((int) ((int) 2147483638)))));
        arr_32 [i_2] [i_2] = ((/* implicit */short) arr_19 [(short)3] [i_2] [i_2]);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_8 = 2; i_8 < 22; i_8 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_9 = 3; i_9 < 22; i_9 += 1) 
            {
                for (signed char i_10 = 0; i_10 < 23; i_10 += 2) 
                {
                    {
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9622)) ? (((/* implicit */int) arr_38 [i_9 - 1] [i_9 + 1] [(signed char)16] [i_9 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)191)))))));
                        arr_41 [i_8] [i_8] = ((/* implicit */unsigned long long int) arr_34 [i_8 - 1] [i_8 - 1]);
                    }
                } 
            } 
            arr_42 [i_8] = ((/* implicit */unsigned char) var_10);
            var_27 = ((/* implicit */int) (unsigned char)38);
            var_28 = ((/* implicit */int) (short)-10050);
            /* LoopNest 2 */
            for (unsigned short i_11 = 0; i_11 < 23; i_11 += 3) 
            {
                for (unsigned char i_12 = 0; i_12 < 23; i_12 += 1) 
                {
                    {
                        arr_48 [i_2] [(short)20] [i_2] |= ((/* implicit */unsigned int) (unsigned short)59606);
                        arr_49 [i_8] = ((/* implicit */unsigned long long int) (((((_Bool)1) ? (2147483636) : (962908024))) / (((/* implicit */int) arr_25 [i_8 - 1] [i_8 - 2]))));
                        arr_50 [i_2] [i_2] [i_8] [i_12] [i_2] [i_8 - 2] = ((/* implicit */short) ((unsigned long long int) ((var_0) >= (((/* implicit */int) var_7)))));
                    }
                } 
            } 
        }
        for (signed char i_13 = 2; i_13 < 20; i_13 += 4) 
        {
            arr_55 [i_2] [i_13] [i_13] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_13 + 1])) ? (((/* implicit */int) arr_43 [i_13 - 2] [i_2] [i_2] [0ULL])) : (((/* implicit */int) arr_43 [i_2] [i_2] [i_2] [i_2]))))) ^ (min(((((_Bool)1) ? (976166843U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) arr_36 [i_13]))))));
            var_29 = (~(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)82))))) ? (((int) 159272967)) : (min((2147483647), (((/* implicit */int) arr_53 [i_2] [i_2] [i_2])))))));
        }
    }
    for (unsigned char i_14 = 3; i_14 < 17; i_14 += 1) 
    {
        var_30 += ((/* implicit */short) min((((unsigned char) (((_Bool)1) ? (3318800438U) : (arr_52 [4U] [(unsigned short)16] [i_14])))), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)95)) | (((/* implicit */int) (unsigned char)0))))) > (arr_21 [i_14] [i_14]))))));
        /* LoopNest 3 */
        for (unsigned char i_15 = 0; i_15 < 18; i_15 += 1) 
        {
            for (signed char i_16 = 4; i_16 < 17; i_16 += 1) 
            {
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    {
                        arr_66 [(_Bool)1] [i_15] [i_14] [i_17] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)171))));
                        var_31 = ((/* implicit */unsigned long long int) min((min((((((/* implicit */_Bool) arr_39 [(unsigned short)13] [21U] [19U] [i_15] [21U] [19U])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)255)))), (min((((/* implicit */int) arr_15 [i_15])), (-721787160))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32759)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_14 - 2] [22U] [i_16]))) : (arr_14 [i_16])))) ? (((/* implicit */int) min((var_5), (((/* implicit */short) arr_43 [i_14] [i_14] [i_14] [i_14]))))) : (((/* implicit */int) (_Bool)1))))));
                    }
                } 
            } 
        } 
    }
}
