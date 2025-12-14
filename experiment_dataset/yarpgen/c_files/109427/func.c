/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109427
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
    var_14 += ((/* implicit */signed char) (+(((var_9) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-46)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 2; i_3 < 18; i_3 += 2) 
                    {
                        arr_12 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((unsigned short) (unsigned char)217));
                        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((-775136377), (((/* implicit */int) (signed char)-98))))) ? (((/* implicit */unsigned long long int) 33060518U)) : (arr_10 [i_3 - 2] [i_0] [i_0] [i_0 - 1])))) ? (((int) arr_9 [i_0] [i_2] [i_1] [i_0])) : (min(((~(775136376))), ((~(((/* implicit */int) arr_0 [i_0] [i_0]))))))));
                        var_16 = ((/* implicit */int) ((unsigned int) (short)-30932));
                        var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_2 - 2] [i_0] [i_2 - 2] [i_2]))));
                    }
                    arr_13 [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */int) ((_Bool) 775136377))) != (((/* implicit */int) ((3914960094U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0]))))))));
                    arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) 493730593U))))))));
                }
            } 
        } 
        arr_15 [i_0] = ((/* implicit */int) (_Bool)1);
    }
    /* vectorizable */
    for (unsigned int i_4 = 4; i_4 < 16; i_4 += 2) 
    {
        arr_18 [i_4] [i_4 + 2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_9 [i_4] [i_4 + 1] [i_4 + 1] [i_4]))));
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) -239794882)) && (((/* implicit */_Bool) 3501558953251263281ULL))));
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (+(((1912051819U) ^ (((/* implicit */unsigned int) -1652442182)))))))));
        var_20 = -1962788199;
    }
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 21; i_7 += 2) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) 609995068U)))));
                            arr_28 [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) (signed char)-104)))))) ? (((((/* implicit */int) arr_24 [i_8] [i_7] [i_6])) & (2147035189))) : (((/* implicit */int) (short)30937))));
                            /* LoopSeq 2 */
                            for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 2) /* same iter space */
                            {
                                var_22 = ((/* implicit */int) (-(arr_9 [i_8] [i_6] [i_7] [i_8])));
                                arr_31 [i_8] [i_9] [i_8] [i_8] = ((/* implicit */int) ((((arr_8 [i_6] [i_8] [i_6] [i_8]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_9] [i_8] [i_8] [i_5]))) : (3914960078U))) >> (((min((arr_22 [i_5]), (((/* implicit */unsigned int) arr_26 [i_5] [i_6] [i_7])))) / (((/* implicit */unsigned int) max((((/* implicit */int) arr_26 [i_8] [i_6] [i_6])), (-1652442182))))))));
                                var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) arr_29 [i_5] [i_6] [i_7] [i_8] [i_9]))) / (((((/* implicit */int) arr_30 [i_5] [i_6] [i_7] [i_8] [i_9])) / (((/* implicit */int) arr_30 [i_8] [i_6] [i_6] [i_8] [i_9]))))));
                                arr_32 [i_6] [i_8] [i_6] [i_6] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_5] [i_8] [i_8] [i_9])))))))), (((unsigned int) 775136377))));
                            }
                            for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 2) /* same iter space */
                            {
                                var_24 = ((/* implicit */signed char) (short)-24359);
                                var_25 = ((signed char) (signed char)-84);
                                var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_6] [i_8] [i_5])))))));
                                var_27 &= ((int) max((((/* implicit */unsigned long long int) ((arr_21 [i_6] [i_7] [i_10]) ? (-1006940497) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) 993381367U)) ? (arr_1 [i_8] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_5] [i_5] [i_5])))))));
                                arr_35 [i_8] [i_8] [i_8] [i_8] [i_5] [i_5] = ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) (short)26809)))));
                            }
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (int i_11 = 0; i_11 < 21; i_11 += 2) 
                {
                    var_28 = ((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned char)146))))));
                    arr_39 [i_11] [i_5] [i_5] = ((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)15))))))));
                    /* LoopSeq 2 */
                    for (signed char i_12 = 0; i_12 < 21; i_12 += 2) /* same iter space */
                    {
                        arr_42 [i_5] [i_6] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((_Bool) 1540379898045514006ULL)))) ? (((/* implicit */int) arr_41 [i_12])) : (((/* implicit */int) (_Bool)1))));
                        var_29 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) 1144436408)), (((arr_1 [i_5] [i_11]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5] [i_5])))))));
                        arr_43 [i_5] [i_6] [i_11] [i_11] [i_11] [i_12] = ((signed char) ((unsigned short) arr_6 [i_12] [i_12] [i_12] [i_5]));
                    }
                    /* vectorizable */
                    for (signed char i_13 = 0; i_13 < 21; i_13 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_14 = 3; i_14 < 18; i_14 += 2) 
                        {
                            var_30 = ((/* implicit */_Bool) ((unsigned int) (!((_Bool)1))));
                            arr_48 [i_6] [i_13] [i_14] [i_6] [i_5] = ((/* implicit */_Bool) arr_5 [i_11]);
                            var_31 = ((/* implicit */unsigned long long int) arr_45 [i_5]);
                        }
                        var_32 ^= ((/* implicit */unsigned int) (unsigned short)52729);
                        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1540379898045514008ULL)) || (arr_47 [i_5] [i_6] [i_11] [i_6] [i_6])));
                        var_34 &= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_5]))) ^ (13500771045178772647ULL)));
                    }
                    arr_49 [i_11] [i_6] [i_5] = ((/* implicit */unsigned short) min(((+(((/* implicit */int) arr_47 [i_5] [i_5] [i_6] [i_6] [i_5])))), (((/* implicit */int) arr_3 [i_5]))));
                }
                for (int i_15 = 1; i_15 < 20; i_15 += 2) 
                {
                    arr_53 [i_15] [i_5] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((2154432348U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58315))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (short)17714))))))) ? ((-(((/* implicit */int) (unsigned char)79)))) : ((+(((/* implicit */int) arr_37 [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_15]))))));
                    var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) -838547236)) ? ((-(((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_5] [i_15] [i_5] [i_5])) && (((/* implicit */_Bool) (unsigned short)38412))))))) : ((+((~(456414987)))))));
                    arr_54 [i_5] [i_5] = ((/* implicit */unsigned char) ((unsigned short) arr_30 [i_15] [i_15] [i_15] [i_5] [i_15]));
                    var_36 = arr_6 [i_5] [i_5] [i_6] [i_15];
                }
            }
        } 
    } 
    var_37 = ((/* implicit */signed char) 14161278445472481808ULL);
}
