/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155978
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
    var_19 += ((/* implicit */int) var_7);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 4; i_1 < 14; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_2] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((arr_3 [i_1 - 1] [i_2 + 1] [i_2 + 1]), (((/* implicit */long long int) (short)-19269))))), (arr_4 [i_0] [(short)12] [i_2])));
                    /* LoopSeq 4 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        arr_10 [i_3] [i_2] [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)55863))))), (-6682393259929645810LL)));
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_5 [i_3] [i_3] [i_3] [i_0])), (var_3))))))), (((((((/* implicit */_Bool) var_0)) ? (arr_4 [i_1] [i_2] [i_3]) : (((/* implicit */unsigned long long int) arr_8 [i_0] [(signed char)14] [i_2] [(unsigned char)4])))) % (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [(short)6] [i_0])), ((unsigned short)9660))))))))))));
                        arr_11 [i_0] [(short)12] [i_2] [i_2] [i_0] [(short)1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12))));
                        arr_12 [i_2] = ((/* implicit */long long int) (signed char)(-127 - 1));
                        arr_13 [i_2] [i_1 - 2] [i_2] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)9696)) ? (((/* implicit */int) arr_7 [i_0] [0] [i_2] [12LL])) : (108699363)))) ? (((/* implicit */long long int) 108699370)) : (((((/* implicit */_Bool) (unsigned short)9657)) ? (arr_3 [i_1] [i_2] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))));
                    }
                    for (unsigned short i_4 = 3; i_4 < 13; i_4 += 4) 
                    {
                        arr_16 [i_4] [i_2] [i_2] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned short)9663)) ? (((/* implicit */int) (unsigned short)55840)) : (((/* implicit */int) arr_14 [i_2] [i_1 - 2] [i_0])))), (((/* implicit */int) (unsigned short)2586))))), (((arr_4 [i_0] [i_2] [i_4]) | (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0)))))))));
                        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) min((max((min((((/* implicit */unsigned long long int) arr_14 [i_0] [(short)11] [(short)11])), (arr_4 [(_Bool)1] [(_Bool)1] [(short)13]))), (((/* implicit */unsigned long long int) var_17)))), (((/* implicit */unsigned long long int) min(((unsigned short)65535), (((/* implicit */unsigned short) (short)30420))))))))));
                        arr_17 [i_2] = ((/* implicit */short) max((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), (arr_7 [i_4 - 1] [i_2 + 1] [i_2 - 1] [i_1 - 2])))), (-1444055110)));
                        arr_18 [i_0] [(unsigned short)15] [i_2 + 1] [i_2] [i_0] = ((((/* implicit */_Bool) (unsigned short)55866)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_2 + 1] [i_1 - 2] [i_1 - 2])) || (((/* implicit */_Bool) var_15))))) : (((((((/* implicit */int) arr_15 [i_1] [i_2 + 1] [i_4] [13ULL] [i_4] [1])) + (2147483647))) << (((((((((/* implicit */_Bool) (unsigned short)55811)) ? (-108699341) : (-344983143))) + (108699352))) - (11))))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            var_22 += ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_1 - 2] [i_1 + 1] [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 - 2] [i_1]))) : (arr_4 [i_1 - 2] [i_5] [i_2 + 1])));
                            arr_26 [i_0] [i_1 + 1] [i_2] [i_5] [i_2] = ((/* implicit */signed char) arr_15 [i_2 + 1] [i_2 + 1] [i_2] [i_5] [(signed char)7] [i_6]);
                            arr_27 [i_0] [(unsigned char)12] [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_5] [(signed char)3])) ? (((/* implicit */long long int) var_11)) : (arr_5 [i_0] [i_1] [i_2] [(_Bool)1])))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_16))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)55840)) ? (((/* implicit */long long int) -108699370)) : (arr_3 [i_5] [i_5] [i_0]))))))));
                        }
                        arr_28 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_0] [i_1] [4] [i_1 + 1])) != (((/* implicit */int) min((arr_9 [i_0] [8ULL] [i_2 - 1] [i_1 + 1]), (arr_9 [i_0] [i_1] [(signed char)2] [i_1 + 1]))))));
                    }
                    for (unsigned long long int i_7 = 3; i_7 < 15; i_7 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned short) (((-(15547615501207760932ULL))) + (((((/* implicit */_Bool) arr_4 [i_1 + 1] [i_7 - 3] [i_2])) ? (arr_4 [i_1 + 2] [i_7 - 3] [i_2]) : (arr_4 [i_1 - 3] [i_7 - 1] [(signed char)5])))));
                        var_25 -= ((/* implicit */short) min((((/* implicit */unsigned int) var_2)), ((~(max((((/* implicit */unsigned int) var_5)), (var_17)))))));
                        arr_31 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) (unsigned short)32313);
                        arr_32 [i_0] |= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_1 + 2] [i_2 - 1] [(unsigned short)8] [i_2] [i_2] [i_2 + 1])) ? (((/* implicit */int) arr_15 [i_1 - 1] [i_1 + 2] [i_1 - 2] [i_1] [(unsigned short)14] [i_2 + 1])) : (((/* implicit */int) arr_15 [i_1 - 4] [6] [i_1] [i_1] [i_2] [i_2 + 1]))))), (((((arr_4 [i_0] [i_2] [i_2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) + ((~(arr_30 [i_0] [i_1] [(short)8] [3ULL])))))));
                    }
                    var_26 -= ((/* implicit */long long int) ((((/* implicit */_Bool) max((299661024589518335LL), (((/* implicit */long long int) (short)-8))))) ? ((+(((/* implicit */int) arr_2 [i_2 - 1] [i_1 - 3])))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_9 [i_2 - 1] [(unsigned short)9] [i_1] [(short)2])), ((unsigned short)32297))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_8 = 1; i_8 < 13; i_8 += 2) 
                    {
                        var_27 += ((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_2 - 1] [i_2 + 1] [i_8 + 3]))));
                        arr_35 [i_0] [i_1 - 1] [(unsigned short)8] [12LL] [i_2 - 1] [i_2] = ((/* implicit */short) (((+(((/* implicit */int) var_12)))) >> (((arr_8 [i_1] [i_8 + 1] [i_2 - 1] [i_1 - 3]) - (8594391330272671839LL)))));
                        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_8] [i_8 + 2] [i_8 + 2] [i_8 - 1])) ? (((/* implicit */int) (unsigned short)55866)) : (((/* implicit */int) arr_1 [i_0])))))));
                        var_29 = ((/* implicit */long long int) arr_2 [i_1 - 4] [(unsigned short)2]);
                        arr_36 [i_2] = ((/* implicit */signed char) 2195737724299530024LL);
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_9 = 1; i_9 < 7; i_9 += 3) 
    {
        for (unsigned int i_10 = 1; i_10 < 10; i_10 += 3) 
        {
            for (unsigned short i_11 = 0; i_11 < 11; i_11 += 3) 
            {
                {
                    var_30 = ((/* implicit */unsigned long long int) (-((~(((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_9 + 1] [(short)7] [(unsigned short)4]))) : (arr_3 [i_9] [i_10] [(unsigned short)9])))))));
                    arr_46 [i_9] [i_9 + 4] [i_9] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-(((/* implicit */int) (short)-30421))))), (arr_21 [(_Bool)1] [i_9 + 4] [i_9] [i_9 + 3])))) / (arr_30 [i_11] [15] [i_9] [i_9 + 3])));
                    var_31 = ((/* implicit */signed char) (+(((unsigned int) -2548122092860112817LL))));
                    /* LoopSeq 4 */
                    for (unsigned short i_12 = 1; i_12 < 10; i_12 += 4) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_13 = 1; i_13 < 10; i_13 += 4) 
                        {
                            var_32 += ((/* implicit */long long int) var_10);
                            arr_53 [i_9] [i_9] [i_11] [i_12] [i_11] = ((/* implicit */signed char) arr_7 [i_9] [i_9] [15] [i_13]);
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            arr_56 [i_9] [(short)7] [(unsigned short)7] [(signed char)2] [7U] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (-(344983152)))) >= (min((4031774981U), (((/* implicit */unsigned int) (signed char)6))))));
                            arr_57 [i_14] [i_9] [i_11] [i_9] [i_9] = ((/* implicit */short) ((var_14) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)192)))));
                            var_33 ^= ((/* implicit */unsigned short) arr_38 [i_11] [i_14]);
                        }
                        var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)19))) - (arr_47 [2] [2])))))));
                    }
                    /* vectorizable */
                    for (short i_15 = 0; i_15 < 11; i_15 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_16 = 0; i_16 < 11; i_16 += 2) 
                        {
                            arr_63 [i_9] [i_9] [i_10] [i_11] [(unsigned short)3] [i_16] = ((/* implicit */long long int) (unsigned short)9701);
                            arr_64 [(unsigned short)0] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */int) var_15)) : ((~(((/* implicit */int) var_18))))));
                            arr_65 [i_16] [i_9] [i_11] [i_9] [i_9 + 4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_41 [(short)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6449))) : (arr_30 [i_10 + 1] [i_10 + 1] [i_9 + 4] [i_9])));
                            arr_66 [i_9] [i_9] [i_11] [i_15] [(signed char)6] [7LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_62 [i_9 + 4])) ? (((/* implicit */int) arr_52 [1U] [i_10] [i_10] [i_15] [i_9])) : (((((/* implicit */_Bool) arr_20 [(unsigned short)3] [(unsigned short)3] [(short)0] [11LL] [i_16])) ? (((/* implicit */int) (unsigned short)14548)) : (arr_34 [9LL] [i_10 + 1] [i_11] [(unsigned short)3] [i_15] [i_16])))));
                        }
                        arr_67 [i_9] [i_9] [i_11] [i_15] = ((/* implicit */_Bool) 2511089613443406663LL);
                        var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) (unsigned short)9660))));
                        arr_68 [i_9] [i_9] [3] [i_9] [i_15] [i_9] = ((/* implicit */short) arr_58 [i_9] [i_9] [i_11] [i_15]);
                    }
                    for (long long int i_17 = 0; i_17 < 11; i_17 += 4) 
                    {
                        var_36 ^= ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_8), ((unsigned char)145)))) ? (((/* implicit */int) ((var_6) != (((/* implicit */long long int) ((/* implicit */int) arr_33 [(short)12] [i_11] [i_17])))))) : (((/* implicit */int) ((signed char) arr_55 [6ULL] [6ULL] [(unsigned short)8] [i_11] [i_11] [i_17] [i_17])))))), (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127))) + (arr_39 [i_17]))) % (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)77)), (var_11))))))));
                        arr_73 [i_9 + 3] [i_9 + 3] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */short) (unsigned short)33683);
                        arr_74 [i_9] [i_9] = ((/* implicit */signed char) min((arr_44 [i_9] [i_10 - 1] [(_Bool)1] [i_17]), (((((/* implicit */_Bool) arr_44 [i_9] [i_10 + 1] [i_17] [(signed char)0])) ? (arr_44 [i_9] [i_10 - 1] [i_11] [i_11]) : (((/* implicit */int) (short)-9986))))));
                    }
                    for (signed char i_18 = 0; i_18 < 11; i_18 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_19 = 0; i_19 < 11; i_19 += 3) 
                        {
                            var_37 = ((/* implicit */unsigned short) arr_2 [i_9 - 1] [i_9]);
                            var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)57)) ? (((/* implicit */int) ((344983143) < (((/* implicit */int) arr_48 [i_9] [i_10] [i_11] [(signed char)10] [i_19]))))) : (((/* implicit */int) arr_79 [i_9] [i_9 + 4] [i_18] [i_19] [i_19]))));
                            arr_81 [i_9] [i_9] [i_9] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_9 + 4] [i_10 - 1] [i_10 - 1] [i_18]))));
                            arr_82 [i_9] [i_9] [6LL] [(unsigned short)1] [i_19] = 344983152;
                            arr_83 [(short)3] [i_18] [i_9] [i_10 + 1] [i_9] = ((/* implicit */short) ((-2511089613443406664LL) + (((/* implicit */long long int) ((/* implicit */int) arr_75 [i_9 + 3] [i_10] [i_9] [i_18])))));
                        }
                        arr_84 [i_9] [i_10 + 1] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) (unsigned short)9683))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_10] [i_9 + 3] [i_9])))))));
                    }
                }
            } 
        } 
    } 
}
