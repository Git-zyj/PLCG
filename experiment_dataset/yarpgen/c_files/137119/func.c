/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137119
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
    for (int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        var_18 = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [i_2] [i_0] [(_Bool)1]))))) % (((/* implicit */int) max(((unsigned char)136), (arr_0 [i_0])))));
                        var_19 = ((/* implicit */unsigned long long int) (+(4294967286U)));
                        arr_12 [i_1] [i_0] = ((/* implicit */long long int) (+((-(((/* implicit */int) (_Bool)0))))));
                    }
                    for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((unsigned long long int) max((4294967286U), (((/* implicit */unsigned int) arr_14 [i_0 + 2] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1]))))))));
                        /* LoopSeq 4 */
                        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 4) 
                        {
                            var_21 ^= ((/* implicit */unsigned char) ((signed char) (+(min((4294967286U), (((/* implicit */unsigned int) var_7)))))));
                            var_22 = max((2U), (4294967281U));
                            arr_17 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_14 [i_0] [i_1] [i_2] [i_2] [i_5]);
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) ((unsigned long long int) arr_13 [i_0] [i_0 - 1] [i_4] [(unsigned char)17] [i_4])))));
                            var_24 ^= ((/* implicit */unsigned long long int) ((_Bool) arr_15 [i_0] [(_Bool)1] [i_1] [i_5] [i_4] [i_5]));
                        }
                        for (int i_6 = 2; i_6 < 21; i_6 += 1) 
                        {
                            arr_20 [i_0] [i_1] [i_1] [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_15)), (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_6]))))), (0ULL)))));
                            var_25 = ((/* implicit */int) ((((/* implicit */long long int) min((((/* implicit */int) arr_2 [i_0])), (arr_15 [i_0] [i_0] [i_0 + 2] [i_0] [i_6 - 1] [i_6])))) ^ (((long long int) 2147483615))));
                            var_26 = ((/* implicit */_Bool) ((unsigned int) (~(18446744073709551615ULL))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 1) 
                        {
                            arr_23 [i_0] [i_0] [i_2] [i_4] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned int) arr_14 [i_0 - 1] [i_1] [i_2] [i_1] [i_7])), (((unsigned int) arr_14 [i_0 + 1] [i_0 - 1] [i_0 + 2] [i_0 + 1] [i_0 - 1]))));
                            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) * (arr_4 [i_4]))) / ((~(arr_4 [i_1]))))))));
                            var_28 |= ((/* implicit */unsigned char) max((((unsigned int) min((((/* implicit */unsigned long long int) arr_14 [i_0] [i_1] [i_2] [i_2] [i_7])), (arr_4 [i_4])))), (4294967268U)));
                            arr_24 [i_1] [6U] [i_2] [i_4] [i_7] |= (!(((/* implicit */_Bool) 551349317U)));
                            var_29 = ((/* implicit */unsigned long long int) max((var_29), (((unsigned long long int) min((((/* implicit */unsigned long long int) 4294967286U)), (var_16))))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 22; i_8 += 4) 
                        {
                            var_30 = (+(((/* implicit */int) ((unsigned short) 0U))));
                            var_31 |= ((/* implicit */int) (((+(14U))) / ((~(max((((/* implicit */unsigned int) -1202131493)), (4294967268U)))))));
                            var_32 = ((((/* implicit */int) (!(((/* implicit */_Bool) 14U))))) | ((-(((((/* implicit */int) var_7)) + (((/* implicit */int) var_9)))))));
                            arr_27 [i_0] [i_0] [i_1] [i_2] [i_0] [i_4] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned int) arr_13 [i_0] [i_1] [i_0] [i_4] [i_8])) * (534773760U)))));
                        }
                        arr_28 [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) var_12)) << (((arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1]) - (7676713891255721980ULL))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 0; i_9 < 22; i_9 += 4) 
                        {
                            var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)254)) < (((/* implicit */int) arr_0 [i_1]))))), (4294967286U))))));
                            arr_31 [i_0] [i_4] [i_2] [i_4] [i_9] &= ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)42008))) >= ((+((~(var_11))))));
                            var_34 = ((/* implicit */unsigned int) (~((+(((/* implicit */int) (unsigned short)56232))))));
                        }
                    }
                    arr_32 [i_1] [i_1] [i_1] |= ((/* implicit */_Bool) ((unsigned char) max(((unsigned char)185), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)65535))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_10 = 3; i_10 < 20; i_10 += 4) 
        {
            for (unsigned int i_11 = 0; i_11 < 22; i_11 += 1) 
            {
                {
                    arr_37 [i_0] [i_10] [i_0] [i_11] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_11]))));
                    var_35 = ((/* implicit */signed char) max((var_13), (((/* implicit */unsigned long long int) min(((-(arr_22 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_10] [(_Bool)1] [i_11]))), (((/* implicit */unsigned int) var_3)))))));
                    var_36 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_7)))));
                }
            } 
        } 
    }
    for (unsigned long long int i_12 = 4; i_12 < 12; i_12 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_13 = 0; i_13 < 13; i_13 += 4) 
        {
            var_37 = (+(((/* implicit */int) var_12)));
            arr_43 [i_12] [i_13] = ((/* implicit */int) ((((/* implicit */long long int) ((unsigned int) (unsigned char)236))) / (min((arr_26 [i_12 + 1] [i_12 - 2] [i_12] [i_12 - 1] [i_12]), (((/* implicit */long long int) min((((/* implicit */int) arr_11 [i_12] [i_12] [i_12] [i_13] [i_13])), (arr_29 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]))))))));
            var_38 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_2 [i_13]))))) ^ (((unsigned long long int) ((int) (unsigned char)10)))));
        }
        var_39 ^= ((/* implicit */int) ((unsigned char) (~(arr_13 [(_Bool)1] [i_12 + 1] [i_12 - 3] [i_12 + 1] [i_12 - 3]))));
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        var_40 = 43U;
        var_41 = ((/* implicit */unsigned short) ((unsigned int) arr_6 [i_14] [i_14] [i_14]));
        /* LoopNest 3 */
        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
        {
            for (unsigned int i_16 = 0; i_16 < 14; i_16 += 1) 
            {
                for (unsigned short i_17 = 1; i_17 < 10; i_17 += 4) 
                {
                    {
                        var_42 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned long long int) var_15))));
                        var_43 = ((/* implicit */unsigned char) 0U);
                        var_44 = ((/* implicit */unsigned char) min((min((2833399004U), (((/* implicit */unsigned int) (unsigned char)31)))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_7)))))));
                        var_45 &= ((/* implicit */unsigned char) (~((+(((/* implicit */int) arr_14 [i_17] [i_17 + 4] [i_17] [i_17] [i_17]))))));
                        var_46 = ((/* implicit */_Bool) (-(min((((/* implicit */int) arr_9 [i_17 - 1] [i_17] [i_17] [i_17 - 1])), ((+(((/* implicit */int) (_Bool)1))))))));
                    }
                } 
            } 
        } 
        var_47 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(1461568291U)))))))) & (18446744073709551615ULL)));
    }
    var_48 = ((unsigned int) 18446744073709551615ULL);
}
