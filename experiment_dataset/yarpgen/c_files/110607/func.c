/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110607
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
    var_11 = ((/* implicit */unsigned int) var_4);
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)63676)) << (((((/* implicit */int) (short)-18305)) + (18319)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) min((var_9), (((/* implicit */unsigned int) min((((unsigned char) 4777807596614912838LL)), (((/* implicit */unsigned char) ((arr_0 [i_0 - 3] [i_0 + 1]) >= (var_3))))))))))));
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) max(((+(((/* implicit */int) (signed char)6)))), (((/* implicit */int) var_2)))))));
    }
    for (short i_1 = 3; i_1 < 16; i_1 += 3) 
    {
        var_15 = ((((/* implicit */_Bool) (unsigned char)149)) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 1]))))) : (var_6));
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((6232457457169685007LL), (((/* implicit */long long int) var_5)))))))) >= (((/* implicit */int) arr_4 [i_1 - 1]))));
            arr_7 [i_1] [i_2] = ((unsigned int) 0LL);
        }
        for (short i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_4 = 2; i_4 < 15; i_4 += 4) 
            {
                arr_13 [i_1] [i_1 - 3] [i_1 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_2 [i_1 - 3] [i_1 - 1])) : (((/* implicit */int) arr_2 [i_1 + 1] [i_1 - 3]))))) ? (((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 - 2])) ? (((/* implicit */int) arr_2 [i_1 - 3] [i_1 - 2])) : (((/* implicit */int) arr_2 [i_1 - 2] [i_1 - 3])))) : (((/* implicit */int) max((arr_2 [i_1 - 3] [i_1 - 2]), ((short)-32758))))));
                var_17 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)15)) ? (-9223372036854775789LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))) ? (((((/* implicit */_Bool) arr_9 [i_1])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(short)1] [i_3]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) % (((/* implicit */int) arr_5 [(unsigned short)10] [(unsigned short)10] [i_4 + 2])))))))), (((((/* implicit */_Bool) (~(11LL)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)127))))) : (((((/* implicit */_Bool) arr_4 [i_3])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 - 2])))))))));
            }
            for (unsigned char i_5 = 0; i_5 < 17; i_5 += 3) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_6 = 4; i_6 < 16; i_6 += 3) 
                {
                    arr_18 [i_1 - 2] [i_3] [(unsigned char)15] [i_6 + 1] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) arr_8 [i_6])) ? (((/* implicit */int) (signed char)56)) : (((/* implicit */int) arr_17 [(unsigned short)11] [i_3] [i_3] [i_5] [i_3] [i_6 - 1])))));
                    var_18 = ((/* implicit */unsigned char) ((unsigned short) (~(0LL))));
                    /* LoopSeq 2 */
                    for (long long int i_7 = 0; i_7 < 17; i_7 += 3) 
                    {
                        arr_21 [i_1 - 1] [i_1] [i_1 - 2] [13U] [i_1] [3U] = ((/* implicit */signed char) var_3);
                        arr_22 [i_1 - 1] [(short)2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_7] [i_6 - 4] [i_5] [i_1])) ? (((/* implicit */int) (signed char)-10)) : (((/* implicit */int) arr_12 [(signed char)4])))))));
                        var_19 = ((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_1 - 3] [i_1 - 1] [i_6 - 2])) >= (((/* implicit */int) arr_14 [i_1 - 2] [i_6] [i_6 - 4]))));
                        arr_23 [i_1 - 3] [i_3] [i_5] [i_5] [i_1 - 3] [i_7] = ((/* implicit */unsigned int) arr_4 [i_6 - 1]);
                    }
                    for (unsigned int i_8 = 2; i_8 < 16; i_8 += 3) 
                    {
                        arr_26 [i_1] [i_3] [i_5] [i_1] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)88))) >= (var_3)));
                        var_20 = arr_24 [i_1] [i_3] [i_5] [i_1] [i_8];
                    }
                }
                arr_27 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 4U)) ? (((/* implicit */int) arr_3 [i_5] [i_3])) : (((/* implicit */int) var_10)))) % (((((/* implicit */int) arr_11 [i_1] [i_3] [i_5] [i_5])) << (((((/* implicit */int) (unsigned short)50103)) - (50092)))))))) ? (((/* implicit */int) ((((-9223372036854775805LL) != (-9223372036854775763LL))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_3 [i_1] [i_5])), (3966958825U))))))) : (((((/* implicit */int) arr_25 [i_1] [i_1 - 2] [i_5] [i_3] [i_1 - 2] [i_5] [i_5])) % (((((/* implicit */_Bool) (unsigned char)109)) ? (((/* implicit */int) (unsigned short)3084)) : (((/* implicit */int) (short)11955))))))));
                /* LoopSeq 2 */
                for (signed char i_9 = 1; i_9 < 13; i_9 += 3) 
                {
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) arr_16 [i_1] [i_9] [i_5] [i_9] [4U]))));
                    arr_31 [i_1] [i_3] [i_5] = ((/* implicit */short) arr_15 [i_1] [i_3] [i_5] [i_9 + 3]);
                    var_22 = ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_16 [i_1] [i_3] [i_3] [i_5] [i_9 - 1])), (min((((/* implicit */long long int) max((arr_29 [(short)6] [i_5] [i_5] [i_5] [i_5]), ((unsigned short)17991)))), (-3603906868662031773LL)))));
                    arr_32 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)15)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                    var_23 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_8 [i_1 - 2]), (arr_14 [i_9] [i_5] [i_3])))) ? (arr_20 [i_1] [i_1] [i_1 + 1] [i_9 + 2] [i_9 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15458)))))) ? (((long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_3])) ? (((/* implicit */int) (short)-24683)) : (((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) 3627355598U)) : (arr_19 [i_1] [i_3] [i_5] [i_9]))) >= (((((/* implicit */_Bool) arr_29 [i_9] [i_5] [i_3] [i_3] [i_1])) ? (4885059010123900649LL) : (6338883969876875210LL)))))))));
                }
                for (unsigned char i_10 = 1; i_10 < 14; i_10 += 3) 
                {
                    arr_35 [i_1 + 1] [i_3] [i_10 + 1] = ((/* implicit */short) (-((-(((/* implicit */int) arr_14 [i_1] [i_1 - 1] [i_3]))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_11 = 4; i_11 < 15; i_11 += 4) 
                    {
                        arr_39 [i_1] [(unsigned short)13] [i_5] [i_10 + 1] [i_11 + 1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_20 [i_1 - 2] [i_3] [i_5] [(short)0] [(unsigned short)5])) ? (-6118837469683376582LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)255)))))));
                        var_24 = ((/* implicit */unsigned int) (~(var_1)));
                        var_25 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_36 [i_1 - 2] [i_11 + 2] [i_5] [i_10 + 3] [i_10 - 1]))));
                        arr_40 [i_11] [(signed char)14] [i_5] [i_3] [i_1] [i_1 - 2] = ((/* implicit */unsigned char) arr_9 [i_1 - 3]);
                    }
                    /* vectorizable */
                    for (short i_12 = 0; i_12 < 17; i_12 += 4) 
                    {
                        arr_45 [i_12] [i_10 + 3] [12U] = ((/* implicit */short) ((((/* implicit */_Bool) (short)30604)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)202))) : (19836852U)));
                        var_26 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) 262143U)) ? (2549882616267188324LL) : (1152921504606846944LL)));
                    }
                    for (long long int i_13 = 2; i_13 < 16; i_13 += 1) 
                    {
                        arr_48 [i_1] [i_1] [i_1] [i_13] [i_13 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)60)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)6))) : (2959428253U)))))) ? (max((6338883969876875226LL), (((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_42 [i_13] [i_3] [i_5] [i_3] [i_3] [i_3] [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)4), (((/* implicit */unsigned char) arr_17 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1] [i_1 - 3] [i_1 + 1]))))))));
                        var_27 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_19 [i_10] [(unsigned char)5] [i_10 + 2] [i_10])) ? (arr_19 [i_10] [i_10 + 1] [i_10 + 1] [i_10 + 2]) : (arr_19 [i_10 - 1] [4LL] [i_10 + 1] [i_10])))));
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) var_0))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */short) arr_33 [i_5] [i_10 + 1] [i_13 - 2])), (arr_44 [i_13 + 1] [i_10 + 1] [i_5] [i_3] [i_1])))) ? (((/* implicit */int) arr_44 [i_10] [9LL] [i_10 + 2] [i_13 - 2] [i_13])) : (((/* implicit */int) var_4))))) : (var_3)));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_14 = 0; i_14 < 17; i_14 += 4) 
                    {
                        arr_51 [i_1 - 1] [(unsigned char)1] [i_3] [i_3] [i_5] [i_10] [i_14] = var_4;
                        arr_52 [i_3] [i_5] [i_10 + 3] [i_14] = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) min((arr_38 [i_1] [i_3] [i_5] [i_10 + 3] [i_14]), (((/* implicit */long long int) 2130706432U))))) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_10 + 1])) >= (((/* implicit */int) arr_2 [i_1 - 1] [12LL]))))) : (((/* implicit */int) (signed char)109)))));
                        var_29 += ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_25 [i_1 - 2] [i_3] [i_5] [i_14] [i_14] [i_3] [i_5]))))));
                        arr_53 [i_1] [i_1] [i_5] [(signed char)10] [i_14] = ((/* implicit */unsigned int) (+(((/* implicit */int) max((arr_34 [i_10 + 2] [i_10 + 2] [i_5] [i_1 + 1]), (arr_34 [i_10 - 1] [i_10 - 1] [i_5] [i_1 - 3]))))));
                        arr_54 [i_14] [i_14] [i_10] [(unsigned char)12] [i_5] [i_3] [i_1] = ((/* implicit */unsigned int) (short)8586);
                    }
                }
            }
            arr_55 [i_1] [i_1] [i_1] = ((/* implicit */long long int) arr_47 [i_1 - 2] [i_3] [i_3]);
            var_30 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_49 [i_1 - 1] [9U] [15U] [15U] [i_1 - 3])) ? (((((/* implicit */_Bool) var_8)) ? ((+(((/* implicit */int) arr_44 [i_1] [i_1] [i_3] [(signed char)4] [i_3])))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2959428281U))))))) : ((+(((((/* implicit */_Bool) arr_34 [i_3] [(signed char)5] [7U] [i_1 + 1])) ? (((/* implicit */int) arr_44 [i_1] [12LL] [i_1] [(unsigned char)6] [i_3])) : (((/* implicit */int) arr_17 [i_1] [i_1 - 3] [i_1] [i_1] [i_1 - 1] [i_1]))))))));
            arr_56 [i_1] [i_3] = ((/* implicit */unsigned char) arr_20 [i_1] [i_3] [i_1] [i_1] [i_1 - 1]);
        }
        arr_57 [i_1] = ((/* implicit */unsigned short) arr_49 [i_1] [i_1] [(unsigned char)16] [i_1] [i_1 - 2]);
    }
    var_31 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)39875))))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (4984525752935903131LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (var_1) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)2047)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)44)))))))));
}
