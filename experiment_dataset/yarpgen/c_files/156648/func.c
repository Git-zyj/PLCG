/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156648
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_14 ^= ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_8 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((867515848U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2 - 2] [i_1] [i_2 + 4])))));
                    arr_9 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)22)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)135)) ? (2663643289U) : (1631324002U)))) : (((unsigned long long int) (short)-27825))));
                    arr_10 [i_0] [6ULL] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_1] [i_1])) > (71419041))))));
                }
            } 
        } 
        arr_11 [i_0] [i_0] = arr_5 [(unsigned short)13];
    }
    for (short i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        arr_14 [i_3] [i_3] = min((((/* implicit */int) arr_12 [i_3] [i_3])), (arr_13 [i_3] [i_3]));
        arr_15 [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) 1238460989)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)41))) : (var_4))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1631324006U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)27943))))))))));
        var_15 = ((/* implicit */unsigned int) ((unsigned char) arr_13 [i_3] [i_3]));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 18; i_4 += 4) 
    {
        var_16 = ((/* implicit */short) (-(((/* implicit */int) var_1))));
        arr_19 [i_4] = ((/* implicit */_Bool) arr_12 [i_4] [i_4]);
    }
    for (long long int i_5 = 0; i_5 < 17; i_5 += 2) 
    {
        arr_22 [16LL] [16LL] &= ((/* implicit */signed char) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) arr_21 [i_5])), (3371071630U))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_5]))) : (arr_16 [i_5] [i_5])))))) ? (((/* implicit */unsigned int) min(((((_Bool)1) ? (((/* implicit */int) (short)21226)) : (((/* implicit */int) (unsigned char)179)))), (((((/* implicit */_Bool) arr_13 [i_5] [i_5])) ? (var_9) : (((/* implicit */int) var_2))))))) : (max((((arr_16 [i_5] [i_5]) - (var_8))), (arr_17 [i_5])))));
        /* LoopSeq 2 */
        for (short i_6 = 0; i_6 < 17; i_6 += 2) /* same iter space */
        {
            arr_26 [i_5] [i_5] [i_5] = min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_21 [i_6]))))), (((((/* implicit */_Bool) arr_21 [i_5])) ? (((/* implicit */unsigned long long int) -1294002515)) : (var_11))));
            arr_27 [i_5] [i_5] [i_6] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)-53)) ? (((/* implicit */unsigned int) -1456942066)) : (1631324009U)))));
            var_17 = (unsigned char)195;
        }
        for (short i_7 = 0; i_7 < 17; i_7 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_8 = 0; i_8 < 17; i_8 += 2) 
            {
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) arr_24 [i_5] [i_5]))));
                arr_34 [i_5] = ((/* implicit */unsigned int) arr_23 [i_7] [4LL]);
            }
            arr_35 [i_7] [i_7] [i_7] = ((/* implicit */signed char) 3698235470U);
        }
    }
    for (long long int i_9 = 0; i_9 < 12; i_9 += 3) 
    {
        arr_38 [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_11)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((_Bool) (signed char)64)))))) && (((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) arr_33 [i_9] [i_9] [i_9] [i_9]))) - (-2129822285516095532LL))), (((/* implicit */long long int) (+(var_9)))))))));
        var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((int) ((unsigned short) (signed char)-120))))));
        /* LoopNest 2 */
        for (unsigned short i_10 = 0; i_10 < 12; i_10 += 3) 
        {
            for (long long int i_11 = 0; i_11 < 12; i_11 += 3) 
            {
                {
                    arr_43 [11] [i_10] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_9] [i_9])) ? (((unsigned long long int) var_11)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_10] [i_11])))));
                    arr_44 [i_9] [i_9] [7LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4115103604U)) ? (((/* implicit */unsigned long long int) 3427451454U)) : (10376927415442989258ULL)));
                    /* LoopSeq 1 */
                    for (signed char i_12 = 2; i_12 < 11; i_12 += 1) 
                    {
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((var_12) % (var_12)))))) ? ((~(arr_46 [i_12 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_12 - 1]))))))));
                        arr_48 [i_9] [i_10] [i_9] [i_11] [i_11] [i_12] = ((/* implicit */long long int) 3427451439U);
                        arr_49 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(-4944904949634328571LL)))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)174)), ((short)23232))))) : (max((-5697197295691096566LL), (((/* implicit */long long int) 867515858U))))));
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (~(((((/* implicit */_Bool) 10100141096891331134ULL)) ? (16974582614175200453ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11061))))))))));
                    }
                    var_22 = ((/* implicit */_Bool) (((!(var_1))) ? (((/* implicit */int) (signed char)52)) : (((/* implicit */int) ((unsigned char) ((var_1) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-3150097906280133830LL)))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_13 = 0; i_13 < 12; i_13 += 4) 
        {
            for (int i_14 = 0; i_14 < 12; i_14 += 3) 
            {
                for (long long int i_15 = 0; i_15 < 12; i_15 += 3) 
                {
                    {
                        arr_59 [i_9] [i_9] [i_9] [i_14] [i_15] = arr_56 [i_9];
                        /* LoopSeq 3 */
                        for (short i_16 = 0; i_16 < 12; i_16 += 3) 
                        {
                            arr_62 [i_9] [i_13] [i_14] [i_9] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_9] [i_13])) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_3 [(unsigned short)4] [i_13])))) : (((/* implicit */int) arr_36 [i_16]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_15]))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_8)) : (arr_30 [i_16] [i_14] [i_13])))));
                            arr_63 [i_9] = ((/* implicit */short) var_8);
                            var_23 = ((/* implicit */_Bool) max((var_23), (var_1)));
                            arr_64 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (unsigned char)123))))));
                            arr_65 [(signed char)2] [(signed char)1] [i_9] [i_15] [i_16] = ((/* implicit */unsigned char) arr_16 [i_9] [i_9]);
                        }
                        for (unsigned char i_17 = 0; i_17 < 12; i_17 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned int) (unsigned short)27034);
                            arr_69 [i_9] [i_9] [i_14] [i_14] [i_15] [i_15] [i_17] = ((((/* implicit */_Bool) ((2532324569233499395ULL) % (16231772533626010658ULL)))) ? (max((var_4), (((/* implicit */unsigned int) var_9)))) : (((((/* implicit */_Bool) ((unsigned char) (unsigned char)125))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-14669))) : (arr_16 [i_9] [i_13]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_10) && (((/* implicit */_Bool) arr_55 [i_9] [i_13] [i_9] [i_15] [i_15])))))))));
                        }
                        /* vectorizable */
                        for (signed char i_18 = 0; i_18 < 12; i_18 += 1) 
                        {
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_70 [i_13] [i_15] [i_9] [i_13] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_30 [i_9] [i_9] [i_9])));
                            arr_72 [(unsigned short)4] [i_9] [i_14] [i_13] [i_9] [i_9] = ((/* implicit */signed char) var_4);
                            var_26 = ((/* implicit */short) ((unsigned int) arr_53 [i_9] [i_9] [i_9]));
                        }
                        arr_73 [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_54 [i_14] [i_13])) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)-38)) : (((/* implicit */int) (signed char)-70)))))))) & (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                    }
                } 
            } 
        } 
    }
    var_27 = ((/* implicit */unsigned char) max(((-(((((/* implicit */_Bool) (short)-6836)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_8))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) 1102488894))) ? (((/* implicit */int) var_5)) : (var_12))))));
}
