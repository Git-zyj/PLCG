/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166320
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
    var_11 = ((/* implicit */signed char) (+(((var_10) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [0] = (unsigned short)3713;
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_2 = 1; i_2 < 19; i_2 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (int i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    arr_14 [(unsigned short)14] [i_2 + 3] [i_2 + 1] [i_1] [(unsigned short)14] &= ((/* implicit */int) ((signed char) var_1));
                    arr_15 [i_0] = ((/* implicit */signed char) ((unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)66)))));
                    arr_16 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */int) var_1);
                    arr_17 [18U] &= ((/* implicit */long long int) (~((~(((/* implicit */int) arr_9 [(signed char)11] [i_0] [i_0]))))));
                }
                arr_18 [(_Bool)1] [(_Bool)1] = ((/* implicit */signed char) arr_5 [i_2 - 1] [i_2] [i_2 + 2]);
                /* LoopSeq 2 */
                for (unsigned short i_4 = 2; i_4 < 21; i_4 += 4) 
                {
                    arr_21 [i_0] [i_2 + 1] [i_2] [(signed char)15] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */int) (unsigned short)18785)) * (((/* implicit */int) arr_8 [i_0] [i_0] [i_2]))))));
                    arr_22 [i_4] [i_4] [i_1] [i_4] [i_0] = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) var_0))) & (var_6))) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_25 [i_0] [i_0] [(signed char)18] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))));
                    arr_26 [(unsigned char)2] [i_1] [i_1] [i_5] [i_1] [i_5] = ((/* implicit */_Bool) (unsigned char)181);
                    arr_27 [i_0] [i_1] [(_Bool)1] [8ULL] = ((/* implicit */unsigned char) arr_0 [i_0]);
                }
                arr_28 [(signed char)12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)180)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -269658501))))) : (((/* implicit */int) (unsigned char)66))));
            }
            for (unsigned char i_6 = 1; i_6 < 19; i_6 += 3) /* same iter space */
            {
                arr_31 [i_0] [i_0] [i_0] [0U] = ((/* implicit */unsigned short) ((arr_11 [i_0] [i_1] [i_6 + 1] [i_0] [(signed char)16]) / (((((/* implicit */_Bool) (unsigned short)18785)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_6]))) : (3886514924U)))));
                arr_32 [i_0] [(signed char)9] [i_6] [i_6] = ((/* implicit */unsigned char) arr_24 [i_6 + 1] [i_6 + 2] [14U] [i_0]);
                arr_33 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((unsigned int) (signed char)-47)) / (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0])))));
                arr_34 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((var_1) * (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) + (var_5)))));
            }
            for (unsigned char i_7 = 1; i_7 < 19; i_7 += 3) /* same iter space */
            {
                arr_37 [i_1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)0)) << (((((/* implicit */int) var_8)) - (26583))))) - (((/* implicit */int) arr_12 [16U] [2LL] [i_1] [(_Bool)1]))));
                arr_38 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (3219388062U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            }
            arr_39 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_19 [i_0] [i_1] [19])) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_1] [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_8)))) : (((long long int) var_8))));
            arr_40 [i_0] [i_1] [5U] = ((/* implicit */unsigned long long int) ((short) arr_24 [i_1] [i_0] [i_0] [i_0]));
            arr_41 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
        }
        arr_42 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_35 [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned short)19]))) : ((+(var_10)))));
        /* LoopSeq 1 */
        for (unsigned char i_8 = 0; i_8 < 22; i_8 += 4) 
        {
            arr_45 [i_0] = ((/* implicit */short) ((unsigned char) var_7));
            arr_46 [i_8] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_4))));
        }
    }
    /* vectorizable */
    for (signed char i_9 = 0; i_9 < 24; i_9 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_10 = 0; i_10 < 24; i_10 += 4) 
        {
            /* LoopSeq 2 */
            for (short i_11 = 2; i_11 < 23; i_11 += 1) 
            {
                arr_56 [i_9] [i_10] [20ULL] [i_10] = ((/* implicit */unsigned short) ((_Bool) ((var_7) ? (-692674303) : (((/* implicit */int) var_2)))));
                arr_57 [i_9] [i_9] [i_11 - 2] = ((/* implicit */int) ((unsigned char) (unsigned short)5321));
                arr_58 [i_9] [i_10] [i_11] = ((/* implicit */short) (!(((/* implicit */_Bool) var_0))));
            }
            for (unsigned short i_12 = 0; i_12 < 24; i_12 += 1) 
            {
                arr_61 [i_9] = ((/* implicit */unsigned char) var_10);
                arr_62 [i_10] [i_10] [i_10] [12U] = ((unsigned short) (short)-6479);
            }
            arr_63 [i_9] = (i_9 % 2 == zero) ? (((/* implicit */short) ((((/* implicit */int) var_7)) >> (((((/* implicit */int) arr_55 [11LL] [i_9] [i_10])) - (53)))))) : (((/* implicit */short) ((((/* implicit */int) var_7)) >> (((((((/* implicit */int) arr_55 [11LL] [i_9] [i_10])) - (53))) + (46))))));
        }
        for (unsigned short i_13 = 0; i_13 < 24; i_13 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_14 = 1; i_14 < 22; i_14 += 2) 
            {
                arr_68 [i_13] = ((/* implicit */short) ((int) (!(((/* implicit */_Bool) var_1)))));
                arr_69 [i_9] [i_13] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_51 [i_9] [i_9] [i_9])) ^ (((/* implicit */int) var_4))));
                arr_70 [i_9] [i_9] [i_14] [(unsigned short)4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2915644567U))));
            }
            arr_71 [i_9] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_67 [i_9] [i_9] [7U] [i_13])) ? (((/* implicit */int) arr_47 [i_9])) : (((/* implicit */int) arr_67 [5U] [i_9] [i_13] [i_13]))));
            arr_72 [i_9] [i_13] [i_9] = ((/* implicit */unsigned int) (_Bool)1);
        }
        arr_73 [i_9] = ((/* implicit */signed char) ((short) 6329219284315966568LL));
    }
    var_12 = ((/* implicit */int) var_5);
    var_13 = ((/* implicit */signed char) (~((-(((((/* implicit */int) (_Bool)0)) << (((/* implicit */int) (_Bool)1))))))));
}
