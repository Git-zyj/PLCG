/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13825
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_6 [(short)3] [i_1 + 1] [i_1 + 1])) ? (arr_6 [i_0] [i_1 - 1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)41))))) >> (((arr_6 [(_Bool)1] [i_1 - 1] [i_2]) - (9259929183488578384ULL)))));
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1]))))), (((((var_4) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_0 + 2])) - (191)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_3 = 2; i_3 < 14; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            for (int i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                {
                    var_11 = ((/* implicit */short) min((var_11), (arr_16 [i_3] [i_3] [i_5])));
                    arr_20 [i_5] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-123)) != (((/* implicit */int) ((-1LL) < (((/* implicit */long long int) ((2629625040U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_3 + 1] [i_3 + 1] [i_3])))))))))));
                    /* LoopNest 2 */
                    for (short i_6 = 1; i_6 < 14; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 1; i_7 < 14; i_7 += 3) 
                        {
                            {
                                arr_29 [i_5] = ((/* implicit */int) min((((/* implicit */short) var_7)), (min((arr_28 [i_6] [i_7 + 2] [i_7] [i_7] [i_7] [i_7]), (arr_28 [i_3] [i_7 + 1] [9] [i_7] [i_7 + 1] [i_7])))));
                                arr_30 [i_3] [i_5] [i_5] [i_6] [i_7] = ((/* implicit */unsigned short) max((((/* implicit */short) ((signed char) (short)7072))), (((short) arr_14 [i_3 + 2] [i_6]))));
                                var_12 = ((/* implicit */int) min((var_1), ((-(((unsigned int) var_2))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_8 = 1; i_8 < 13; i_8 += 1) 
        {
            for (signed char i_9 = 4; i_9 < 13; i_9 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_10 = 2; i_10 < 13; i_10 += 3) 
                    {
                        arr_38 [i_8] [i_8] [i_8] = ((/* implicit */signed char) var_1);
                        arr_39 [(unsigned short)10] [0] [i_8] [i_9] [i_8] [i_10] = ((/* implicit */int) arr_23 [i_3 - 2] [i_8] [i_9 - 3] [i_8]);
                    }
                    var_13 ^= ((/* implicit */int) arr_33 [i_8 + 3] [(unsigned char)6]);
                }
            } 
        } 
        var_14 = ((/* implicit */signed char) ((524272U) >> (((2561623574U) - (2561623545U)))));
        arr_40 [i_3] = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) / (((((/* implicit */_Bool) arr_34 [i_3] [i_3 - 2] [i_3])) ? (((/* implicit */unsigned int) var_6)) : (arr_37 [9]))))) % (((/* implicit */unsigned int) (-(((/* implicit */int) arr_27 [(short)8] [(signed char)10])))))));
    }
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) var_6))));
}
