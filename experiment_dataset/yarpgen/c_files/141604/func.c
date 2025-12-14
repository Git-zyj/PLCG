/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141604
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
    for (short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 4; i_2 < 13; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_1))) & (8299177111271404123LL)))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)35937))) ^ (-5276488208715681443LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_1 [(unsigned char)4]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_3 [i_0] [i_2])) < (var_7)))))) : (max((((/* implicit */unsigned long long int) min((arr_2 [i_1]), (((/* implicit */short) arr_6 [5] [i_0 + 2] [i_1] [i_2 - 2]))))), (((var_9) | (((/* implicit */unsigned long long int) -1088410380))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (var_4) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_2])))))))))))));
                                var_13 ^= ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_4])) ? (((/* implicit */unsigned int) 2147483647)) : (2412463669U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((-1088410380) <= (((/* implicit */int) arr_5 [i_0] [i_1] [i_2 + 2] [i_4]))))))) : ((+((-(arr_4 [i_1] [i_1]))))));
                                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 603167057U)) ? (((/* implicit */int) arr_11 [i_1])) : (((/* implicit */int) min((arr_5 [i_0] [i_1] [i_2] [i_3]), ((unsigned short)9))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (max((((/* implicit */unsigned int) max((var_1), (((/* implicit */unsigned short) arr_2 [i_1]))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_3] [i_4]))) & (var_0)))))));
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_3 [i_2] [i_3])) ? (((/* implicit */int) (signed char)11)) : (((/* implicit */int) var_10)))), (((((/* implicit */int) arr_5 [i_3] [i_1] [i_1] [i_3])) >> (((((/* implicit */int) arr_5 [i_0] [i_4] [i_4] [i_3])) - (53723)))))))) ? (max((((/* implicit */unsigned long long int) arr_1 [i_1])), (var_9))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)19)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1]))) : (((unsigned int) var_5)))))));
                                arr_12 [i_0] [i_0] [i_2] [i_3] [i_1] = ((/* implicit */unsigned short) ((min((arr_0 [(unsigned char)1] [i_0 + 1]), (arr_0 [i_0 + 1] [i_0 + 2]))) <= (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) % (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1])) || (((/* implicit */_Bool) arr_5 [i_4] [i_1] [i_2] [i_3]))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_13 [i_5])) ? (((arr_14 [i_5]) / (arr_4 [i_5] [i_5]))) : (1079085268U))), (min(((((_Bool)1) ? (((/* implicit */unsigned int) 2147483647)) : (arr_14 [i_5]))), (((/* implicit */unsigned int) arr_9 [i_5] [i_5] [i_5]))))));
        arr_15 [i_5] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((arr_1 [i_5]), (((/* implicit */unsigned short) arr_8 [i_5] [i_5] [i_5]))))), (((((unsigned long long int) (unsigned char)255)) & (((/* implicit */unsigned long long int) (~(arr_0 [i_5] [i_5]))))))));
        arr_16 [i_5] = ((/* implicit */unsigned char) ((unsigned long long int) arr_14 [i_5]));
        var_17 -= ((/* implicit */unsigned short) arr_2 [i_5]);
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-16359)) > (((/* implicit */int) min((((/* implicit */short) arr_8 [i_5] [i_5] [i_5])), (min((((/* implicit */short) (signed char)19)), ((short)-21292))))))));
    }
    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 2) /* same iter space */
    {
        var_19 ^= ((/* implicit */unsigned int) (-(var_9)));
        var_20 = ((/* implicit */int) min((var_20), (((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_6)) ? (var_0) : (arr_4 [i_6] [i_6]))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)81)) >= (((/* implicit */int) (unsigned char)87)))))))) ? ((~(((/* implicit */int) ((unsigned short) var_10))))) : (((/* implicit */int) (unsigned short)7972))))));
    }
    /* vectorizable */
    for (unsigned char i_7 = 0; i_7 < 15; i_7 += 2) /* same iter space */
    {
        arr_22 [i_7] [i_7] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_3 [i_7] [(unsigned short)0])) ? (-84914562725444677LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) == (((/* implicit */long long int) arr_14 [i_7]))));
        /* LoopSeq 1 */
        for (unsigned int i_8 = 0; i_8 < 15; i_8 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_9 = 0; i_9 < 15; i_9 += 3) 
            {
                for (int i_10 = 3; i_10 < 12; i_10 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_11 = 0; i_11 < 15; i_11 += 4) 
                        {
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3215882028U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)90))) : (((((/* implicit */_Bool) arr_27 [i_9] [i_10])) ? (((/* implicit */unsigned long long int) var_8)) : (arr_30 [i_7] [i_8] [(signed char)5] [i_9] [i_10] [i_11])))));
                            var_22 = ((/* implicit */unsigned short) arr_0 [i_7] [i_11]);
                        }
                        arr_33 [i_7] [i_7] [i_7] [i_7] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */int) arr_27 [i_8] [i_10 - 3])) < (((/* implicit */int) (unsigned short)23070))))) : (((/* implicit */int) (unsigned short)16383))));
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (~(((/* implicit */int) var_3)))))));
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(4294967295U)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_8] [i_9] [i_10]))) : (arr_0 [i_7] [i_10 - 1]))))));
                    }
                } 
            } 
            arr_34 [i_7] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */int) arr_6 [i_7] [i_8] [i_7] [i_7])) : (((/* implicit */int) ((unsigned short) arr_17 [i_8])))));
        }
    }
    var_25 = ((/* implicit */unsigned char) (((((-(((/* implicit */int) ((unsigned char) (short)-16386))))) + (2147483647))) >> ((((-(var_9))) - (14158343688408659813ULL)))));
    var_26 = var_2;
}
