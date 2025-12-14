/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137198
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
    var_17 = ((/* implicit */unsigned char) (-(var_13)));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (!(((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) (_Bool)1))))))))))));
                var_19 = ((/* implicit */unsigned long long int) 562887970827012271LL);
            }
            arr_7 [i_1] [i_0] [i_0] = ((/* implicit */long long int) (_Bool)1);
        }
        /* vectorizable */
        for (short i_3 = 2; i_3 < 8; i_3 += 3) 
        {
            var_20 = ((/* implicit */unsigned int) (_Bool)1);
            /* LoopSeq 2 */
            for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_15)))))));
                arr_16 [i_0] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (signed char)92);
            }
            for (short i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                var_22 = ((/* implicit */int) ((((((((/* implicit */_Bool) var_1)) ? (-562887970827012276LL) : (((/* implicit */long long int) arr_8 [i_0])))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) arr_0 [10])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)91))) : (var_4))) - (49LL)))));
                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_14)))))));
            }
        }
        /* LoopNest 3 */
        for (short i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            for (int i_7 = 1; i_7 < 7; i_7 += 3) 
            {
                for (signed char i_8 = 0; i_8 < 11; i_8 += 2) 
                {
                    {
                        arr_28 [i_0] [i_7] [i_7 + 1] [i_7 + 4] [i_8] [i_8] = ((/* implicit */unsigned char) min((((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) > (((/* implicit */int) arr_14 [i_0] [i_7 + 2] [i_8])))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [(unsigned char)0] [i_7] [i_6] [i_0])) ? (((/* implicit */int) var_7)) : (var_0))))))));
                        var_24 = ((/* implicit */long long int) arr_2 [i_8]);
                    }
                } 
            } 
        } 
        arr_29 [i_0] = ((/* implicit */unsigned short) (!((((+(var_4))) < (-562887970827012293LL)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_9 = 0; i_9 < 11; i_9 += 3) 
        {
            /* LoopNest 3 */
            for (int i_10 = 2; i_10 < 8; i_10 += 3) 
            {
                for (unsigned char i_11 = 0; i_11 < 11; i_11 += 4) 
                {
                    for (unsigned long long int i_12 = 2; i_12 < 10; i_12 += 4) 
                    {
                        {
                            var_25 -= ((/* implicit */long long int) (+(((/* implicit */int) arr_33 [i_10 - 2] [i_10 - 1] [i_0]))));
                            var_26 = ((/* implicit */signed char) arr_14 [i_10 + 2] [i_12 - 2] [i_12 - 2]);
                            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) / (var_2)))) ? (((/* implicit */int) var_1)) : (-186912080)));
                            arr_43 [i_0] [i_9] [i_10 - 1] [i_9] [i_9] [i_12 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_10 - 2] [i_12] [i_12 - 2] [i_12])) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned short)65534))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned long long int i_13 = 3; i_13 < 9; i_13 += 3) 
            {
                for (signed char i_14 = 0; i_14 < 11; i_14 += 4) 
                {
                    for (unsigned int i_15 = 3; i_15 < 9; i_15 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */short) ((((/* implicit */unsigned long long int) 4742078371031097124LL)) + (12549315617204745020ULL)));
                            arr_53 [i_0] [i_9] [(unsigned short)8] [i_14] [i_15] = ((/* implicit */short) arr_48 [2LL] [i_9] [10ULL] [i_9] [i_9]);
                            var_29 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_36 [i_0] [i_13 + 1] [(_Bool)1] [i_15 + 2])) ? (((/* implicit */int) arr_52 [i_15 - 1] [i_13 + 1] [(_Bool)1] [i_14] [(unsigned char)6])) : (((/* implicit */int) arr_52 [4U] [i_13 - 1] [i_13] [i_0] [i_15 - 3]))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_16 = 0; i_16 < 11; i_16 += 4) 
            {
                for (short i_17 = 2; i_17 < 10; i_17 += 3) 
                {
                    for (unsigned short i_18 = 0; i_18 < 11; i_18 += 4) 
                    {
                        {
                            var_30 ^= ((/* implicit */unsigned short) (~(var_8)));
                            arr_63 [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((short) (unsigned short)41492))) : (((/* implicit */int) arr_10 [(signed char)2] [i_9]))));
                            arr_64 [i_9] [i_17] [i_16] [i_9] = ((/* implicit */unsigned int) arr_57 [i_17] [i_17] [i_17 + 1] [i_17] [4U] [i_9]);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (int i_19 = 2; i_19 < 7; i_19 += 3) 
            {
                for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                {
                    {
                        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) 3121831061U)) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)-26)) : (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_5)))))));
                        /* LoopSeq 4 */
                        for (signed char i_21 = 0; i_21 < 11; i_21 += 3) 
                        {
                            var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) (-(((/* implicit */int) (short)8912)))))));
                            arr_73 [i_0] [i_9] [i_19 + 2] [i_20] [7] = ((/* implicit */_Bool) ((arr_61 [i_9] [i_0] [i_9] [i_19] [i_9] [i_21] [i_0]) / ((((_Bool)1) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)32761))))));
                            var_33 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_14))))) >= (((/* implicit */int) arr_49 [i_9] [i_19 - 1] [i_19 + 2] [i_19]))));
                        }
                        for (int i_22 = 0; i_22 < 11; i_22 += 3) 
                        {
                            var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) arr_44 [i_0] [i_19 + 4] [i_20 - 1] [i_22]))));
                            var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) (~((-(var_4))))))));
                        }
                        for (long long int i_23 = 3; i_23 < 8; i_23 += 2) 
                        {
                            arr_80 [i_19] [i_9] [i_9] [i_20 - 1] [i_23 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)98))))) : (((/* implicit */int) arr_59 [(short)10] [i_9] [i_19 + 1] [i_20] [i_23 + 2]))));
                            arr_81 [i_23] [i_20] [i_9] [i_9] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_60 [i_23] [i_20 - 1] [i_23] [i_23] [i_20 - 1] [i_20 - 1])) ? (arr_60 [i_23] [i_23] [i_23] [i_23] [i_23] [i_20 - 1]) : (arr_60 [i_23 - 2] [i_23] [i_23 + 3] [i_23] [i_23 - 2] [i_20 - 1])));
                        }
                        for (short i_24 = 4; i_24 < 8; i_24 += 3) 
                        {
                            var_36 = var_15;
                            arr_84 [i_9] [i_9] [9ULL] [3LL] [(unsigned short)5] = ((/* implicit */unsigned short) (signed char)-75);
                            var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_44 [i_24] [i_20] [i_9] [i_0])))) ? (((4742078371031097124LL) * (((/* implicit */long long int) ((/* implicit */int) (short)-1))))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)65509)))))));
                            var_38 -= ((/* implicit */long long int) (short)0);
                        }
                        arr_85 [i_9] [i_9] = ((/* implicit */long long int) (~(((((/* implicit */int) (short)-9)) - (((/* implicit */int) (signed char)31))))));
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_25 = 3; i_25 < 10; i_25 += 4) 
        {
            arr_89 [i_25] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_13))));
            var_39 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)31246)) : (((/* implicit */int) (!(((/* implicit */_Bool) 0)))))));
            var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65534)) >> (((((/* implicit */int) (short)-1188)) + (1209))))))));
        }
    }
    var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (((var_4) + (((/* implicit */long long int) max((var_0), (var_13)))))) : (((/* implicit */long long int) ((/* implicit */int) ((var_2) >= (((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-12))))))))));
}
