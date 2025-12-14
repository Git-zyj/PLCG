/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131961
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
    var_18 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((var_9) + (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) >= (max((3021460271U), (var_1)))))), ((+(((((/* implicit */_Bool) 3021460271U)) ? (var_11) : (((/* implicit */long long int) 3021460271U))))))));
    var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) max((var_3), (((/* implicit */unsigned char) var_6)))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (1273507011U))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 6384601490860736698LL))))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_2) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_6))))) != (var_10))))));
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) 12633453181237451798ULL))) ? (-15LL) : (((/* implicit */long long int) ((unsigned int) (_Bool)0)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) & (min((((/* implicit */unsigned long long int) var_1)), (var_10)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 4; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (+(arr_1 [i_0] [i_1]))))));
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]))));
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) -6384601490860736702LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0])) || (((/* implicit */_Bool) var_6)))))) : (6384601490860736678LL))))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_13 [15ULL] [3U] [3U] [i_0 - 3] = ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
                        arr_14 [i_0] [i_0] = ((/* implicit */int) ((arr_6 [(unsigned char)4] [i_0 - 3] [i_4]) ^ (((unsigned int) arr_5 [i_4]))));
                        /* LoopSeq 3 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_24 = ((/* implicit */_Bool) ((unsigned short) ((unsigned char) arr_3 [i_3] [i_3])));
                            var_25 += ((/* implicit */signed char) ((unsigned long long int) arr_10 [i_0 - 1] [i_2] [i_3] [i_4]));
                        }
                        for (int i_6 = 1; i_6 < 16; i_6 += 1) 
                        {
                            var_26 *= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [(_Bool)0]))) < ((+(arr_19 [i_0] [10U] [i_3] [i_4] [i_6] [i_3])))));
                            var_27 -= ((/* implicit */signed char) ((int) var_10));
                        }
                        for (unsigned int i_7 = 4; i_7 < 16; i_7 += 3) 
                        {
                            arr_24 [i_4] [i_4] [i_3] [i_4] [i_7] [i_4] [i_2] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-46)) : (arr_0 [i_0] [i_2])))) & (arr_19 [i_2] [i_4] [i_7] [i_7] [i_7] [i_7 - 3])));
                            arr_25 [(unsigned short)16] [i_4] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_2 [i_0] [i_0 - 2]) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_11))))));
                        }
                    }
                } 
            } 
            var_28 = ((/* implicit */unsigned int) var_14);
        }
        for (unsigned char i_8 = 0; i_8 < 17; i_8 += 4) 
        {
            /* LoopNest 3 */
            for (int i_9 = 2; i_9 < 15; i_9 += 1) 
            {
                for (unsigned short i_10 = 1; i_10 < 14; i_10 += 2) 
                {
                    for (int i_11 = 1; i_11 < 16; i_11 += 2) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((4294967295U) - (((/* implicit */unsigned int) ((((/* implicit */int) arr_31 [i_0] [i_8] [i_0] [i_8] [i_8])) - (((/* implicit */int) var_6))))))))));
                            arr_35 [i_10 + 1] [i_8] [i_0] [i_8] |= ((/* implicit */int) (-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_8]))) : (12633453181237451786ULL)))));
                            var_30 |= ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [9LL] [i_8] [i_9 + 2]))) != (var_7))));
                            var_31 = ((/* implicit */unsigned short) arr_32 [i_8] [i_9 - 1] [i_10 + 2] [i_10]);
                            var_32 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_23 [i_11 + 1] [i_0 + 4] [i_11] [i_0 + 4] [i_0] [i_0 - 4] [i_0 - 4])) - (((/* implicit */int) (unsigned char)28))));
                        }
                    } 
                } 
            } 
            var_33 -= ((/* implicit */unsigned short) ((arr_21 [i_0] [i_8] [i_0] [i_8] [i_0] [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_26 [15ULL] [i_8] [i_8])) && (((/* implicit */_Bool) arr_6 [i_0] [i_0 + 2] [i_0]))))))));
        }
        /* LoopSeq 1 */
        for (unsigned char i_12 = 1; i_12 < 14; i_12 += 3) 
        {
            arr_40 [i_12] [i_12] = ((/* implicit */long long int) ((unsigned short) 28LL));
            arr_41 [i_12] [i_12] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_31 [i_12] [i_12] [i_0 + 1] [i_12] [i_12])) : (((/* implicit */int) arr_33 [i_0] [i_12] [i_12] [i_12] [(signed char)6])))));
            var_34 = ((/* implicit */unsigned long long int) arr_32 [i_12 + 2] [i_12] [i_0] [i_0 + 2]);
        }
        var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-21159)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) var_2))))) | (((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0]))))))))));
    }
    var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) 8093731152094795535ULL))));
}
