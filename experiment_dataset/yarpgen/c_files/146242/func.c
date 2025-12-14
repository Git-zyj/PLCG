/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146242
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
    for (long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */long long int) max((arr_6 [i_0] [10LL] [i_0] [i_0 + 3]), (((/* implicit */int) var_9))));
                    var_13 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((arr_7 [i_0 + 2] [10LL] [10LL]) <= (var_8)))) ^ (((/* implicit */int) var_12))))) ? (((/* implicit */long long int) max(((~(arr_8 [i_0] [3LL] [i_0 - 1] [i_0]))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)0)))))))) : (((-1LL) / (((/* implicit */long long int) arr_4 [i_2] [i_2 + 1]))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            {
                arr_15 [i_3] = ((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)0)) : (arr_10 [i_3] [i_4])))) : (var_7));
                var_14 -= var_12;
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 19; i_5 += 4) 
    {
        for (long long int i_6 = 3; i_6 < 15; i_6 += 4) 
        {
            {
                var_15 = ((/* implicit */long long int) ((unsigned short) ((((var_7) - (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_5]))))) ^ (((0LL) | (var_5))))));
                var_16 = ((/* implicit */unsigned char) (unsigned short)14336);
                /* LoopSeq 3 */
                for (unsigned short i_7 = 2; i_7 < 16; i_7 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_8 = 1; i_8 < 18; i_8 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned char) ((short) ((((((/* implicit */_Bool) -6932497867484287650LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_7] [i_7]))) : (var_2))) * (((/* implicit */long long int) ((/* implicit */int) var_0))))));
                        var_18 = ((/* implicit */int) ((((var_8) / (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_8 + 1] [i_6] [i_7 + 3] [i_6 - 2]))))) == (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)53454), ((unsigned short)6161)))))));
                        arr_28 [i_5] [i_6] [i_5] [i_5] = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) (short)4319)), (6193209306833519955LL))) | (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)8))) & (2LL)))));
                    }
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_3))));
                }
                for (unsigned short i_9 = 0; i_9 < 19; i_9 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (unsigned short)0))));
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 1; i_10 < 17; i_10 += 2) 
                    {
                        for (long long int i_11 = 2; i_11 < 16; i_11 += 4) 
                        {
                            {
                                arr_36 [(unsigned char)17] [i_6] = ((/* implicit */unsigned char) ((var_5) & (((/* implicit */long long int) ((((/* implicit */int) var_12)) + (1051962284))))));
                                var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((unsigned int) arr_34 [i_5] [(short)2] [6LL] [(short)2] [i_6] [(unsigned char)3]))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_23 [i_5] [i_6] [i_11] [i_10]))))) : (((var_1) + (0LL))))) ^ (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_6] [i_6] [i_6] [i_6]))) : (var_1)))));
                                var_22 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (~(var_8)))))) ? (arr_27 [i_5]) : (((var_7) / (max((var_10), (((/* implicit */long long int) arr_23 [i_9] [7LL] [i_9] [18LL]))))))));
                                var_23 |= (((+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_3)) : (var_11))))) / ((+(((var_8) / (((/* implicit */long long int) var_3)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 4; i_12 < 18; i_12 += 3) 
                    {
                        arr_39 [(short)17] [(short)17] [(short)17] [i_6] [(unsigned short)13] [i_12] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_17 [i_12 + 1])))), (((((/* implicit */_Bool) arr_17 [i_5])) ? (((/* implicit */int) (unsigned char)143)) : (((/* implicit */int) arr_17 [i_6 - 1]))))));
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_33 [1LL] [i_6] [(unsigned short)2] [i_12])) ? (((((/* implicit */int) (unsigned short)24894)) / (((/* implicit */int) (unsigned short)14336)))) : (((/* implicit */int) ((short) (unsigned short)24897)))));
                        var_25 = ((/* implicit */int) ((((long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)170))) : (14LL)))) ^ (((((/* implicit */_Bool) ((((/* implicit */int) arr_35 [10U] [10U] [i_9] [i_9] [i_9] [i_6] [i_6])) + (((/* implicit */int) arr_16 [14]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_12] [i_12] [i_6]))) : (max((((/* implicit */long long int) arr_18 [5LL] [i_12 - 3])), (72055395014672384LL)))))));
                    }
                    arr_40 [i_5] [i_6] = ((/* implicit */long long int) (!(((((/* implicit */_Bool) arr_17 [i_6 + 1])) || (((/* implicit */_Bool) arr_17 [i_6 + 3]))))));
                }
                for (unsigned short i_13 = 0; i_13 < 19; i_13 += 1) /* same iter space */
                {
                    var_26 = var_0;
                    var_27 |= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_0)))))) < (var_7)))) <= (((int) min((var_6), (arr_32 [i_13] [i_5] [i_6] [(short)18] [i_5] [i_5]))))));
                    var_28 = ((/* implicit */long long int) max((var_28), ((~(((((/* implicit */_Bool) arr_38 [i_5] [i_5] [i_6 - 2])) ? (var_5) : (((/* implicit */long long int) var_3))))))));
                    /* LoopNest 2 */
                    for (long long int i_14 = 0; i_14 < 19; i_14 += 1) 
                    {
                        for (int i_15 = 1; i_15 < 15; i_15 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_42 [i_14] [i_5] [i_5]))));
                                var_30 = ((((/* implicit */_Bool) arr_18 [i_5] [i_5])) ? (((/* implicit */long long int) ((var_3) / (arr_45 [(unsigned short)5] [i_6 - 3] [(unsigned short)5] [i_6] [i_6 - 2] [(unsigned char)16])))) : (var_8));
                                var_31 = ((/* implicit */long long int) ((unsigned int) min((((((/* implicit */_Bool) arr_18 [i_5] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_5] [i_5] [i_5] [i_5]))) : (var_11))), (((/* implicit */long long int) arr_33 [3LL] [i_6] [i_6 - 2] [i_6])))));
                                arr_49 [i_6] [i_6] [i_13] [i_5] [i_15] [13LL] [15] = ((/* implicit */long long int) ((unsigned short) arr_19 [i_5]));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_16 = 0; i_16 < 19; i_16 += 1) 
                    {
                        for (int i_17 = 3; i_17 < 18; i_17 += 1) 
                        {
                            {
                                arr_56 [i_5] [i_6] [i_13] [(unsigned char)7] [i_6] [(unsigned short)12] = ((((/* implicit */_Bool) min((7984443202930798927LL), (15LL)))) ? (((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)40628)) ? (((/* implicit */int) (unsigned short)57887)) : (((/* implicit */int) (short)-32482))))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10))));
                                arr_57 [i_6] [i_6] [(unsigned char)15] [i_16] [i_5] [i_13] [(unsigned char)2] = ((/* implicit */unsigned char) -15LL);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned short) var_4);
}
