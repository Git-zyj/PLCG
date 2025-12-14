/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122328
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
    var_11 *= ((/* implicit */short) (-(((/* implicit */int) var_5))));
    var_12 = ((/* implicit */int) min((-4548542916584355432LL), (((/* implicit */long long int) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) (_Bool)1)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 12; i_2 += 3) 
                {
                    var_13 = ((/* implicit */_Bool) ((short) max((((/* implicit */long long int) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) (unsigned short)27076))))), (min((((/* implicit */long long int) var_1)), (arr_3 [2ULL] [i_0]))))));
                    var_14 -= min(((!(((/* implicit */_Bool) ((var_9) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38460)))))))), ((!(((/* implicit */_Bool) ((var_6) ^ (((/* implicit */unsigned long long int) arr_2 [i_0 + 2]))))))));
                }
                /* LoopSeq 4 */
                for (long long int i_3 = 4; i_3 < 12; i_3 += 2) 
                {
                    arr_12 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) : (var_6)))));
                    var_15 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 2]))))), ((~(arr_2 [i_0 + 1])))));
                }
                for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) arr_8 [i_1]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        for (short i_6 = 0; i_6 < 14; i_6 += 1) 
                        {
                            {
                                var_17 = ((((/* implicit */long long int) 1187910040U)) / (1250571300952147061LL));
                                var_18 = ((/* implicit */long long int) max((var_18), ((-(((arr_14 [i_0] [i_0 - 1]) ? (arr_3 [i_0 + 1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0 - 2] [i_0 - 2])))))))));
                                var_19 -= ((/* implicit */unsigned int) var_5);
                            }
                        } 
                    } 
                }
                for (unsigned char i_7 = 0; i_7 < 14; i_7 += 2) 
                {
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) arr_15 [i_0] [i_0]))));
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) arr_22 [i_0 - 1] [i_0 + 1] [i_0 + 2]))));
                    var_22 = ((/* implicit */unsigned int) ((((((min((((/* implicit */int) (signed char)-112)), (arr_16 [i_0 - 2] [i_1] [i_1] [i_7]))) + (2147483647))) >> (min((6U), (((/* implicit */unsigned int) (_Bool)1)))))) + (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0 + 2])) || (((/* implicit */_Bool) (signed char)120)))))));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 14; i_8 += 2) 
                {
                    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_9)) ? (arr_27 [i_0] [i_0] [4LL] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_0 - 1] [i_8] [i_1] [i_0]))))) < (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_9 = 4; i_9 < 12; i_9 += 3) 
                    {
                        var_24 ^= ((/* implicit */short) (_Bool)1);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_10 = 1; i_10 < 12; i_10 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */int) ((arr_19 [i_0] [i_1] [i_0] [13] [i_10]) >= (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0 - 2] [i_0] [i_0])))))) + (((/* implicit */int) arr_8 [i_10 + 2])))))));
                            arr_34 [i_0] [i_10] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))));
                            arr_35 [i_10] [i_1] [i_1] [i_9] = ((/* implicit */_Bool) ((long long int) arr_13 [i_10 + 1] [i_10]));
                            arr_36 [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_10 - 1] [i_10] [i_10] [i_10] [i_10] [i_10])) || (((/* implicit */_Bool) var_6))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_11 = 0; i_11 < 14; i_11 += 1) 
                        {
                            var_26 |= ((var_8) ? (arr_39 [i_0 + 2] [i_0 + 2] [i_9 + 1] [(unsigned char)9]) : (arr_31 [i_0 + 1] [i_9 + 1]));
                            var_27 ^= ((/* implicit */short) (unsigned char)240);
                            arr_40 [i_0] [i_1] [i_8] [i_8] [i_0] = ((unsigned int) arr_14 [i_0 + 2] [i_0 + 2]);
                            arr_41 [i_11] [(unsigned short)13] [i_8] [(signed char)3] [(signed char)3] [i_0] = ((/* implicit */_Bool) (short)-12394);
                        }
                        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) -1250571300952147062LL)) : (var_6))))));
                    }
                    for (long long int i_12 = 0; i_12 < 14; i_12 += 1) 
                    {
                        arr_46 [i_0 + 2] [i_12] [i_12] [i_0] = ((/* implicit */short) ((unsigned char) ((unsigned long long int) 0U)));
                        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) arr_39 [i_0 - 2] [i_0] [i_0] [i_0]))))))));
                        var_30 += ((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned short)38460)) ? (3888844867U) : (arr_5 [i_0] [i_0 - 2] [i_0])))));
                        arr_47 [i_0] [i_0] [(signed char)12] [i_12] [i_0] [i_0] = ((/* implicit */unsigned int) var_9);
                    }
                }
                var_31 *= ((/* implicit */unsigned long long int) arr_4 [i_0] [11ULL]);
            }
        } 
    } 
    var_32 ^= ((/* implicit */unsigned int) var_3);
    var_33 = ((/* implicit */unsigned char) ((int) max((max((285570174020083460ULL), (((/* implicit */unsigned long long int) 6U)))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_9))))));
}
