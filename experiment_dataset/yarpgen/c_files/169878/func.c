/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169878
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
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_1 [i_0 - 1]) ^ (((/* implicit */int) arr_0 [i_0 - 1]))))) || (((((/* implicit */int) (short)124)) >= (arr_1 [i_0 - 1])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) - (((/* implicit */int) var_11))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */long long int) ((int) min((arr_0 [i_0]), ((short)12137))))) == ((-(((7182631015857661930LL) | (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
                }
            } 
        } 
        arr_9 [i_0] = ((int) (-(arr_1 [i_0 - 1])));
        arr_10 [i_0] [i_0 - 1] = ((/* implicit */signed char) ((min((((/* implicit */unsigned int) arr_2 [i_0] [i_0 - 1])), (4294967295U))) | (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned short)10237)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */int) arr_6 [i_0])))), (((/* implicit */int) var_0)))))));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) 12U)) ? (((/* implicit */int) ((arr_11 [i_3]) >= (((/* implicit */long long int) arr_1 [i_3]))))) : (((/* implicit */int) ((unsigned short) (signed char)67)))));
        arr_13 [i_3] = ((/* implicit */int) arr_0 [i_3]);
        var_15 ^= ((((/* implicit */_Bool) (signed char)-67)) ? (1496124562) : (((/* implicit */int) (unsigned short)65515)));
        arr_14 [i_3] = ((/* implicit */int) (short)-21123);
    }
    /* vectorizable */
    for (unsigned int i_4 = 2; i_4 < 9; i_4 += 2) 
    {
        arr_17 [i_4] = ((unsigned int) (_Bool)1);
        /* LoopNest 2 */
        for (short i_5 = 2; i_5 < 9; i_5 += 2) 
        {
            for (int i_6 = 0; i_6 < 12; i_6 += 1) 
            {
                {
                    arr_23 [3LL] [i_5] [3LL] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [(short)2] [1LL] [i_6])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_4] [i_5]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(short)7] [i_5]))))) : (((((/* implicit */_Bool) arr_0 [i_6])) ? (((/* implicit */int) (unsigned short)8985)) : (arr_18 [1ULL])))));
                    arr_24 [i_4] [i_5] [i_4] = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_4 + 1] [i_4 + 2])) <= (((/* implicit */int) arr_0 [i_4 + 2]))));
                    arr_25 [i_5 - 1] [i_5] [i_4 + 2] [i_4] = ((/* implicit */short) arr_5 [i_4] [(signed char)16]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        for (signed char i_8 = 0; i_8 < 12; i_8 += 3) 
                        {
                            {
                                arr_31 [i_4] [i_4 + 1] [i_5 + 1] [i_8] [i_7] [i_8] = ((/* implicit */long long int) (~(((/* implicit */int) arr_21 [i_5] [i_5 - 2] [i_5 + 2]))));
                                var_16 = ((/* implicit */int) ((((/* implicit */long long int) arr_27 [i_5 - 1] [i_5] [i_5] [i_5] [i_5] [i_5 + 2])) != (((long long int) -3301315889409587901LL))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 2; i_9 < 9; i_9 += 1) 
                    {
                        for (int i_10 = 0; i_10 < 12; i_10 += 2) 
                        {
                            {
                                var_17 = ((int) arr_22 [i_4] [i_10] [(unsigned char)10] [i_9 + 3]);
                                arr_37 [i_4] = ((((/* implicit */int) var_6)) % (((/* implicit */int) ((((/* implicit */_Bool) (signed char)45)) || (((/* implicit */_Bool) 7182631015857661938LL))))));
                                arr_38 [i_4] [i_5] [i_4] [i_9] [i_10] = ((/* implicit */signed char) ((15198368453172282932ULL) < (((/* implicit */unsigned long long int) 529671860))));
                                var_18 = ((/* implicit */unsigned long long int) ((arr_6 [i_4 - 1]) ? (((/* implicit */int) arr_19 [i_4] [i_4 - 1] [i_4 + 3])) : (-679858197)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (short i_11 = 1; i_11 < 23; i_11 += 2) 
    {
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            {
                var_19 += (((-(((/* implicit */int) arr_41 [i_11 + 1])))) / (((-1496124567) ^ (((/* implicit */int) (unsigned short)65515)))));
                var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_43 [(_Bool)1] [i_11])), (((((/* implicit */_Bool) ((int) arr_43 [i_12] [i_11]))) ? (min((4373242791702274174ULL), (((/* implicit */unsigned long long int) (unsigned short)16851)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)2692))) < (4294967286U)))))))));
                var_21 = ((_Bool) (!(((/* implicit */_Bool) arr_42 [i_11 - 1]))));
            }
        } 
    } 
}
