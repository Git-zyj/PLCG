/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136202
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 14; i_1 += 3) /* same iter space */
        {
            var_10 &= ((/* implicit */unsigned long long int) ((_Bool) arr_0 [i_0 - 3]));
            arr_5 [i_0 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (arr_1 [i_0 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
            /* LoopSeq 4 */
            for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                /* LoopSeq 2 */
                for (long long int i_3 = 1; i_3 < 10; i_3 += 1) 
                {
                    var_11 = ((/* implicit */short) ((((8890669419539801980ULL) & (((/* implicit */unsigned long long int) var_7)))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [(unsigned short)2] [(short)7] [i_0])) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_2])))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 3; i_4 < 13; i_4 += 3) 
                    {
                        var_12 += (((_Bool)1) || (((/* implicit */_Bool) (short)-1)));
                        arr_14 [i_0] [i_0] [i_0 - 3] [i_0] [i_2] = ((/* implicit */unsigned short) var_1);
                        var_13 += ((/* implicit */unsigned short) var_1);
                        var_14 *= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) * (arr_7 [i_0] [10ULL] [i_2]))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [(_Bool)1] [i_1])) ? (((/* implicit */int) arr_13 [(_Bool)1] [i_3] [i_2] [i_1] [(_Bool)1])) : (((/* implicit */int) var_1)))))));
                    }
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        arr_17 [10] [10] [(short)4] [(short)4] [10] &= ((/* implicit */short) ((arr_7 [i_3 + 3] [(unsigned char)2] [i_3 + 2]) != (arr_7 [i_3 + 2] [(short)12] [i_3 - 1])));
                        var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 3013895248629506305LL)) + (11171071797219698011ULL)));
                    }
                }
                for (long long int i_6 = 1; i_6 < 11; i_6 += 3) 
                {
                    var_16 = ((/* implicit */unsigned int) ((arr_1 [i_2 + 3]) != (arr_1 [i_0 - 1])));
                    var_17 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0 - 1] [i_2] [11LL]))))) > (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_2]))) <= (2559097996U))))));
                    /* LoopSeq 3 */
                    for (signed char i_7 = 3; i_7 < 13; i_7 += 2) 
                    {
                        var_18 = ((/* implicit */short) ((((/* implicit */int) arr_9 [i_0 - 2] [i_0 - 2] [i_2 + 2])) > (((((/* implicit */int) arr_3 [i_0] [i_1] [i_6])) % (((/* implicit */int) var_3))))));
                        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 2] [i_0])))))) ? (((/* implicit */int) arr_4 [i_0 + 2])) : (((/* implicit */int) ((unsigned short) var_0)))));
                        var_20 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_6 + 1] [i_6 + 1] [8ULL] [9ULL]))) & (var_7)))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))) | (arr_7 [i_0] [(unsigned char)4] [(signed char)0])))));
                        arr_23 [i_2] [i_6] [i_2] [6U] [i_2] = ((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned char)17)))) >> (((613648991875677603LL) - (613648991875677586LL)))));
                        var_21 = ((/* implicit */unsigned short) (((+(789854548284602738ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0 + 1] [i_6 + 3] [i_0 + 1] [(unsigned char)3] [i_7])))));
                    }
                    for (unsigned long long int i_8 = 1; i_8 < 13; i_8 += 4) 
                    {
                        arr_27 [i_2] [i_2] [i_6] [i_2 + 3] [i_2] [i_0] = ((/* implicit */_Bool) ((signed char) -1545090360));
                        var_22 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [10] [i_1] [10U] [i_6] [10U])) ? (((/* implicit */int) arr_13 [10LL] [i_6] [i_2 + 1] [i_6] [i_8])) : (((/* implicit */int) arr_13 [(_Bool)0] [(_Bool)0] [(_Bool)0] [i_6] [i_6]))));
                        var_23 = ((/* implicit */long long int) var_3);
                    }
                    for (unsigned long long int i_9 = 3; i_9 < 12; i_9 += 2) 
                    {
                        var_24 = ((/* implicit */signed char) arr_1 [i_0]);
                        arr_30 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)199)) ? (9556074654169749646ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-51)))));
                    }
                }
                arr_31 [i_2] = ((/* implicit */signed char) ((short) (signed char)-36));
                var_25 ^= var_3;
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_26 = ((/* implicit */short) var_3);
                var_27 = (!(((/* implicit */_Bool) arr_10 [i_0] [i_0 - 3] [i_1] [i_0 - 3] [i_1])));
                var_28 *= ((/* implicit */_Bool) arr_0 [i_0 - 1]);
                var_29 = arr_19 [i_0 - 2] [i_0 - 2] [i_10] [i_10];
            }
            for (unsigned long long int i_11 = 1; i_11 < 11; i_11 += 4) /* same iter space */
            {
                var_30 = ((/* implicit */short) (-(((/* implicit */int) ((11171071797219698014ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 14; i_12 += 3) 
                {
                    for (short i_13 = 1; i_13 < 13; i_13 += 3) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned char) (short)12163);
                            var_32 = ((short) ((((/* implicit */int) (short)-23318)) + (((/* implicit */int) var_3))));
                            var_33 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_13] [i_12] [(short)7] [i_1] [(unsigned short)10])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)79))))) ? (arr_40 [i_0 - 3] [i_0 - 2] [0] [i_11 - 1] [i_13 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                            var_34 = ((int) ((((/* implicit */int) (unsigned short)38960)) | (((/* implicit */int) (unsigned short)28672))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_14 = 1; i_14 < 11; i_14 += 4) /* same iter space */
            {
                var_35 = ((/* implicit */unsigned char) (((+(((/* implicit */int) (unsigned char)0)))) % ((+(((/* implicit */int) var_3))))));
                var_36 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_21 [i_0 + 2] [i_0 + 2] [i_14] [i_14] [i_14])) : (((((/* implicit */_Bool) 8890669419539801984ULL)) ? (((/* implicit */int) arr_10 [0LL] [i_1] [i_1] [0LL] [(_Bool)0])) : (((/* implicit */int) arr_26 [i_0 - 2] [i_14] [i_14] [10] [i_0] [i_0]))))));
            }
        }
        for (int i_15 = 0; i_15 < 14; i_15 += 3) /* same iter space */
        {
            arr_47 [i_0] [i_15] [i_15] = ((/* implicit */unsigned char) ((min((((var_7) / (var_7))), (((/* implicit */unsigned int) max(((unsigned char)38), (((/* implicit */unsigned char) var_5))))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)163))) <= (arr_32 [i_15] [i_15] [i_15])))) >= ((~(((/* implicit */int) arr_35 [i_15] [i_0] [i_0]))))))))));
            var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_0 - 1] [i_0 + 2] [i_0])) ? (((/* implicit */int) arr_36 [i_0 + 1] [i_0 - 2] [i_0])) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_15] [i_15] [10] [i_0] [i_15] [i_0]))) : ((~(((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned long long int) arr_29 [i_0] [i_0] [i_0] [i_0]))))))));
            var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) min((((((/* implicit */int) (unsigned short)36865)) << (((((/* implicit */int) arr_4 [i_15])) - (72))))), (((/* implicit */int) ((signed char) var_0))))))));
        }
        var_39 += ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_6 [(unsigned char)10] [i_0 - 3])) : (((/* implicit */int) arr_22 [(signed char)2] [i_0 + 1] [(signed char)2] [i_0 + 1] [(signed char)2] [i_0])))));
    }
    var_40 = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) ((var_4) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) - (var_9))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) var_1))))))))));
}
