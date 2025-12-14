/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187660
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */_Bool) 17915122315234446785ULL);
                var_19 = ((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1 + 1] [i_0])), (13575436152670416938ULL)))));
                /* LoopSeq 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_17) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) == (((/* implicit */int) arr_2 [i_2] [i_2] [i_2]))))) : (((/* implicit */int) arr_0 [i_4 - 1]))))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) ((((/* implicit */int) arr_9 [6LL] [i_2 - 1] [i_1 - 1] [6LL])) == (((/* implicit */int) (short)(-32767 - 1))))))));
                                arr_12 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [i_3] [i_3] [i_3] [i_4]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_21 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) min((var_12), (((/* implicit */unsigned short) arr_5 [i_0] [4LL] [4LL] [4LL])))))))) ? (((/* implicit */unsigned long long int) (-(((arr_9 [6LL] [i_1] [i_1] [i_1]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_5 [i_0] [(unsigned short)0] [i_0] [i_5]))))))) : (531621758475104830ULL)));
                        var_22 = ((/* implicit */unsigned long long int) var_3);
                    }
                    var_23 ^= ((/* implicit */unsigned short) (!(min((arr_0 [i_2 - 1]), (arr_5 [i_1 + 1] [(_Bool)1] [(_Bool)1] [i_0])))));
                }
                for (short i_6 = 0; i_6 < 14; i_6 += 3) 
                {
                    arr_17 [i_1] [i_1 - 1] [i_1] = ((/* implicit */unsigned long long int) (~(((arr_2 [i_1 + 1] [i_1 - 1] [i_1 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 1] [i_1 + 1]))) : (arr_10 [i_0] [i_1] [i_1] [i_1 + 1] [i_1] [i_6] [i_6])))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        for (long long int i_8 = 0; i_8 < 14; i_8 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned short) (+(((min((((/* implicit */unsigned int) arr_0 [i_6])), (arr_15 [i_7] [i_0] [i_0] [i_0]))) << ((((~(((/* implicit */int) arr_2 [i_0] [i_1] [i_6])))) + (14)))))));
                                var_25 += ((/* implicit */unsigned char) arr_11 [i_0] [i_7] [i_7] [i_7] [i_8]);
                                var_26 = ((/* implicit */unsigned long long int) arr_14 [i_7] [i_6] [i_1 - 1]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        arr_26 [i_0] [i_1] [i_1] [i_0] [i_0] [i_1] = ((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? ((~(-8378899202612690963LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_9 + 1]))));
                        var_27 ^= ((/* implicit */unsigned int) arr_18 [i_0] [8U] [i_6] [i_9] [i_6]);
                        var_28 ^= ((/* implicit */_Bool) (+(((((/* implicit */int) arr_23 [i_0] [i_1 - 1] [(short)4] [(short)4])) >> (((/* implicit */int) var_9))))));
                        arr_27 [i_0] [i_0] [i_1 - 1] [i_0] [i_1] = (!(((/* implicit */_Bool) 2718498609412535226ULL)));
                        var_29 = ((/* implicit */_Bool) ((arr_2 [i_1] [i_1 + 1] [i_1 - 1]) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_6 [i_1]))));
                    }
                }
                /* vectorizable */
                for (unsigned short i_10 = 0; i_10 < 14; i_10 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 14; i_11 += 3) 
                    {
                        for (short i_12 = 2; i_12 < 12; i_12 += 4) 
                        {
                            {
                                arr_35 [i_0] [i_1] [i_10] [i_11] [i_0] [i_1] = ((/* implicit */unsigned char) ((-8605182029633372314LL) % (arr_19 [i_0] [i_1] [i_10] [i_1] [i_10] [i_12])));
                                var_30 ^= ((/* implicit */_Bool) arr_10 [i_0] [i_12] [i_0] [i_10] [i_0] [i_12 - 1] [i_12 - 1]);
                                var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_12] [i_11] [i_0]))))))))));
                                var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 8378899202612690960LL)))))));
                            }
                        } 
                    } 
                    var_33 -= ((/* implicit */unsigned int) var_12);
                }
            }
        } 
    } 
    var_34 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_6))))));
    /* LoopNest 3 */
    for (unsigned short i_13 = 0; i_13 < 13; i_13 += 1) 
    {
        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
        {
            for (unsigned short i_15 = 2; i_15 < 11; i_15 += 3) 
            {
                {
                    var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) 2464763138U))));
                    /* LoopNest 2 */
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                    {
                        for (unsigned short i_17 = 0; i_17 < 13; i_17 += 4) 
                        {
                            {
                                arr_54 [i_13] [i_14] [i_13] [i_14] [i_14] [i_15] [i_14] = ((/* implicit */unsigned char) (-(min(((+(((/* implicit */int) var_3)))), (((arr_16 [i_13] [i_13] [i_17]) ? (((/* implicit */int) arr_22 [i_13] [i_13] [i_13] [i_13] [i_13])) : (((/* implicit */int) var_2))))))));
                                var_36 = ((/* implicit */short) (+(var_5)));
                                var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_7 [i_13] [i_14] [i_15] [i_14] [i_17])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (arr_21 [i_13] [i_17] [i_14] [i_16 - 1] [i_17]))) : (((((/* implicit */_Bool) arr_53 [i_17] [i_16] [i_15] [i_13] [i_13])) ? (var_14) : (arr_18 [i_13] [i_17] [i_13] [i_13] [i_13]))))), (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_49 [i_13] [i_14] [i_15 - 1] [i_13] [i_14])))), (((arr_1 [i_16]) ? (((/* implicit */int) arr_44 [i_13] [i_16] [i_15 + 2])) : (((/* implicit */int) arr_20 [i_13] [i_17] [i_14 - 1] [i_15] [i_15] [i_16] [i_17]))))))))))));
                                var_38 ^= ((/* implicit */long long int) arr_36 [i_17] [i_15]);
                                var_39 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (((-(-8378899202612690963LL))) << (((/* implicit */int) ((531621758475104831ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_18 = 1; i_18 < 11; i_18 += 1) 
    {
        for (unsigned short i_19 = 0; i_19 < 12; i_19 += 1) 
        {
            for (short i_20 = 0; i_20 < 12; i_20 += 2) 
            {
                {
                    var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != ((-(arr_8 [i_20] [i_19] [i_19])))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_21 = 0; i_21 < 12; i_21 += 3) 
                    {
                        for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) 
                        {
                            {
                                var_41 -= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((arr_62 [i_20] [i_20] [i_19]) >> (((((/* implicit */int) arr_50 [i_19] [i_19] [i_20] [i_20] [i_22])) - (126)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_25 [i_18]))))) : (arr_10 [i_22] [i_20] [i_20] [i_19] [i_19] [i_20] [i_18])))));
                                arr_65 [i_18] [i_18] [i_21] [i_21] [i_21] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_18 - 1] [i_21] [i_18 - 1] [i_18 + 1] [i_22 + 1] [i_22 + 1] [i_22 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_61 [i_21])) * (((/* implicit */int) arr_38 [i_18] [i_21] [i_22]))))) : ((+(arr_30 [i_21]))))))));
                                var_42 += ((/* implicit */unsigned char) (-(min((arr_29 [i_22 + 1] [i_21] [i_20] [i_20]), (arr_29 [i_22 + 1] [i_22 + 1] [i_19] [i_20])))));
                                arr_66 [i_21] [i_19] [i_21] [i_21] [i_22 + 1] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */int) arr_60 [i_18 + 1] [i_21] [i_21])) + (((/* implicit */int) arr_57 [i_21]))))) ? ((-(((/* implicit */int) arr_34 [i_18 - 1] [i_22] [i_18 - 1] [i_18 - 1] [i_21])))) : (((/* implicit */int) arr_59 [i_20] [i_20]))))));
                            }
                        } 
                    } 
                    var_43 ^= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_18 + 1] [i_19] [i_19] [i_18] [i_18] [i_20])) ? (arr_63 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18 - 1] [i_18]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_20])))))) ? (((((/* implicit */_Bool) arr_49 [i_18] [i_18] [i_20] [i_20] [i_18])) ? (1408387525986871942ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_20] [i_19] [i_19] [i_19]))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_45 [i_20] [i_18])))))))));
                    /* LoopNest 2 */
                    for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
                    {
                        for (short i_24 = 0; i_24 < 12; i_24 += 2) 
                        {
                            {
                                arr_72 [i_19] [i_23] [i_20] = ((/* implicit */short) max((arr_11 [i_18] [i_23] [i_23 - 1] [i_23] [i_18 - 1]), (((/* implicit */unsigned short) (!((_Bool)0))))));
                                var_44 = ((/* implicit */long long int) max((var_44), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_41 [i_18 - 1] [i_18 + 1])) ? (((((/* implicit */int) arr_41 [i_18 - 1] [i_18 - 1])) ^ (((/* implicit */int) arr_61 [i_18 + 1])))) : (((/* implicit */int) min((arr_61 [i_18 - 1]), (arr_61 [i_18 + 1])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_45 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_8))))) : ((~(max((3641806720428661015LL), (((/* implicit */long long int) (unsigned char)127))))))));
}
