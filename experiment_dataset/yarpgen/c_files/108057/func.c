/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108057
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
    var_18 |= ((/* implicit */_Bool) ((var_0) - (((((/* implicit */int) (signed char)27)) ^ (((/* implicit */int) (signed char)-28))))));
    var_19 = ((/* implicit */int) 7385873502776226795LL);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~((+(9223372036854775794LL)))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) var_3);
    }
    for (short i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_20 = ((/* implicit */short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)95))) / (5441840368892703235ULL))), (((/* implicit */unsigned long long int) (_Bool)1))));
        /* LoopNest 2 */
        for (long long int i_2 = 2; i_2 < 14; i_2 += 1) 
        {
            for (unsigned char i_3 = 2; i_3 < 14; i_3 += 2) 
            {
                {
                    arr_11 [i_1] |= ((((/* implicit */_Bool) ((unsigned char) var_10))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_1] [i_1] [i_3 + 2]))))) : ((~(((((/* implicit */_Bool) var_3)) ? (var_11) : (var_10))))));
                    arr_12 [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) var_5);
                    /* LoopSeq 4 */
                    for (long long int i_4 = 2; i_4 < 13; i_4 += 3) 
                    {
                        var_21 *= ((/* implicit */short) ((((/* implicit */int) arr_0 [i_2 - 1])) >= (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_9 [i_1] [(short)4] [i_3])) : (((/* implicit */int) var_16))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 1; i_5 < 15; i_5 += 4) 
                        {
                            arr_18 [i_1] [i_2 + 1] [i_3] [i_4] [i_2 + 1] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_14)), (arr_1 [i_1])))) ? (((/* implicit */unsigned int) arr_14 [i_3 + 2] [i_1] [i_5 + 1] [i_5])) : (((((/* implicit */_Bool) arr_16 [i_5 + 1] [i_5 + 1] [i_3 + 1] [i_2] [i_5] [i_2])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)48)))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_2 - 2] [i_2 - 2] [i_4 + 3]))) : (((long long int) ((((/* implicit */_Bool) (signed char)-28)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-28))) : (var_12))))));
                            var_22 = ((/* implicit */unsigned int) ((_Bool) var_17));
                            arr_19 [i_1] [(signed char)3] [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_2 - 1] [i_3 + 1])) / ((+(((/* implicit */int) (signed char)-28))))));
                        }
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_22 [i_1] [i_2] = ((/* implicit */unsigned char) min((((long long int) var_8)), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65527)) ? (min((var_13), (((/* implicit */unsigned int) var_14)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
                        /* LoopSeq 3 */
                        for (signed char i_7 = 4; i_7 < 13; i_7 += 1) 
                        {
                            var_23 -= ((/* implicit */unsigned int) var_11);
                            var_24 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_6 [i_2 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2 + 1]))) : (arr_23 [i_7 - 1] [i_2] [i_2 + 1] [i_2] [i_3 - 1])))));
                        }
                        /* vectorizable */
                        for (signed char i_8 = 0; i_8 < 16; i_8 += 3) 
                        {
                            var_25 += ((/* implicit */_Bool) var_15);
                            var_26 |= ((/* implicit */int) arr_13 [i_2 - 2] [i_3 + 1]);
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_17)) ? (arr_1 [i_2 - 1]) : (arr_8 [i_3 + 2] [i_3])));
                        }
                        for (unsigned int i_9 = 0; i_9 < 16; i_9 += 2) 
                        {
                            arr_30 [i_1] [i_2] [i_1] [i_6] [i_1] = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
                            arr_31 [i_1] [i_1] [0U] [i_6] [i_9] = ((/* implicit */unsigned int) (signed char)27);
                            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) var_11))));
                        }
                        arr_32 [i_2] [i_2 + 2] [i_3] [3LL] [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_1))));
                        arr_33 [i_1] [i_1] [i_3 - 2] [i_6] [i_6] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_23 [i_2 + 1] [i_2] [i_2] [i_2] [i_6])) ? (min((((/* implicit */long long int) arr_23 [10LL] [10LL] [(unsigned char)2] [i_2] [i_1])), (var_15))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_1] [i_2] [i_2] [i_6]))) : (var_15)))))));
                        var_29 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((signed char)27), ((signed char)27)))) ? ((~(((/* implicit */int) arr_17 [i_3 + 2] [i_3] [i_3] [i_3 - 1])))) : ((~(((/* implicit */int) var_5))))));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 1) 
                    {
                        var_30 = ((/* implicit */short) arr_1 [i_10]);
                        arr_36 [i_10] [i_10] [i_3] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) 9ULL)) ? (9ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)139)))));
                        var_31 = ((/* implicit */signed char) (~(((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_1]))));
                        var_32 = ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_35 [i_1] [i_2 - 2] [i_3 + 2] [i_10] [(short)4])) * (((/* implicit */int) arr_35 [i_1] [i_2 - 2] [i_3 + 2] [i_10] [i_1]))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_11 = 0; i_11 < 16; i_11 += 4) 
                    {
                        var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) ((unsigned char) arr_21 [i_1] [i_1] [i_3] [i_11])))));
                        var_34 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_17 [i_2 - 1] [i_2 + 2] [i_3 + 2] [i_3 - 1]))));
                    }
                    arr_40 [i_1] [(short)4] [i_1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_8 [i_2 - 2] [i_2 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_2 + 1] [i_2 + 1] [i_3] [i_2 + 2]))) : (0U)))));
                }
            } 
        } 
    }
    for (long long int i_12 = 0; i_12 < 17; i_12 += 3) 
    {
        var_35 = ((/* implicit */signed char) ((unsigned char) arr_44 [i_12] [i_12]));
        /* LoopSeq 4 */
        for (unsigned int i_13 = 1; i_13 < 16; i_13 += 1) 
        {
            var_36 = ((/* implicit */short) max((var_10), (((/* implicit */unsigned long long int) (unsigned char)139))));
            var_37 = ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))) == (((((/* implicit */_Bool) arr_42 [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (18446744073709551606ULL))));
        }
        for (long long int i_14 = 0; i_14 < 17; i_14 += 1) 
        {
            arr_49 [i_12] [i_14] [i_12] = ((/* implicit */short) (-(max((((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)79))) : (var_12)))), (max((var_10), (((/* implicit */unsigned long long int) arr_42 [i_12]))))))));
            arr_50 [i_12] [i_14] [i_12] = ((/* implicit */unsigned short) min((min((0), (((/* implicit */int) (signed char)19)))), (((/* implicit */int) min((arr_47 [i_12] [i_14] [i_12]), (var_4))))));
            arr_51 [i_12] [i_14] [i_14] = ((/* implicit */signed char) max((max((arr_1 [i_14]), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_48 [i_12] [i_14])) ? (((/* implicit */int) arr_48 [i_12] [i_14])) : (((/* implicit */int) arr_48 [i_12] [i_14])))))));
            arr_52 [(unsigned char)14] [(unsigned char)14] [i_12] = ((/* implicit */long long int) min((min((arr_45 [i_12] [i_14] [i_14]), (var_9))), (min((((/* implicit */short) arr_47 [i_12] [i_14] [i_14])), (arr_43 [i_12])))));
        }
        for (short i_15 = 0; i_15 < 17; i_15 += 2) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_16 = 0; i_16 < 17; i_16 += 2) 
            {
                var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) var_2)) + (var_13)))) : (arr_46 [i_12] [i_12])));
                var_39 = ((/* implicit */unsigned char) var_15);
                var_40 = ((/* implicit */unsigned int) ((long long int) arr_57 [i_12] [i_16]));
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 17; i_17 += 1) 
                {
                    for (short i_18 = 0; i_18 < 17; i_18 += 4) 
                    {
                        {
                            var_41 = ((/* implicit */unsigned short) ((((/* implicit */int) var_16)) + (((/* implicit */int) arr_57 [i_18] [i_18]))));
                            var_42 = ((/* implicit */long long int) (+(((/* implicit */int) var_8))));
                            arr_63 [i_12] [i_12] [i_12] [i_17] [12LL] [i_12] = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_12]))) : (15244629989548230470ULL));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                arr_66 [i_12] [i_12] [i_19] = ((/* implicit */unsigned int) ((arr_62 [i_12] [i_12] [i_12] [i_19] [i_12] [i_19] [i_15]) < (arr_62 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12])));
                var_43 = ((/* implicit */unsigned char) arr_62 [i_12] [i_15] [i_12] [i_12] [i_12] [i_12] [i_19]);
                /* LoopNest 2 */
                for (short i_20 = 2; i_20 < 15; i_20 += 4) 
                {
                    for (unsigned int i_21 = 0; i_21 < 17; i_21 += 3) 
                    {
                        {
                            var_44 = ((/* implicit */unsigned long long int) -1LL);
                            arr_73 [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) arr_41 [i_12])) || (((/* implicit */_Bool) arr_41 [i_12]))));
                        }
                    } 
                } 
            }
            arr_74 [i_12] [i_12] [i_12] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))));
            var_45 = ((/* implicit */_Bool) max((var_6), ((+(((((/* implicit */_Bool) var_15)) ? (var_12) : (255LL)))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_22 = 0; i_22 < 17; i_22 += 3) 
            {
                arr_79 [i_12] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_12]))) ^ (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) max((var_2), (((/* implicit */int) arr_44 [i_12] [i_12]))))) : (arr_46 [i_12] [i_15])))));
                var_46 = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_47 [12ULL] [i_15] [(short)9])))), (((/* implicit */int) arr_47 [i_12] [i_12] [i_12]))));
                arr_80 [i_12] = ((/* implicit */signed char) (+(var_10)));
            }
            /* vectorizable */
            for (long long int i_23 = 0; i_23 < 17; i_23 += 3) 
            {
                var_47 = ((/* implicit */int) var_8);
                arr_85 [i_12] = ((/* implicit */long long int) var_2);
                var_48 = ((/* implicit */unsigned long long int) (short)18664);
            }
        }
        /* vectorizable */
        for (unsigned int i_24 = 1; i_24 < 15; i_24 += 1) 
        {
            arr_90 [i_12] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24228))) : (((((/* implicit */unsigned long long int) 170525948)) | (140735340871680ULL)))));
            var_49 = ((/* implicit */long long int) var_13);
            arr_91 [i_12] [i_24] [i_12] = ((/* implicit */long long int) (~(((/* implicit */int) arr_83 [i_24] [i_24] [i_24] [i_24 + 1]))));
            arr_92 [i_12] = ((/* implicit */unsigned char) (+(arr_81 [i_24 + 1] [13U] [i_24 - 1])));
        }
    }
    /* vectorizable */
    for (unsigned char i_25 = 0; i_25 < 23; i_25 += 3) 
    {
        arr_97 [i_25] [i_25] = ((/* implicit */_Bool) arr_94 [i_25]);
        arr_98 [i_25] = ((/* implicit */_Bool) arr_95 [i_25]);
        var_50 = ((/* implicit */unsigned short) var_5);
    }
}
