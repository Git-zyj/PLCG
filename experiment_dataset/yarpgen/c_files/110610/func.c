/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110610
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
    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) var_4))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [(signed char)7] = ((/* implicit */unsigned long long int) (signed char)-40);
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [(unsigned char)7])) && (((/* implicit */_Bool) arr_0 [i_0])))) ? (((((/* implicit */int) arr_1 [i_0] [i_0])) * (((/* implicit */int) arr_1 [9LL] [9LL])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(short)11])))))))) * (((((/* implicit */_Bool) arr_1 [i_0] [8U])) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) / (3634161417U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
        arr_4 [i_0] [i_0] &= ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((((((/* implicit */long long int) ((/* implicit */int) (signed char)-40))) != (6037296266156078399LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [3LL] [i_0]))) : (((((/* implicit */_Bool) -7162046529876926627LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(short)0]))) : (0ULL))))) : (((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0])))) + (2147483647))) << (((((((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) (signed char)32)))) + (1840))) - (16)))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        var_12 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2110815613090820135LL)) ? (((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_6 [i_1]) : (arr_6 [(unsigned short)3]))) : (((((/* implicit */_Bool) 6222041012454042967LL)) ? (arr_6 [i_1]) : (arr_6 [i_1])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_6 [i_1]) : (((/* implicit */unsigned long long int) 29))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))) : (arr_6 [i_1]))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -1966558782)) - (13077820297042000114ULL)))) ? (((((/* implicit */_Bool) arr_6 [i_1])) ? (1230761487681777575ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))))) : (((((/* implicit */_Bool) (unsigned char)67)) ? (arr_6 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))))))));
        /* LoopNest 3 */
        for (unsigned short i_2 = 1; i_2 < 14; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    {
                        var_13 = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 2305838611167182848ULL)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (unsigned short)2231))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_9 [i_2 - 1]))))) : (((-8984148873795747322LL) & (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2 + 1] [i_2] [i_3] [i_1]))))));
                        var_14 += ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2 + 2]))) : (((1859822610604302161ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24346)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_3] [i_3] [i_3] [(short)9]))))) ? (((/* implicit */unsigned int) 0)) : (arr_11 [i_2] [i_2] [i_2] [i_2 + 3])))) : (arr_14 [12LL] [i_2 + 2] [i_2 - 1] [i_2 + 2])));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_5 = 0; i_5 < 18; i_5 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned long long int) arr_8 [i_1] [(signed char)16] [i_3]);
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_4]))) : (18446744073709551615ULL)));
                            arr_17 [i_5] [i_2] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_2 + 2] [i_2 - 1] [i_2 - 1] [i_2] [i_2 + 2])) ? (-1883860077) : (((/* implicit */int) arr_13 [i_2 + 1] [i_2 + 3] [i_2] [(unsigned short)13] [i_2]))));
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [16])) ? (((/* implicit */int) arr_16 [i_2 + 4] [i_2] [i_2 + 3] [17] [i_2])) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) arr_12 [i_2 + 1] [9LL] [8ULL] [8ULL])) : (((/* implicit */int) (short)32767))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_6 = 1; i_6 < 16; i_6 += 4) 
                        {
                            arr_21 [i_1] [i_1] [i_1] [i_6] [i_4] [12LL] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) 4194303)) : (arr_14 [i_6] [i_4] [i_3] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3]))) < (arr_6 [(unsigned char)10]))))) : (((((/* implicit */_Bool) (unsigned short)3100)) ? (arr_11 [i_1] [i_2] [i_3] [(short)7]) : (arr_11 [i_1] [i_1] [i_1] [i_1]))));
                            arr_22 [i_1] [3LL] [(signed char)15] [i_4] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)38)) ? (arr_7 [i_3] [i_4]) : (((/* implicit */long long int) arr_11 [5U] [i_2 + 3] [i_3] [5U]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)15)) || (((/* implicit */_Bool) arr_9 [i_1]))))) : (((/* implicit */int) arr_13 [i_6 + 1] [i_6 + 2] [i_6] [i_6] [i_6 - 1]))));
                            var_18 = ((/* implicit */unsigned char) (+(arr_6 [i_6 + 2])));
                            var_19 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [14LL] [i_6] [14LL] [i_2 - 1] [3] [i_3])) ? (((((/* implicit */_Bool) 18446744073709551600ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1]))) : (4035225266123964416LL))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_13 [i_1] [i_1] [i_3] [i_4] [i_6])))))));
                        }
                        var_20 = ((/* implicit */long long int) (unsigned char)252);
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_7 = 3; i_7 < 18; i_7 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_8 = 0; i_8 < 20; i_8 += 3) 
        {
            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) arr_24 [i_8]))));
            var_22 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_23 [i_7]) : (((/* implicit */long long int) arr_26 [i_7] [i_7] [i_7]))))) ? (((/* implicit */int) arr_25 [i_7 + 2] [i_7 + 2])) : ((~(arr_24 [i_8])))));
            /* LoopNest 2 */
            for (unsigned int i_9 = 0; i_9 < 20; i_9 += 1) 
            {
                for (unsigned char i_10 = 0; i_10 < 20; i_10 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_11 = 0; i_11 < 20; i_11 += 4) 
                        {
                            arr_36 [i_9] [i_9] [8LL] [i_10] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_24 [i_7])) ? (arr_31 [(short)8] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_9] [i_9] [16LL] [i_9]))))) <= (((/* implicit */unsigned long long int) arr_26 [i_7] [i_11] [i_9]))));
                            var_23 |= ((/* implicit */int) arr_25 [(unsigned short)16] [i_7 - 1]);
                            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_7 - 3])) ? (((((/* implicit */_Bool) arr_30 [(unsigned short)7] [i_8] [(unsigned short)7])) ? (arr_30 [i_7] [i_7] [i_10]) : (((/* implicit */unsigned int) 2147483647)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [(short)2] [i_8] [i_9] [i_9])))));
                        }
                        for (unsigned short i_12 = 0; i_12 < 20; i_12 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)15)) ? (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (signed char)81)))) : (((/* implicit */int) (short)-19509))));
                            arr_40 [i_7] [(short)1] [i_9] [i_8] [(unsigned short)12] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */unsigned long long int) -267683588)) : (2995336943344984299ULL)));
                            var_26 = 13U;
                            var_27 = (-(0U));
                        }
                        for (unsigned int i_13 = 3; i_13 < 19; i_13 += 3) 
                        {
                            arr_43 [i_7 - 2] [i_7] [i_7 - 2] [i_7] [i_9] [i_7 - 2] [14] = ((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_7 - 2] [i_13 - 2])) ? (arr_39 [i_7] [i_7] [i_7 + 2] [i_7 + 2] [i_7 + 2] [17U] [17ULL]) : (((/* implicit */long long int) (+(arr_28 [10ULL] [i_8] [i_9] [i_10]))))));
                            arr_44 [i_9] [i_13] [i_10] [i_9] [i_8] [i_9] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)10))));
                            arr_45 [i_13] [i_13] [i_10] [i_9] [i_8] [i_8] [i_7] = ((/* implicit */unsigned long long int) (-(arr_42 [i_7 - 1] [i_7 - 1] [i_7 + 2] [i_13 + 1] [i_13])));
                        }
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (14001320830032919910ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32748)))))) ? (((((/* implicit */_Bool) arr_30 [11] [i_9] [i_10])) ? (0LL) : (arr_23 [i_7]))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_7] [18LL] [i_7]))) & (3674743704U))))));
                        arr_46 [i_7] [i_7] [i_9] [16ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_42 [i_7] [i_8] [i_9] [i_10] [i_10])) ? (((((/* implicit */_Bool) arr_28 [i_7] [6U] [i_7] [i_7])) ? (-2147483620) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)-32756))));
                    }
                } 
            } 
            arr_47 [i_7] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_37 [i_7 - 3] [i_8] [i_8] [5ULL] [i_8])) ? (((((/* implicit */_Bool) 8732494302651526605LL)) ? (((/* implicit */int) arr_34 [(signed char)11] [(signed char)11])) : (((/* implicit */int) arr_34 [i_7] [i_8])))) : (((/* implicit */int) (short)(-32767 - 1)))));
        }
        for (unsigned int i_14 = 4; i_14 < 17; i_14 += 3) 
        {
            arr_52 [15LL] [i_14 + 3] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))));
            /* LoopNest 3 */
            for (short i_15 = 0; i_15 < 20; i_15 += 3) 
            {
                for (long long int i_16 = 0; i_16 < 20; i_16 += 1) 
                {
                    for (unsigned long long int i_17 = 0; i_17 < 20; i_17 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) arr_38 [i_14 - 3] [i_15] [i_15]))));
                            var_30 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_32 [i_14] [i_15] [i_16] [(signed char)10])) ? ((-(((/* implicit */int) arr_53 [i_15] [i_17])))) : (((((/* implicit */_Bool) (short)-32756)) ? (((/* implicit */int) (short)5804)) : (arr_56 [i_7] [(unsigned char)10] [(short)4] [i_16] [i_17])))))));
                        }
                    } 
                } 
            } 
        }
        arr_59 [i_7] [i_7] = ((/* implicit */unsigned long long int) (short)32767);
    }
    var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (-1579132627) : (((/* implicit */int) (short)-15587))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)10059))))));
}
