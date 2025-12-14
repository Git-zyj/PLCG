/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176382
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
    var_11 = ((/* implicit */int) var_6);
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (((~(var_4))) >> (((var_4) + (2026603485)))))) & (((((unsigned int) var_0)) >> (((((((/* implicit */int) var_1)) | (((/* implicit */int) var_10)))) + (29)))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (int i_2 = 3; i_2 < 16; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        var_13 = ((/* implicit */unsigned int) ((unsigned long long int) (((((~(((/* implicit */int) arr_7 [i_3] [i_2 - 3])))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */unsigned int) var_4)) < (var_7)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_4 = 3; i_4 < 19; i_4 += 1) 
                        {
                            var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_3])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) | (var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) | (((/* implicit */int) var_0))))))))));
                            var_15 = ((/* implicit */signed char) ((var_9) * (((((/* implicit */int) (short)32767)) | (((/* implicit */int) (short)-32757))))));
                            var_16 *= ((/* implicit */unsigned short) ((arr_10 [i_0 + 4] [i_2] [i_4 - 3] [i_1] [i_2 - 2]) < (arr_10 [i_0 + 3] [i_4] [i_2] [i_4] [i_2 - 2])));
                        }
                        var_17 = ((/* implicit */short) (+(((unsigned int) arr_11 [i_0 + 1]))));
                    }
                } 
            } 
        } 
        var_18 *= ((/* implicit */short) (-(((arr_14 [i_0 + 2] [i_0 + 4] [4U]) | (arr_14 [0] [i_0 - 2] [0])))));
        arr_16 [i_0] = ((/* implicit */unsigned short) ((arr_5 [i_0 - 1] [i_0 + 3]) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) / (arr_5 [i_0 + 2] [i_0 + 3])))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) -1)) ? (arr_6 [i_5]) : (arr_6 [i_5]))));
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            for (unsigned int i_7 = 1; i_7 < 14; i_7 += 1) 
            {
                {
                    var_20 = ((/* implicit */long long int) ((min((arr_24 [i_7] [i_7 + 1] [i_7 - 1]), (((/* implicit */unsigned int) var_8)))) % (((((/* implicit */_Bool) arr_24 [i_7] [i_7 + 1] [i_7 + 1])) ? (arr_24 [i_7 + 2] [i_7 + 2] [i_7 - 1]) : (arr_24 [i_7 - 1] [i_7 - 1] [i_7 - 1])))));
                    arr_27 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((unsigned int) ((min((6ULL), (((/* implicit */unsigned long long int) var_5)))) % (((/* implicit */unsigned long long int) arr_15 [i_7 + 2] [i_7 - 1] [i_7 + 1] [i_7 + 1])))));
                    var_21 = ((/* implicit */short) var_7);
                }
            } 
        } 
    }
    for (long long int i_8 = 2; i_8 < 9; i_8 += 1) 
    {
        arr_30 [i_8] [i_8] = ((/* implicit */short) min((arr_10 [i_8] [i_8] [i_8 + 1] [i_8] [i_8]), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1440353119U)) ? (1028560642) : (((/* implicit */int) var_0))))) == (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_3))))))));
        /* LoopSeq 1 */
        for (long long int i_9 = 3; i_9 < 7; i_9 += 3) 
        {
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)0))) ? (((((/* implicit */_Bool) -67108864)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_7 [i_8 - 2] [i_9])))) : ((~(((/* implicit */int) var_0))))))) % (((unsigned int) 67108867))));
            var_23 = ((/* implicit */unsigned int) ((((max((var_4), (((/* implicit */int) (short)-32762)))) | (-209435171))) * (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551610ULL)))))));
            var_24 = (+((+(13932637839593531710ULL))));
        }
        var_25 = ((/* implicit */unsigned int) var_5);
        arr_35 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0ULL)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1)))))));
    }
    for (unsigned int i_10 = 1; i_10 < 16; i_10 += 1) 
    {
        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_10] [i_10 - 1] [i_10] [i_10])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1844610548)) ? (((/* implicit */int) arr_1 [i_10 - 1])) : (((/* implicit */int) arr_36 [(unsigned short)0] [i_10 + 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((((/* implicit */unsigned int) 2147483647)) / (3142252017U))))) : (((/* implicit */unsigned int) (~((~(var_9)))))))))));
        arr_38 [i_10] = ((/* implicit */unsigned short) ((var_7) << (((((((/* implicit */_Bool) (~(-9223372036854775807LL)))) ? (((var_3) << (((((/* implicit */int) var_0)) + (41))))) : (min((((/* implicit */unsigned long long int) var_7)), (var_3))))) - (6859115291194234494ULL)))));
        arr_39 [i_10] = ((/* implicit */signed char) var_3);
    }
    /* LoopNest 2 */
    for (unsigned short i_11 = 1; i_11 < 20; i_11 += 1) 
    {
        for (unsigned char i_12 = 0; i_12 < 21; i_12 += 4) 
        {
            {
                arr_46 [i_12] = ((/* implicit */unsigned long long int) (+(((((var_7) >> (((((/* implicit */int) var_0)) + (49))))) << (((((/* implicit */int) ((unsigned short) var_6))) - (47352)))))));
                var_27 = ((/* implicit */unsigned short) ((var_2) >> (((var_7) - (1981586464U)))));
                var_28 = 18446744073709551600ULL;
                var_29 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) / (((arr_45 [i_11] [i_11] [i_11]) + (1152715299U)))))) ? (((var_4) + (((/* implicit */int) ((arr_44 [i_11] [i_12] [i_11]) <= (arr_44 [i_11] [i_11] [i_12])))))) : (((/* implicit */int) arr_43 [i_11 + 1]))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_13 = 1; i_13 < 12; i_13 += 4) 
    {
        for (unsigned short i_14 = 0; i_14 < 14; i_14 += 2) 
        {
            for (unsigned short i_15 = 3; i_15 < 13; i_15 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_16 = 4; i_16 < 13; i_16 += 3) 
                    {
                        for (short i_17 = 1; i_17 < 13; i_17 += 4) 
                        {
                            {
                                var_30 |= ((/* implicit */int) ((unsigned short) ((min((((/* implicit */unsigned long long int) 2429896572U)), (18446744073709551590ULL))) << (((138361546U) - (138361513U))))));
                                var_31 = ((/* implicit */unsigned long long int) ((max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) 4156605749U)) : (-9223372036854775804LL))), (((((arr_15 [i_13] [i_13] [i_13] [i_16]) + (9223372036854775807LL))) >> (((var_5) + (4827215542835524448LL))))))) / (max((((/* implicit */long long int) ((((/* implicit */_Bool) 564890757U)) ? (((/* implicit */int) (unsigned short)65534)) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */long long int) ((/* implicit */int) var_0))) & (arr_13 [i_13 - 1] [i_13 - 1])))))));
                                var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) min((((/* implicit */signed char) ((arr_0 [i_16 - 2]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_16] [i_14] [i_13]))) == (var_6)))))))), (min((arr_41 [i_15 - 2]), (var_10))))))));
                            }
                        } 
                    } 
                    arr_59 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */long long int) var_10);
                    arr_60 [i_13 + 1] [i_13] [i_13] [i_13] = ((/* implicit */short) max((((((/* implicit */_Bool) var_0)) ? (arr_14 [i_13 + 1] [i_13 + 1] [i_13]) : (arr_14 [i_13 + 1] [i_13 + 1] [i_13]))), (((/* implicit */unsigned long long int) (-(var_9))))));
                }
            } 
        } 
    } 
}
