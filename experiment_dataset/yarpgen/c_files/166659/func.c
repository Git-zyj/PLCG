/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166659
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
    for (int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (unsigned char i_1 = 4; i_1 < 10; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    var_11 &= ((/* implicit */unsigned long long int) arr_5 [(unsigned char)4] [i_1 + 1] [i_1 + 1] [(unsigned char)4]);
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 3; i_3 < 7; i_3 += 2) 
                    {
                        arr_10 [i_0] [6ULL] [i_1] [2LL] [2LL] [2LL] = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_6 [i_0 + 1] [i_1 - 3] [i_3 + 3] [i_1 - 3])))) || (((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_2 - 1]))));
                        var_12 += ((((/* implicit */_Bool) (-(arr_7 [4ULL] [4ULL] [4ULL] [i_0 + 1])))) ? (((int) ((((/* implicit */_Bool) arr_4 [i_0])) && (arr_2 [i_2] [i_1])))) : (((arr_0 [i_1 - 1] [i_0 + 1]) / (arr_0 [i_1 - 4] [i_0 + 1]))));
                    }
                    /* vectorizable */
                    for (short i_4 = 4; i_4 < 8; i_4 += 3) 
                    {
                        arr_13 [4] [i_1] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))));
                        var_13 |= ((/* implicit */short) (unsigned char)172);
                        arr_14 [i_1] [i_2 - 2] = ((/* implicit */short) ((((/* implicit */unsigned int) arr_0 [i_2] [i_2])) | (var_6)));
                        var_14 = ((/* implicit */long long int) (~(var_10)));
                    }
                    for (short i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        var_15 = ((/* implicit */signed char) (((_Bool)1) ? (arr_4 [i_0]) : (var_10)));
                        arr_18 [i_1] [i_1] = ((int) max((var_1), (((/* implicit */unsigned short) var_8))));
                        var_16 = ((/* implicit */unsigned long long int) ((((arr_3 [i_0 + 2] [i_1 - 2] [i_1]) % (((/* implicit */int) (unsigned char)83)))) / ((-(((/* implicit */int) arr_16 [i_0] [i_1] [i_2 - 1] [i_5] [i_0] [i_1]))))));
                    }
                    var_17 = ((/* implicit */long long int) arr_16 [i_0] [i_1] [i_0] [i_1 - 3] [i_0] [i_1]);
                    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) max((max((var_6), (((/* implicit */unsigned int) arr_9 [i_0 + 2] [i_1] [2])))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(_Bool)1] [2ULL] [(_Bool)1] [i_0])) ? (((/* implicit */int) arr_9 [i_2] [i_1] [i_2])) : (var_3))))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_6 = 1; i_6 < 15; i_6 += 3) 
    {
        for (int i_7 = 0; i_7 < 17; i_7 += 2) 
        {
            for (long long int i_8 = 0; i_8 < 17; i_8 += 3) 
            {
                {
                    var_19 = min((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_6]))) / (var_4)))) ? (((/* implicit */int) min((arr_25 [i_6 + 2] [i_6 + 2] [i_8]), (((/* implicit */short) arr_26 [i_8] [i_8] [i_8] [i_7]))))) : (max((arr_21 [i_6]), (((/* implicit */int) arr_19 [i_7])))))), (((/* implicit */int) arr_19 [i_6 + 2])));
                    var_20 = ((/* implicit */unsigned long long int) ((int) (-(((/* implicit */int) arr_19 [i_6])))));
                    arr_27 [i_7] [i_8] = min((((((/* implicit */int) arr_25 [i_6 + 1] [10] [i_8])) - (((/* implicit */int) arr_25 [i_6 + 1] [i_7] [i_6 + 1])))), ((-(((/* implicit */int) arr_19 [i_6 + 1])))));
                    /* LoopSeq 1 */
                    for (long long int i_9 = 1; i_9 < 15; i_9 += 2) 
                    {
                        var_21 = ((/* implicit */int) min((var_21), (((((/* implicit */int) ((((/* implicit */int) arr_23 [i_6 - 1])) <= (((/* implicit */int) arr_26 [16] [i_9] [i_9 + 1] [i_6 - 1]))))) | (arr_21 [i_6 + 2])))));
                        var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) max((arr_23 [i_9 - 1]), (arr_23 [i_9 - 1]))))));
                        var_23 = ((/* implicit */unsigned char) 2147483647);
                    }
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */int) var_5);
}
