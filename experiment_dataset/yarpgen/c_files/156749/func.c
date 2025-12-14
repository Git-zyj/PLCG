/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156749
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
    var_20 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_4)), (var_15)))) ? (var_2) : (((/* implicit */unsigned long long int) 3466492453654274641LL)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(9205357638345293824LL)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))));
        var_22 ^= ((/* implicit */unsigned char) (-((-(((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))))));
    }
    var_23 = var_5;
    /* LoopNest 2 */
    for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                arr_10 [i_1] = ((/* implicit */unsigned short) var_9);
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    var_24 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)60124)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)239))) : (9205357638345293848LL)))) ? (9205357638345293837LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)239))));
                    arr_13 [i_1] [i_1] [i_3] = ((int) (-(5871162342069281735LL)));
                }
                /* LoopSeq 3 */
                for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60112))) : (-9205357638345293810LL)))) ? (((((/* implicit */_Bool) 9205357638345293830LL)) ? (2357665222929040522LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-7282))))) : (arr_16 [i_1] [i_2] [i_2] [i_4])))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [i_2] [i_2]))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_5)) : (var_17))))) : (((/* implicit */unsigned long long int) var_14))));
                    var_26 = ((/* implicit */long long int) (+(((/* implicit */int) ((short) 10440633952183024779ULL)))));
                }
                /* vectorizable */
                for (unsigned char i_5 = 0; i_5 < 14; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 1; i_6 < 13; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 3; i_7 < 12; i_7 += 4) 
                        {
                            {
                                arr_25 [i_5] [i_1] [8ULL] [i_5] [8ULL] [i_1] [i_1] &= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)239)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                                var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)5412)) ? (-1757924017) : (((/* implicit */int) (unsigned short)65520))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */long long int) min((var_28), (5688032303915866767LL)));
                    arr_26 [(unsigned char)6] [i_5] [i_2] [(unsigned char)6] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-7282)) ? (((/* implicit */int) (unsigned char)143)) : (((/* implicit */int) (unsigned short)65526))));
                    /* LoopSeq 4 */
                    for (int i_8 = 0; i_8 < 14; i_8 += 2) 
                    {
                        var_29 = ((/* implicit */int) (+(arr_16 [i_8] [i_5] [i_2] [i_1])));
                        arr_29 [i_8] [i_1] [i_1] [2LL] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */unsigned long long int) -1022574847)) : (16547537038333512315ULL)))));
                        arr_30 [i_1] [i_2] [i_5] [i_8] [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (_Bool)0)))))));
                    }
                    for (long long int i_9 = 0; i_9 < 14; i_9 += 4) 
                    {
                        arr_33 [i_1] [i_2] [i_1] = ((/* implicit */long long int) ((_Bool) arr_24 [i_1] [i_2] [i_2] [i_1] [i_9]));
                        var_30 = ((/* implicit */unsigned short) (~(arr_2 [i_1])));
                        arr_34 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_9] [i_1]))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_31 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2531)) ? (8810003815751453261ULL) : (((/* implicit */unsigned long long int) -580363891))))) ? (((((/* implicit */_Bool) arr_8 [i_10] [i_2])) ? (arr_3 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1]))))) : (((/* implicit */long long int) 798794903)));
                        var_32 = ((/* implicit */unsigned char) var_18);
                        arr_37 [i_1] [i_1] [i_2] [i_1] [i_2] [i_10] = ((/* implicit */unsigned long long int) (unsigned char)51);
                        arr_38 [i_1] [(_Bool)1] [i_5] |= ((/* implicit */unsigned char) (!(((_Bool) -5337459286484554980LL))));
                    }
                    for (long long int i_11 = 0; i_11 < 14; i_11 += 2) 
                    {
                        arr_41 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)84)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)7282))) : (3381696877U)))) ? (var_3) : (((/* implicit */int) (short)-7310))));
                        var_33 &= ((/* implicit */unsigned int) var_17);
                    }
                }
                for (unsigned int i_12 = 0; i_12 < 14; i_12 += 4) 
                {
                    arr_46 [i_12] [i_1] [i_1] = ((((/* implicit */_Bool) (+(arr_12 [i_1] [i_1] [i_2] [i_12])))) ? (((((/* implicit */_Bool) var_7)) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) 1138036413904502663LL)));
                    /* LoopSeq 2 */
                    for (long long int i_13 = 0; i_13 < 14; i_13 += 1) /* same iter space */
                    {
                        arr_49 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_13] [i_13] [i_1] [i_1] [(unsigned short)7] [i_1])) ? (var_1) : (arr_42 [i_12])))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)112))))) : (min((((/* implicit */long long int) -1541183784)), (var_13)))))) ? (((((/* implicit */_Bool) (short)-23352)) ? (arr_24 [i_13] [i_12] [i_2] [i_2] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_3 [i_2])) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_8 [i_1] [i_1])))))))));
                        var_34 -= ((/* implicit */long long int) ((((/* implicit */_Bool) -1425352015)) ? (((/* implicit */int) (unsigned short)65520)) : (1458250841)));
                        var_35 -= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)193))));
                    }
                    for (long long int i_14 = 0; i_14 < 14; i_14 += 1) /* same iter space */
                    {
                        var_36 = ((/* implicit */unsigned int) (unsigned char)59);
                        var_37 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((-(((/* implicit */int) arr_32 [i_2] [i_12]))))))) ? (((unsigned long long int) (unsigned char)0)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                        var_38 = min((var_18), (((/* implicit */unsigned long long int) (+(arr_31 [i_1] [i_2] [i_12] [i_12] [i_1])))));
                    }
                    var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [i_1])) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65408)))))) ? (arr_3 [i_1]) : (var_1)))) ? ((((!(((/* implicit */_Bool) -1161243994)))) ? (arr_4 [i_2]) : (((/* implicit */long long int) (-(((/* implicit */int) var_7))))))) : ((+(((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_1)))))));
                    /* LoopNest 2 */
                    for (long long int i_15 = 2; i_15 < 12; i_15 += 2) 
                    {
                        for (unsigned char i_16 = 0; i_16 < 14; i_16 += 3) 
                        {
                            {
                                var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) var_9))));
                                var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) ((unsigned char) var_9)))));
                            }
                        } 
                    } 
                    var_42 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(short)20])) ? (((/* implicit */int) arr_55 [i_12] [i_12] [9LL] [i_1])) : (((/* implicit */int) (_Bool)1)))))));
                }
                arr_59 [i_1] [i_2] [10LL] &= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)192))));
            }
        } 
    } 
}
