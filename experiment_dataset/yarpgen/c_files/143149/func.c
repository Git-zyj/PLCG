/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143149
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
    for (int i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_8 [i_0 + 3] [i_1] [i_0 + 3] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) -802164337))));
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_2])) && ((!(((/* implicit */_Bool) -5632658802302623132LL))))));
                            var_16 = ((/* implicit */unsigned short) arr_6 [10LL] [i_1] [0] [10LL]);
                            arr_13 [i_0] [i_1] [i_2] [i_2] [i_3] [8] = ((((/* implicit */_Bool) arr_7 [i_0] [i_0 + 3] [i_0])) ? (((/* implicit */int) min((arr_1 [i_2] [i_0 + 3]), (((/* implicit */unsigned short) arr_7 [i_0] [i_0 + 3] [i_1]))))) : (((/* implicit */int) min((arr_1 [i_0] [i_0 + 3]), (((/* implicit */unsigned short) arr_7 [i_1] [i_0 + 3] [i_2]))))));
                        }
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 2) 
    {
        var_17 ^= ((/* implicit */short) ((((/* implicit */int) arr_14 [i_5])) != (((/* implicit */int) arr_15 [i_5] [i_5]))));
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) 6975923906450688965LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5]))) : (15101144585831691247ULL)))));
        arr_16 [i_5] &= ((/* implicit */int) (!(arr_15 [i_5] [i_5])));
    }
    for (long long int i_6 = 0; i_6 < 23; i_6 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 23; i_7 += 2) 
        {
            for (int i_8 = 0; i_8 < 23; i_8 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 23; i_9 += 2) 
                    {
                        for (short i_10 = 3; i_10 < 20; i_10 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) min((((min((((/* implicit */long long int) arr_20 [i_6])), (-5632658802302623121LL))) | (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) min((((/* implicit */int) (signed char)-7)), (min((-1724624301), (((/* implicit */int) (_Bool)1)))))))));
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(((/* implicit */int) arr_23 [i_6] [i_10 + 1]))))) != (((((/* implicit */long long int) 1724624296)) & (-5632658802302623119LL)))));
                                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (_Bool)1))));
                                var_22 = (((-(-1627538512))) & ((-(var_12))));
                            }
                        } 
                    } 
                    arr_30 [i_8] [21LL] [i_6] = ((/* implicit */unsigned short) (short)-16187);
                }
            } 
        } 
        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((min((((/* implicit */long long int) arr_28 [i_6] [i_6] [9] [15LL])), (arr_18 [i_6]))) / (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */int) (signed char)6)) : (((/* implicit */int) (_Bool)1))))))))));
        var_24 = ((/* implicit */int) ((var_10) / (((/* implicit */long long int) min((arr_21 [(signed char)14] [i_6]), (arr_21 [i_6] [i_6]))))));
    }
    /* LoopSeq 3 */
    for (int i_11 = 0; i_11 < 15; i_11 += 2) /* same iter space */
    {
        var_25 |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((794076894688741189LL), (((/* implicit */long long int) arr_24 [i_11] [i_11] [i_11] [i_11] [6]))))) ? (arr_21 [i_11] [i_11]) : (arr_24 [i_11] [i_11] [i_11] [i_11] [i_11]))) < ((((-(((/* implicit */int) arr_17 [i_11])))) ^ (((var_13) | (arr_24 [i_11] [i_11] [i_11] [(_Bool)1] [i_11])))))));
        /* LoopSeq 4 */
        for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 2) 
        {
            arr_36 [i_11] [i_12] = ((/* implicit */_Bool) (((-(((((/* implicit */_Bool) arr_33 [i_12])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5)))))) * (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_35 [9LL]))))));
            var_26 += min((((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_22 [i_11])) * (((/* implicit */int) var_9)))), (((/* implicit */int) ((((/* implicit */int) arr_25 [i_11] [i_11] [i_12] [(signed char)3])) < (((/* implicit */int) arr_17 [i_12])))))))), (min((((/* implicit */unsigned long long int) (unsigned short)55159)), ((((_Bool)1) ? (17330689845037246238ULL) : (((/* implicit */unsigned long long int) -1627538498)))))));
            var_27 *= ((/* implicit */unsigned int) min((((((/* implicit */int) var_3)) / (((/* implicit */int) (_Bool)1)))), (((((((((/* implicit */int) (signed char)-6)) | (((/* implicit */int) (signed char)6)))) + (2147483647))) << (((((((((/* implicit */int) (signed char)-17)) | (((/* implicit */int) (unsigned short)2367)))) + (29))) - (28)))))));
            var_28 -= ((/* implicit */unsigned long long int) (!(((((var_0) && (((/* implicit */_Bool) arr_35 [i_11])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 3174754913921141702LL)) ? (((/* implicit */int) arr_25 [i_11] [i_11] [i_12] [(_Bool)1])) : (var_12))))))));
        }
        for (unsigned char i_13 = 1; i_13 < 13; i_13 += 2) 
        {
            arr_41 [i_13] = ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) != (((-5632658802302623134LL) + (((/* implicit */long long int) 1962153369))))));
            arr_42 [i_11] [i_13] = ((/* implicit */unsigned char) ((min((-7895911514213571636LL), (((/* implicit */long long int) -1962153380)))) + (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */int) (unsigned char)130)) : (1962153361))) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_11] [i_13] [i_11] [i_11])) && ((_Bool)1)))))))));
            var_29 = -899525268;
        }
        for (unsigned char i_14 = 1; i_14 < 12; i_14 += 2) 
        {
            arr_45 [i_11] [i_11] [i_11] = ((/* implicit */int) min((5632658802302623132LL), (((/* implicit */long long int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_39 [i_14 - 1]))))));
            arr_46 [i_11] [i_11] = ((/* implicit */signed char) ((((((/* implicit */int) arr_28 [i_14 + 3] [i_11] [i_14] [i_11])) * (((/* implicit */int) arr_28 [i_14 + 2] [i_14 + 2] [i_11] [i_11])))) / ((-(((/* implicit */int) arr_40 [i_14 - 1]))))));
            var_30 = ((/* implicit */unsigned char) var_6);
        }
        /* vectorizable */
        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
        {
            arr_49 [i_11] [i_11] [i_15] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_39 [(unsigned char)2])) || (((/* implicit */_Bool) var_7)))))));
            var_31 = ((((/* implicit */int) arr_26 [i_15 - 1] [i_15] [i_15])) != (((/* implicit */int) arr_26 [i_15 - 1] [i_15] [i_11])));
        }
        var_32 = ((/* implicit */long long int) min(((~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_32 [i_11]))))))), (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) min((arr_40 [i_11]), (arr_43 [i_11] [i_11] [13U])))))))));
    }
    for (int i_16 = 0; i_16 < 15; i_16 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
        {
            var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40990))) | (10181950081501084090ULL))) | (((/* implicit */unsigned long long int) ((arr_24 [i_16] [19] [i_17 - 1] [i_16] [(signed char)2]) & (((((/* implicit */int) arr_35 [i_16])) & (((/* implicit */int) arr_35 [i_17]))))))))))));
            arr_54 [0] = ((/* implicit */_Bool) arr_28 [i_16] [(unsigned char)19] [i_16] [i_16]);
            var_34 *= ((/* implicit */unsigned char) min(((_Bool)1), (((arr_47 [i_17 - 1] [i_17 - 1]) < (arr_47 [i_17 - 1] [i_17 - 1])))));
        }
        arr_55 [i_16] = ((/* implicit */short) arr_18 [2]);
        arr_56 [i_16] [i_16] = min(((+(((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) arr_40 [i_16])) : (((/* implicit */int) var_9)))))), (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_47 [i_16] [i_16]), (((/* implicit */int) var_11)))))))));
    }
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        var_35 = ((/* implicit */_Bool) min((min((arr_23 [i_18] [i_18]), (arr_23 [i_18] [i_18]))), (((/* implicit */signed char) ((((/* implicit */int) arr_23 [i_18] [i_18])) <= (((/* implicit */int) arr_23 [17] [i_18])))))));
        var_36 += ((/* implicit */_Bool) min((((arr_18 [i_18]) / (arr_18 [i_18]))), (((/* implicit */long long int) ((((/* implicit */int) arr_28 [i_18] [i_18] [i_18] [i_18])) / (((/* implicit */int) arr_28 [i_18] [i_18] [i_18] [i_18])))))));
    }
    var_37 = ((/* implicit */int) (+(-5730537317068318238LL)));
}
