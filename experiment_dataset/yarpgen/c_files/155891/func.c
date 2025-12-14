/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155891
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_10))) & (var_12)))) ? (((/* implicit */int) var_16)) : (arr_7 [11ULL] [17LL] [i_0]))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)128)) ^ (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_13)) : (max((arr_7 [i_0] [i_1 + 2] [i_2]), (((/* implicit */int) arr_3 [(unsigned short)18] [13U] [(unsigned short)0]))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned char)209)) ? (-15) : (-1167129473)))));
                        arr_10 [i_0] [i_1] [i_1] [i_2] |= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)4622)) : ((+(((/* implicit */int) (unsigned char)255)))))), (((/* implicit */int) var_13))));
                        var_21 = ((/* implicit */signed char) (~(((/* implicit */int) var_0))));
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            arr_14 [i_0] [(unsigned short)5] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) max((arr_13 [i_0] [i_4]), (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_3 [(unsigned short)15] [i_4] [i_0])) : (((/* implicit */int) var_2)))) : ((-(((/* implicit */int) (unsigned short)57709))))))));
            var_22 = ((/* implicit */signed char) ((arr_8 [i_4] [i_0]) == (((/* implicit */int) var_10))));
        }
    }
    for (unsigned char i_5 = 1; i_5 < 15; i_5 += 1) /* same iter space */
    {
        arr_18 [i_5 - 1] [i_5] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_6 [i_5 + 1] [i_5 - 1] [i_5 - 1])))) ? (((/* implicit */int) var_8)) : ((+(arr_11 [i_5] [6] [i_5 - 1])))));
        /* LoopSeq 2 */
        for (int i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            var_23 = arr_17 [i_5];
            var_24 = ((/* implicit */short) arr_8 [i_5] [i_5]);
        }
        for (unsigned short i_7 = 1; i_7 < 15; i_7 += 3) 
        {
            var_25 = ((/* implicit */unsigned short) var_11);
            arr_24 [i_7] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551608ULL)) && (((/* implicit */_Bool) max((7ULL), (((/* implicit */unsigned long long int) (unsigned short)6760)))))))), ((~(var_1)))));
            /* LoopNest 3 */
            for (unsigned short i_8 = 2; i_8 < 15; i_8 += 1) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (int i_10 = 0; i_10 < 16; i_10 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */short) max((((/* implicit */int) arr_27 [i_7 + 1] [(unsigned char)14] [i_9])), (((((/* implicit */_Bool) (~(4108869513U)))) ? ((~(((/* implicit */int) (short)1920)))) : (((((/* implicit */int) (short)19114)) & (((/* implicit */int) (unsigned short)26))))))));
                            arr_33 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_27 [i_5 + 1] [i_8 - 1] [i_9]), (((/* implicit */unsigned short) var_10))))) ? (max((((/* implicit */unsigned long long int) (signed char)-87)), (7987731248241208461ULL))) : (((/* implicit */unsigned long long int) (-(arr_9 [i_5 + 1] [i_8 - 2] [i_8] [i_10]))))));
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [i_10] [(unsigned short)11] [i_7 - 1]))))) ? ((((((~(((/* implicit */int) var_16)))) + (2147483647))) << (((((/* implicit */int) arr_20 [i_5 - 1] [i_5 - 1] [i_10])) - (3850))))) : (((arr_11 [(short)13] [i_7] [i_5]) ^ (((/* implicit */int) var_15))))));
                            arr_34 [i_5] [(short)4] [(signed char)14] &= ((/* implicit */unsigned char) max((((/* implicit */long long int) max(((+(((/* implicit */int) var_16)))), (((((/* implicit */int) var_9)) | (((/* implicit */int) var_8))))))), (var_12)));
                        }
                    } 
                } 
            } 
        }
        arr_35 [i_5 + 1] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_26 [(_Bool)1] [i_5 + 1] [i_5] [(_Bool)1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (18446744073709551580ULL))))));
    }
    for (unsigned char i_11 = 1; i_11 < 15; i_11 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) -1856936060)) ? (((/* implicit */unsigned long long int) 2147483630)) : (7ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) max((var_14), (((/* implicit */unsigned short) var_4))))))))));
        arr_39 [(signed char)10] [i_11] = ((/* implicit */long long int) max((max((((/* implicit */int) max(((signed char)-60), (var_13)))), ((-(((/* implicit */int) arr_31 [8LL] [i_11] [i_11] [i_11] [8LL])))))), (((/* implicit */int) max((var_14), (((/* implicit */unsigned short) ((signed char) var_5))))))));
        arr_40 [i_11 + 1] [i_11] = ((/* implicit */_Bool) max((max(((unsigned short)33085), ((unsigned short)36741))), (((/* implicit */unsigned short) (short)-28184))));
        var_29 = ((/* implicit */int) max((((((/* implicit */_Bool) (short)31151)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)60))) : (-5699374359316429177LL))), (((/* implicit */long long int) -64762709))));
    }
    /* LoopNest 2 */
    for (unsigned char i_12 = 0; i_12 < 17; i_12 += 3) 
    {
        for (unsigned int i_13 = 0; i_13 < 17; i_13 += 1) 
        {
            {
                arr_46 [i_12] [i_13] = (~(max((((/* implicit */unsigned long long int) max((var_1), (((/* implicit */long long int) var_2))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_12] [(short)4] [i_13]))) : (var_18))))));
                arr_47 [i_13] [i_12] = ((/* implicit */unsigned short) arr_44 [10] [10] [(unsigned char)0]);
                arr_48 [(unsigned char)2] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_9 [i_12] [i_13] [i_13] [i_12])))))))));
                /* LoopSeq 3 */
                for (unsigned short i_14 = 1; i_14 < 16; i_14 += 1) /* same iter space */
                {
                    var_30 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [(unsigned short)2] [i_14 + 1] [i_14 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((((((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) + (9223372036854775807LL))) >> (((arr_49 [i_14] [(unsigned char)16] [(unsigned char)16] [i_12]) - (5001916894151600385ULL)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_15 = 0; i_15 < 17; i_15 += 1) 
                    {
                        for (int i_16 = 0; i_16 < 17; i_16 += 3) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned short) max((max((var_12), (((/* implicit */long long int) arr_9 [i_14] [i_14 + 1] [i_14 + 1] [i_14 + 1])))), (((/* implicit */long long int) (+(((/* implicit */int) var_6)))))));
                                var_32 = ((/* implicit */signed char) var_7);
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */unsigned short) var_15);
                }
                /* vectorizable */
                for (unsigned short i_17 = 1; i_17 < 16; i_17 += 1) /* same iter space */
                {
                    arr_61 [i_12] [15ULL] [i_17] [i_17] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_7)))))));
                    arr_62 [(unsigned char)2] [6] [6] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_12] [i_12] [i_17 + 1])) ? (arr_8 [i_12] [i_17 - 1]) : ((~(arr_11 [i_12] [i_13] [i_17 + 1])))));
                    arr_63 [i_17] [i_17] [i_17] = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_0 [i_12]))))));
                }
                for (unsigned short i_18 = 1; i_18 < 16; i_18 += 1) /* same iter space */
                {
                    var_34 = ((/* implicit */unsigned char) max((18446744073709551594ULL), (((/* implicit */unsigned long long int) (short)-31723))));
                    var_35 = ((/* implicit */long long int) ((((/* implicit */int) ((((int) (signed char)84)) != (((var_7) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))))) ^ (((/* implicit */int) arr_12 [(unsigned char)0] [(unsigned char)0]))));
                    var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_13])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_13])) ? (arr_11 [i_12] [i_12] [i_12]) : (((/* implicit */int) arr_3 [i_12] [i_12] [i_12]))))) : ((~(var_18)))))) && (((/* implicit */_Bool) max((((var_18) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))), (((/* implicit */unsigned long long int) arr_41 [i_18 - 1]))))))))));
                    var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) var_17))));
                    arr_66 [i_12] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)158)), (((((/* implicit */_Bool) var_17)) ? (var_17) : (((/* implicit */unsigned long long int) var_11))))))) ? ((((+(13U))) / (((/* implicit */unsigned int) ((/* implicit */int) max((var_9), (var_9))))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */signed char) arr_57 [i_18 + 1] [(unsigned short)3] [(_Bool)1] [i_13] [i_12])), (var_10))))))));
                }
            }
        } 
    } 
    var_38 = var_11;
}
