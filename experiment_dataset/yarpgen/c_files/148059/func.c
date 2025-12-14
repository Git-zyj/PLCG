/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148059
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned short) min(((((-2147483647 - 1)) & (((/* implicit */int) arr_10 [i_0] [i_2 - 1] [i_0] [i_0] [i_1])))), (2057212083)));
                                arr_14 [i_1] [i_2] [i_0] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) % ((-2147483647 - 1))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)55284)) : (arr_11 [i_0] [i_1] [i_3]))) : (((/* implicit */int) (short)-24553))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_0 [i_0])))) ? (((/* implicit */int) var_2)) : ((~(((/* implicit */int) arr_12 [i_4] [i_3] [i_2 + 1] [i_0]))))))) : (min((((arr_8 [i_0] [i_3] [i_2] [i_1] [i_0] [i_0]) << (((var_10) + (1736197886))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4)))))))));
                                var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [i_3] [i_1] [i_0]))))), (var_9))))));
                                arr_15 [i_0] [i_1] [i_2 - 1] [i_3] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((long long int) var_5)) * (((/* implicit */long long int) min((2147483647), (((/* implicit */int) var_7))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        var_13 = (i_0 % 2 == zero) ? (((((min((((/* implicit */int) (_Bool)1)), (-95975969))) / (min((((/* implicit */int) arr_5 [i_0])), (arr_0 [i_0]))))) << (((max((arr_0 [i_0]), (((/* implicit */int) arr_16 [i_5 + 1] [i_2 - 1] [i_2] [i_2])))) - (1444638815))))) : (((((min((((/* implicit */int) (_Bool)1)), (-95975969))) / (min((((/* implicit */int) arr_5 [i_0])), (arr_0 [i_0]))))) << (((((max((arr_0 [i_0]), (((/* implicit */int) arr_16 [i_5 + 1] [i_2 - 1] [i_2] [i_2])))) - (1444638815))) + (1444618988)))));
                        arr_19 [i_0] [i_1] [i_1] [i_2] [i_2 - 1] [i_0] = (~(((2097151U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)-19995))))));
                        var_14 += ((/* implicit */unsigned short) ((long long int) (((((+(-692038732))) + (2147483647))) >> (((((/* implicit */int) ((short) arr_3 [i_1]))) + (18094))))));
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) max(((-(((/* implicit */int) (short)30239)))), ((((_Bool)0) ? (((/* implicit */int) var_2)) : ((-2147483647 - 1))))))) & (2142830781U)));
                        arr_20 [i_0] [i_1] [i_0] [i_5] = ((/* implicit */short) (+((+(((/* implicit */int) arr_12 [i_1] [i_0] [i_5 + 1] [i_2 - 1]))))));
                    }
                    for (signed char i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_8 [(unsigned short)12] [i_2] [i_2] [i_2] [i_1] [(unsigned short)12]))) ? (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_9))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_5)), (arr_9 [i_0] [i_2] [i_2] [i_2] [i_6] [i_1]))))))) && (((/* implicit */_Bool) (+(arr_7 [4U] [i_2 + 1] [i_1])))))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_7 = 0; i_7 < 14; i_7 += 3) 
                        {
                            arr_27 [i_2 - 1] [i_0] [i_2] [i_0] [i_7] [i_2 - 1] = ((/* implicit */int) (signed char)-78);
                            arr_28 [i_0] [i_0] [i_2] [i_7] [i_7] = ((/* implicit */signed char) (((-(((((/* implicit */_Bool) (unsigned short)45426)) ? (((/* implicit */unsigned int) -692038736)) : (0U))))) - (((/* implicit */unsigned int) min((((((/* implicit */int) (_Bool)1)) / (2147483647))), (arr_11 [i_2 + 1] [i_2 + 1] [i_2 + 1]))))));
                        }
                        for (unsigned int i_8 = 3; i_8 < 11; i_8 += 3) 
                        {
                            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((short) min((arr_25 [i_8 - 2] [i_6] [i_6] [i_6] [i_6]), (arr_25 [i_8 + 2] [i_6] [i_6] [i_6] [i_6])))))));
                            arr_31 [i_0] [i_0] [i_0] [i_1] [i_0] [i_6] [i_0] = ((/* implicit */long long int) 1142412752U);
                            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) min(((+(((/* implicit */int) var_1)))), (((/* implicit */int) ((((/* implicit */int) arr_21 [i_8 - 1] [i_6] [i_2 + 1] [i_1] [i_1] [i_0])) > (((/* implicit */int) ((arr_9 [i_0] [i_1] [i_0] [i_0] [i_6] [i_8]) != (((/* implicit */unsigned int) 258048)))))))))))));
                        }
                        for (unsigned short i_9 = 3; i_9 < 13; i_9 += 3) 
                        {
                            var_19 = ((/* implicit */int) ((var_0) ^ (((((/* implicit */_Bool) 2147483647)) ? (arr_2 [i_2 + 1] [i_9 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
                            var_20 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_6)), (var_8))))) - (arr_32 [i_0] [i_1] [i_2 - 1] [i_9 - 2] [i_2 - 1])))) ? (((((/* implicit */int) var_8)) ^ (((/* implicit */int) min((arr_4 [i_0] [i_1] [i_0]), (((/* implicit */unsigned short) (short)(-32767 - 1)))))))) : (((/* implicit */int) ((signed char) (~(((/* implicit */int) var_5)))))));
                        }
                        arr_35 [i_0] [i_1] [i_1] [i_6] = ((/* implicit */signed char) (+(((((/* implicit */int) ((short) arr_6 [i_6] [i_2] [i_1] [i_0]))) ^ (((/* implicit */int) arr_5 [i_0]))))));
                        var_21 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_6] [i_2] [i_1] [i_0] [i_1] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (+(((/* implicit */int) var_4)))))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_26 [i_0] [i_1] [i_2 + 1] [i_2] [i_6])) : ((~(((/* implicit */int) arr_33 [i_6] [i_0] [4ULL] [4ULL] [i_1] [i_0]))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_10 = 0; i_10 < 14; i_10 += 3) 
                        {
                            arr_38 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */int) var_7);
                            arr_39 [i_1] [i_0] [i_0] [i_6] [i_10] = ((/* implicit */unsigned short) (~(arr_37 [i_0] [i_1] [i_10] [i_6] [i_10])));
                        }
                    }
                    /* vectorizable */
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        arr_43 [i_0] [i_2 + 1] [i_1] [i_0] = ((/* implicit */long long int) (((~(-1465409857))) * (((/* implicit */int) (_Bool)1))));
                        arr_44 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */long long int) 2152136515U);
                        arr_45 [i_11] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) (short)24551);
}
