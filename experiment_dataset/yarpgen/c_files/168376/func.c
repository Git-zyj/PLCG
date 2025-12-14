/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168376
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
    var_12 = ((/* implicit */long long int) min((((((var_6) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned long long int) var_8))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */short) (((((((_Bool)0) || (((/* implicit */_Bool) var_10)))) && (((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (var_3)))))) ? (min(((-(var_7))), (((/* implicit */long long int) (((_Bool)0) && (((/* implicit */_Bool) (unsigned char)255))))))) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)35102), (((/* implicit */unsigned short) arr_0 [i_0] [9LL]))))))));
                    var_14 = min((arr_5 [(_Bool)0] [(signed char)12] [i_1] [i_1]), (((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) (unsigned char)108)) ^ (((/* implicit */int) arr_5 [(unsigned short)5] [(unsigned short)5] [i_1] [(short)19])))))));
                    arr_6 [i_1] = ((/* implicit */_Bool) min((((((/* implicit */int) arr_4 [i_0] [i_1] [i_1] [i_1])) >> (((((14013274306661029607ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)199))))) - (70418463852567967ULL))))), (((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (arr_1 [12LL] [(signed char)5]) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) < (1073217536))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */unsigned long long int) 30509018)) : (12064857942176851249ULL)));
                        arr_10 [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_9 [(signed char)2] [(_Bool)1] [(unsigned short)3] [i_2] [i_1] [10ULL])) ? (arr_7 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2] [3ULL]))))))));
                    }
                }
            } 
        } 
    } 
    var_16 ^= ((/* implicit */int) var_6);
    var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((var_2) ? (-30509018) : (((/* implicit */int) (unsigned char)153))))), (((((/* implicit */_Bool) var_7)) ? (var_7) : (var_5))))))));
    /* LoopSeq 2 */
    for (unsigned short i_4 = 1; i_4 < 24; i_4 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 1; i_5 < 24; i_5 += 2) 
        {
            for (signed char i_6 = 2; i_6 < 23; i_6 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 1; i_7 < 23; i_7 += 3) 
                    {
                        for (int i_8 = 1; i_8 < 23; i_8 += 2) 
                        {
                            {
                                arr_23 [i_4] [9U] [i_4] [(unsigned short)23] [16ULL] [i_7] [(_Bool)1] = min((var_4), (((/* implicit */unsigned long long int) ((var_11) < (arr_15 [i_4] [i_6])))));
                                arr_24 [i_4] [i_4] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_2)), (arr_22 [10ULL] [0U] [0U]))))) : (var_5))) << (min(((~(arr_18 [i_4] [(short)1] [(short)1] [i_8]))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_12 [i_4] [i_5])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_9 = 3; i_9 < 21; i_9 += 3) 
                    {
                        for (int i_10 = 3; i_10 < 24; i_10 += 2) 
                        {
                            {
                                arr_31 [i_4] [14ULL] [i_4] = ((/* implicit */signed char) var_3);
                                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [18] [18] [19ULL] [i_9] [i_4] [(_Bool)1] [i_9])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)102)) / (((/* implicit */int) (short)-17583))))) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)0))))) : (min((var_0), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_10] [(unsigned short)9] [i_9] [(unsigned short)9] [i_5] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_18 [i_4] [2U] [2U] [(unsigned short)9]))))))));
                                var_19 = (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_26 [i_4] [i_10 - 3] [i_4] [i_6 + 2])), (arr_14 [14] [i_10 - 2] [i_4])))));
                                var_20 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)1654))) : (arr_16 [i_5] [i_6] [(_Bool)1] [(unsigned short)24])))) * (((var_4) % (var_0))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)99)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned short) (+((~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_4] [i_4] [i_4] [i_4] [(_Bool)1] [13ULL] [(unsigned char)4]))) ^ (var_6)))))));
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (((~(arr_14 [i_4] [i_4] [12ULL]))) % (((((/* implicit */unsigned long long int) 710303466U)) + (var_11)))))) ? (arr_15 [(signed char)14] [i_4]) : (((/* implicit */unsigned long long int) min((((((/* implicit */int) (unsigned short)26365)) + (((/* implicit */int) arr_25 [i_4] [10U])))), (((/* implicit */int) arr_22 [i_4] [i_4 - 1] [(unsigned char)0]))))))))));
    }
    for (unsigned short i_11 = 1; i_11 < 24; i_11 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_12 = 3; i_12 < 21; i_12 += 2) 
        {
            arr_37 [(_Bool)1] [(unsigned short)22] [i_11] &= ((/* implicit */int) ((short) ((((/* implicit */int) var_9)) - (((/* implicit */int) (_Bool)1)))));
            arr_38 [i_11] [i_12] = ((/* implicit */unsigned char) var_10);
        }
        /* LoopNest 2 */
        for (signed char i_13 = 2; i_13 < 24; i_13 += 3) 
        {
            for (unsigned long long int i_14 = 2; i_14 < 24; i_14 += 4) 
            {
                {
                    arr_43 [i_11] [i_11] [i_11] [(signed char)0] = ((/* implicit */unsigned char) arr_14 [i_13] [(short)14] [i_14]);
                    /* LoopSeq 4 */
                    for (unsigned long long int i_15 = 0; i_15 < 25; i_15 += 4) 
                    {
                        var_23 *= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (short)8231))) : (6246740333433889356LL)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) arr_32 [(short)18])) ? (6381886131532700367ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)149)))))))));
                        arr_46 [i_11] [i_13] [i_13] [i_14] [(signed char)19] [i_15] = ((/* implicit */unsigned char) min(((-(min((var_11), (var_6))))), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)102))) & (1819400774472477046LL)))) ? (14700167634052864003ULL) : (((unsigned long long int) (signed char)-79))))));
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        arr_50 [i_11] [(unsigned char)8] [i_11] [(short)21] [2LL] [(_Bool)1] = ((/* implicit */signed char) min((((((var_11) * (((/* implicit */unsigned long long int) (-2147483647 - 1))))) + (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_26 [i_11] [(unsigned short)8] [i_14] [i_11])), (var_7)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [(signed char)15] [(_Bool)1] [21]))) + (15444551770292992136ULL)))) || (((((/* implicit */unsigned long long int) var_3)) != (var_6))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_17 = 0; i_17 < 25; i_17 += 2) 
                        {
                            arr_53 [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)87))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_52 [i_11] [(signed char)18] [i_11] [i_11] [i_11])) ^ (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [(unsigned short)15] [i_13] [i_14] [i_16] [i_17]))) + (var_4)))));
                            arr_54 [(unsigned short)21] [(unsigned short)21] = var_9;
                            arr_55 [i_16] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                        }
                        var_24 = ((/* implicit */_Bool) ((((((1062787248U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_11] [i_11]))))) ? (((((/* implicit */_Bool) 1474218167U)) ? (((/* implicit */unsigned long long int) var_3)) : (3546242589813637970ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_11] [i_11] [i_14] [i_16] [i_16] [i_14]))))) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)99)))))));
                        var_25 = ((/* implicit */_Bool) arr_29 [i_13] [i_13] [i_14] [i_14] [i_14] [(signed char)10] [(unsigned char)8]);
                    }
                    for (unsigned long long int i_18 = 1; i_18 < 24; i_18 += 3) 
                    {
                        var_26 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(var_3)))) == (((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_11)))) : (((((/* implicit */_Bool) (short)4085)) ? (var_4) : (((/* implicit */unsigned long long int) arr_18 [1LL] [1LL] [i_14] [(unsigned char)8]))))))));
                        arr_59 [i_11] [(signed char)17] [i_14] [i_18] = ((/* implicit */signed char) ((3232180048U) << (((((/* implicit */int) (unsigned char)120)) - (98)))));
                    }
                    for (unsigned int i_19 = 1; i_19 < 23; i_19 += 4) 
                    {
                        var_27 = ((/* implicit */short) arr_34 [14] [14]);
                        var_28 = ((/* implicit */unsigned long long int) arr_30 [i_11] [(signed char)11] [(short)24] [(short)24] [(unsigned char)23] [(_Bool)1]);
                    }
                }
            } 
        } 
        arr_62 [(signed char)12] [(signed char)12] = ((/* implicit */short) min((max(((~(8677456269536900285ULL))), (((((/* implicit */_Bool) 631552744)) ? (((/* implicit */unsigned long long int) 2147483647)) : (var_4))))), (((/* implicit */unsigned long long int) var_7))));
    }
}
