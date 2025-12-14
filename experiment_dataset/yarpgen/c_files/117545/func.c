/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117545
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
    for (unsigned int i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        var_16 = ((/* implicit */int) (short)31);
        arr_2 [i_0] = var_5;
        var_17 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 3]))))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : (min((((/* implicit */unsigned int) var_7)), (arr_0 [i_0])))))));
    }
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)61345))));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) var_15);
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            for (unsigned short i_3 = 1; i_3 < 18; i_3 += 3) 
            {
                for (long long int i_4 = 3; i_4 < 21; i_4 += 3) 
                {
                    {
                        arr_13 [i_3] [i_3 + 1] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) var_4);
                        var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-1656)))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_12 [i_1] [i_1] [i_1] [i_1])), (min((((((/* implicit */_Bool) (short)-1661)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1664))) : (var_15))), (((/* implicit */long long int) (signed char)25))))));
    }
    var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) var_5))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_5 = 1; i_5 < 9; i_5 += 3) 
    {
        var_22 = ((/* implicit */signed char) -1266474939);
        /* LoopSeq 2 */
        for (int i_6 = 1; i_6 < 9; i_6 += 2) 
        {
            var_23 = ((/* implicit */int) (+(1173728488524686582ULL)));
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_12))));
            var_25 = ((/* implicit */unsigned long long int) var_1);
        }
        for (long long int i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))));
            /* LoopNest 2 */
            for (unsigned char i_8 = 3; i_8 < 10; i_8 += 3) 
            {
                for (long long int i_9 = 2; i_9 < 8; i_9 += 3) 
                {
                    {
                        arr_28 [i_5 - 1] [i_7] [i_5] [i_9 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_5 + 2] [i_5 - 1])) ? (arr_7 [i_5 - 1] [i_5 + 1]) : (arr_7 [i_5 + 2] [i_5 + 1])));
                        var_27 = (+(((/* implicit */int) (short)-1656)));
                        var_28 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(var_0))))));
                        /* LoopSeq 1 */
                        for (short i_10 = 0; i_10 < 11; i_10 += 2) 
                        {
                            arr_33 [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) var_13))));
                            var_29 = ((/* implicit */unsigned long long int) arr_20 [i_5]);
                            arr_34 [i_5] = arr_8 [i_5] [i_5] [i_5] [i_5 + 2];
                        }
                    }
                } 
            } 
            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [0ULL] [i_5 - 1] [i_5 - 1] [i_5])) ? (var_1) : (((/* implicit */int) arr_27 [i_5] [i_5 - 1] [i_5 - 1] [i_5] [i_5 + 1] [i_5]))));
            /* LoopNest 3 */
            for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
            {
                for (int i_12 = 0; i_12 < 11; i_12 += 3) 
                {
                    for (long long int i_13 = 0; i_13 < 11; i_13 += 3) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_9))));
                            var_32 *= ((/* implicit */unsigned char) var_13);
                            var_33 = ((/* implicit */short) arr_1 [(short)3] [i_12]);
                            arr_44 [(unsigned char)7] [i_7] [(signed char)8] [(short)2] [i_5] = ((/* implicit */unsigned char) var_10);
                        }
                    } 
                } 
            } 
        }
        var_34 = ((/* implicit */unsigned char) (+(arr_19 [i_5 + 2])));
        /* LoopSeq 2 */
        for (unsigned short i_14 = 0; i_14 < 11; i_14 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_15 = 0; i_15 < 11; i_15 += 3) 
            {
                for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 2) 
                {
                    {
                        arr_53 [i_5 - 1] [10U] [i_5] [2ULL] = ((/* implicit */long long int) var_2);
                        arr_54 [i_5] [6ULL] [6ULL] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_14)) : ((~(var_13)))));
                        arr_55 [i_16] [i_5] [i_5] [i_5] [4ULL] = ((/* implicit */unsigned short) (~(arr_22 [i_5 + 2])));
                        arr_56 [i_5] [i_14] [i_15] [i_5] = ((/* implicit */short) var_1);
                    }
                } 
            } 
            var_35 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_25 [i_5 + 1] [i_14] [i_14] [3ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1651))))))));
        }
        for (long long int i_17 = 0; i_17 < 11; i_17 += 3) 
        {
            var_36 &= ((/* implicit */int) (~(var_8)));
            /* LoopNest 2 */
            for (unsigned long long int i_18 = 2; i_18 < 7; i_18 += 3) 
            {
                for (unsigned char i_19 = 0; i_19 < 11; i_19 += 3) 
                {
                    {
                        var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) var_0))));
                        var_38 = ((/* implicit */unsigned long long int) (+(arr_29 [i_5 + 1] [i_17] [i_18] [0] [i_19])));
                    }
                } 
            } 
            var_39 = ((/* implicit */unsigned long long int) ((int) arr_50 [i_5 - 1] [i_5 + 1] [i_17]));
            var_40 = var_0;
        }
    }
}
