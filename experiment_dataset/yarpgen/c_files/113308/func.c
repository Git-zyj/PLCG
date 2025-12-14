/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113308
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((7693914341424184136ULL), (((/* implicit */unsigned long long int) (unsigned short)8112))))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))));
    var_16 = ((/* implicit */long long int) var_9);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_17 += ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0] [i_0]))) ? (((/* implicit */int) ((_Bool) (unsigned short)8085))) : ((-(((/* implicit */int) arr_1 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) arr_7 [i_2] [i_2])))));
                        var_19 *= ((/* implicit */signed char) ((_Bool) ((long long int) max((((/* implicit */long long int) 33554431U)), (arr_9 [i_0] [i_0] [i_0] [i_0])))));
                    }
                    /* vectorizable */
                    for (signed char i_4 = 2; i_4 < 9; i_4 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (short i_5 = 1; i_5 < 11; i_5 += 2) 
                        {
                            var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)0))));
                            arr_15 [i_2] [i_2] = ((/* implicit */_Bool) ((short) (unsigned char)152));
                            arr_16 [i_1] [i_4] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) arr_5 [i_1] [i_2] [i_4 - 1]);
                            arr_17 [i_0] [i_2] [(unsigned short)6] [i_4 + 4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_5 + 2] [6U] [i_0])) ? (((/* implicit */int) arr_5 [i_5 + 1] [i_5] [i_5 + 1])) : (((/* implicit */int) arr_5 [i_5 - 1] [i_2] [(short)5]))));
                            arr_18 [i_2] [i_1] [i_1] [i_1] [i_4] = ((/* implicit */unsigned char) ((long long int) var_6));
                        }
                        /* LoopSeq 2 */
                        for (long long int i_6 = 0; i_6 < 13; i_6 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (unsigned char)253))));
                            arr_21 [i_2] [i_1] [i_2] [i_2] [i_4] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)67)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_12 [i_6] [i_1] [i_1] [i_0])))) : ((-(arr_13 [i_0] [i_1] [i_1] [(_Bool)1] [i_4] [i_6])))));
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_20 [i_4 + 1] [i_4] [i_4] [i_4] [i_4] [i_4] [i_6])) : (((/* implicit */int) var_13)))))));
                        }
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned int) ((arr_22 [i_7 - 1] [i_7] [i_7 - 1] [i_4 - 2] [i_2] [i_1]) >= (arr_22 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_4 + 3] [(unsigned short)7] [i_0])));
                            var_24 = ((short) arr_9 [i_4 - 2] [i_4 - 2] [i_7 - 1] [i_4 - 2]);
                            var_25 = ((2297462222900347431LL) << (((/* implicit */int) var_9)));
                        }
                    }
                    for (unsigned char i_8 = 1; i_8 < 11; i_8 += 3) 
                    {
                        var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_8 + 2] [8ULL] [i_8 + 2] [i_8 + 1] [i_8 + 2])) ? (arr_23 [i_8 + 1] [(signed char)12] [i_8 + 1] [(signed char)12] [i_8]) : (arr_23 [i_8 - 1] [i_8 + 2] [i_8 + 1] [i_8 + 1] [i_8])))) | (((((/* implicit */unsigned long long int) ((var_3) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0] [i_0] [i_2] [i_2] [11ULL]))) : (arr_23 [i_0] [i_0] [(short)9] [i_2] [(short)9])))) & ((~(arr_26 [i_0] [i_0] [i_2] [i_0])))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 1; i_9 < 12; i_9 += 3) 
                        {
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) arr_1 [i_8 + 1] [i_8 + 2])) : (((/* implicit */int) min((arr_25 [i_9] [(signed char)6] [i_2] [i_1] [i_0]), (((/* implicit */signed char) var_9)))))))) ? ((-(((/* implicit */int) ((signed char) (short)(-32767 - 1)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))));
                            var_28 |= ((/* implicit */unsigned short) arr_6 [i_0] [i_1] [(_Bool)1] [i_9]);
                            var_29 ^= ((/* implicit */_Bool) min(((signed char)-1), ((signed char)-123)));
                            var_30 = ((/* implicit */unsigned long long int) max((((/* implicit */signed char) (!(arr_27 [i_1] [i_8 + 2] [i_9 - 1] [i_9 - 1])))), (arr_8 [i_8 + 2] [i_9 + 1])));
                        }
                    }
                    var_31 = ((/* implicit */short) min(((_Bool)1), ((!(((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0]))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_10 = 0; i_10 < 13; i_10 += 2) 
                    {
                        var_32 = ((/* implicit */long long int) var_1);
                        var_33 += ((/* implicit */signed char) var_4);
                    }
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        arr_34 [i_0] [i_2] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) (unsigned char)152)) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_28 [i_0] [i_1] [i_2]))))) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_10))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_12 = 0; i_12 < 13; i_12 += 1) 
                        {
                            var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_0] [i_1])))))) ? (((/* implicit */int) arr_25 [i_0] [i_1] [i_2] [(_Bool)1] [i_2])) : (((/* implicit */int) arr_27 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 - 1]))));
                            var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((((/* implicit */int) arr_20 [i_0] [10LL] [i_11] [4] [i_2] [10LL] [i_0])) ^ (((/* implicit */int) arr_8 [i_11 - 1] [i_11 - 1])))))));
                        }
                        for (long long int i_13 = 0; i_13 < 13; i_13 += 3) 
                        {
                            var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */short) max((var_3), (var_14)))), (((short) arr_10 [i_2] [i_11] [i_2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_12)), (arr_2 [i_1]))))))) : ((~(((/* implicit */int) min((((/* implicit */short) (unsigned char)6)), ((short)(-32767 - 1)))))))));
                            arr_40 [i_2] [i_2] [i_2] [i_11] [i_11] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-47)) ? (((/* implicit */int) (signed char)58)) : ((((_Bool)0) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_1] [i_1] [i_0] [i_11] [i_13]))))) : (((/* implicit */int) max(((signed char)125), ((signed char)-126))))))));
                            arr_41 [i_0] [i_0] [i_2] [3ULL] [i_13] = min(((-(((((/* implicit */_Bool) arr_2 [i_0])) ? (2297462222900347441LL) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [4U] [i_2]))))))), (((/* implicit */long long int) (~(((/* implicit */int) (!(var_13))))))));
                        }
                        var_37 = (!(((/* implicit */_Bool) min((max((((/* implicit */unsigned char) arr_19 [i_0] [i_1] [i_2] [i_0] [i_2])), ((unsigned char)240))), (((/* implicit */unsigned char) (!((_Bool)1))))))));
                    }
                }
            } 
        } 
        var_38 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_0] [i_0])))))));
        arr_42 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (((-(((/* implicit */int) arr_1 [i_0] [(_Bool)1])))) >> (((var_7) - (5908749185590371710LL))))))));
    }
    var_39 = var_8;
}
