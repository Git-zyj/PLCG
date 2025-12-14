/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104857
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            var_11 *= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_1 [i_1]))))) <= (arr_2 [i_1])));
            var_12 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (!(arr_0 [i_0])))) : (((/* implicit */int) (unsigned short)0))));
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 1) 
            {
                var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((arr_5 [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 2]) && (arr_5 [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 2]))))));
                var_14 = ((/* implicit */short) (!(arr_5 [i_2 - 1] [i_2 - 1] [i_2] [i_2])));
                arr_7 [i_0] [i_2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_0]))));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_10 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned int) ((1531677202U) != (var_5)));
                arr_11 [i_0] [i_1] = ((((/* implicit */long long int) ((/* implicit */int) ((var_2) == (((/* implicit */int) arr_9 [i_1] [i_1])))))) ^ (((((-9223372036854775805LL) + (9223372036854775807LL))) << (((arr_6 [14U]) + (2771791367597403568LL))))));
                arr_12 [i_0] [i_1] [i_3] |= ((/* implicit */short) ((var_9) ? (((/* implicit */long long int) 63U)) : (((((/* implicit */_Bool) 3336827126644338776LL)) ? (-5212125698807836705LL) : (arr_6 [2U])))));
                /* LoopSeq 2 */
                for (unsigned int i_4 = 2; i_4 < 16; i_4 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_5 = 3; i_5 < 16; i_5 += 2) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5212125698807836705LL)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_0))))) : (((arr_6 [i_5]) ^ (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
                        var_16 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -5212125698807836703LL)) ? (5212125698807836722LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-5630))))))));
                        arr_18 [(unsigned char)2] [i_4] [i_1] [i_0] [i_1] [(unsigned char)2] |= ((/* implicit */int) ((unsigned char) arr_4 [i_4] [i_4] [i_4 + 1] [(_Bool)1]));
                        var_17 = ((/* implicit */signed char) (-(((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_1] [i_4 - 2] [i_4 - 2]))));
                        var_18 = ((/* implicit */unsigned char) arr_8 [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_4 - 2]);
                    }
                    var_19 += ((/* implicit */unsigned short) 13636595249275535380ULL);
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_1])) + ((-(((/* implicit */int) var_1)))))))));
                    var_21 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5212125698807836710LL)) ? (((/* implicit */unsigned long long int) -5212125698807836686LL)) : (13636595249275535380ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)5380)) >= (1230491522))))) : (4230683309U)));
                }
                for (long long int i_6 = 3; i_6 < 16; i_6 += 1) 
                {
                    var_22 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)56123)) ? (5212125698807836676LL) : (5212125698807836686LL))) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35371)))));
                    /* LoopSeq 1 */
                    for (long long int i_7 = 0; i_7 < 17; i_7 += 1) 
                    {
                        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) arr_22 [i_7] [i_7] [i_7]))));
                        arr_25 [i_6 - 2] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_13 [i_0] [i_6] [i_7])) ? (var_6) : (((/* implicit */unsigned long long int) -1089928734))))));
                        var_24 += ((/* implicit */long long int) (+(((((/* implicit */_Bool) 4230683309U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5381))) : (var_6)))));
                        var_25 |= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_7] [i_1]))))) != (((/* implicit */int) ((((/* implicit */int) var_10)) != (var_2))))));
                    }
                    var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((arr_0 [i_6 - 3]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_1 [i_6 - 2])))))));
                    var_27 |= ((/* implicit */int) var_0);
                }
                var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (5212125698807836707LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-30796)))))) ? (2035267428174303351LL) : (((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) | (var_2)))))))));
            }
            var_29 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-13052))))) : (((/* implicit */int) arr_17 [i_0] [i_1] [i_0] [i_0] [i_0] [4LL] [i_0]))));
        }
        /* LoopNest 2 */
        for (short i_8 = 3; i_8 < 16; i_8 += 2) 
        {
            for (signed char i_9 = 3; i_9 < 16; i_9 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_10 = 0; i_10 < 17; i_10 += 4) 
                    {
                        var_30 |= ((/* implicit */long long int) arr_30 [i_8 + 1] [i_9 + 1]);
                        var_31 |= ((((/* implicit */_Bool) arr_26 [i_0] [i_8 - 3])) ? (((/* implicit */int) arr_27 [i_8 - 2] [i_9 - 3] [i_9 - 3])) : (((/* implicit */int) arr_20 [i_10] [i_9 + 1] [i_8 + 1] [i_0])));
                        arr_33 [i_0] = ((((/* implicit */long long int) ((/* implicit */int) ((signed char) (short)24052)))) != (((var_9) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (arr_2 [i_9]))));
                        var_32 &= ((/* implicit */short) (((+(-5212125698807836685LL))) > (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)127)))))));
                        var_33 &= (!(((/* implicit */_Bool) ((-3623544318965801453LL) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                    }
                    var_34 = ((unsigned char) ((var_7) << (((/* implicit */int) (unsigned short)0))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_11 = 2; i_11 < 14; i_11 += 3) 
        {
            for (long long int i_12 = 1; i_12 < 14; i_12 += 1) 
            {
                {
                    var_35 = ((/* implicit */short) (_Bool)1);
                    /* LoopSeq 1 */
                    for (unsigned int i_13 = 4; i_13 < 16; i_13 += 2) 
                    {
                        var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (-3381743976428366897LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46141)))))) ? (var_6) : (((/* implicit */unsigned long long int) arr_2 [i_0]))));
                        var_37 = ((/* implicit */long long int) ((short) arr_38 [i_12 + 2] [i_11] [i_11 + 2] [i_11 + 2]));
                        var_38 = ((((/* implicit */_Bool) 4810148824434016238ULL)) ? (-5212125698807836684LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_11 - 1] [i_12] [i_13]))));
                    }
                }
            } 
        } 
    }
    for (unsigned char i_14 = 2; i_14 < 13; i_14 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_15 = 0; i_15 < 17; i_15 += 3) 
        {
            for (unsigned char i_16 = 1; i_16 < 15; i_16 += 1) 
            {
                for (unsigned long long int i_17 = 0; i_17 < 17; i_17 += 3) 
                {
                    {
                        arr_51 [6U] [i_15] &= ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_32 [i_14 + 3] [i_14] [i_14 + 3] [i_14 + 3]))))) << (((((((/* implicit */_Bool) 2805571059U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_15] [i_16] [i_15]))) : (1824727476U))) - (4294967165U)))))), (((((/* implicit */_Bool) arr_24 [i_16 + 1])) ? (arr_24 [i_16 + 2]) : (arr_24 [i_16 - 1])))));
                        var_39 = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)-16158)) + (2147483647))) << (((4230683300U) - (4230683300U)))));
                    }
                } 
            } 
        } 
        var_40 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (9211413742795539844ULL)))) ? (((/* implicit */long long int) max((var_5), (1489396236U)))) : (-5212125698807836731LL)))) ? (((arr_5 [i_14] [i_14] [i_14] [i_14 + 4]) ? (((((/* implicit */_Bool) (unsigned char)220)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (64283965U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_14] [i_14 - 1]))))) : (var_7)));
        /* LoopSeq 1 */
        for (short i_18 = 0; i_18 < 17; i_18 += 1) 
        {
            var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_14 + 4] [i_14 + 4] [i_14 + 1] [i_14 - 1] [i_14 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((7502390650608354143LL) <= (((/* implicit */long long int) ((/* implicit */int) var_9))))))) : (arr_19 [i_14 - 2] [i_14 - 2] [i_14 + 3] [i_14 - 1] [i_14 + 1]))))));
            var_42 = ((/* implicit */unsigned int) min((var_42), (((/* implicit */unsigned int) ((unsigned long long int) max((((((/* implicit */_Bool) -7502390650608354162LL)) ? (-1081336915) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_50 [i_18] [i_18] [i_14] [i_18]))))))));
        }
    }
    var_43 = ((/* implicit */long long int) ((((unsigned long long int) var_6)) << (((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)16383)), (64283965U)))) ? (((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_4))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))))) - (64U)))));
}
