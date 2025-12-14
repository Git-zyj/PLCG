/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145089
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
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) min((var_0), (max((var_0), (((/* implicit */short) var_9))))))) : (min((((/* implicit */int) var_7)), (var_10)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_0] [(unsigned char)16] [i_1]))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) -6511142557406645586LL)) ? (((/* implicit */int) arr_0 [8])) : (-774357622))))), ((+(((/* implicit */int) arr_2 [i_1] [i_1]))))));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */int) arr_5 [i_0] [i_0] [i_1]);
                        var_13 = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_1] [i_3])) <= (max((((/* implicit */int) arr_5 [i_2 - 1] [i_2 + 1] [i_1])), ((-(((/* implicit */int) arr_1 [i_0] [i_0]))))))));
                        var_14 = ((/* implicit */_Bool) (((((-(((/* implicit */int) (unsigned short)2692)))) < (((/* implicit */int) ((((/* implicit */unsigned long long int) 534086699)) != (17209132942550594489ULL)))))) ? (max((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) arr_4 [i_1] [i_1] [16ULL]))))), (((((/* implicit */_Bool) var_6)) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_8 [i_1 - 1] [i_2 + 1] [i_0] [(short)6]), (arr_8 [i_1 - 1] [i_2 + 1] [i_2] [i_1])))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_15 = ((/* implicit */_Bool) 1073741824);
                        var_16 = (-(((arr_8 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_8 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1])))));
                    }
                    for (long long int i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned char) arr_0 [(unsigned short)8]);
                        var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(min((((/* implicit */int) var_5)), (-1073741841))))))));
                        var_19 = ((/* implicit */long long int) var_9);
                    }
                    var_20 = ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_2]))) + (arr_7 [i_1] [i_1] [i_2])))) ? (((6586890995413456405ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [14] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) + (((/* implicit */unsigned long long int) arr_9 [i_2] [i_1] [6] [6] [6])));
                    /* LoopSeq 3 */
                    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 3) /* same iter space */
                    {
                        var_21 = ((/* implicit */signed char) min((min((6586890995413456405ULL), (((/* implicit */unsigned long long int) arr_9 [i_6] [i_6] [9] [i_1] [i_0])))), (((((/* implicit */_Bool) (~(1237611131158957132ULL)))) ? (((((/* implicit */_Bool) var_0)) ? (17209132942550594489ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) min((arr_15 [1] [i_2] [i_0] [i_0]), (728909571))))))));
                        arr_20 [i_1] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((1073741824) ^ (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (min((-555670623371719644LL), (((/* implicit */long long int) (unsigned char)0))))))) ? (6586890995413456389ULL) : (((/* implicit */unsigned long long int) 968976495U))));
                        arr_21 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [3U] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1] [i_1 - 1])) ? (((/* implicit */int) var_2)) : (arr_14 [8LL] [i_1 - 1] [i_1 + 1] [i_1] [i_1] [i_1 + 1]))))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 17; i_7 += 3) /* same iter space */
                    {
                        var_22 = ((/* implicit */short) 9667685071780769245ULL);
                        var_23 = ((/* implicit */_Bool) -728909552);
                        arr_24 [i_1] [i_1] [i_2] [i_1] [(short)14] = ((/* implicit */int) arr_13 [i_1]);
                    }
                    for (short i_8 = 2; i_8 < 14; i_8 += 3) 
                    {
                        arr_27 [i_0] [i_1] [i_2] [i_2] [6] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((((/* implicit */int) (short)-26228)) | (((/* implicit */int) (unsigned short)12349)))), (((/* implicit */int) ((var_8) <= (arr_13 [i_1]))))))) - (min(((~(var_3))), (((/* implicit */unsigned long long int) ((-1073741841) != (((/* implicit */int) var_2)))))))));
                        var_24 = ((/* implicit */int) (unsigned char)255);
                        arr_28 [i_2] [i_1] [i_2] [i_1] [i_8 + 3] = ((/* implicit */unsigned char) max(((+(arr_12 [i_1] [(short)16] [i_1]))), ((-(((((/* implicit */_Bool) (signed char)54)) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) (_Bool)1))))))));
                    }
                }
            } 
        } 
        arr_29 [i_0] [i_0] = ((/* implicit */int) (((~(17209132942550594489ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (arr_4 [(unsigned char)0] [i_0] [i_0])))))));
        arr_30 [i_0] = ((/* implicit */int) ((((((/* implicit */int) arr_0 [i_0])) < (((/* implicit */int) arr_0 [i_0])))) || (((/* implicit */_Bool) min((var_0), (((/* implicit */short) arr_8 [i_0] [i_0] [i_0] [2ULL])))))));
        /* LoopNest 3 */
        for (int i_9 = 3; i_9 < 13; i_9 += 4) 
        {
            for (unsigned short i_10 = 0; i_10 < 17; i_10 += 4) 
            {
                for (long long int i_11 = 0; i_11 < 17; i_11 += 1) 
                {
                    {
                        arr_40 [i_11] = ((/* implicit */int) ((((/* implicit */long long int) max(((-(((/* implicit */int) arr_36 [(_Bool)1] [i_9] [i_10] [i_11])))), (((/* implicit */int) max((var_7), (var_11))))))) * (((((/* implicit */_Bool) ((11859853078296095228ULL) / (((/* implicit */unsigned long long int) -198369052))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) -198369083)) : (arr_31 [i_11] [i_9] [(short)16]))) : (((/* implicit */long long int) (-(-4))))))));
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_18 [i_0] [i_9] [i_11] [i_11])))))))) ? ((+(min((((/* implicit */int) arr_39 [i_0] [i_9] [i_10] [10] [i_11] [8LL])), (-389035052))))) : ((((-(-198369052))) / (((/* implicit */int) arr_39 [(_Bool)1] [i_9 + 1] [i_9 + 3] [i_9 + 3] [i_0] [i_0]))))));
                        var_26 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_26 [i_0] [(unsigned short)14] [i_10] [i_10]))));
                    }
                } 
            } 
        } 
    }
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) + (var_3)))) ? (((((/* implicit */_Bool) -688844012)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_8))) : (((/* implicit */long long int) ((/* implicit */int) ((var_9) || (((/* implicit */_Bool) var_11))))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -7323452248239048253LL)) ? (6586890995413456389ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))) : (var_10)));
}
