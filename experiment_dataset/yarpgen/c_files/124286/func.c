/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124286
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
    var_10 = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)34)) : (((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-8734)) ? (168684061) : (((/* implicit */int) (signed char)-25))))) : (min((var_5), (((/* implicit */long long int) -425205474)))))));
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    arr_7 [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */int) var_8)) == (((/* implicit */int) arr_0 [i_1]))))), (var_8))))));
                    arr_8 [i_0] [i_1] [(short)17] [i_2] = arr_4 [(_Bool)1] [21ULL];
                    /* LoopSeq 4 */
                    for (unsigned char i_3 = 2; i_3 < 19; i_3 += 4) 
                    {
                        arr_11 [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [18U] [i_1] [(_Bool)1])) : (((/* implicit */int) var_9)))) | (((((/* implicit */_Bool) -425205474)) ? (((/* implicit */int) arr_10 [i_0 - 3] [i_0] [i_0 - 3] [15LL] [i_0] [4])) : (((/* implicit */int) var_0))))))) ? (((((/* implicit */int) arr_2 [i_0 - 4])) + ((+(var_7))))) : ((+(((/* implicit */int) ((var_2) <= (((/* implicit */int) var_4)))))))));
                        arr_12 [(signed char)13] [14] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */int) (signed char)-16)) - (((/* implicit */int) var_9)))), (((/* implicit */int) arr_9 [i_2]))))) ? (((((/* implicit */_Bool) max((((/* implicit */short) var_8)), ((short)26781)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((-1038338073) > (((/* implicit */int) var_3)))))) : (((arr_1 [i_0]) >> (((((/* implicit */int) (unsigned short)37187)) - (37126))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((arr_5 [i_0 + 2] [i_1]), (((/* implicit */unsigned short) (short)26781))))) && (((/* implicit */_Bool) arr_2 [i_2]))))))));
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_16 [i_0] [(unsigned short)21] [i_2] [(signed char)11] [(signed char)8] [i_4] [6ULL] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [12LL] [(unsigned short)13] [i_4] [i_3] [i_3 + 3] [(short)9]))) == (var_1))))));
                            arr_17 [i_0] [(short)4] [i_2] [(unsigned short)21] [i_4] = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5294494330912934280LL)) ? (var_7) : (((/* implicit */int) (short)-29705))))) && (((/* implicit */_Bool) (short)29690))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_10 [(unsigned short)20] [i_0] [i_0] [i_0] [i_0 - 4] [i_0])), (var_1)))) ? (((((/* implicit */_Bool) 4851560138801990984LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)29795)))))))));
                            arr_18 [i_0] [i_0 + 1] [(unsigned char)19] [i_0] [18ULL] [(signed char)7] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned long long int) (~(18446744073709551612ULL)))))));
                        }
                        /* vectorizable */
                        for (signed char i_5 = 0; i_5 < 22; i_5 += 1) /* same iter space */
                        {
                            arr_21 [i_0] [i_0] [i_5] [i_0] [i_5] = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)28))));
                            arr_22 [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_2] [i_0] [(unsigned short)15] [i_5]))) <= (var_6))))));
                            arr_23 [i_0 - 4] [i_5] [7LL] [i_0 - 2] [i_0 - 4] [i_0] [i_0 - 4] = ((/* implicit */unsigned long long int) var_4);
                            arr_24 [16] [i_3 - 1] [i_3] [i_5] [i_3] [18ULL] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0 - 2]))) == (var_5)));
                        }
                        for (signed char i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
                        {
                            arr_28 [i_6] [i_6] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) var_3);
                            arr_29 [i_0] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)6170))))), (arr_14 [i_0] [i_0 - 2] [(unsigned short)19] [i_0] [i_0] [i_0] [i_0 + 2])))) ? ((+(((((/* implicit */int) var_4)) | (((/* implicit */int) var_8)))))) : (((/* implicit */int) var_9))));
                            arr_30 [(signed char)7] [21] [i_3] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)9)))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 4) /* same iter space */
                    {
                        arr_33 [i_0] [i_0 - 3] = ((/* implicit */int) ((((/* implicit */int) arr_27 [i_0 + 2])) <= (((/* implicit */int) arr_27 [i_0 - 1]))));
                        arr_34 [i_7] [i_2] [i_2] [i_0 - 1] [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) var_2)) != (var_1)));
                        arr_35 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)29795))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-16673))) : (var_6)));
                        arr_36 [11LL] [(short)6] [(unsigned char)19] [i_2] [i_7] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 - 3])) && ((_Bool)1)))) / (((/* implicit */int) var_3))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 22; i_8 += 4) /* same iter space */
                    {
                        arr_39 [(signed char)1] [(signed char)1] [i_1] [(signed char)1] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)40545)) > (((/* implicit */int) (_Bool)1))))) >> (((var_7) - (852118325)))));
                        arr_40 [i_2] [i_2] [(unsigned char)19] [(unsigned char)19] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)40546)) ^ (max((var_7), (((/* implicit */int) (unsigned char)208)))))))));
                        arr_41 [5] [5] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_1] [i_1])) ? (var_2) : (((/* implicit */int) (short)-16673))))) : (((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) + (((/* implicit */long long int) min((((/* implicit */int) (signed char)-16)), (var_7))))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 22; i_9 += 4) /* same iter space */
                    {
                        arr_45 [19ULL] [21ULL] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) >> (((14472786935250951389ULL) - (14472786935250951359ULL)))));
                        arr_46 [i_2] [i_2] [4LL] = ((/* implicit */short) min((((/* implicit */int) (signed char)-69)), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)24052)) | (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)6953))))) : (((/* implicit */int) arr_25 [i_0 + 2] [i_0 + 2] [i_0 - 3] [i_0 + 2] [i_9]))))));
                    }
                    arr_47 [i_0 - 2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) (~(15350621640836589327ULL)));
                    arr_48 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) var_2);
                }
                arr_49 [i_1] [i_0] [i_0] = ((/* implicit */short) ((unsigned long long int) var_2));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) var_0)))))) && (((/* implicit */_Bool) ((long long int) var_8)))));
}
