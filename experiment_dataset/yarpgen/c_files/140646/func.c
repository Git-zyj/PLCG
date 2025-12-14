/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140646
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
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 11U)) ? (arr_0 [i_0]) : (arr_2 [i_0])))) ? (((/* implicit */long long int) arr_1 [(unsigned char)1])) : (((((/* implicit */_Bool) 1123466181U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)67))) : (8282956335229900893LL))))) * (((long long int) ((unsigned int) var_3)))));
        arr_4 [i_0] [i_0] = (~(arr_2 [i_0]));
    }
    for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        var_20 = ((/* implicit */int) arr_6 [i_1]);
        var_21 = ((/* implicit */unsigned char) ((long long int) ((signed char) (~(((/* implicit */int) (unsigned short)23611))))));
        /* LoopSeq 1 */
        for (long long int i_2 = 1; i_2 < 14; i_2 += 3) 
        {
            var_22 = ((/* implicit */signed char) arr_5 [i_1]);
            var_23 = ((/* implicit */unsigned short) ((min((arr_7 [i_2 + 1] [i_2 - 1]), (4253675892U))) >= (max((((/* implicit */unsigned int) var_18)), (4294967295U)))));
            var_24 = ((/* implicit */long long int) ((((/* implicit */int) var_16)) ^ (((((/* implicit */int) arr_8 [i_2 + 1] [i_2 - 1])) | (((/* implicit */int) arr_8 [i_2 - 1] [i_2 + 1]))))));
        }
    }
    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        arr_14 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_12 [i_3] [i_3])))) || (((arr_12 [i_3] [i_3]) <= (arr_12 [i_3] [i_3])))));
        arr_15 [i_3] = -5838689405391402083LL;
    }
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (min((((/* implicit */long long int) var_5)), (((((/* implicit */_Bool) 0U)) ? (-5838689405391402076LL) : (5838689405391402076LL))))) : (((((/* implicit */_Bool) (+(var_15)))) ? (((((/* implicit */_Bool) 4389456576512LL)) ? (var_9) : (-5838689405391402083LL))) : (var_9)))));
    var_26 = ((/* implicit */unsigned char) var_19);
    var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) <= ((+(var_1))))))));
    /* LoopSeq 3 */
    for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
    {
        /* LoopSeq 3 */
        for (signed char i_5 = 2; i_5 < 20; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 21; i_6 += 4) 
            {
                for (signed char i_7 = 0; i_7 < 21; i_7 += 4) 
                {
                    {
                        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) (~(((((/* implicit */long long int) ((/* implicit */int) arr_24 [4LL] [i_5 - 2] [i_6]))) - (var_0))))))));
                        var_29 -= ((/* implicit */short) ((((/* implicit */_Bool) 524287U)) ? (70334384439296ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)23917)) ? (6U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)27))))))));
                        var_30 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((signed char) arr_24 [i_4] [i_5] [i_6]))))) ? (arr_18 [i_5]) : (min((4294442999U), (((arr_26 [i_4] [i_5] [i_6] [i_5] [(unsigned short)3]) - (var_1)))))));
                    }
                } 
            } 
            var_31 = ((/* implicit */unsigned int) max(((unsigned char)239), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)41618)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_4])))))))))));
            /* LoopNest 2 */
            for (long long int i_8 = 0; i_8 < 21; i_8 += 4) 
            {
                for (unsigned int i_9 = 2; i_9 < 20; i_9 += 4) 
                {
                    {
                        arr_33 [i_4] [i_5] [i_5] &= ((/* implicit */int) min((((((/* implicit */_Bool) ((unsigned int) (unsigned short)42990))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_26 [i_5] [i_5] [i_5 - 1] [i_9] [i_5])))))), ((+(arr_26 [i_9 - 1] [i_9] [i_9] [i_4] [i_9 - 1])))));
                        var_32 = ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_26 [i_9] [i_5] [i_8] [i_5] [i_4])), (arr_29 [3U] [i_5 - 2] [i_9 - 2] [i_5 + 1])));
                    }
                } 
            } 
        }
        for (unsigned int i_10 = 4; i_10 < 20; i_10 += 3) 
        {
            var_33 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */unsigned long long int) min((4294967295U), (arr_26 [i_4] [i_4] [i_4] [i_4] [i_10])))) > ((+(var_11))))));
            var_34 = ((/* implicit */unsigned short) ((signed char) max((((/* implicit */unsigned int) arr_31 [12U] [i_10 - 2] [i_10 - 1] [i_4])), (var_6))));
            /* LoopSeq 1 */
            for (long long int i_11 = 0; i_11 < 21; i_11 += 1) 
            {
                arr_40 [i_11] [i_11] [i_4] [i_4] = ((/* implicit */short) min((((/* implicit */unsigned int) arr_28 [i_4] [i_10] [i_4])), (min((((/* implicit */unsigned int) arr_37 [i_11] [i_4] [i_4] [i_4])), ((+(4294443029U)))))));
                var_35 = ((/* implicit */long long int) (((~(((/* implicit */int) (unsigned short)114)))) % (((/* implicit */int) (!(((var_17) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)253))))))))));
            }
        }
        for (long long int i_12 = 4; i_12 < 20; i_12 += 4) 
        {
            arr_43 [i_12] [i_4] = ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_17 [i_12 - 2])) | (((/* implicit */int) arr_17 [i_12 - 3]))))));
            var_36 &= ((/* implicit */signed char) var_17);
            arr_44 [i_4] [i_12] [i_4] = ((/* implicit */unsigned int) var_17);
            /* LoopNest 3 */
            for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 3) 
            {
                for (short i_14 = 0; i_14 < 21; i_14 += 1) 
                {
                    for (unsigned short i_15 = 0; i_15 < 21; i_15 += 1) 
                    {
                        {
                            arr_52 [i_12] [i_13] = max((((/* implicit */long long int) var_10)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32215)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (arr_51 [i_4] [i_12] [i_13] [i_14] [i_15])))) ? (min((var_3), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) arr_30 [i_13] [i_13] [i_13] [i_12 - 3])))));
                            var_37 -= ((/* implicit */unsigned int) ((long long int) max((max((583754155), (((/* implicit */int) arr_31 [i_4] [i_4] [i_4] [i_12])))), (((/* implicit */int) arr_17 [i_14])))));
                            var_38 = ((/* implicit */unsigned long long int) ((var_3) <= (((/* implicit */long long int) ((arr_22 [i_13] [i_12 - 2] [18ULL]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_12 + 1] [i_12 + 1] [i_12 + 1]))))))));
                            var_39 = 4294442999U;
                        }
                    } 
                } 
            } 
        }
        arr_53 [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1543386760U)))))) == (((((/* implicit */_Bool) arr_30 [i_4] [i_4] [i_4] [i_4])) ? (arr_20 [i_4] [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35897)))))));
    }
    /* vectorizable */
    for (signed char i_16 = 0; i_16 < 25; i_16 += 4) 
    {
        arr_57 [i_16] [i_16] = ((/* implicit */unsigned int) arr_56 [8ULL] [8ULL]);
        arr_58 [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) -9223372036854775786LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_55 [(unsigned short)2]))) : (var_2)));
        arr_59 [i_16] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_55 [i_16])) || (((/* implicit */_Bool) arr_55 [i_16]))));
        /* LoopNest 2 */
        for (int i_17 = 3; i_17 < 22; i_17 += 4) 
        {
            for (unsigned int i_18 = 0; i_18 < 25; i_18 += 1) 
            {
                {
                    var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)8064)) ? (((/* implicit */int) (unsigned short)65535)) : (1548464225)));
                    /* LoopSeq 3 */
                    for (unsigned int i_19 = 1; i_19 < 24; i_19 += 4) 
                    {
                        var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) ((long long int) var_8)))));
                        arr_68 [i_16] [i_18] [i_18] [i_19] = ((/* implicit */short) arr_55 [i_19]);
                        arr_69 [(signed char)4] [i_17] [i_18] [i_19 - 1] = ((/* implicit */short) (unsigned short)65531);
                    }
                    for (int i_20 = 0; i_20 < 25; i_20 += 2) 
                    {
                        arr_72 [i_16] [i_16] [i_16] = ((/* implicit */int) ((unsigned int) arr_56 [i_17 + 3] [i_16]));
                        arr_73 [(signed char)2] [(signed char)2] [i_18] [9LL] = arr_65 [i_17 - 3] [i_20] [i_18] [i_17] [i_20] [i_18];
                    }
                    for (unsigned int i_21 = 3; i_21 < 24; i_21 += 4) 
                    {
                        var_42 -= ((/* implicit */unsigned int) ((signed char) (+(1669799398341909274LL))));
                        var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_75 [i_17 - 2] [i_17 + 2] [i_18] [i_18])) && (((/* implicit */_Bool) arr_75 [i_17 + 2] [i_17 - 3] [i_21 + 1] [i_21 - 1]))));
                    }
                }
            } 
        } 
    }
    for (unsigned int i_22 = 2; i_22 < 12; i_22 += 4) 
    {
        arr_81 [i_22] [i_22 - 2] = ((/* implicit */unsigned short) 8357619876514253685ULL);
        arr_82 [i_22] [i_22] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_32 [i_22] [i_22] [(unsigned short)4])), (min((((/* implicit */long long int) arr_8 [i_22] [i_22 - 1])), (-9065340556902126613LL))))))));
        arr_83 [(signed char)1] = ((/* implicit */signed char) ((unsigned int) min((((/* implicit */long long int) arr_42 [i_22 - 2])), (var_3))));
        var_44 = ((/* implicit */unsigned int) var_10);
    }
}
