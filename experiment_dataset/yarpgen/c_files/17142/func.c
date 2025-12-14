/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17142
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            var_11 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) && (((/* implicit */_Bool) arr_0 [i_1]))));
            var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)10206)) ? (((/* implicit */int) (short)8128)) : (((/* implicit */int) (short)-1))));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 3; i_2 < 18; i_2 += 2) 
            {
                var_13 = var_3;
                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) 3684745122U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64585))) : (6153371767778269837LL)));
            }
        }
        for (unsigned short i_3 = 1; i_3 < 17; i_3 += 4) 
        {
            var_15 = ((/* implicit */signed char) (~(((/* implicit */int) arr_7 [i_3 + 2]))));
            arr_10 [i_0] [2U] &= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3 + 2]))) / (((9223372036854775807LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)29)))))));
        }
        for (long long int i_4 = 3; i_4 < 18; i_4 += 3) 
        {
            arr_14 [i_4] [i_4] = ((/* implicit */signed char) arr_3 [i_4]);
            arr_15 [i_4] = ((/* implicit */signed char) (+(((/* implicit */int) arr_8 [i_4 - 1] [i_4] [i_4]))));
            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) -6153371767778269844LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_4 + 1] [i_4]))))) : (((/* implicit */int) arr_9 [i_4 + 2] [(signed char)8]))));
            var_17 = (-9223372036854775807LL - 1LL);
        }
        for (long long int i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            var_18 = ((/* implicit */short) (~(3343205920U)));
            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)254)) && (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])))))));
            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [16LL] [(signed char)6] [16LL])) ? (((((/* implicit */_Bool) (signed char)-56)) ? (((/* implicit */int) arr_18 [(signed char)6])) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((255U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7680)))))))))));
        }
        var_21 = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) & (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))));
        /* LoopSeq 1 */
        for (long long int i_6 = 1; i_6 < 19; i_6 += 3) 
        {
            var_22 = ((/* implicit */unsigned char) (+(var_3)));
            /* LoopNest 2 */
            for (signed char i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                for (short i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    {
                        var_23 = ((/* implicit */signed char) ((3912168845U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [i_6 + 1] [i_6] [i_8])))));
                        var_24 = ((/* implicit */signed char) (-(((/* implicit */int) arr_22 [i_0] [i_6]))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned char i_9 = 1; i_9 < 17; i_9 += 2) 
            {
                /* LoopSeq 3 */
                for (signed char i_10 = 0; i_10 < 20; i_10 += 1) 
                {
                    var_25 = ((/* implicit */signed char) ((((/* implicit */int) arr_23 [i_9 + 1] [i_6 - 1] [i_6] [i_9 + 1])) == (((/* implicit */int) (signed char)-56))));
                    var_26 = ((/* implicit */unsigned short) 1889509830928169864LL);
                    var_27 = ((/* implicit */long long int) max((var_27), (((((/* implicit */_Bool) 1280854725U)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)55160)) < (((/* implicit */int) (signed char)-22)))))) : (((((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_9] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [8U] [(signed char)14]))) : (arr_11 [(signed char)18] [i_6] [i_9])))))));
                    var_28 *= ((/* implicit */unsigned char) ((arr_24 [i_9 + 2] [i_9 + 2] [i_9 - 1] [i_9 - 1]) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_23 [i_6] [(signed char)16] [(signed char)16] [i_0])) : (((/* implicit */int) arr_0 [i_0])))))));
                    var_29 -= ((/* implicit */short) ((((/* implicit */int) arr_29 [(short)2] [(short)2] [i_6 + 1])) | (((/* implicit */int) arr_29 [18U] [10LL] [i_6 - 1]))));
                }
                for (unsigned int i_11 = 0; i_11 < 20; i_11 += 2) 
                {
                    var_30 = ((/* implicit */signed char) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)255))) & (-6153371767778269838LL))));
                    var_31 = ((/* implicit */signed char) (-(((/* implicit */int) arr_17 [i_6]))));
                }
                for (unsigned char i_12 = 0; i_12 < 20; i_12 += 3) 
                {
                    var_32 = ((/* implicit */signed char) (+(3014112563U)));
                    var_33 = ((/* implicit */unsigned short) ((long long int) (~(9223372036854775807LL))));
                    arr_37 [i_6] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_29 [i_6 - 1] [i_6] [i_9])) / (((/* implicit */int) var_5))));
                    arr_38 [i_6] [2LL] = ((/* implicit */unsigned short) -6153371767778269837LL);
                    arr_39 [i_6] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)37))) - (arr_31 [i_6] [15LL] [i_9 + 3] [i_12])));
                }
                var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)4096)) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_0] [i_6] [i_9 + 1]))) : (2054558114281294519LL)));
                arr_40 [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [(short)6] [i_9 + 3] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [17LL] [i_9 + 3] [i_6]))) : (arr_35 [i_0] [i_9 + 3] [i_9] [i_9])));
            }
            for (signed char i_13 = 4; i_13 < 18; i_13 += 3) 
            {
                var_35 = ((((/* implicit */_Bool) arr_11 [i_6] [i_13 - 2] [i_13 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_6] [i_6] [1LL] [i_6]))) : ((-(1280854719U))));
                var_36 = ((/* implicit */signed char) ((((/* implicit */int) arr_28 [i_0] [i_6 + 1] [i_6] [i_13 - 1])) | (((/* implicit */int) ((((/* implicit */int) arr_42 [(short)5] [i_6])) >= (((/* implicit */int) arr_7 [i_0])))))));
                arr_44 [i_6] [i_6] [i_6] [i_13 + 2] = arr_18 [i_6];
                arr_45 [8LL] [i_6] [i_6] = ((/* implicit */long long int) (-(arr_13 [i_6 - 1])));
                var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) ((((/* implicit */int) arr_25 [(short)18] [(signed char)12] [i_13])) - (((/* implicit */int) arr_25 [(signed char)10] [(signed char)10] [(signed char)10])))))));
            }
            for (long long int i_14 = 1; i_14 < 17; i_14 += 2) 
            {
                var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_6] [i_6 + 1] [i_6])) ? (((/* implicit */int) arr_8 [i_6 + 1] [i_6 - 1] [i_6])) : (((/* implicit */int) arr_8 [i_6 - 1] [i_6 - 1] [i_6]))));
                var_39 += ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)16302))) / (-4098867005825452544LL)));
                var_40 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-26))) | (9056404274396840151LL))));
                /* LoopSeq 1 */
                for (long long int i_15 = 2; i_15 < 19; i_15 += 3) 
                {
                    var_41 += ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)23))));
                    arr_51 [i_6] [i_14 - 1] [i_6] [i_6] = ((/* implicit */long long int) arr_30 [i_15] [i_14 + 3] [(signed char)3] [i_0]);
                    arr_52 [i_0] [i_0] [i_6] [13LL] [(signed char)14] = ((/* implicit */short) (signed char)34);
                    arr_53 [i_0] [i_6 + 1] [i_14] [i_6] = ((/* implicit */unsigned char) ((1280854747U) | (arr_30 [i_15 + 1] [i_14 + 3] [i_6] [i_6 + 1])));
                    arr_54 [i_6] = ((/* implicit */unsigned short) arr_4 [i_0]);
                }
                var_42 += ((/* implicit */signed char) ((long long int) arr_3 [i_6 + 1]));
            }
            arr_55 [i_6] [(short)0] = ((/* implicit */unsigned short) ((arr_12 [i_6 - 1] [i_6 - 1]) / (arr_12 [i_6 - 1] [i_6 - 1])));
        }
    }
    /* vectorizable */
    for (unsigned char i_16 = 3; i_16 < 16; i_16 += 3) 
    {
        var_43 = ((/* implicit */long long int) (-(((/* implicit */int) (short)-31732))));
        arr_58 [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775794LL)) ? (((/* implicit */int) (unsigned char)17)) : (((/* implicit */int) (signed char)28))));
    }
    var_44 = min(((((-(var_3))) >> (((((/* implicit */int) (short)-27698)) + (27729))))), (16777215U));
    var_45 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-80))) & (((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_1)))) | (var_8)))));
    /* LoopSeq 1 */
    for (long long int i_17 = 1; i_17 < 23; i_17 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_18 = 0; i_18 < 24; i_18 += 1) 
        {
            arr_65 [i_18] [i_18] [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4101886797731835304LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)5))) : (1280854732U)))) && (((/* implicit */_Bool) ((1280854733U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_64 [i_18] [i_18]))))))));
            var_46 = ((/* implicit */signed char) max((var_46), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_60 [i_17])) ? (((((/* implicit */_Bool) arr_64 [12LL] [i_18])) ? (((/* implicit */int) (unsigned char)163)) : (((/* implicit */int) arr_62 [(signed char)16])))) : (((((/* implicit */_Bool) arr_61 [(signed char)12] [i_18])) ? (((/* implicit */int) (signed char)-32)) : (((/* implicit */int) arr_59 [i_18])))))))));
            var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_60 [i_17 - 1])) ? (((/* implicit */int) arr_62 [i_18])) : (((/* implicit */int) var_9))));
        }
        arr_66 [i_17] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) (signed char)-22))))));
        var_48 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)2660)) - (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_59 [i_17])) ? (((/* implicit */int) arr_62 [(signed char)16])) : (((/* implicit */int) arr_59 [(unsigned char)3]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_64 [(short)0] [(unsigned short)18])) ? (((/* implicit */int) arr_60 [i_17])) : (((/* implicit */int) arr_64 [(unsigned short)14] [i_17 + 1]))))))))));
    }
}
