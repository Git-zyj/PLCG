/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18344
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
    var_15 = (((+(((/* implicit */int) (signed char)-105)))) | (((/* implicit */int) var_12)));
    var_16 = ((/* implicit */int) var_14);
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_4), (((/* implicit */unsigned short) var_7)))))) % ((~(11691315502626423502ULL)))))) ? (var_0) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (1330106146U))))) ^ (((var_0) | (((/* implicit */unsigned long long int) 1330106146U))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0 - 1] = ((/* implicit */short) arr_1 [i_0 - 1]);
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_9 [12U] [i_1 - 1] [i_1] = ((/* implicit */_Bool) 0U);
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) 1112293299)) : (((16753482472876691951ULL) | (((/* implicit */unsigned long long int) 1112293298))))));
                    arr_10 [i_0 + 1] [i_0 + 1] [i_1] [i_2] = ((/* implicit */unsigned int) var_8);
                    var_19 = ((/* implicit */long long int) (!(arr_1 [i_0 - 1])));
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 14; i_3 += 3) 
    {
        arr_13 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (((/* implicit */int) arr_4 [i_3])) : (((/* implicit */int) arr_7 [i_3] [i_3] [16LL] [8U]))));
        var_20 = ((var_11) <= (((/* implicit */unsigned int) 1112293297)));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_21 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((int) 0ULL))) | (max((((/* implicit */long long int) (_Bool)1)), (5172147855968823318LL)))));
        var_22 = ((/* implicit */unsigned char) (-(363032765050672898ULL)));
        /* LoopSeq 2 */
        for (signed char i_5 = 0; i_5 < 21; i_5 += 1) 
        {
            var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_5 [i_4] [i_5] [i_5] [i_5]), (arr_5 [i_4] [i_4] [i_4] [i_4]))))));
            /* LoopSeq 3 */
            for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 2) 
            {
                var_24 = ((/* implicit */long long int) min(((+(arr_8 [i_4] [i_4] [i_6]))), (arr_8 [(short)19] [i_5] [i_6])));
                /* LoopSeq 1 */
                for (unsigned int i_7 = 0; i_7 < 21; i_7 += 3) 
                {
                    arr_24 [i_7] [i_6] [i_4] = (-(((/* implicit */int) ((unsigned short) 5172147855968823326LL))));
                    var_25 = ((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_5)))));
                    var_26 = ((/* implicit */unsigned int) (unsigned short)65530);
                    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_14) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_5]))) : (arr_6 [i_4] [3] [3])))) ? (arr_21 [i_4] [i_4] [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_7 [i_4] [i_4] [i_4] [i_4]))))) ? (2015938451U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_1)))))))));
                }
            }
            for (int i_8 = 0; i_8 < 21; i_8 += 2) 
            {
                var_28 = var_5;
                var_29 = ((/* implicit */_Bool) max((((/* implicit */long long int) var_4)), (((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */long long int) 268431360U)) : (max((((/* implicit */long long int) (signed char)-116)), (arr_6 [i_4] [i_5] [i_8])))))));
                var_30 = ((/* implicit */unsigned int) ((2147483621) <= (((arr_25 [i_4] [i_4] [i_4] [i_4]) % (arr_15 [i_4])))));
            }
            /* vectorizable */
            for (int i_9 = 0; i_9 < 21; i_9 += 1) 
            {
                arr_30 [i_4] [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)4))));
                arr_31 [i_4] [i_5] [i_9] [i_5] = ((((/* implicit */_Bool) 6147576660221697373ULL)) ? (((/* implicit */unsigned int) ((arr_23 [i_4] [i_5] [i_5] [i_9]) ^ (((/* implicit */int) (unsigned char)255))))) : (((((/* implicit */_Bool) arr_26 [1ULL] [11ULL] [i_4])) ? (4294967292U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))));
                var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((6147576660221697373ULL) | (6147576660221697373ULL)))) ? (((-1112293302) % (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_0 [i_4]))));
            }
            var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_23 [i_4] [i_5] [i_5] [i_5])) | (((10050646645753471766ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))) ? (((var_14) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4] [i_5] [i_4] [i_5]))) : ((-(arr_6 [i_4] [i_4] [i_5]))))) : (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))))));
            arr_32 [i_4] = ((/* implicit */signed char) max((var_4), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8)))))));
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) var_2)), (4419349698549489163ULL))), (((/* implicit */unsigned long long int) ((short) arr_36 [i_4] [i_4])))))) ? (((/* implicit */unsigned int) arr_25 [i_4] [i_4] [i_4] [i_4])) : (((var_10) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-75)) : (((/* implicit */int) var_1)))))))));
            var_34 = min((-2017542564), (((/* implicit */int) (unsigned char)117)));
        }
    }
    for (short i_11 = 3; i_11 < 11; i_11 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_12 = 0; i_12 < 12; i_12 += 4) 
        {
            arr_41 [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)38)) ? (((/* implicit */int) arr_22 [i_11 + 1] [i_11 - 1] [i_11 + 1] [i_11 - 1])) : (((/* implicit */int) arr_22 [i_11 - 2] [i_11 + 1] [i_11 + 1] [i_11 + 1]))));
            var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [(short)3] [i_11 - 2] [i_11 - 2])) ? (arr_29 [i_11] [i_11 - 2] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            arr_42 [i_11] [i_12] = ((/* implicit */_Bool) ((var_14) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_7 [i_11] [i_11] [i_12] [i_11]))))))));
        }
        for (long long int i_13 = 1; i_13 < 11; i_13 += 3) 
        {
            arr_45 [i_11] [i_11] = ((/* implicit */long long int) (+(((/* implicit */int) arr_44 [i_11] [i_11] [i_11]))));
            arr_46 [i_11] [i_11] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_25 [i_11] [i_11] [i_11 + 1] [i_11])) && (((/* implicit */_Bool) arr_25 [i_13] [i_11] [i_11 - 2] [i_11])))) && (((/* implicit */_Bool) max((arr_25 [i_11 + 1] [i_11] [i_11 + 1] [i_11]), (((/* implicit */int) (unsigned char)77)))))));
        }
        /* vectorizable */
        for (unsigned short i_14 = 2; i_14 < 11; i_14 += 1) 
        {
            var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (arr_27 [6U] [i_11] [i_14] [i_14 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_11 - 3])))));
            var_37 = ((((/* implicit */_Bool) arr_43 [i_11])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_43 [i_11])));
            arr_49 [i_11] [i_11] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_2)))) * (((/* implicit */int) arr_37 [i_11] [i_11 - 1]))));
            arr_50 [i_11] [i_14 - 2] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_7 [i_14] [i_14] [i_11] [i_11]))));
            var_38 = ((/* implicit */_Bool) ((arr_20 [i_11 - 2]) ^ (((/* implicit */int) arr_40 [i_11 - 2] [i_14 - 1] [i_14 + 1]))));
        }
        arr_51 [i_11] [i_11] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_3 [i_11 - 3] [i_11] [i_11 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_11 - 2] [i_11] [(unsigned short)19] [(signed char)15])))))) : (((arr_28 [i_11] [i_11 - 2] [i_11]) & (((/* implicit */unsigned long long int) arr_38 [i_11] [i_11]))))))));
        arr_52 [i_11] = ((/* implicit */_Bool) arr_27 [i_11 + 1] [i_11 - 2] [i_11 + 1] [i_11 + 1]);
        var_39 = ((/* implicit */unsigned char) var_10);
    }
}
