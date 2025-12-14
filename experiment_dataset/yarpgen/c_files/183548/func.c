/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183548
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
    var_12 = ((/* implicit */unsigned short) ((var_2) > (((/* implicit */long long int) ((/* implicit */int) var_7)))));
    var_13 -= ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)21659)) : (((/* implicit */int) var_0))))) ? (min((var_6), (var_6))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)157))))) + (((/* implicit */long long int) ((/* implicit */int) var_0)))));
    var_14 = ((/* implicit */signed char) ((((((var_2) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)114))))) - (((/* implicit */long long int) ((/* implicit */int) var_10))))) / (((/* implicit */long long int) ((/* implicit */int) var_11)))));
    var_15 = ((/* implicit */unsigned char) var_10);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned short) (-(((((((/* implicit */int) (unsigned char)157)) - (((/* implicit */int) var_7)))) << (((((((/* implicit */_Bool) 131071ULL)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)53))))) - (11127273370725015099ULL)))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 11; i_2 += 4) /* same iter space */
                {
                    arr_7 [i_0] [i_1] = ((/* implicit */long long int) (!(((((/* implicit */int) var_9)) < (((/* implicit */int) (signed char)45))))));
                    arr_8 [i_0] [(unsigned char)3] [i_1] [i_2] = ((/* implicit */long long int) (-(16692823266731825011ULL)));
                    var_17 = ((/* implicit */_Bool) ((unsigned short) arr_2 [i_0 - 1] [i_0 - 1]));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        var_18 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [(unsigned short)5])) ? (((((/* implicit */int) (unsigned short)3918)) + (((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) 1753920806977726604ULL)) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) var_10))))));
                        arr_12 [(unsigned short)10] [(unsigned short)10] [5ULL] [0] = ((/* implicit */signed char) ((short) ((((/* implicit */int) arr_5 [7LL] [7LL] [i_2])) <= (((/* implicit */int) arr_11 [i_2])))));
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */unsigned long long int) var_6)) >= ((~(arr_10 [(signed char)10] [i_0 - 1] [i_2] [i_0]))));
                        arr_14 [i_0] [3U] [3U] [i_2] [i_2] [(unsigned short)10] = ((/* implicit */unsigned int) ((arr_0 [i_0 + 1]) >= (((/* implicit */unsigned long long int) ((var_2) & (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))))));
                    }
                    for (long long int i_4 = 2; i_4 < 10; i_4 += 2) 
                    {
                        var_19 = ((/* implicit */_Bool) ((arr_10 [i_4 - 1] [8U] [i_4 - 2] [i_4]) - (((/* implicit */unsigned long long int) arr_9 [i_4 - 1] [i_4] [i_4] [i_4] [7LL] [i_4 + 1]))));
                        var_20 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7)))));
                    }
                }
                for (short i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
                {
                    arr_19 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1]))))));
                    var_21 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65535))));
                    /* LoopNest 2 */
                    for (signed char i_6 = 1; i_6 < 9; i_6 += 4) 
                    {
                        for (short i_7 = 2; i_7 < 9; i_7 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) arr_10 [i_0] [i_0] [2LL] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)11))) : (arr_0 [i_5]))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)11))) : (var_3))))) >= (max((((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0]))))), (((/* implicit */unsigned long long int) ((unsigned char) 94754981U)))))));
                                arr_25 [(unsigned char)2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) ((long long int) (signed char)-64)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((1753920806977726629ULL) >= (1753920806977726604ULL))))) : (16692823266731825011ULL)));
                            }
                        } 
                    } 
                }
                for (short i_8 = 0; i_8 < 11; i_8 += 4) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_8] [i_8] [i_8])) ? (((((/* implicit */_Bool) arr_21 [i_0 - 1] [i_1] [0ULL] [i_0 + 1])) ? (arr_0 [i_0 + 1]) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (short)-29493)) : (((/* implicit */int) (short)-32))))))) : ((+(arr_10 [(unsigned short)3] [i_0 - 1] [2U] [3U])))));
                    arr_29 [(signed char)10] [3ULL] [i_8] = ((/* implicit */_Bool) max((16692823266731824983ULL), (((/* implicit */unsigned long long int) 1664053727))));
                    arr_30 [i_0] [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
                    arr_31 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) arr_21 [i_1] [i_1] [i_0 + 1] [i_0 - 1])) >= (((/* implicit */int) (signed char)124)))))));
                }
                /* vectorizable */
                for (signed char i_9 = 0; i_9 < 11; i_9 += 4) 
                {
                    var_24 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0 + 1] [(unsigned char)0] [(signed char)2] [i_0] [i_0 + 1] [i_0 - 1]))) : (var_3)));
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 11; i_10 += 4) 
                    {
                        for (unsigned short i_11 = 3; i_11 < 8; i_11 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) arr_17 [i_11 - 3] [i_0 + 1] [i_9]))));
                                arr_40 [i_0 - 1] [i_0 - 1] [(unsigned short)1] [i_0] [6ULL] = ((/* implicit */int) 72057593769492480ULL);
                                arr_41 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_33 [4LL] [(signed char)7] [4LL] [4LL])) ^ (((/* implicit */int) var_0))))) ? (((/* implicit */int) ((unsigned char) arr_18 [i_0] [i_1] [i_1] [i_9]))) : (((/* implicit */int) (_Bool)0))));
                    var_27 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned short)26078)))));
                }
            }
        } 
    } 
}
