/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159303
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
    var_11 &= var_10;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_7 [10ULL] [i_1] [i_1] = ((/* implicit */short) (+((~(((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */long long int) arr_5 [(unsigned char)4] [i_1] [i_0])) : (arr_3 [i_0])))))));
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((var_5), (((/* implicit */short) (!(((/* implicit */_Bool) var_4)))))));
                arr_9 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */int) ((((/* implicit */int) (short)31519)) < (((/* implicit */int) (unsigned short)7937))))), (((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3)))))) : (((/* implicit */int) var_5))));
                var_12 = ((/* implicit */long long int) min((((((/* implicit */_Bool) min((11951008769459557598ULL), (((/* implicit */unsigned long long int) (unsigned char)40))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (min((14191422370142419191ULL), (((/* implicit */unsigned long long int) var_5)))))), (((/* implicit */unsigned long long int) ((arr_4 [i_1] [i_1]) ? (((/* implicit */int) (unsigned char)135)) : (((/* implicit */int) var_8)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            {
                                arr_22 [i_3] = arr_21 [i_2] [i_3] [i_3] [3ULL] [i_5] [i_5];
                                arr_23 [i_3] [i_3] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [(signed char)1] [i_3] [i_5] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_1)))) ? (((/* implicit */int) ((unsigned short) var_9))) : (((/* implicit */int) ((unsigned char) var_4))))));
                            }
                        } 
                    } 
                } 
                var_13 = min((var_1), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) (short)15560))))), (min((arr_3 [i_3]), (((/* implicit */long long int) arr_20 [i_2] [i_2] [8U] [i_3] [7U] [i_2]))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_7 = 0; i_7 < 18; i_7 += 4) 
    {
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((unsigned long long int) var_9))))) ? ((~(min((((/* implicit */unsigned int) var_0)), (var_6))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_26 [i_7] [i_7])), (arr_25 [i_7])))))));
        var_15 = (((-((-(arr_24 [i_7]))))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_24 [i_7]), (((/* implicit */unsigned int) var_5))))) ? (((/* implicit */int) ((_Bool) var_10))) : (((/* implicit */int) var_4))))));
        var_16 = ((/* implicit */short) min(((-(((int) var_2)))), (((/* implicit */int) var_5))));
    }
    for (signed char i_8 = 0; i_8 < 11; i_8 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_9 = 0; i_9 < 11; i_9 += 1) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (int i_10 = 0; i_10 < 11; i_10 += 4) 
            {
                var_17 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_9])) ? (arr_19 [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_8] [(short)9])))))) ? (((((/* implicit */int) var_7)) + (((/* implicit */int) var_8)))) : (((int) (unsigned char)163))));
                var_18 = arr_13 [i_10];
            }
            for (long long int i_11 = 0; i_11 < 11; i_11 += 1) 
            {
                arr_35 [i_11] = ((/* implicit */unsigned int) min((min((var_10), (((/* implicit */unsigned long long int) arr_4 [i_8] [i_8])))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) != (arr_19 [i_11]))))));
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 11; i_12 += 4) 
                {
                    for (long long int i_13 = 0; i_13 < 11; i_13 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_13])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_8])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_26 [i_8] [8ULL]))))) : (min((arr_15 [i_11]), (((/* implicit */unsigned long long int) var_9))))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_36 [i_11] [(unsigned char)9] [i_11] [2U] [8ULL]))));
                            arr_42 [i_8] [i_8] [i_8] [i_11] [i_11] [i_8] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_25 [i_11])), (min((var_10), (((/* implicit */unsigned long long int) arr_2 [i_8]))))))) ? (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (1125895611875328LL))))) : (min((((/* implicit */unsigned long long int) arr_37 [i_8] [i_9] [i_11] [i_11])), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_6)) : (arr_15 [i_11])))))));
                        }
                    } 
                } 
            }
            for (unsigned int i_14 = 0; i_14 < 11; i_14 += 4) 
            {
                /* LoopSeq 2 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [13U])) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) (unsigned char)96))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((unsigned char) var_2))))));
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_7))));
                }
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                {
                    arr_51 [i_16] [i_16] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) var_5)) | (((/* implicit */int) (signed char)82)))), (((/* implicit */int) min((((/* implicit */short) var_9)), (arr_16 [i_16] [i_14] [i_9] [i_16]))))));
                    arr_52 [i_14] |= ((/* implicit */unsigned char) ((int) min((arr_20 [(signed char)4] [i_9] [(signed char)4] [i_14] [i_14] [i_16]), (arr_20 [i_8] [i_9] [i_8] [i_14] [i_8] [i_8]))));
                }
                /* LoopNest 2 */
                for (signed char i_17 = 0; i_17 < 11; i_17 += 2) 
                {
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        {
                            arr_58 [i_8] [i_18] [i_14] [(_Bool)1] [i_9] [i_9] [i_8] = ((/* implicit */unsigned int) min((min((((long long int) arr_44 [i_8] [i_8] [i_14] [i_17])), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) (+(((/* implicit */int) var_8)))))));
                            var_22 = ((/* implicit */short) min((((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned char) (signed char)0)), (var_0))))), (((((/* implicit */_Bool) (-(arr_1 [i_9])))) ? (((/* implicit */int) arr_29 [i_17] [i_18])) : (arr_5 [i_8] [10] [i_14])))));
                            arr_59 [i_18] [i_18] [i_18] [i_8] = ((/* implicit */long long int) ((((/* implicit */int) ((short) min((((/* implicit */unsigned long long int) (unsigned char)244)), (arr_28 [i_8]))))) ^ (((/* implicit */int) min((((/* implicit */short) min(((unsigned char)83), (((/* implicit */unsigned char) arr_41 [i_8] [i_9] [(signed char)6] [i_17] [(signed char)2]))))), (min((((/* implicit */short) arr_43 [i_17] [i_9])), (arr_17 [i_8] [i_9] [i_17] [(short)3]))))))));
                            var_23 -= ((/* implicit */short) ((((/* implicit */int) (unsigned char)127)) << (((arr_32 [i_8] [i_14] [i_8]) - (18220818163124366320ULL)))));
                        }
                    } 
                } 
            }
            var_24 += ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_7), (((/* implicit */unsigned short) var_0)))))) % (((((/* implicit */_Bool) (signed char)-108)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) var_2)) << (((((/* implicit */int) var_5)) + (30695))))) != (((/* implicit */int) arr_33 [(signed char)5] [i_8] [i_9] [3LL]))))))));
        }
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 11; i_19 += 4) 
        {
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                {
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_19 [i_20]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_20] [i_19] [i_8] [i_8] [i_8])))))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_39 [i_8] [i_19] [i_8] [i_20])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_24 [i_20])))), (min((arr_6 [i_8] [i_8]), (((/* implicit */long long int) var_7)))))) : (((/* implicit */long long int) arr_19 [i_20]))));
                    arr_66 [i_8] [i_20] [i_8] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_41 [i_20] [i_20] [i_20] [i_19] [i_8]))))), (((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (var_4))))) - ((+(arr_6 [i_8] [i_8])))))));
                }
            } 
        } 
    }
    for (signed char i_21 = 0; i_21 < 22; i_21 += 4) 
    {
        /* LoopNest 2 */
        for (int i_22 = 0; i_22 < 22; i_22 += 4) 
        {
            for (long long int i_23 = 0; i_23 < 22; i_23 += 4) 
            {
                {
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((+(((/* implicit */int) var_4))))))) ? (((/* implicit */int) arr_69 [(unsigned short)1] [i_22])) : ((~(((/* implicit */int) min((var_4), (((/* implicit */unsigned short) var_5)))))))));
                    var_27 *= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_69 [i_22] [i_23]))));
                }
            } 
        } 
        var_28 = ((/* implicit */signed char) var_8);
        var_29 = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
        arr_73 [i_21] = min((min((arr_71 [i_21] [i_21]), (var_10))), (((((/* implicit */unsigned long long int) arr_68 [i_21])) * (arr_67 [i_21] [i_21]))));
    }
}
