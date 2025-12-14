/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187299
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 -= ((/* implicit */signed char) max(((+(arr_0 [i_1]))), (((/* implicit */unsigned long long int) ((arr_2 [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))))))));
                arr_6 [i_0] [i_1] [i_0] = max((((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (((((/* implicit */_Bool) (signed char)41)) ? (arr_2 [i_1]) : (((/* implicit */unsigned long long int) 3800308078U))))))), (((signed char) ((arr_0 [i_0]) > (((/* implicit */unsigned long long int) 3800308083U))))));
                arr_7 [i_1] = ((/* implicit */signed char) arr_1 [i_0]);
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                {
                    var_11 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((((/* implicit */_Bool) arr_14 [i_2] [i_3] [i_2] [i_4])) ? (3800308061U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_4])))))) ? (arr_4 [i_4]) : (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)102)))))));
                    var_12 += ((/* implicit */signed char) max((1943279382U), ((+(min((14856265U), (((/* implicit */unsigned int) arr_5 [i_3]))))))));
                    arr_16 [(signed char)0] [i_3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_2] [i_3] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4] [i_3] [i_2] [i_2]))) : (467655566U)))), (arr_0 [i_2])))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (signed char)47)) | (((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_15 [i_4] [i_3] [i_2] [i_2]))))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) max((var_13), ((~(arr_4 [i_4])))));
                                var_14 = ((/* implicit */unsigned int) (_Bool)0);
                                arr_22 [i_2] = ((signed char) max((arr_1 [i_2]), (arr_1 [i_3])));
                                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_6] [i_5] [i_4] [i_3] [i_2] [i_2]))) & (11556762173304569207ULL)))))) && (((((/* implicit */_Bool) 14721095U)) && (((/* implicit */_Bool) arr_8 [i_2]))))));
                                var_16 = ((/* implicit */_Bool) ((signed char) arr_9 [i_2]));
                            }
                        } 
                    } 
                    var_17 *= ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_2])) >> (((((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_2] [i_2] [8ULL] [i_2] [i_2]))) | (arr_13 [i_2] [i_4]))) - (7543248774650610767LL)))))) & ((~(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)42))) ^ (arr_14 [i_2] [i_3] [i_4] [i_4])))))));
                }
            } 
        } 
        arr_23 [i_2] [i_2] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-49))) : (arr_4 [i_2])))) ? (min((494659212U), (494659201U))) : (((((/* implicit */_Bool) (unsigned short)11100)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57641))) : (arr_14 [i_2] [i_2] [i_2] [i_2]))))));
    }
    for (short i_7 = 3; i_7 < 16; i_7 += 1) 
    {
        var_18 *= ((/* implicit */unsigned int) ((short) arr_21 [i_7] [i_7] [i_7] [i_7] [(unsigned short)2] [i_7] [i_7]));
        /* LoopSeq 1 */
        for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 3) 
        {
            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_7] [i_8])) ? ((+(max((arr_26 [i_7 - 2]), (((/* implicit */unsigned int) var_4)))))) : (max((max((((/* implicit */unsigned int) (_Bool)1)), (494659241U))), (3383127330U)))));
            var_20 = ((/* implicit */short) arr_10 [i_7] [i_7 - 1] [18ULL]);
        }
    }
    for (unsigned int i_9 = 0; i_9 < 17; i_9 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_10 = 0; i_10 < 17; i_10 += 2) 
        {
            for (unsigned int i_11 = 0; i_11 < 17; i_11 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_12 = 0; i_12 < 17; i_12 += 4) 
                    {
                        for (unsigned char i_13 = 2; i_13 < 15; i_13 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)243)) & (((/* implicit */int) (unsigned char)15)))))));
                                var_22 = 2508484215U;
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */_Bool) arr_33 [i_9] [i_9] [i_9] [i_9]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_14 = 0; i_14 < 17; i_14 += 3) 
        {
            for (unsigned long long int i_15 = 2; i_15 < 16; i_15 += 3) 
            {
                {
                    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(max((arr_43 [i_14]), (((/* implicit */unsigned int) arr_18 [i_15] [i_14] [i_15] [(_Bool)1] [i_9]))))))) ? (((/* implicit */int) arr_33 [8U] [i_14] [i_14] [i_14])) : (((/* implicit */int) (signed char)31))));
                    var_25 = ((/* implicit */short) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_32 [i_15] [i_9])), (2508484226U)))) ? (max((((/* implicit */unsigned long long int) arr_40 [i_9] [i_14] [i_14] [i_15] [i_15])), (arr_27 [i_9] [i_9]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)172))))), (arr_41 [i_9] [i_9] [2ULL] [i_9] [i_9] [i_9])));
                    arr_48 [i_9] [i_14] [i_15] = ((/* implicit */signed char) (((_Bool)1) ? ((+(max((arr_44 [i_9] [i_14] [i_14] [i_15]), (((/* implicit */unsigned long long int) arr_42 [i_9] [i_14])))))) : (((/* implicit */unsigned long long int) arr_12 [i_9] [i_14] [i_15]))));
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) ((arr_40 [i_9] [16U] [i_9] [i_9] [i_9]) ? (-1665047899907235LL) : (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_9] [i_9]))))))) ? (((arr_0 [i_9]) >> ((((+(arr_29 [i_9]))) - (11942570423368124634ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-101)))));
        var_27 &= ((/* implicit */signed char) min((min((3791328206713146333ULL), (arr_27 [i_9] [i_9]))), (((/* implicit */unsigned long long int) ((((arr_2 [i_9]) >= (9820234162035509128ULL))) ? (arr_38 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) : (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)127))))))))));
    }
    for (short i_16 = 1; i_16 < 14; i_16 += 1) 
    {
        var_28 += ((/* implicit */short) ((min((arr_35 [i_16 + 1] [i_16 + 1] [i_16 + 1] [i_16 + 1]), (arr_35 [i_16 + 1] [i_16] [i_16 - 1] [i_16]))) ? (((/* implicit */int) arr_35 [i_16 + 1] [i_16] [i_16 - 1] [i_16 - 1])) : (((/* implicit */int) arr_35 [i_16 - 1] [i_16 - 1] [i_16 - 1] [i_16]))));
        arr_53 [9U] = max(((_Bool)1), ((_Bool)1));
    }
    var_29 &= var_5;
    /* LoopNest 2 */
    for (short i_17 = 0; i_17 < 22; i_17 += 1) 
    {
        for (unsigned int i_18 = 0; i_18 < 22; i_18 += 3) 
        {
            {
                arr_60 [i_17] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14007))) : (8567729509061962810ULL))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((signed char) arr_59 [i_17]))) : (((/* implicit */int) var_6)))) : (((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    for (signed char i_20 = 1; i_20 < 20; i_20 += 4) 
                    {
                        {
                            var_30 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 3827311728U)) ? (((((/* implicit */_Bool) arr_65 [i_17] [i_20 + 1] [8U])) ? (arr_65 [i_19] [i_20 - 1] [16U]) : (arr_65 [i_20] [i_20 + 1] [(_Bool)1]))) : ((+(arr_65 [i_17] [i_20 + 2] [12U])))));
                            arr_66 [i_17] [i_17] [i_18] [i_20] [i_19] [i_20 - 1] = ((/* implicit */signed char) ((min((((/* implicit */unsigned int) arr_57 [i_17] [i_18] [i_20 + 2])), ((+(3369933522U))))) & (((/* implicit */unsigned int) ((((((/* implicit */int) arr_56 [i_20])) == (((/* implicit */int) var_2)))) ? (((/* implicit */int) arr_57 [i_17] [i_17] [i_17])) : (((/* implicit */int) arr_58 [i_19] [i_20 + 1])))))));
                            var_31 += ((/* implicit */unsigned long long int) (unsigned char)70);
                        }
                    } 
                } 
            }
        } 
    } 
    var_32 -= ((/* implicit */unsigned int) ((unsigned long long int) 4124435494276103477LL));
}
