/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157900
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
    var_18 = ((/* implicit */short) var_10);
    var_19 = ((/* implicit */unsigned long long int) var_7);
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 4; i_0 < 13; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)30635)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            for (signed char i_2 = 3; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_12 [i_3] [i_1 - 1] [i_2] [12ULL] [(unsigned char)6] [i_4] &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_3]))));
                                arr_13 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (short)12322)) - (((/* implicit */int) (unsigned char)11))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 13; i_6 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */short) arr_17 [(short)2] [i_1]);
                                var_22 = ((/* implicit */int) (short)30635);
                                var_23 = var_4;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        for (int i_8 = 0; i_8 < 15; i_8 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned short) var_1);
                                arr_26 [i_2 - 3] [i_2 - 1] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2031616U))));
                            }
                        } 
                    } 
                    arr_27 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (~(arr_14 [i_0] [i_1] [i_2] [i_0] [i_1 + 3] [i_0])));
                    arr_28 [(unsigned char)14] [i_1] [(unsigned char)14] &= ((/* implicit */short) arr_14 [i_0] [i_0] [i_1 - 3] [i_1] [i_0] [(unsigned char)8]);
                }
            } 
        } 
    }
    for (unsigned short i_9 = 0; i_9 < 14; i_9 += 3) 
    {
        var_25 ^= ((/* implicit */unsigned char) -710261482);
        /* LoopSeq 1 */
        for (unsigned short i_10 = 0; i_10 < 14; i_10 += 4) 
        {
            arr_34 [i_9] [i_10] [i_10] = (((!(((/* implicit */_Bool) arr_5 [i_9] [i_10])))) ? (((var_9) >> (((((/* implicit */int) var_16)) + (30570))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))));
            var_26 = ((/* implicit */unsigned short) max(((~((+(((/* implicit */int) arr_2 [i_9] [i_9])))))), (var_10)));
            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) var_10))));
        }
    }
    for (long long int i_11 = 1; i_11 < 21; i_11 += 1) 
    {
        arr_37 [i_11] = ((/* implicit */unsigned int) (short)(-32767 - 1));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 22; i_12 += 1) 
        {
            for (short i_13 = 1; i_13 < 21; i_13 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_14 = 1; i_14 < 20; i_14 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (int i_15 = 0; i_15 < 22; i_15 += 1) 
                        {
                            arr_49 [i_15] [i_14 - 1] [i_13] [i_12] [(unsigned short)6] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) (unsigned short)0)) ? (4294967280U) : (2217314400U))));
                            arr_50 [i_11 - 1] [i_12] [i_11 - 1] [i_13 - 1] [(unsigned short)0] [i_14] = ((/* implicit */short) arr_46 [i_14]);
                            var_28 = ((/* implicit */long long int) max((var_28), (arr_35 [i_11] [i_11])));
                            arr_51 [i_11] [i_12] [i_13] [(unsigned char)20] [i_14] = ((/* implicit */int) min(((~(arr_44 [i_13 + 1] [i_13 + 1] [i_13 - 1] [i_13] [i_13 + 1] [i_13]))), (((/* implicit */long long int) (((!(((/* implicit */_Bool) (signed char)71)))) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned short)51826)))))));
                        }
                        arr_52 [i_13] [i_13] [15LL] [i_13] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)32485))));
                    }
                    arr_53 [i_11] [i_12] [i_11] = ((/* implicit */short) (unsigned short)65523);
                    var_29 = ((/* implicit */long long int) max((var_29), (arr_44 [i_13] [i_13] [i_12] [i_12] [(signed char)19] [i_11])));
                }
            } 
        } 
    }
}
