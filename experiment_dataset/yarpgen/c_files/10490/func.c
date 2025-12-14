/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10490
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) max(((short)32767), (((/* implicit */short) (_Bool)1))));
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) var_8)) : (-1)))))));
    }
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (-(((((/* implicit */unsigned int) 2)) * (arr_2 [i_1]))))))));
        arr_5 [i_1] [i_1] = ((/* implicit */signed char) (+(max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))))), (arr_2 [i_1])))));
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            var_21 -= ((((/* implicit */_Bool) ((unsigned short) var_12))) ? (((/* implicit */int) ((unsigned char) arr_4 [i_2]))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))) && (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65535)))))))));
            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) min((((/* implicit */int) min((max((((/* implicit */unsigned short) (short)32759)), (arr_7 [i_1] [i_2]))), (((/* implicit */unsigned short) arr_3 [i_2]))))), (((((/* implicit */int) arr_3 [i_1])) - (arr_6 [(signed char)8]))))))));
            var_23 |= ((/* implicit */unsigned short) ((((var_0) + (2147483647))) >> (((((/* implicit */int) max(((short)-785), (((/* implicit */short) (signed char)-8))))) + (33)))));
            var_24 = ((/* implicit */short) (~(((((((/* implicit */_Bool) arr_7 [i_1] [i_2])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_3 [(signed char)0])))) ^ (((((/* implicit */_Bool) 9589751983775922109ULL)) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (((/* implicit */int) var_15))))))));
            var_25 = ((/* implicit */unsigned int) ((((unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (8856992089933629506ULL)))) > (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5)))), (((((/* implicit */int) (signed char)63)) | (1181695797))))))));
        }
        /* vectorizable */
        for (long long int i_3 = 4; i_3 < 19; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 22; i_4 += 1) 
            {
                for (unsigned int i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    {
                        var_26 = ((/* implicit */long long int) (-(((((/* implicit */int) (unsigned short)9294)) - (((/* implicit */int) (unsigned char)49))))));
                        var_27 = ((/* implicit */unsigned short) (+(arr_11 [i_3])));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned int i_6 = 0; i_6 < 22; i_6 += 3) 
            {
                var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_3 - 4] [i_3 - 2] [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 1])) ? (arr_14 [i_3 - 4] [i_3 - 4] [i_3 + 1] [i_3 - 4] [i_3 + 3] [i_3 + 2]) : (2123306894U)));
                var_29 = ((/* implicit */signed char) (unsigned short)65535);
                arr_18 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_4 [i_1])) - (((/* implicit */int) arr_17 [20] [i_3] [i_3] [i_6]))))));
                var_30 = ((/* implicit */unsigned int) ((arr_8 [i_3 + 1] [6U] [i_6]) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
                /* LoopSeq 1 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_31 = ((/* implicit */long long int) arr_6 [i_3]);
                    arr_22 [i_1] [i_3] = ((/* implicit */unsigned short) (~((+(((/* implicit */int) var_17))))));
                    /* LoopSeq 2 */
                    for (signed char i_8 = 0; i_8 < 22; i_8 += 2) 
                    {
                        var_32 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_20 [i_1] [(unsigned short)4] [i_6] [(unsigned short)4] [i_3 + 1]))));
                        var_33 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)51)) ^ (var_0)));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_34 = ((/* implicit */unsigned int) arr_4 [i_1]);
                        var_35 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_21 [i_1] [i_1] [i_1] [i_1] [(unsigned short)2]) - (((/* implicit */unsigned long long int) arr_8 [i_1] [i_1] [i_9])))))));
                        arr_27 [i_9] = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-57)) * (((/* implicit */int) var_13)))) / (((/* implicit */int) arr_24 [i_1] [2ULL] [i_6] [i_3 - 2] [i_9]))));
                    }
                    var_36 = ((/* implicit */unsigned short) (unsigned char)255);
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 3; i_10 < 18; i_10 += 3) 
                    {
                        var_37 = ((/* implicit */short) ((var_3) >> (((((((/* implicit */_Bool) 1650392394U)) ? (((/* implicit */int) (signed char)49)) : (((/* implicit */int) (signed char)-1)))) - (44)))));
                        var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_21 [i_6] [i_10] [i_10 - 2] [i_10 + 4] [9ULL]))))));
                        var_39 &= ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)41))));
                        var_40 = ((/* implicit */unsigned int) ((signed char) var_11));
                        var_41 ^= ((/* implicit */unsigned int) (~(var_0)));
                    }
                }
            }
            for (short i_11 = 1; i_11 < 19; i_11 += 3) 
            {
                arr_32 [i_11] [i_3 - 2] = ((/* implicit */unsigned char) arr_13 [i_11] [i_11] [i_3 - 1] [i_3] [i_1]);
                var_42 = ((int) var_13);
                /* LoopNest 2 */
                for (short i_12 = 2; i_12 < 21; i_12 += 1) 
                {
                    for (short i_13 = 0; i_13 < 22; i_13 += 1) 
                    {
                        {
                            var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-70)) ? (((/* implicit */int) (unsigned short)16368)) : (2147483647))))));
                            var_44 = ((/* implicit */signed char) arr_14 [i_1] [15LL] [i_11] [i_11] [i_12] [i_11]);
                            var_45 = ((2562266059U) - (((/* implicit */unsigned int) (~(2147483647)))));
                            var_46 = ((unsigned char) arr_8 [i_11 - 1] [i_11 + 3] [i_3 + 1]);
                            var_47 = var_8;
                        }
                    } 
                } 
            }
        }
        var_48 = ((/* implicit */unsigned char) (~(max((((/* implicit */unsigned int) ((((/* implicit */int) (short)9722)) ^ (((/* implicit */int) (signed char)63))))), (1048575U)))));
        var_49 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) (signed char)-63))))));
    }
    var_50 = ((/* implicit */short) var_16);
    var_51 = ((/* implicit */short) (!(((/* implicit */_Bool) var_12))));
    var_52 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)76)), (var_1))))) : (var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_6)))))));
}
