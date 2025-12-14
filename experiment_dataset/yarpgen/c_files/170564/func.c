/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170564
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [(unsigned short)16] [(unsigned char)13] = ((/* implicit */signed char) ((unsigned char) ((arr_5 [i_2 - 1] [i_2] [i_2] [i_2 + 2]) * (arr_5 [i_2 + 3] [i_2] [i_2] [i_2 + 1]))));
                    arr_8 [i_2] [i_1] [8] = (+(((/* implicit */int) max(((unsigned short)61454), ((unsigned short)4084)))));
                    arr_9 [i_2] = ((/* implicit */short) ((int) (+(((((/* implicit */_Bool) -6485940544312639966LL)) ? (((/* implicit */unsigned long long int) var_14)) : (15989431501527492631ULL))))));
                    arr_10 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned int) 6485940544312639975LL);
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */unsigned long long int) ((_Bool) 1148881400995595785LL));
        arr_12 [i_0] = ((/* implicit */int) var_1);
    }
    /* vectorizable */
    for (long long int i_3 = 3; i_3 < 11; i_3 += 3) 
    {
        arr_16 [i_3] [5ULL] = ((/* implicit */signed char) ((unsigned short) arr_1 [i_3 - 3]));
        arr_17 [i_3] [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) var_10))));
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                arr_26 [i_3] [i_3] [i_3] [i_3 - 1] = ((/* implicit */short) arr_4 [i_5]);
                arr_27 [0LL] [0LL] = ((/* implicit */long long int) (+(arr_5 [i_3 + 1] [i_3 - 2] [18U] [i_4])));
            }
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 12; i_6 += 2) 
            {
                for (unsigned long long int i_7 = 4; i_7 < 11; i_7 += 1) 
                {
                    {
                        arr_34 [i_3] [i_3] [i_7] = ((/* implicit */signed char) ((((((/* implicit */int) var_4)) + (2147483647))) << (((((arr_22 [i_3 - 3] [i_7 - 2] [i_7 + 1]) + (8368327710184861393LL))) - (10LL)))));
                        arr_35 [6LL] [i_4] [i_4] [10] [6LL] [i_7] = ((/* implicit */unsigned long long int) var_5);
                        arr_36 [i_3] [i_7] [(short)0] [i_7] = ((/* implicit */unsigned char) ((_Bool) (~(3251237985257192572LL))));
                        arr_37 [i_3] [i_3] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) arr_19 [i_3] [i_7 + 1])) ? (1602059947) : (((/* implicit */int) (unsigned char)141)))) : (arr_24 [i_3 - 3] [i_7 - 2])));
                        arr_38 [i_7] [i_7] [2] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [i_7 - 3]))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (signed char i_9 = 0; i_9 < 12; i_9 += 3) 
            {
                {
                    arr_46 [10ULL] [i_8] [i_9] = ((/* implicit */unsigned long long int) 1593060830);
                    arr_47 [(unsigned short)10] = ((/* implicit */unsigned long long int) arr_22 [i_3] [i_8] [1LL]);
                    arr_48 [i_3] [0LL] [8ULL] [(unsigned short)4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [7]))));
                }
            } 
        } 
        arr_49 [i_3] = (signed char)-2;
    }
    /* vectorizable */
    for (unsigned char i_10 = 0; i_10 < 12; i_10 += 4) 
    {
        arr_52 [i_10] = ((/* implicit */int) (-((+(arr_2 [(_Bool)1] [5ULL] [5ULL])))));
        arr_53 [i_10] = ((/* implicit */signed char) (((+(((/* implicit */int) (unsigned char)83)))) << (((var_6) + (1459996041)))));
    }
    for (signed char i_11 = 0; i_11 < 10; i_11 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            arr_61 [i_11] = ((/* implicit */unsigned char) max((max((arr_39 [i_11] [i_12]), (arr_39 [i_12] [i_11]))), (min((arr_39 [i_11] [i_11]), (((/* implicit */long long int) (signed char)-24))))));
            arr_62 [i_11] [i_11] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)1129)) ? (arr_45 [i_12] [i_11] [i_11]) : (((/* implicit */int) arr_21 [i_12])))) == ((-(((/* implicit */int) var_2))))));
        }
        arr_63 [i_11] [i_11] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) max((var_11), (1344007074)))) ? (max((((/* implicit */int) arr_23 [i_11] [i_11] [(short)10])), (arr_40 [i_11]))) : (((/* implicit */int) (short)32744)))));
    }
    /* LoopNest 3 */
    for (unsigned int i_13 = 1; i_13 < 14; i_13 += 3) 
    {
        for (signed char i_14 = 0; i_14 < 16; i_14 += 1) 
        {
            for (int i_15 = 3; i_15 < 13; i_15 += 1) 
            {
                {
                    arr_70 [i_13] [0] [i_15 - 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_68 [i_14] [i_15 - 3] [i_14] [i_14]), (((/* implicit */long long int) ((unsigned char) (short)1140))))))));
                    arr_71 [i_13] [(unsigned char)8] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)23103)) ? (max((((/* implicit */unsigned long long int) arr_65 [2LL])), (((((/* implicit */_Bool) arr_0 [i_13] [6ULL])) ? (((/* implicit */unsigned long long int) arr_68 [i_13] [i_13] [i_13] [i_13])) : (arr_2 [i_15] [i_14] [i_13]))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) max(((short)2206), ((short)-26598)))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) ((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)74))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) var_8)) <= (4329045447808309698LL))))) : (6821196891854161778ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (short)9267))) <= (var_14))) && (((var_11) < (((/* implicit */int) var_10))))))))));
    var_16 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (8205344027000806309ULL) : (((/* implicit */unsigned long long int) 1641145333U))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_7)) & (((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) -641268369)) ? (-7211720198816259487LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
}
