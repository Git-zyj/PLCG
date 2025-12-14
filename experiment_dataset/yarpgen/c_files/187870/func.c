/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187870
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
    var_15 = 0;
    var_16 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_14))))))));
    /* LoopSeq 2 */
    for (short i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0 - 1] [i_0 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */unsigned int) 0)) | (999460653U))), (((/* implicit */unsigned int) (~(var_13))))))) ? ((~(((long long int) var_3)))) : (min((((/* implicit */long long int) var_13)), (var_11)))));
        arr_3 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) ((long long int) (_Bool)0));
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            arr_10 [4ULL] [4ULL] &= ((/* implicit */unsigned char) (~(var_7)));
            arr_11 [i_1] [7LL] [i_2] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) var_2))))));
        }
        for (signed char i_3 = 2; i_3 < 7; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                for (long long int i_5 = 3; i_5 < 6; i_5 += 4) 
                {
                    {
                        arr_18 [i_1] [i_1] [i_3 + 1] [i_3 + 1] [i_1] = ((/* implicit */signed char) var_1);
                        arr_19 [(unsigned char)2] [i_1] [i_1] [i_3] [i_1] [i_3] = ((/* implicit */unsigned long long int) (+(min((var_7), (((/* implicit */unsigned int) var_6))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_6 = 3; i_6 < 9; i_6 += 4) 
            {
                for (unsigned int i_7 = 0; i_7 < 10; i_7 += 4) 
                {
                    {
                        arr_25 [i_7] [(short)1] [(short)1] [(short)1] [(short)1] = ((/* implicit */_Bool) (~(-1)));
                        arr_26 [i_1] [i_3] [i_6] [i_7] = ((/* implicit */long long int) (signed char)80);
                    }
                } 
            } 
            arr_27 [1LL] = ((/* implicit */short) (+(((((/* implicit */_Bool) ((unsigned int) var_11))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_6)), (var_5)))) : (var_14)))));
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_8 = 1; i_8 < 9; i_8 += 4) 
        {
            /* LoopNest 2 */
            for (short i_9 = 2; i_9 < 8; i_9 += 4) 
            {
                for (long long int i_10 = 0; i_10 < 10; i_10 += 4) 
                {
                    {
                        arr_38 [i_1] [i_1] [(_Bool)1] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_9] [i_1])) ? (((/* implicit */int) (signed char)88)) : (((/* implicit */int) var_10))));
                        arr_39 [i_1] [i_8 + 1] [i_8] [(signed char)7] = (signed char)104;
                        arr_40 [i_1] [i_8] [i_1] [i_10] = ((((((/* implicit */_Bool) arr_5 [i_1] [i_9 + 2])) ? (11970799517922079033ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)248))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_1]))));
                    }
                } 
            } 
            arr_41 [i_8] [i_8] = ((/* implicit */signed char) -2351913048567019654LL);
        }
        for (long long int i_11 = 1; i_11 < 7; i_11 += 4) 
        {
            arr_45 [i_1] [i_1] [i_11 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 31ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)80))) : (8U)));
            /* LoopNest 2 */
            for (unsigned int i_12 = 0; i_12 < 10; i_12 += 4) 
            {
                for (long long int i_13 = 0; i_13 < 10; i_13 += 4) 
                {
                    {
                        arr_54 [i_11] [i_13] = ((/* implicit */int) arr_22 [i_1] [i_1]);
                        arr_55 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_1);
                    }
                } 
            } 
            arr_56 [i_1] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */long long int) (((((_Bool)1) ? (((/* implicit */int) arr_52 [i_1] [2U] [2U] [i_1] [i_11])) : (arr_14 [i_1] [i_1] [i_1]))) | (((/* implicit */int) var_6))))) : ((-((~(-4464006972560573825LL)))))));
            arr_57 [i_1] = ((/* implicit */signed char) arr_16 [i_11 + 2] [i_11 + 3] [i_11 + 2] [i_11 + 3] [i_11 - 1] [i_11]);
            arr_58 [i_1] = ((/* implicit */unsigned int) -1);
        }
        for (signed char i_14 = 0; i_14 < 10; i_14 += 4) 
        {
            arr_61 [i_14] [i_14] [3LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551585ULL)) ? ((~(((/* implicit */int) (short)-32762)))) : (((var_1) ? (((/* implicit */int) arr_46 [i_1])) : (((/* implicit */int) var_10))))));
            arr_62 [i_1] [i_14] = ((/* implicit */int) min((((((/* implicit */_Bool) var_5)) ? ((~(arr_47 [i_1] [i_1] [(_Bool)1]))) : (((/* implicit */unsigned long long int) (~(5629757285579648862LL)))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4)))))));
            arr_63 [i_1] = ((/* implicit */int) (+(((((/* implicit */_Bool) var_4)) ? (arr_32 [i_14] [i_1] [i_1]) : (arr_32 [i_1] [i_1] [i_14])))));
        }
    }
    var_17 = var_3;
}
