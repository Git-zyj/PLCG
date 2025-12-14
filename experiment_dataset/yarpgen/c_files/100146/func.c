/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100146
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
    var_10 = ((/* implicit */signed char) 8518368875089051372ULL);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        arr_12 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_2 + 1] [i_1 - 1])) ? (arr_3 [i_2 + 1] [i_1 - 1]) : (arr_3 [i_2 + 2] [i_1 + 2])));
                        arr_13 [i_0 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 849168322)) ? (16775706742682295243ULL) : (((/* implicit */unsigned long long int) -5036792540757816330LL))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_0]))))) : (((((/* implicit */_Bool) (short)-3680)) ? (var_3) : (((/* implicit */long long int) var_4))))));
                    }
                    for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
                    {
                        arr_17 [i_4] [12] = ((/* implicit */long long int) ((arr_2 [i_2 - 1] [i_1 + 1]) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2 - 1] [i_1 - 1])))));
                        arr_18 [i_4] [(unsigned short)6] [i_2] [(unsigned short)6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_16 [i_2 - 1] [i_1] [i_0 - 1] [i_1 + 1])) : (((/* implicit */int) arr_16 [i_2 - 2] [8U] [i_0 + 1] [i_1 - 1]))));
                        var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_1 + 1] [i_2 - 2])) ? (arr_6 [i_0 - 2] [i_1 + 2] [i_2 + 2]) : (arr_6 [i_0 - 2] [i_1 + 2] [i_2 + 1]))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 14; i_5 += 4) 
                        {
                            var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) arr_0 [i_0 - 2] [i_5]))));
                            var_13 ^= arr_0 [9ULL] [i_2];
                            arr_21 [i_0] [i_1] [13] [i_4] [i_4] = ((/* implicit */signed char) var_0);
                            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_5] [7ULL] [(unsigned short)7] [i_2] [i_2] [i_1] [11LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2 - 1] [i_4]))) : (arr_19 [i_2 - 1] [i_2 + 1] [(signed char)11] [i_2] [i_2] [i_2 + 1] [10U])));
                        }
                    }
                    var_15 = ((/* implicit */signed char) ((unsigned long long int) arr_8 [i_0 + 1] [i_2 + 2] [i_1 + 2] [(_Bool)1]));
                    /* LoopNest 2 */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 14; i_7 += 3) 
                        {
                            {
                                var_16 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0 - 2] [i_1 - 1] [i_6 - 1])) ? (((/* implicit */unsigned int) -756165993)) : (arr_5 [i_0 + 1] [i_1 - 1] [i_6 - 1])));
                                var_17 = ((/* implicit */unsigned short) ((unsigned long long int) arr_23 [i_0 + 1] [i_1 + 2] [i_2 + 1]));
                                arr_30 [i_0] [(signed char)5] [i_2 - 1] [i_6 - 1] [i_2] = ((/* implicit */signed char) ((short) (((_Bool)1) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_8 = 1; i_8 < 10; i_8 += 2) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 14; i_9 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_0 - 1] [i_0 + 1] [i_2 + 2] [i_8 + 2] [i_8])) ? (((/* implicit */int) arr_29 [i_0] [i_0 - 2] [i_0 - 1] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_10 [i_0 - 2] [10LL] [11] [9ULL]))));
                                var_19 = ((var_6) * (((/* implicit */unsigned long long int) arr_33 [i_2 - 2])));
                                arr_36 [i_0] [8ULL] [(signed char)9] [i_0] [i_0] &= ((/* implicit */_Bool) arr_26 [11U] [i_1 + 1] [i_1 + 1] [6LL] [(short)3]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned long long int) (((~(var_8))) >> (((((unsigned long long int) -1691509332)) - (18446744072018042227ULL)))));
        /* LoopNest 3 */
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
        {
            for (unsigned int i_11 = 0; i_11 < 14; i_11 += 3) 
            {
                for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                {
                    {
                        var_21 = ((/* implicit */short) ((var_2) - (((/* implicit */unsigned int) ((((/* implicit */int) arr_32 [i_12] [i_11] [11ULL] [i_0])) * (((/* implicit */int) var_5)))))));
                        arr_44 [10] [i_12] [i_11] [i_12] [i_10] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_25 [(signed char)10] [i_10] [(unsigned char)3])))))));
                        var_22 = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_4)) - (((((/* implicit */_Bool) arr_10 [5] [5] [5] [i_0])) ? (((/* implicit */unsigned long long int) var_2)) : (1671037331027256373ULL)))));
                    }
                } 
            } 
        } 
        var_23 = (((~(-3288305196756063841LL))) ^ (((/* implicit */long long int) var_1)));
    }
    /* vectorizable */
    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
    {
        var_24 = ((/* implicit */signed char) ((short) (!(((/* implicit */_Bool) var_2)))));
        var_25 += ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (short)-9436)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_13]))) : (var_2))));
    }
    for (unsigned int i_14 = 0; i_14 < 11; i_14 += 2) 
    {
        var_26 |= ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_22 [i_14])) ? (-849168322) : (849168334))));
        var_27 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -1048450879)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_14] [11LL] [i_14] [8U]))) : (739487571555424706ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (503112308U))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_14] [(unsigned char)4] [(_Bool)1] [2] [i_14] [i_14])))));
        var_28 = ((/* implicit */unsigned long long int) max((769842904), (((/* implicit */int) (_Bool)1))));
    }
    var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) var_8))));
}
