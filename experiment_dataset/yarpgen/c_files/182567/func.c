/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182567
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned char) min((((long long int) arr_1 [i_0])), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)231))))))))));
        var_11 = var_2;
        var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) var_3))));
    }
    for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -2318397935826492897LL))));
        var_14 -= ((/* implicit */short) arr_5 [i_1] [i_1]);
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            for (unsigned int i_3 = 1; i_3 < 19; i_3 += 3) 
            {
                for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    {
                        var_15 -= ((/* implicit */unsigned char) ((unsigned short) var_1));
                        arr_17 [i_1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_3 + 2])) ? (((/* implicit */int) (short)12717)) : (((/* implicit */int) (unsigned short)61688))))) ? (((/* implicit */int) ((signed char) arr_13 [i_3 - 1] [i_3 - 1] [i_3 + 2] [i_3 + 2]))) : (((/* implicit */int) ((unsigned char) var_1)))));
                        var_16 = ((/* implicit */unsigned long long int) (((((!(((/* implicit */_Bool) var_8)))) || (((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) (unsigned short)42092)) : (((((/* implicit */_Bool) ((unsigned char) arr_14 [i_1]))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)50782))))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)42092)) / (((/* implicit */int) (unsigned char)5))));
        arr_18 [i_1] [i_1] = ((/* implicit */unsigned char) min((arr_8 [i_1]), (arr_9 [i_1] [i_1] [i_1])));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_22 [i_5] = ((/* implicit */_Bool) ((int) arr_1 [i_5]));
        arr_23 [i_5] = ((/* implicit */unsigned short) var_0);
        arr_24 [i_5] = ((/* implicit */short) ((((/* implicit */int) min((arr_20 [i_5]), (arr_20 [i_5])))) + (((((/* implicit */_Bool) arr_15 [i_5] [i_5])) ? (((/* implicit */int) ((short) var_6))) : (((int) (unsigned char)77))))));
        arr_25 [i_5] [i_5] = ((/* implicit */_Bool) min((((/* implicit */int) (short)-1)), (25)));
        /* LoopNest 3 */
        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 2) 
        {
            for (long long int i_7 = 0; i_7 < 16; i_7 += 4) 
            {
                for (short i_8 = 0; i_8 < 16; i_8 += 3) 
                {
                    {
                        arr_35 [i_5] [i_6] [i_5] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)77)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)187))) : (4294967295U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (((_Bool)1) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) var_7))))))) : (((var_8) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6)))))))));
                        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) min((max((((/* implicit */int) (unsigned char)85)), (2147483637))), (((int) ((((/* implicit */_Bool) (unsigned char)28)) && (var_4)))))))));
                    }
                } 
            } 
        } 
    }
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((signed char) (signed char)127)))));
    /* LoopNest 3 */
    for (unsigned short i_9 = 3; i_9 < 23; i_9 += 3) 
    {
        for (unsigned int i_10 = 2; i_10 < 22; i_10 += 3) 
        {
            for (int i_11 = 0; i_11 < 24; i_11 += 3) 
            {
                {
                    arr_44 [i_9] [i_9] [(signed char)15] [i_10] = ((/* implicit */unsigned short) ((unsigned char) arr_41 [i_9 - 3] [i_10 + 1] [i_10 + 1]));
                    var_20 = (unsigned short)48262;
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 1; i_12 < 21; i_12 += 3) 
                    {
                        for (short i_13 = 0; i_13 < 24; i_13 += 1) 
                        {
                            {
                                var_21 |= ((/* implicit */int) ((unsigned short) ((((/* implicit */int) (short)-28863)) + (((/* implicit */int) (unsigned short)4095)))));
                                var_22 = ((((/* implicit */int) max((min((var_6), (((/* implicit */unsigned short) var_0)))), (var_2)))) ^ (((/* implicit */int) ((short) (short)3060))));
                                arr_49 [i_9] [i_10] [i_11] [i_12] [i_13] = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_48 [i_13] [i_12 + 3] [i_11] [i_10 + 2] [i_9 - 3])) ? (((/* implicit */int) (short)21007)) : (((/* implicit */int) arr_48 [i_9 + 1] [i_9] [i_9 + 1] [i_9 + 1] [i_9 + 1])))));
                                var_23 = ((/* implicit */short) arr_43 [i_10]);
                                arr_50 [i_10] = ((/* implicit */_Bool) var_0);
                            }
                        } 
                    } 
                    arr_51 [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)-20216)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_41 [i_9 - 2] [i_9 + 1] [i_10 - 1])))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)61688)))))));
                    /* LoopNest 2 */
                    for (int i_14 = 2; i_14 < 23; i_14 += 1) 
                    {
                        for (short i_15 = 0; i_15 < 24; i_15 += 3) 
                        {
                            {
                                arr_58 [i_9 - 3] [i_10] [i_11] [i_10] [i_15] = ((unsigned short) ((unsigned char) var_6));
                                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_40 [i_11])) ? (((((((/* implicit */_Bool) (unsigned short)23444)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_46 [i_9] [i_10] [i_9] [i_14 + 1] [(signed char)15] [i_15]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_15] [i_14 - 2] [i_15] [i_14 - 2]))))) : (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) arr_42 [i_9] [i_10] [i_14] [i_15])))), ((-(((/* implicit */int) (unsigned char)0)))))))));
                                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_41 [i_9] [i_10] [(unsigned short)3]))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)3060))))))))));
                                var_26 |= ((/* implicit */short) ((unsigned int) arr_46 [i_9] [i_14] [i_10 - 2] [i_9] [i_10 - 2] [i_9]));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
