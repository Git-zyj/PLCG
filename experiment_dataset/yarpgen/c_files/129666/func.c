/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129666
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
    var_18 = ((/* implicit */unsigned long long int) var_15);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                {
                    var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */long long int) (-(var_16)))) + (((((/* implicit */_Bool) var_13)) ? (-8897627479869326674LL) : (((/* implicit */long long int) arr_2 [i_0] [i_1])))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) min((-1), (((/* implicit */int) (_Bool)1))))) : ((((_Bool)0) ? (3393607057U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))))))))));
                    arr_8 [i_1] [i_1] [i_0] [i_1] = ((/* implicit */int) var_9);
                    /* LoopSeq 4 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (signed char)-122)) <= ((+(var_2)))))) << (((min((arr_6 [i_0] [i_1] [i_3]), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1]))))))) + (2068427228022127000LL)))));
                        arr_12 [i_1] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */unsigned long long int) arr_2 [i_2 + 2] [i_3])) & (565890576801682659ULL))));
                        var_21 = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : (max(((~(17199133440313117679ULL))), (((/* implicit */unsigned long long int) arr_9 [i_1] [i_2 + 4] [i_2 + 3] [i_2 - 2])))));
                        var_22 -= ((/* implicit */unsigned short) var_7);
                        arr_13 [i_0] [i_1] = ((/* implicit */unsigned long long int) (unsigned short)39167);
                    }
                    for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 25; i_5 += 1) 
                        {
                            arr_20 [i_1] [i_1] [i_2] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) (~(min((arr_11 [i_5] [i_4] [i_2 + 1] [i_1]), (arr_11 [i_0] [i_2 + 1] [i_4] [i_5])))));
                            arr_21 [i_1] [i_2 - 1] [i_1] = ((/* implicit */signed char) var_13);
                        }
                        arr_22 [i_1] = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */int) var_11)), (var_8)))), (max((1748109549055812070ULL), (((/* implicit */unsigned long long int) (signed char)-122))))))) ? (((((var_4) >= (((/* implicit */int) (signed char)21)))) ? (((/* implicit */unsigned long long int) min((2318855612U), (((/* implicit */unsigned int) (signed char)-122))))) : (((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (1247610633396433937ULL))))) : (((16026685787228149295ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))))));
                        arr_23 [i_0] [i_0] [i_1] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) arr_1 [i_1] [i_1]);
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        arr_27 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 6)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) != (4398046511103LL)));
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((9223372036854775807LL) % (((var_9) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_2 + 3] [i_2 + 4] [i_2 + 1])) / (((/* implicit */int) arr_3 [i_2 + 4] [i_2 - 2] [i_2 + 1]))))) : (arr_11 [i_0] [i_1] [i_2 + 1] [i_6]))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_24 = ((_Bool) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_8)) : (var_1)))));
                        arr_30 [i_0] [i_1] [i_2] [i_2] [i_2 + 4] [i_2 + 4] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((arr_19 [i_0] [i_1] [i_1] [i_7] [i_2 + 1] [i_0] [i_7]) ? (arr_25 [i_2]) : (var_10)))) ? (((((/* implicit */_Bool) 17199133440313117690ULL)) ? (17340000238869655862ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_16)))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) max((var_17), (arr_5 [i_7])))))))));
                    }
                }
            } 
        } 
        arr_31 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [4] [i_0])) ? (((/* implicit */unsigned int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (var_10)))) ? (((/* implicit */long long int) max((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */int) (signed char)7))))) : ((~(arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]))));
        arr_32 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (arr_6 [i_0] [i_0] [i_0]) : (arr_6 [i_0] [i_0] [i_0]))) / (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_9)) * (var_1)))) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) ((unsigned char) var_1))))))));
        var_25 = ((/* implicit */unsigned short) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_8 = 4; i_8 < 17; i_8 += 1) 
    {
        arr_36 [i_8] [(unsigned char)2] = ((/* implicit */unsigned int) ((arr_35 [i_8 + 2]) ? (((/* implicit */int) arr_35 [i_8 - 1])) : (((/* implicit */int) var_14))));
        arr_37 [i_8 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) 4653396567343921020LL))) ? (arr_24 [i_8] [(unsigned char)8] [i_8 - 4] [i_8]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (var_16) : (((/* implicit */int) var_11)))))));
    }
}
