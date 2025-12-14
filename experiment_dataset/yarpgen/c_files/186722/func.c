/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186722
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 14; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_0] [2U] [(_Bool)1] = ((/* implicit */unsigned long long int) min((max((arr_2 [i_0]), (((/* implicit */long long int) arr_10 [i_2 - 2] [i_2 + 2] [i_2 + 1] [i_2] [i_2] [i_2 + 3])))), (((/* implicit */long long int) max((((unsigned int) var_1)), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (var_13))))))));
                            arr_13 [i_1] [i_2 + 1] [i_1] = ((/* implicit */unsigned long long int) var_14);
                        }
                    } 
                } 
                var_16 = ((/* implicit */long long int) arr_8 [i_1] [13] [i_1] [13]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_4 = 3; i_4 < 19; i_4 += 3) 
    {
        for (unsigned short i_5 = 1; i_5 < 18; i_5 += 3) 
        {
            for (unsigned short i_6 = 1; i_6 < 17; i_6 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 1; i_8 < 17; i_8 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((unsigned char) var_12))), ((~(arr_16 [i_4 - 3] [i_5 - 1])))));
                                arr_28 [i_4] [i_4] [i_6] [i_8] = var_5;
                                arr_29 [i_5 + 1] [i_5] [i_8] [i_6] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_16 [i_4 - 2] [3LL])))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) 67092480U))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_26 [i_4 + 1])), (4770404726969117782ULL))))))) : (min(((~(((/* implicit */int) (signed char)127)))), (((/* implicit */int) var_7))))));
                                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) var_6))) ? (((/* implicit */int) arr_26 [i_4 - 1])) : (((/* implicit */int) arr_14 [i_6 + 1] [i_8 + 2]))))) & (((unsigned int) min((var_10), (((/* implicit */long long int) var_3))))))))));
                            }
                        } 
                    } 
                    arr_30 [i_4 + 1] [i_4 - 2] [i_6] = ((/* implicit */long long int) arr_26 [i_4]);
                    /* LoopSeq 3 */
                    for (unsigned int i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        var_19 = ((/* implicit */short) max((arr_15 [i_4]), (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)219)), (503316480))))));
                        var_20 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)56))));
                    }
                    for (signed char i_10 = 0; i_10 < 20; i_10 += 3) 
                    {
                        var_21 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) ^ (arr_33 [i_10] [i_6] [i_5 + 2] [i_4 + 1])));
                        /* LoopSeq 2 */
                        for (signed char i_11 = 1; i_11 < 17; i_11 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned short) var_4);
                            var_23 = ((((/* implicit */_Bool) arr_26 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (min((((/* implicit */unsigned long long int) ((_Bool) -1489208658))), (16085554728837198241ULL))));
                        }
                        for (signed char i_12 = 0; i_12 < 20; i_12 += 4) 
                        {
                            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_12)))) % (-1524408262457471565LL)))) ? (max((((/* implicit */int) (short)-2936)), (1988907678))) : (((/* implicit */int) min((arr_24 [i_4 + 1] [i_5 + 2] [i_6] [i_12] [i_5 + 2] [9ULL]), (arr_24 [i_12] [(_Bool)1] [i_6 + 3] [(unsigned short)7] [(_Bool)1] [(unsigned short)7])))))))));
                            arr_41 [i_4] = ((/* implicit */unsigned short) (_Bool)1);
                        }
                    }
                    /* vectorizable */
                    for (unsigned long long int i_13 = 2; i_13 < 18; i_13 += 2) 
                    {
                        arr_44 [i_6 + 1] &= ((/* implicit */unsigned int) ((unsigned char) arr_38 [i_4 - 2]));
                        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_25 [i_4 + 1] [i_5 + 2] [i_6 + 1] [i_13 + 2] [i_13 + 2])) & (arr_27 [i_4 - 3] [i_5 - 1] [i_6 + 1]))))));
                        /* LoopSeq 4 */
                        for (short i_14 = 1; i_14 < 16; i_14 += 3) 
                        {
                            var_26 |= ((/* implicit */long long int) var_14);
                            arr_47 [(unsigned char)9] [i_13 - 1] [i_6 - 1] [i_13 - 1] [i_14] [i_13] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)45958))));
                        }
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned int) ((arr_35 [i_4] [i_4 - 3] [i_5 - 1] [i_13] [i_13 + 2]) ? (((/* implicit */int) arr_35 [i_4 - 2] [i_4 - 3] [i_5 - 1] [i_13] [i_13 + 2])) : (((/* implicit */int) arr_35 [i_4] [i_4 - 3] [i_5 - 1] [i_4] [i_13 + 2]))));
                            var_28 -= (~(((/* implicit */int) (!(((/* implicit */_Bool) 2370156953U))))));
                            var_29 = ((((/* implicit */unsigned int) arr_19 [2] [i_5])) ^ (((var_9) / (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [5] [i_5] [(short)13] [17LL] [i_15]))))));
                            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((unsigned int) arr_35 [(unsigned short)12] [i_5] [i_5] [i_13] [i_13])) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_45 [i_15] [i_15] [i_15] [i_15] [i_15])) : (((/* implicit */int) arr_22 [i_4]))))))))));
                        }
                        for (int i_16 = 3; i_16 < 19; i_16 += 1) 
                        {
                            arr_52 [i_4] [i_5] = ((/* implicit */int) var_1);
                            var_31 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_34 [i_4] [i_4 - 1] [i_4] [i_4] [i_4] [i_4 - 1]))) < (1945323641226789544LL)));
                            var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_34 [i_13 + 1] [i_16 - 2] [i_5 - 1] [i_6 + 2] [i_16] [i_16 - 2]))));
                        }
                        for (unsigned short i_17 = 0; i_17 < 20; i_17 += 3) 
                        {
                            var_33 = ((((/* implicit */_Bool) arr_54 [i_4] [i_4 - 3] [i_4] [i_13] [(unsigned short)11])) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_4] [i_5] [i_6] [i_13] [5]))) : (((((/* implicit */long long int) 2147483647)) ^ (281474842492928LL))));
                            arr_55 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) (+(arr_54 [i_5] [i_13 - 2] [i_17] [i_17] [i_17])));
                            var_34 = ((/* implicit */signed char) (_Bool)1);
                        }
                    }
                    var_35 = ((/* implicit */short) ((signed char) min((((unsigned long long int) arr_18 [i_4] [i_4] [i_6])), (((/* implicit */unsigned long long int) (unsigned short)9)))));
                    var_36 = ((/* implicit */unsigned long long int) min((min(((short)31415), (((/* implicit */short) (unsigned char)240)))), (((/* implicit */short) (!((_Bool)1))))));
                }
            } 
        } 
    } 
}
