/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110085
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
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (short)30914)) ? (131071U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)180)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))));
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (+(131071U)))) ? (8135992133563295913ULL) : (11740491135406364682ULL)));
        var_18 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (short)7398)) : (((/* implicit */int) var_8))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    {
                        arr_11 [i_0] [(unsigned short)3] [(unsigned short)3] [i_3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)111))));
                        arr_12 [(unsigned char)11] [(unsigned char)11] [(signed char)11] [i_2] [2LL] [(unsigned char)10] = ((/* implicit */unsigned char) ((arr_5 [i_0 - 2] [i_0 - 2] [i_0 - 1]) ? ((~(((/* implicit */int) arr_1 [i_0])))) : ((+(((/* implicit */int) (unsigned char)2))))));
                        var_19 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (arr_9 [i_0] [i_0] [i_0] [(_Bool)1])));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_4 = 2; i_4 < 12; i_4 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 2; i_5 < 13; i_5 += 4) 
        {
            for (signed char i_6 = 1; i_6 < 11; i_6 += 2) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_8 = 0; i_8 < 14; i_8 += 2) 
                        {
                            arr_25 [i_6] [(unsigned short)13] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_9 [i_4] [i_8] [i_6 + 3] [i_4 - 1])));
                            arr_26 [i_8] [i_6] [i_4] [i_6] [3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_6])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        }
                        for (short i_9 = 2; i_9 < 13; i_9 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned char) var_1);
                            var_21 = ((/* implicit */signed char) ((var_14) | (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                            var_22 = ((/* implicit */long long int) (!((_Bool)1)));
                        }
                        var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 18119735296243279563ULL)) ? (arr_27 [(unsigned char)10] [i_4 - 1] [i_5] [i_4] [i_4 - 1]) : (((/* implicit */long long int) 665493647)))) | (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65535)))))));
                        arr_29 [i_4] [i_6] [i_5] [(unsigned char)0] [i_7] = ((/* implicit */_Bool) (+(arr_4 [0] [i_5])));
                        arr_30 [i_4 + 2] [6] [9U] [i_6] = ((/* implicit */unsigned int) (((~(((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_0) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) arr_24 [i_4]))))))));
                    }
                } 
            } 
        } 
        arr_31 [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)203)) ? (arr_28 [i_4] [i_4] [i_4 + 2] [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)52))))) > (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)1))))));
        var_25 += ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) != ((+(((/* implicit */int) (_Bool)1))))));
        arr_32 [i_4 - 1] = var_6;
    }
    for (unsigned short i_10 = 0; i_10 < 18; i_10 += 2) 
    {
        var_26 |= ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_33 [i_10])))) - (((((/* implicit */_Bool) (short)9364)) ? (((/* implicit */int) (short)3)) : (((/* implicit */int) (_Bool)1))))));
        arr_37 [3LL] = ((/* implicit */int) (_Bool)1);
        arr_38 [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_33 [i_10])) : ((((_Bool)1) ? (((/* implicit */int) ((((/* implicit */int) arr_34 [i_10] [i_10])) > (((/* implicit */int) var_8))))) : (((/* implicit */int) ((-1471141644) > (((/* implicit */int) (unsigned char)166)))))))));
    }
}
