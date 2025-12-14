/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141772
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
    for (short i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_7 [(short)10] |= ((/* implicit */short) (~((-(max((200224440), (((/* implicit */int) arr_1 [(_Bool)1] [(_Bool)1]))))))));
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_6 [i_2] [i_2 - 2] [(short)5] [i_0 - 1])) : (((/* implicit */int) var_4)))) : (((arr_3 [i_0 + 1]) ? (((/* implicit */int) (short)-3)) : (((/* implicit */int) arr_3 [i_0 + 1]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_3 = 1; i_3 < 13; i_3 += 2) 
    {
        arr_10 [i_3 - 1] [i_3] = var_12;
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 4; i_4 < 12; i_4 += 2) 
        {
            for (short i_5 = 0; i_5 < 14; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        for (signed char i_7 = 1; i_7 < 13; i_7 += 1) 
                        {
                            {
                                arr_24 [i_3] [i_3] [i_4 + 2] [i_5] [6U] [i_7] = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned short)49152)) ^ (((/* implicit */int) var_13)))) / (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_1 [i_5] [i_5])) : (((/* implicit */int) (signed char)62))))));
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_21 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3 - 1])) : (((/* implicit */int) (short)-2266))));
                                arr_25 [i_3 - 1] [i_3] [i_3] [i_3] [(short)11] [(short)3] [i_3 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_21 [i_4] [i_4 - 2] [i_4] [i_4] [i_4] [i_4] [i_4 - 1])) : (((/* implicit */int) arr_4 [i_4] [i_4 - 2] [i_4]))));
                                var_22 = ((/* implicit */signed char) (!(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (var_11)))));
                            }
                        } 
                    } 
                    arr_26 [i_3 + 1] [i_5] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_3 - 1] [i_5])) && (((/* implicit */_Bool) arr_2 [i_3 - 1] [(short)8]))));
                    arr_27 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) var_8);
                }
            } 
        } 
    }
    for (short i_8 = 0; i_8 < 24; i_8 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) var_1);
        arr_32 [i_8] = ((/* implicit */unsigned short) (~(976572383U)));
    }
    /* vectorizable */
    for (short i_9 = 0; i_9 < 24; i_9 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_10 = 0; i_10 < 24; i_10 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_11 = 0; i_11 < 24; i_11 += 1) 
            {
                arr_41 [i_11] [11] [i_11] = ((/* implicit */short) (!(((/* implicit */_Bool) var_19))));
                arr_42 [i_9] [i_11] [i_11] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_37 [(unsigned short)18] [(unsigned short)18]))));
            }
            var_24 ^= ((/* implicit */signed char) (-(((/* implicit */int) arr_39 [i_9] [i_9] [i_9] [(short)22]))));
        }
        arr_43 [i_9] = ((/* implicit */short) ((((/* implicit */int) var_16)) >> (((((((/* implicit */_Bool) arr_31 [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (-4453176825086679955LL))) - (61837LL)))));
        arr_44 [i_9] = ((/* implicit */short) arr_38 [i_9] [i_9] [i_9] [i_9]);
        /* LoopSeq 1 */
        for (signed char i_12 = 0; i_12 < 24; i_12 += 3) 
        {
            arr_48 [i_9] [i_9] [i_9] |= ((/* implicit */_Bool) ((((/* implicit */int) ((arr_38 [i_12] [i_9] [i_12] [i_9]) == (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
            arr_49 [i_12] = ((/* implicit */unsigned int) var_17);
        }
    }
    /* LoopNest 2 */
    for (long long int i_13 = 1; i_13 < 16; i_13 += 4) 
    {
        for (long long int i_14 = 0; i_14 < 17; i_14 += 1) 
        {
            {
                arr_55 [(short)0] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) max(((short)-4096), (arr_45 [i_13 - 1])))) : (((/* implicit */int) max(((unsigned short)16361), (((/* implicit */unsigned short) var_8)))))));
                arr_56 [i_13] [i_14] |= ((/* implicit */signed char) min(((~(((/* implicit */int) var_14)))), (((((/* implicit */int) ((((/* implicit */_Bool) 6808519310447051039LL)) && (((/* implicit */_Bool) var_5))))) * (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_7))))))));
                /* LoopNest 3 */
                for (short i_15 = 1; i_15 < 15; i_15 += 4) 
                {
                    for (short i_16 = 1; i_16 < 16; i_16 += 3) 
                    {
                        for (unsigned short i_17 = 0; i_17 < 17; i_17 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */short) ((((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_1)))) ? (((((/* implicit */int) (short)9789)) ^ (((/* implicit */int) arr_51 [i_13 + 1] [i_14])))) : (((((/* implicit */int) arr_31 [i_14])) | (((/* implicit */int) var_15))))))) <= (min((var_19), (((/* implicit */unsigned int) arr_53 [i_13] [i_17] [i_15]))))));
                                var_26 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-32200)) : (((/* implicit */int) (unsigned short)19288))))))))));
                                var_27 += ((/* implicit */unsigned short) min((((((/* implicit */int) min(((_Bool)1), (var_16)))) << (((arr_50 [i_13] [i_15 + 1]) + (1679689157))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-30076)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_14))))) ? (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_46 [i_13] [i_13])) - (43914))))) : (((((/* implicit */int) arr_36 [i_13])) + (-445651169)))))));
                                var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (max((((var_1) | (((/* implicit */long long int) ((/* implicit */int) arr_63 [i_17] [i_16] [i_14] [i_14] [i_13 - 1] [(_Bool)1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)32754)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_52 [i_16 + 1]))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-91)) ? (var_19) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
                            }
                        } 
                    } 
                } 
                arr_65 [i_13] [i_13] [i_13] = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) (short)6982)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32303))) : (var_11))), (((/* implicit */unsigned int) arr_54 [i_13 + 1])))) >> (((((/* implicit */int) var_17)) - (78)))));
                arr_66 [i_13] [i_14] = ((/* implicit */signed char) arr_50 [i_13 - 1] [i_14]);
            }
        } 
    } 
}
