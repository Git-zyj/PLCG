/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146981
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-25426))) : (arr_4 [i_0]))))));
            arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */int) arr_1 [i_1] [i_0])), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_1]))))));
            var_17 = ((/* implicit */_Bool) ((var_11) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (max((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) > (((/* implicit */int) var_10))))), (291813842U)))));
            arr_7 [i_1] [i_1] = ((((((arr_4 [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_1]))))) >> (((((((/* implicit */_Bool) arr_5 [i_1] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)255)))) - (27460))))) * (((arr_4 [i_0]) % (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-10911))))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((((/* implicit */short) arr_8 [i_0] [i_2])), ((short)25425)))) ? (max((arr_5 [i_2] [11]), (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), ((-(arr_5 [i_0] [i_2])))));
            /* LoopNest 3 */
            for (signed char i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) 109470315);
                            arr_19 [i_5] [i_4] [i_3] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4] [i_4])) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_5] [i_0]))) : (var_4))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_16 [i_0]), (((/* implicit */short) var_9)))))))))));
                        }
                    } 
                } 
            } 
        }
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) arr_12 [i_0] [i_0]))));
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (short i_7 = 0; i_7 < 14; i_7 += 4) 
            {
                for (signed char i_8 = 0; i_8 < 14; i_8 += 4) 
                {
                    {
                        arr_28 [i_6] [i_6] [i_6] = ((/* implicit */short) var_1);
                        /* LoopSeq 4 */
                        for (short i_9 = 1; i_9 < 10; i_9 += 4) 
                        {
                            var_20 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) 4003153453U)) ? (((/* implicit */long long int) max((arr_9 [i_9 - 1]), (arr_18 [i_9 - 1] [i_9 + 2] [i_9 + 3] [i_9 + 1] [i_9 + 2])))) : (((var_4) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (_Bool)1)) : (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                            arr_31 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(unsigned short)4] [i_6] [i_6] [(unsigned short)4] = ((/* implicit */unsigned int) ((((((/* implicit */int) ((((/* implicit */int) arr_20 [i_9] [i_0] [i_0])) <= (((/* implicit */int) var_9))))) - (((/* implicit */int) arr_27 [i_0] [i_0] [i_6] [i_9 + 4])))) | (arr_18 [i_8] [i_8] [i_8] [i_8] [i_8])));
                            var_21 |= ((/* implicit */unsigned int) (((~(arr_18 [i_7] [i_7] [i_9 + 4] [i_7] [i_7]))) >= (((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_5 [i_8] [(unsigned short)11])))))))));
                        }
                        for (short i_10 = 3; i_10 < 12; i_10 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned char) var_2);
                            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) arr_5 [i_10] [12U]))));
                            arr_35 [i_8] [i_6] [8ULL] [8ULL] [i_8] = ((/* implicit */unsigned int) arr_8 [i_6] [i_6]);
                        }
                        for (int i_11 = 0; i_11 < 14; i_11 += 4) 
                        {
                            arr_39 [i_0] [i_0] [i_7] [i_6] [i_6] [i_0] [i_0] = ((/* implicit */int) var_5);
                            arr_40 [i_6] [i_0] [i_7] [i_7] [(short)9] [i_6] = ((/* implicit */signed char) var_14);
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 4) 
                        {
                            arr_43 [i_0] [i_6] [i_7] [i_8] [i_12] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)33)) ? (((/* implicit */unsigned int) ((((((/* implicit */int) arr_42 [i_12] [i_7] [4U] [i_0])) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))))) : (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)62261)) ? (((/* implicit */int) arr_42 [i_6] [i_8] [i_7] [i_6])) : (((/* implicit */int) (unsigned char)0))))), (((unsigned int) (signed char)123))))));
                            var_24 ^= ((/* implicit */short) ((signed char) min((((/* implicit */int) arr_16 [i_7])), (arr_21 [i_0] [8ULL]))));
                        }
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) && (((/* implicit */_Bool) ((var_8) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))))));
    }
    for (unsigned int i_13 = 0; i_13 < 14; i_13 += 4) /* same iter space */
    {
        arr_47 [i_13] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((min((((/* implicit */int) arr_34 [i_13] [i_13] [i_13] [i_13] [(unsigned short)0])), (-1))) * (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_13 [i_13] [i_13] [(short)1] [(short)5] [i_13] [i_13])) : (((/* implicit */int) arr_14 [i_13] [i_13]))))))) ? (min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_22 [i_13]))))), (arr_24 [i_13]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_8 [i_13] [i_13])), (arr_0 [i_13] [(_Bool)1])))))));
        /* LoopSeq 2 */
        for (int i_14 = 1; i_14 < 12; i_14 += 4) /* same iter space */
        {
            arr_51 [i_14 + 2] [i_14] [i_13] = ((((/* implicit */int) max((arr_42 [i_13] [3ULL] [i_14 - 1] [i_13]), (arr_42 [i_13] [(_Bool)1] [i_14 + 2] [i_14])))) ^ (min((((/* implicit */int) ((short) arr_32 [i_13]))), (((((/* implicit */_Bool) arr_49 [i_13] [i_13] [i_14])) ? (((/* implicit */int) arr_38 [i_14] [i_13])) : (((/* implicit */int) arr_1 [i_13] [i_13])))))));
            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((unsigned long long int) ((unsigned short) var_15))))));
        }
        /* vectorizable */
        for (int i_15 = 1; i_15 < 12; i_15 += 4) /* same iter space */
        {
            arr_54 [i_15] [i_15] = ((/* implicit */unsigned long long int) var_7);
            arr_55 [i_15] [i_15] = ((/* implicit */int) (+(1372309633U)));
        }
    }
    for (unsigned int i_16 = 0; i_16 < 14; i_16 += 4) /* same iter space */
    {
        var_27 = ((/* implicit */short) ((((/* implicit */int) var_10)) > ((+(((/* implicit */int) arr_30 [(short)10] [(short)10] [i_16] [i_16] [i_16]))))));
        arr_58 [i_16] = ((/* implicit */signed char) ((int) arr_48 [i_16] [i_16] [i_16]));
    }
    var_28 = ((/* implicit */unsigned short) (short)25425);
    var_29 = (+(((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (var_15))));
}
