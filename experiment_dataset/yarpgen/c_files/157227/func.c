/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157227
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((9870948904634433386ULL) * (((/* implicit */unsigned long long int) var_17)))))))));
        arr_3 [i_0] [(signed char)0] = ((/* implicit */unsigned long long int) var_18);
        /* LoopNest 2 */
        for (signed char i_1 = 4; i_1 < 8; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_2] [7ULL] [i_1] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_17) / (((/* implicit */int) max((var_13), (var_12))))))) ? (((/* implicit */int) ((unsigned char) var_17))) : ((~(((/* implicit */int) arr_0 [i_4 - 1] [i_1 + 3]))))));
                                arr_17 [(_Bool)1] [i_2] [i_2] = ((/* implicit */int) max((((long long int) ((unsigned short) arr_7 [i_0] [i_2]))), (((/* implicit */long long int) ((_Bool) var_10)))));
                                arr_18 [i_0] [i_0] [i_2] [i_0] [i_0] = (-(((/* implicit */int) (!(var_0)))));
                                arr_19 [i_0] [9LL] [(unsigned char)3] [(_Bool)1] [i_0] [i_2] [9LL] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_2] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (((long long int) arr_8 [i_1] [i_3] [i_2])))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [(unsigned char)6] [i_1] [i_1 - 3] [1U] [i_4 - 2])))));
                                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) var_13))));
                            }
                        } 
                    } 
                    arr_20 [i_0] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) arr_6 [i_2]))))) : (min((arr_8 [i_1 - 4] [i_1 - 1] [i_2]), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1 + 4]))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_5 = 1; i_5 < 9; i_5 += 2) 
        {
            arr_23 [i_5] [i_5] [i_0] = ((/* implicit */unsigned char) var_5);
            var_20 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_5 + 2] [i_5 - 1])) : (var_17)))) ? (144115188075855616LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_22 [i_5 + 1])) < (((/* implicit */int) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_5] [i_5] [i_5 + 2])) == (((/* implicit */int) (unsigned char)32)))))))))));
            arr_24 [i_5] = ((/* implicit */unsigned int) (!(var_6)));
        }
    }
    for (int i_6 = 1; i_6 < 18; i_6 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_7 = 1; i_7 < 21; i_7 += 2) 
        {
            arr_31 [i_6] [i_6 - 1] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_25 [i_6 + 2])));
            arr_32 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_30 [i_7 - 1] [i_7] [i_6 + 2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))));
            arr_33 [8U] [i_7 + 1] [(unsigned short)12] = ((/* implicit */long long int) var_9);
        }
        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 4) 
        {
            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) max((((/* implicit */long long int) (~((+(((/* implicit */int) arr_34 [i_6] [i_8] [(signed char)3]))))))), (max((17179869183LL), (17179869203LL))))))));
            /* LoopNest 2 */
            for (unsigned char i_9 = 2; i_9 < 21; i_9 += 4) 
            {
                for (unsigned short i_10 = 0; i_10 < 22; i_10 += 3) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) min((arr_29 [i_9] [i_8]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 101572403U)))))));
                        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_35 [i_6 - 1])) != (((/* implicit */int) arr_35 [i_6 + 4]))))) | (var_18))))));
                        arr_40 [i_10] = ((/* implicit */unsigned char) (signed char)28);
                    }
                } 
            } 
        }
        var_24 = arr_38 [i_6 + 1] [i_6] [14LL];
        arr_41 [(unsigned short)17] [i_6] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_35 [i_6 + 1]))));
    }
    for (unsigned char i_11 = 2; i_11 < 19; i_11 += 2) 
    {
        arr_45 [(unsigned short)17] [17] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)16))));
        /* LoopNest 3 */
        for (signed char i_12 = 0; i_12 < 22; i_12 += 3) 
        {
            for (signed char i_13 = 0; i_13 < 22; i_13 += 4) 
            {
                for (long long int i_14 = 0; i_14 < 22; i_14 += 1) 
                {
                    {
                        arr_52 [7LL] [7LL] [16U] [i_14] [20] = ((((-1772501720567070509LL) != (((/* implicit */long long int) ((/* implicit */int) var_14))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) arr_36 [i_14] [i_14] [i_11 + 1]))))) : (((((/* implicit */_Bool) ((unsigned char) var_17))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((unsigned long long int) arr_25 [(_Bool)1])))));
                        var_25 += ((/* implicit */unsigned long long int) arr_30 [2] [(_Bool)1] [i_13]);
                        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_25 [i_11 - 2])) ? (((/* implicit */int) arr_50 [i_11 + 3])) : (((/* implicit */int) arr_50 [i_11 + 3])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_11 + 2] [i_12]))))))))));
                        arr_53 [i_11] [17LL] = ((/* implicit */unsigned long long int) (~(((var_2) & (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))));
                    }
                } 
            } 
        } 
        arr_54 [(unsigned char)0] = ((/* implicit */unsigned int) var_16);
    }
    var_27 = var_7;
}
