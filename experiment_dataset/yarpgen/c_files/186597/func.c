/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186597
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
    var_15 = ((min((var_4), (var_4))) ? (((/* implicit */int) var_13)) : (((((((/* implicit */_Bool) 15893183985915570212ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3)))) & (((((/* implicit */int) var_10)) * (((/* implicit */int) var_0)))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_1 [i_0]))));
        arr_2 [i_0] = min((((/* implicit */unsigned int) (((-(15893183985915570190ULL))) < (min((15893183985915570212ULL), (((/* implicit */unsigned long long int) var_3))))))), (arr_0 [i_0]));
    }
    for (signed char i_1 = 3; i_1 < 16; i_1 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) ((long long int) ((signed char) 1982815470755285500LL)));
        /* LoopSeq 2 */
        for (short i_2 = 2; i_2 < 18; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 1; i_3 < 17; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_12) : (((/* implicit */int) (unsigned char)85))))) > (max((arr_4 [i_2 - 2]), (2553560087793981426ULL))))) ? ((~(((((/* implicit */_Bool) 1982815470755285500LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (0U))))) : (min((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) * (arr_13 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1]))), (((/* implicit */unsigned int) min((((/* implicit */int) var_14)), (var_12)))))))))));
                        var_19 |= ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)180)) / (((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) (_Bool)1))));
                        var_20 = ((/* implicit */unsigned int) (((+(((((/* implicit */_Bool) (unsigned short)64218)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (1156299152485977660LL))))) % (max((((/* implicit */long long int) arr_13 [i_3 + 3] [i_2 - 2] [i_2 - 1] [i_1 + 4])), (min((9223372036854775807LL), (0LL)))))));
                        var_21 *= ((((/* implicit */long long int) ((/* implicit */int) (signed char)107))) + ((-(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (9214211593982728170LL))))));
                    }
                } 
            } 
            arr_15 [i_2 - 1] [i_1 + 4] = ((/* implicit */short) (((((_Bool)1) ? (arr_14 [i_1 - 1] [i_2 + 1] [i_2 - 1] [i_1 - 1] [i_2 - 2] [i_2 - 1]) : (arr_14 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_1 - 1] [i_1 + 2]))) * (((/* implicit */unsigned long long int) ((((min((var_7), (var_5))) + (9223372036854775807LL))) >> (((arr_4 [i_2 - 1]) - (5498577108021292788ULL))))))));
            /* LoopNest 3 */
            for (unsigned long long int i_5 = 2; i_5 < 18; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 1; i_6 < 19; i_6 += 2) 
                {
                    for (unsigned int i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1 - 2]))) * (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (715804419U)))));
                            arr_26 [i_1 + 2] [i_2 + 2] [i_5 + 2] [i_6 + 1] [i_7] = ((/* implicit */unsigned short) (((+((-(var_12))))) ^ (((((/* implicit */int) (signed char)32)) | (((569034333) * (((/* implicit */int) (_Bool)1))))))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (_Bool)1))));
        }
        for (signed char i_8 = 0; i_8 < 20; i_8 += 4) 
        {
            var_24 &= ((/* implicit */long long int) (((+(arr_14 [i_1 + 3] [i_8] [i_1 + 1] [i_1 + 3] [i_1 + 4] [i_1 - 3]))) == (((/* implicit */unsigned long long int) (-(((var_4) ? (((/* implicit */int) var_14)) : (var_12))))))));
            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1 + 3])) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (+(var_12)))), (((((/* implicit */_Bool) (unsigned short)8160)) ? (-4LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)223)))))))) : (var_11)));
            var_26 = ((/* implicit */unsigned char) ((unsigned short) (_Bool)1));
        }
        var_27 = (-((((-(((/* implicit */int) arr_23 [i_1 - 1] [i_1 + 2] [i_1 + 3] [i_1 + 4] [i_1 - 3] [i_1 + 3])))) & (((/* implicit */int) min(((short)5386), (((/* implicit */short) var_0))))))));
        var_28 *= ((/* implicit */unsigned long long int) arr_25 [i_1 - 1] [i_1 + 3] [i_1 + 3] [i_1 + 2] [i_1 - 3]);
        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) var_6))));
    }
    for (unsigned int i_9 = 0; i_9 < 15; i_9 += 1) 
    {
        var_30 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_22 [i_9])) : (((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) arr_17 [i_9] [i_9] [i_9] [i_9])) ? (21ULL) : (arr_17 [i_9] [i_9] [i_9] [i_9])))));
        var_31 = ((((((/* implicit */_Bool) min(((unsigned short)55314), (((/* implicit */unsigned short) (signed char)125))))) ? (arr_8 [i_9]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))))) >> (((((/* implicit */int) arr_30 [i_9])) - (127))));
    }
    var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) max((0LL), (((/* implicit */long long int) (_Bool)1)))))));
    var_33 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1343357685)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (4751089355109935262LL)));
}
