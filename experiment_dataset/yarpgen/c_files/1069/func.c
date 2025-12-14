/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1069
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
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) ((arr_1 [i_0]) ^ ((~(arr_1 [i_0])))));
        var_21 = ((/* implicit */_Bool) max((var_21), (((((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [(unsigned short)16]))))) / (((/* implicit */long long int) 1313691435)))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) != (arr_1 [i_0])))))))));
    }
    for (unsigned int i_1 = 3; i_1 < 18; i_1 += 1) 
    {
        var_22 = (unsigned char)254;
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1]))))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)5812)) || (((/* implicit */_Bool) 5799261304838960446LL)))))));
    }
    for (long long int i_2 = 2; i_2 < 20; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 20; i_3 += 2) 
        {
            for (int i_4 = 2; i_4 < 18; i_4 += 3) 
            {
                {
                    var_24 = ((/* implicit */_Bool) (((~(((/* implicit */int) arr_11 [i_2 - 2] [i_3 + 1])))) ^ (((87407024) % (-1313691435)))));
                    var_25 = ((min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_2]))))), ((+(var_4))))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_2] [i_4])) - (arr_10 [9U] [9U] [i_4 - 2])))) ? (((/* implicit */int) ((1313691435) != (var_2)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (var_9)))))));
                }
            } 
        } 
        var_26 = ((((unsigned int) ((long long int) var_19))) <= (((unsigned int) (!(((/* implicit */_Bool) arr_4 [i_2] [i_2 - 2]))))));
        var_27 = ((/* implicit */long long int) var_11);
    }
    var_28 = ((/* implicit */short) (~(var_3)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_5 = 2; i_5 < 13; i_5 += 1) 
    {
        arr_17 [i_5] [i_5] = ((/* implicit */unsigned int) var_8);
        arr_18 [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_5] [i_5] [i_5] [i_5 + 1])) ? (arr_14 [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */unsigned long long int) arr_16 [i_5]))));
    }
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 3) 
    {
        var_29 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [(short)13])) ? (arr_1 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 2) 
        {
            for (int i_8 = 0; i_8 < 19; i_8 += 2) 
            {
                {
                    var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) (+(((int) var_8)))))));
                    /* LoopSeq 2 */
                    for (short i_9 = 0; i_9 < 19; i_9 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned short) ((int) var_5));
                        var_32 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)8))));
                        /* LoopSeq 2 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_33 [i_6] [i_6] [i_6] [i_6] [(signed char)6] = ((/* implicit */short) var_15);
                            var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) var_3))));
                            arr_34 [i_6] [i_6] [i_8] [i_9] [(_Bool)1] [i_10] = ((/* implicit */_Bool) ((unsigned char) 1313691435));
                            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_7])) ? ((-(arr_7 [i_6] [i_7]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9562726175953898070ULL)) ? (((/* implicit */int) (unsigned short)33516)) : (((/* implicit */int) (unsigned short)33751)))))));
                        }
                        for (signed char i_11 = 0; i_11 < 19; i_11 += 1) 
                        {
                            var_35 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)3807))) | (((((/* implicit */_Bool) 776289587U)) ? (((/* implicit */long long int) 288693337)) : (6929291885829753740LL)))));
                            var_36 = var_5;
                            arr_39 [i_6] [(short)10] [i_6] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_6]))) : (((unsigned long long int) 2310290935276262438LL))));
                        }
                        arr_40 [i_6] [(unsigned char)8] [i_6] [i_9] = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
                    }
                    for (int i_12 = 0; i_12 < 19; i_12 += 3) 
                    {
                        arr_43 [i_6] [i_6] [i_12] [i_12] [i_6] = ((/* implicit */signed char) (~(1313691435)));
                        arr_44 [i_12] [i_12] = ((/* implicit */short) ((unsigned char) (unsigned short)33519));
                    }
                }
            } 
        } 
        var_37 = ((/* implicit */unsigned short) (+(arr_14 [i_6] [i_6] [i_6] [(signed char)1])));
        /* LoopSeq 3 */
        for (int i_13 = 4; i_13 < 16; i_13 += 2) 
        {
            var_38 = (((!(((/* implicit */_Bool) arr_22 [i_6])))) ? (((((/* implicit */int) (unsigned char)236)) & (((/* implicit */int) (unsigned char)167)))) : (arr_37 [i_6] [i_13 - 4] [(unsigned char)0]));
            var_39 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_13 - 4] [i_13 + 2])) ? (arr_8 [i_13 - 3] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
            arr_48 [i_6] [i_13] = ((/* implicit */long long int) (+(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_31 [i_13] [i_6] [i_13] [i_6] [i_6] [i_6] [i_6])))))));
        }
        for (short i_14 = 2; i_14 < 17; i_14 += 2) 
        {
            var_40 = ((/* implicit */short) (~(((((/* implicit */int) arr_45 [i_6])) | (arr_41 [i_6] [i_6] [i_14] [i_14] [i_14])))));
            arr_52 [i_6] [i_14 - 1] [i_14] = ((/* implicit */long long int) ((((arr_42 [i_6] [i_14 + 1]) + (2147483647))) >> (((arr_42 [i_6] [i_14 + 2]) + (206432194)))));
            var_41 = ((/* implicit */int) var_13);
            var_42 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_26 [i_14 - 2] [i_14 - 2]))));
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_43 = ((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) arr_0 [i_6] [(unsigned char)8]))));
            var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_6] [i_6] [7] [i_6] [i_15])) ? (((/* implicit */int) arr_11 [(signed char)18] [(signed char)18])) : (((/* implicit */int) arr_23 [i_6] [i_6] [i_15]))))) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_6] [i_15] [i_15] [i_15])))));
            var_45 = ((/* implicit */unsigned long long int) ((unsigned short) var_0));
            var_46 = ((/* implicit */_Bool) ((arr_13 [(unsigned short)8] [i_6] [(unsigned short)20] [i_15]) ? (((/* implicit */int) arr_29 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])) : (((/* implicit */int) var_5))));
            arr_55 [i_6] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_6] [i_15] [i_6])) ? (((/* implicit */int) arr_25 [13] [(unsigned char)3] [i_15])) : (((/* implicit */int) arr_11 [i_6] [7LL]))));
        }
    }
    var_47 *= ((/* implicit */short) var_4);
}
