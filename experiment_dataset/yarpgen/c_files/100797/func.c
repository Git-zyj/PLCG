/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100797
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
    var_20 = ((/* implicit */unsigned short) ((_Bool) min((((var_1) * (((/* implicit */unsigned int) ((/* implicit */int) (short)15))))), (min((((/* implicit */unsigned int) (short)17)), (var_0))))));
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        var_21 = ((/* implicit */_Bool) ((unsigned char) min((arr_1 [i_0 + 3]), (var_11))));
        arr_3 [17LL] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_16)), (var_0)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (unsigned char)4)) >> (((((/* implicit */int) arr_0 [i_0] [i_0])) - (141)))))))) ? (max((((((/* implicit */long long int) -464828245)) | (arr_1 [(unsigned short)8]))), (((/* implicit */long long int) max((var_5), ((_Bool)1)))))) : (var_10)));
        var_22 = ((/* implicit */int) (short)17);
        arr_4 [i_0] [(_Bool)1] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)4092)))) ? (((/* implicit */long long int) -370266692)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_12)) : (var_11)))))));
        arr_5 [i_0] [i_0] = var_10;
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 11; i_1 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 11; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                {
                    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (2973227712411698242ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52425))))))));
                    arr_16 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) 2147483619)) & (arr_7 [i_3])))) || (((/* implicit */_Bool) var_14))));
                    arr_17 [(unsigned short)4] [(short)8] [i_3] [(short)5] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) 879835194)) ? (arr_8 [i_1 - 1] [i_1]) : (((/* implicit */unsigned long long int) arr_13 [i_1 + 1] [8] [i_1 + 1] [i_1 + 1]))));
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_13 [i_1] [i_1] [9LL] [i_1])))) & (((var_10) - (arr_1 [i_1])))));
        arr_18 [i_1] = ((/* implicit */_Bool) arr_8 [i_1] [i_1]);
    }
    for (unsigned int i_4 = 1; i_4 < 11; i_4 += 3) /* same iter space */
    {
        arr_23 [(unsigned char)0] = ((/* implicit */unsigned short) var_11);
        arr_24 [i_4] = ((/* implicit */int) max((((max((((/* implicit */unsigned long long int) var_1)), (18446744073709551613ULL))) | (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((((/* implicit */int) var_8)), (879835194)))), (((((/* implicit */_Bool) (short)-17)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4 + 1] [i_4 - 1] [i_4]))) : (var_9))))))));
        var_26 = ((/* implicit */long long int) (~((~(var_12)))));
        /* LoopNest 3 */
        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            for (long long int i_6 = 2; i_6 < 10; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    {
                        arr_31 [i_4] [i_4] [i_4 + 1] [i_4] = 650448094U;
                        arr_32 [i_6] [i_6] [i_6] [i_6 - 1] = ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) max((var_15), (((/* implicit */int) (_Bool)1))))))), (((_Bool) var_18))));
                    }
                } 
            } 
        } 
        arr_33 [i_4] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_11 [i_4 - 1] [i_4 - 1])) ? (((/* implicit */long long int) var_2)) : (var_3))));
    }
    var_27 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) var_16)) : (4212977155U))) % (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) % (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 9223372036854775796LL)) && (((/* implicit */_Bool) 2894788331U)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_8 = 4; i_8 < 16; i_8 += 2) 
    {
        for (short i_9 = 0; i_9 < 17; i_9 += 4) 
        {
            for (short i_10 = 0; i_10 < 17; i_10 += 4) 
            {
                {
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65526)) ? (min((var_2), (((/* implicit */unsigned int) (_Bool)1)))) : (((((/* implicit */_Bool) 6875386875685340659LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)231))) : (2576808141U)))))) - (min((min((arr_1 [i_8]), (((/* implicit */long long int) arr_37 [i_10] [i_10])))), (((/* implicit */long long int) ((1790551743U) * (((/* implicit */unsigned int) var_13)))))))));
                    /* LoopNest 2 */
                    for (short i_11 = 0; i_11 < 17; i_11 += 3) 
                    {
                        for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 2) 
                        {
                            {
                                var_29 = ((/* implicit */int) max((min((var_7), (((/* implicit */unsigned int) var_16)))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_8 - 2] [i_8 + 1])))))));
                                arr_44 [i_8] [(short)15] [i_10] [(short)15] [i_12] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) min((arr_0 [i_8 - 1] [i_8 - 4]), ((unsigned char)240)))), ((-(min((1790551743U), (var_1)))))));
                                arr_45 [i_12] [(unsigned char)7] [i_11] [i_10] [(unsigned char)7] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)174)) ? (var_7) : (((/* implicit */unsigned int) 2147483622))))), (((((/* implicit */_Bool) 4294967295U)) ? (var_11) : (((/* implicit */long long int) 1718159146U))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_5)), (arr_34 [(_Bool)1])))) && (((_Bool) arr_37 [(_Bool)1] [i_9]))))) : (((((/* implicit */_Bool) ((int) arr_39 [i_8] [i_8] [i_8]))) ? (((/* implicit */int) ((_Bool) var_7))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_8] [(_Bool)1] [i_8])))))))));
                                var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((unsigned short) max((var_19), (((((/* implicit */_Bool) 231970144U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_12] [i_11] [7LL] [i_8] [i_8]))) : (var_2)))))))));
                            }
                        } 
                    } 
                    arr_46 [i_8] [i_9] [i_10] [i_10] = ((/* implicit */unsigned char) ((((max((var_11), (((/* implicit */long long int) arr_0 [3] [i_8])))) * (((/* implicit */long long int) ((((/* implicit */int) var_17)) / (2085785947)))))) != (((((/* implicit */long long int) 2576808153U)) & ((((_Bool)1) ? (((/* implicit */long long int) var_15)) : (-9223372036854775797LL)))))));
                    arr_47 [i_8] [i_9] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) min((var_1), (max((((/* implicit */unsigned int) (unsigned char)0)), (3041111935U)))))) ? (((((/* implicit */unsigned int) ((var_13) + (-2085785969)))) | ((~(arr_38 [(_Bool)1] [i_9] [i_9] [i_9]))))) : (max((((((/* implicit */_Bool) -1912636294)) ? (3837099721U) : (1888613751U))), (((var_5) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)99))) : (var_7)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 0; i_13 < 17; i_13 += 1) 
                    {
                        for (unsigned int i_14 = 2; i_14 < 16; i_14 += 3) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) max((min((2693099873U), (((/* implicit */unsigned int) arr_50 [i_8 - 4] [(unsigned short)9] [i_8] [i_8] [i_8 - 2] [i_8 - 4])))), (((((((/* implicit */_Bool) 0U)) ? (arr_38 [i_14] [i_13] [i_10] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [7]))))) << (((((((/* implicit */_Bool) -2147483623)) ? (-20713347) : (arr_50 [i_8] [i_9] [i_9] [i_13] [i_10] [i_9]))) + (20713351))))))))));
                                arr_52 [i_8] [i_8] |= (-(min((arr_1 [i_8 - 1]), (((/* implicit */long long int) var_17)))));
                                var_32 = ((/* implicit */short) max((((/* implicit */long long int) var_6)), (((((((/* implicit */_Bool) arr_2 [(unsigned short)0] [i_9])) ? (((/* implicit */long long int) var_19)) : (7575584678585744941LL))) | (((/* implicit */long long int) ((469762048U) >> (((var_18) - (355005757))))))))));
                                var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((var_3) + (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_13] [10U])))))) ? (((/* implicit */unsigned long long int) max((851394811338322850LL), (((/* implicit */long long int) arr_51 [14U] [i_14 - 2] [i_13] [i_10] [i_10] [i_9] [16U]))))) : (8703300449349445642ULL))), (((/* implicit */unsigned long long int) max(((~(var_19))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) -10)) : (450948977U)))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
