/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164985
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
    for (int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) max((((((arr_1 [i_0 + 1]) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_0 [i_0 + 2])) + (9176))))), (((/* implicit */long long int) var_2)))))));
                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (unsigned short)52785))));
                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) -9138599406760292034LL))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_19 *= ((/* implicit */unsigned int) arr_7 [i_0] [i_2 - 1] [i_1 - 1] [i_0 + 2] [i_0]);
                            arr_9 [i_0 + 3] [i_0] [i_1] [i_2] [i_2 - 1] [i_3] = ((/* implicit */unsigned short) ((signed char) var_13));
                            arr_10 [i_0 - 1] [i_2] = ((/* implicit */unsigned int) ((unsigned long long int) max((((/* implicit */long long int) (short)32767)), (var_14))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)46102)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 2; i_4 < 13; i_4 += 3) 
    {
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 14; i_6 += 3) 
                {
                    for (unsigned char i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (+(arr_15 [i_4 - 2] [i_4 - 1]))))));
                            var_22 = ((/* implicit */unsigned long long int) ((unsigned char) var_6));
                            arr_19 [i_4] [i_4] [i_4] [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) | (((((/* implicit */_Bool) max((((/* implicit */int) arr_3 [i_4])), (-1385621019)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)46))))) : ((~(1629045428473740206ULL)))))));
                            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) arr_6 [i_5 - 1] [i_4 - 1] [i_5 - 1])) >= (((/* implicit */int) arr_6 [i_5 - 1] [i_4 - 1] [(_Bool)1]))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */int) max((var_24), ((((((+(var_7))) + (2147483647))) >> (((var_9) - (3073247562U)))))));
                                arr_31 [i_5] [i_5] [i_5] [i_5] [i_5] [i_8] = 16817698645235811386ULL;
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_11 = 0; i_11 < 14; i_11 += 3) 
                {
                    for (unsigned int i_12 = 0; i_12 < 14; i_12 += 3) 
                    {
                        {
                            var_25 *= ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (252U));
                            var_26 *= ((/* implicit */signed char) var_0);
                            var_27 = ((/* implicit */signed char) var_10);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_13 = 0; i_13 < 14; i_13 += 3) 
                {
                    for (unsigned int i_14 = 2; i_14 < 12; i_14 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned long long int) arr_18 [i_4 - 2] [i_5] [i_13] [i_13] [i_14] [i_14]);
                            arr_40 [i_4] [i_4] [i_13] [i_13] [i_5] [i_14 - 2] = var_6;
                            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) min((max((min((((/* implicit */unsigned int) var_2)), (255U))), (((/* implicit */unsigned int) arr_8 [(unsigned char)14] [i_14] [i_14 - 2] [i_14 + 2] [i_14] [(short)11])))), (((/* implicit */unsigned int) arr_36 [i_4] [i_4] [(unsigned short)10] [i_14])))))));
                            arr_41 [i_4] [i_4 - 2] [i_4 - 2] [i_5] [i_4] = ((/* implicit */long long int) ((min((778636008U), (((/* implicit */unsigned int) arr_21 [i_5] [i_4] [i_14 + 2] [i_5])))) >> (((max((arr_11 [i_4 + 1] [i_5 - 1]), (((/* implicit */unsigned long long int) 10163200)))) - (1499851043899588388ULL)))));
                        }
                    } 
                } 
                var_30 -= ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((int) arr_32 [i_4] [i_4 - 1] [i_4 - 1])) : (var_7)))), (((9223372036854775801LL) << (((8126464U) - (8126464U)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        for (long long int i_16 = 2; i_16 < 10; i_16 += 4) 
        {
            for (unsigned short i_17 = 0; i_17 < 13; i_17 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 13; i_18 += 3) 
                    {
                        for (long long int i_19 = 1; i_19 < 9; i_19 += 4) 
                        {
                            {
                                var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) (!((_Bool)1))))));
                                var_32 = ((/* implicit */signed char) ((((/* implicit */int) ((arr_51 [7ULL] [i_19 + 1] [i_19 + 2] [i_19] [i_19 + 3] [i_19] [i_19 + 3]) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))) << (((((var_9) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)59))))) - (3073247584U)))));
                                arr_55 [i_15] [i_15] [i_16] [i_18] [i_19] |= ((/* implicit */unsigned char) var_9);
                                arr_56 [i_15] [i_18] [i_17] [i_16] [i_15] = ((/* implicit */unsigned short) max(((short)-27639), (((/* implicit */short) (signed char)-92))));
                                arr_57 [i_15] [i_15] [9U] [i_15] [(unsigned char)10] = ((/* implicit */unsigned long long int) min((max((var_7), ((-(((/* implicit */int) (_Bool)0)))))), ((+(((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) (signed char)33))));
                    var_34 = ((/* implicit */int) max((var_34), (min((((((/* implicit */int) arr_18 [i_16] [i_16] [i_16 + 3] [i_16] [2LL] [i_16])) * (((/* implicit */int) arr_18 [i_16] [11LL] [i_16 - 2] [(_Bool)1] [i_16] [i_16])))), (((/* implicit */int) var_3))))));
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 13; i_20 += 4) 
                    {
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            {
                                arr_64 [i_15] [i_16 + 2] [i_17] [i_16 + 2] [i_21] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (~((-(((/* implicit */int) var_15))))))), (var_9)));
                                var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) (((((-(((/* implicit */int) (!(var_12)))))) + (2147483647))) << (((min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_20] [i_20]))))), (3607043840U))) - (3607043840U))))))));
                                var_36 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 268U))))) ^ (((/* implicit */int) (short)-2444))));
                                arr_65 [i_15] [i_16] [i_17] [i_20] [i_15] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)62))) & (18446744073709551615ULL)))) ? (arr_11 [i_15] [i_16]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)58485)) + (((/* implicit */int) var_1)))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) max((arr_7 [(_Bool)1] [(signed char)12] [i_17] [i_20] [i_21]), ((short)11288))))))) : (arr_1 [i_16]));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_22 = 0; i_22 < 13; i_22 += 3) 
                    {
                        for (signed char i_23 = 0; i_23 < 13; i_23 += 3) 
                        {
                            {
                                var_37 -= ((/* implicit */unsigned short) var_13);
                                var_38 = ((/* implicit */signed char) arr_25 [i_15] [i_16] [i_22]);
                                var_39 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)42)) / (-828672804)));
                                var_40 = ((/* implicit */unsigned short) max((((9223372036854775807LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) arr_4 [i_16 - 1] [i_16 + 1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_24 = 0; i_24 < 16; i_24 += 4) 
    {
        for (unsigned int i_25 = 1; i_25 < 14; i_25 += 4) 
        {
            for (signed char i_26 = 1; i_26 < 14; i_26 += 4) 
            {
                {
                    var_41 = ((/* implicit */short) max((var_41), (((/* implicit */short) (~(var_0))))));
                    var_42 += ((/* implicit */unsigned long long int) min(((unsigned char)86), (((/* implicit */unsigned char) (_Bool)1))));
                    /* LoopNest 2 */
                    for (long long int i_27 = 2; i_27 < 15; i_27 += 4) 
                    {
                        for (unsigned char i_28 = 4; i_28 < 12; i_28 += 3) 
                        {
                            {
                                arr_88 [i_25 + 2] [i_25] [4U] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((16820002379217731681ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_76 [i_25 + 2] [i_25] [i_27 + 1])))))), (((unsigned long long int) arr_76 [i_25 + 2] [i_25] [i_26]))));
                                var_43 = ((/* implicit */int) ((((/* implicit */unsigned long long int) max((-794602040), (((/* implicit */int) (unsigned char)16))))) > (18283209862611637041ULL)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_29 = 1; i_29 < 13; i_29 += 4) 
                    {
                        for (unsigned int i_30 = 0; i_30 < 16; i_30 += 4) 
                        {
                            {
                                arr_94 [i_25] = ((/* implicit */signed char) 1180596017U);
                                var_44 = ((/* implicit */signed char) max((var_44), (((/* implicit */signed char) 1701087802406426703ULL))));
                                var_45 = ((/* implicit */unsigned int) var_15);
                                var_46 = ((/* implicit */signed char) arr_78 [i_30] [i_29 + 3] [i_24]);
                                arr_95 [i_25] [i_25] [i_25] [i_25] [i_25] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_83 [i_25 + 1] [i_25 - 1] [i_26 + 2] [i_29 + 1])))) || ((!(((/* implicit */_Bool) ((unsigned char) (signed char)-1)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
