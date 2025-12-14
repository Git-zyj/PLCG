/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105565
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
    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (~(min((((/* implicit */unsigned long long int) var_11)), (min((var_1), (((/* implicit */unsigned long long int) var_13)))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_1] |= ((/* implicit */unsigned char) arr_0 [i_1]);
                arr_5 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_3 [i_1] [(unsigned char)2] [(short)8])) : (((/* implicit */int) (_Bool)1))))))), ((-(arr_2 [i_0 - 1])))));
                var_17 = ((/* implicit */short) ((min((-6015539446377064033LL), (((/* implicit */long long int) (_Bool)0)))) ^ (((long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-44)) : (((/* implicit */int) var_11)))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    var_18 = ((/* implicit */short) arr_7 [i_2] [i_1]);
                    var_19 = ((/* implicit */unsigned long long int) 6015539446377064009LL);
                    var_20 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_2 [i_0 + 2]), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_0 [i_1])) > (9030468489888008973ULL))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1])) && (((/* implicit */_Bool) arr_7 [i_2] [i_0])))))) : (min((((((/* implicit */_Bool) arr_7 [i_1] [i_0])) ? (-6015539446377064033LL) : (arr_1 [i_0]))), (((/* implicit */long long int) (+(35071031))))))));
                }
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_3 = 2; i_3 < 14; i_3 += 2) /* same iter space */
    {
        arr_11 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(arr_2 [i_3 - 2])))) / (max(((+(arr_0 [i_3]))), (((/* implicit */long long int) ((unsigned short) (unsigned char)0)))))));
        /* LoopNest 2 */
        for (unsigned short i_4 = 4; i_4 < 14; i_4 += 1) 
        {
            for (short i_5 = 2; i_5 < 13; i_5 += 4) 
            {
                {
                    arr_17 [i_5 + 2] [i_4] [i_5 + 2] [i_4] = ((/* implicit */signed char) ((int) arr_9 [i_5 + 2]));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_7 = 3; i_7 < 11; i_7 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) ((arr_13 [i_3 + 1]) >= (((((/* implicit */_Bool) (unsigned short)35013)) ? (((/* implicit */int) (unsigned short)35013)) : (((/* implicit */int) (unsigned short)35006))))));
                            var_22 = ((/* implicit */short) arr_9 [2LL]);
                        }
                        for (unsigned int i_8 = 0; i_8 < 15; i_8 += 2) 
                        {
                            arr_27 [i_4] [i_6] [i_6] [i_5] [2LL] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_19 [i_4] [i_4 + 1] [i_5 - 2]))) ? (arr_7 [i_3 - 1] [i_4 - 2]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_4] [i_4] [i_4])) ? (((/* implicit */int) (unsigned char)120)) : (((/* implicit */int) (unsigned char)251)))))));
                            var_23 = ((/* implicit */unsigned long long int) arr_20 [i_3] [i_3] [i_3] [i_4] [i_3]);
                        }
                        var_24 = ((/* implicit */short) ((-1174160407547939635LL) != (((/* implicit */long long int) arr_7 [i_5 + 1] [i_5 + 1]))));
                    }
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (~(-35071031))))));
    }
    for (unsigned int i_9 = 2; i_9 < 14; i_9 += 2) /* same iter space */
    {
        var_26 ^= ((/* implicit */unsigned char) (+(((2587200360U) / (((/* implicit */unsigned int) 2147483643))))));
        arr_31 [i_9] [1LL] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 8697662072802800056LL)) ? ((+(35071020))) : (((/* implicit */int) ((unsigned short) -6015539446377064033LL))))) >= (((/* implicit */int) ((unsigned short) (_Bool)0)))));
        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((unsigned short) ((unsigned long long int) arr_29 [i_9 - 1] [i_9 + 1]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_10 = 0; i_10 < 15; i_10 += 1) 
        {
            arr_36 [i_9] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-114)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_9 - 1] [i_10] [i_9] [i_9 + 1] [i_9] [i_10] [i_9 + 1]))) : ((~(417291097U)))));
            arr_37 [i_10] [i_9] = ((/* implicit */long long int) (short)0);
            arr_38 [i_10] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_32 [7ULL])) ? (((/* implicit */int) arr_26 [i_9] [i_10] [i_9 + 1] [(signed char)6] [i_10])) : ((~(((/* implicit */int) arr_22 [i_9] [i_9] [i_9] [i_10] [i_10] [i_10]))))));
        }
    }
    for (unsigned int i_11 = 2; i_11 < 14; i_11 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_12 = 1; i_12 < 11; i_12 += 4) 
        {
            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_11 - 2]))) - (arr_8 [i_12 + 4] [i_12 + 4]))))));
            /* LoopSeq 1 */
            for (unsigned int i_13 = 0; i_13 < 15; i_13 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_14 = 0; i_14 < 15; i_14 += 4) 
                {
                    var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_16 [i_11 - 2] [i_11 - 2] [i_12 + 4] [i_11 - 2])) | (-318064620)));
                    /* LoopSeq 3 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                    {
                        var_30 = ((/* implicit */short) ((arr_35 [i_12 + 1]) < (((((/* implicit */int) arr_24 [i_15] [(_Bool)1] [(unsigned short)0] [i_12] [5LL])) | (((/* implicit */int) arr_48 [i_11 - 1] [9] [i_11 - 1] [12] [i_12]))))));
                        arr_50 [(short)5] [i_12 + 1] [9U] [(unsigned char)14] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)4)) <= (((/* implicit */int) ((((/* implicit */int) arr_40 [(unsigned char)12] [(unsigned char)12])) == (((/* implicit */int) arr_29 [i_12] [i_14])))))));
                        arr_51 [i_11] [i_11] [i_11] [i_11 - 1] [i_12] [2U] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)93)) ? (arr_14 [i_12 + 4] [i_12]) : (((/* implicit */long long int) arr_7 [i_12 + 4] [i_12]))));
                        var_31 = ((/* implicit */unsigned char) var_7);
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                    {
                        var_32 = ((/* implicit */int) -6015539446377064021LL);
                        arr_54 [i_12] [i_13] [i_13] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_11 - 1] [i_12 + 2] [i_12 + 2]))) / (1753861239U)));
                        var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)50157)) ? (((/* implicit */int) arr_41 [i_11 - 2] [i_14])) : (((/* implicit */int) (unsigned char)0)))))));
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                    {
                        arr_59 [i_17] [(signed char)2] [i_12] [i_12] [(short)9] [(short)9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)165)) ? (((/* implicit */int) arr_34 [7U] [i_12])) : (((/* implicit */int) arr_34 [i_17] [i_12]))));
                        arr_60 [i_11] [i_13] [i_13] [i_12] [i_17] [i_11] [i_12] = ((((/* implicit */_Bool) (short)-128)) ? ((+(-6015539446377064033LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)41))));
                        arr_61 [i_12] [i_12 + 4] [i_12 + 4] [i_12] [i_12] = ((/* implicit */long long int) ((((/* implicit */int) arr_49 [i_12] [13] [i_12] [i_12] [i_12])) | (((/* implicit */int) arr_49 [i_11 - 1] [i_12 + 4] [i_13] [i_13] [i_12]))));
                        arr_62 [i_11] [i_12] [i_12] [i_11] [i_17] [i_17] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_12 + 2] [i_11 - 1]))));
                    }
                }
                var_34 += ((/* implicit */short) ((((/* implicit */_Bool) -1693232301)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-114))) : (9223372036854775807LL)));
                arr_63 [i_11] [i_11] [8LL] &= ((/* implicit */long long int) (short)-32078);
            }
            /* LoopNest 3 */
            for (signed char i_18 = 0; i_18 < 15; i_18 += 4) 
            {
                for (unsigned short i_19 = 4; i_19 < 13; i_19 += 4) 
                {
                    for (unsigned short i_20 = 0; i_20 < 15; i_20 += 4) 
                    {
                        {
                            var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) (-(((((/* implicit */long long int) ((/* implicit */int) (short)0))) ^ (-3640416648170794882LL))))))));
                            var_36 |= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)61003)) ? (((/* implicit */int) ((short) -1481729433))) : (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned char)120))))));
                        }
                    } 
                } 
            } 
            var_37 ^= ((/* implicit */unsigned long long int) arr_15 [(signed char)1] [(signed char)1]);
            /* LoopNest 2 */
            for (unsigned int i_21 = 1; i_21 < 14; i_21 += 1) 
            {
                for (short i_22 = 0; i_22 < 15; i_22 += 4) 
                {
                    {
                        arr_74 [i_11] |= ((/* implicit */int) ((arr_39 [i_11]) * (((/* implicit */unsigned long long int) arr_0 [i_22]))));
                        arr_75 [i_11] [i_21] [i_12] [i_22] [i_21] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_47 [i_11 - 2] [i_12 + 2] [i_21] [i_22])) ? (arr_46 [i_11] [i_12 + 1] [(unsigned short)6]) : (((/* implicit */int) (unsigned short)15380))))));
                    }
                } 
            } 
        }
        var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) (~(((((((/* implicit */_Bool) 8126607940394374075ULL)) ? (arr_68 [i_11 - 1] [(unsigned char)10] [13ULL] [i_11 + 1] [(unsigned char)10] [i_11]) : (((/* implicit */long long int) 4058309256U)))) & (((/* implicit */long long int) ((((/* implicit */int) var_3)) | (((/* implicit */int) (short)-155))))))))))));
        var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_53 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11 - 1]), (((/* implicit */unsigned int) -122339133))))) ? ((~(arr_53 [i_11] [i_11] [i_11] [i_11 - 1] [(short)6] [(unsigned char)12] [i_11 - 1]))) : (max((arr_53 [i_11] [i_11] [i_11] [(unsigned char)6] [4U] [i_11] [i_11 + 1]), (arr_53 [i_11] [i_11] [0] [i_11] [i_11] [i_11] [i_11 - 2]))))))));
    }
}
