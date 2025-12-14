/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132622
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
    for (int i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) arr_1 [(short)14]))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 3; i_1 < 24; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [i_0] = ((/* implicit */int) max((((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_4 [i_0 + 1] [7LL] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_4 [21ULL] [22U] [i_2]))) : (arr_3 [i_0 + 1] [i_1 - 1]))), (((((/* implicit */_Bool) 1457578520198137169ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10892))) : (8758897282062114411LL)))));
                    var_14 = ((/* implicit */int) min((((/* implicit */long long int) ((_Bool) var_11))), (((min((arr_6 [i_1 - 2]), (arr_6 [i_0 + 1]))) ? (((/* implicit */long long int) min((((/* implicit */int) arr_1 [i_0 - 1])), (var_12)))) : (var_5)))));
                    var_15 = ((/* implicit */unsigned int) arr_0 [i_1 - 1] [i_1 - 1]);
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 23; i_3 += 2) 
                    {
                        for (long long int i_4 = 3; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) -1343244406)) || (((/* implicit */_Bool) 10701574251709588500ULL)))))), (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (signed char)52)) ? (15398523565797496860ULL) : (((/* implicit */unsigned long long int) 854943972)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4] [i_0] [i_0] [i_1] [i_1] [i_0])))))));
                                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) var_0))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (long long int i_5 = 0; i_5 < 18; i_5 += 2) 
    {
        var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_5]))));
        var_19 = ((/* implicit */unsigned int) ((int) var_9));
        /* LoopNest 2 */
        for (signed char i_6 = 4; i_6 < 16; i_6 += 2) 
        {
            for (unsigned short i_7 = 0; i_7 < 18; i_7 += 4) 
            {
                {
                    arr_21 [(signed char)11] [i_6 + 1] [(unsigned short)13] [(signed char)11] = arr_9 [i_6 - 1] [(signed char)5] [i_6 - 4] [i_6] [i_6 - 4];
                    var_20 = ((/* implicit */unsigned long long int) arr_0 [i_5] [i_6 - 4]);
                    arr_22 [i_5] [i_6] [i_7] = ((/* implicit */unsigned int) min((arr_18 [i_6 + 2]), (max((arr_18 [i_6 - 2]), (arr_18 [i_6 - 1])))));
                    arr_23 [i_5] = (!(((/* implicit */_Bool) min(((+(arr_16 [i_7]))), ((~(arr_19 [(short)5] [i_6] [i_7] [i_7])))))));
                }
            } 
        } 
    }
    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
    {
        var_21 = ((/* implicit */_Bool) ((short) min((((/* implicit */long long int) min((arr_12 [i_8]), (arr_0 [i_8] [i_8])))), (arr_26 [i_8]))));
        arr_27 [i_8] = min((arr_9 [i_8 + 1] [i_8 + 1] [i_8] [i_8] [(unsigned short)5]), (max((arr_4 [(_Bool)1] [i_8 + 1] [i_8 + 1]), (((/* implicit */long long int) arr_25 [i_8] [i_8 + 1])))));
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned short i_10 = 2; i_10 < 19; i_10 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_10 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_9] [i_9] [i_10]))) ? (((((/* implicit */_Bool) arr_9 [i_8 + 1] [i_8 + 1] [4] [i_9] [i_10 + 3])) ? (arr_9 [i_10] [20U] [i_10] [i_10 - 1] [i_10 + 1]) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)77))) : (2115482127U)))))) : (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_8] [i_8 + 1] [(unsigned char)10] [i_10 + 3]))))))));
                    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) arr_2 [i_10 - 2]))));
                }
            } 
        } 
        var_24 = ((/* implicit */short) min((((/* implicit */long long int) (((!(((/* implicit */_Bool) 4807440871337941358LL)))) ? (arr_28 [i_8] [i_8]) : (((/* implicit */int) arr_10 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8] [i_8 + 1]))))), (((arr_4 [i_8] [(unsigned short)15] [i_8 + 1]) ^ (arr_4 [i_8 + 1] [i_8 + 1] [16ULL])))));
    }
    var_25 = ((/* implicit */short) var_11);
    var_26 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_4)), (var_9)));
}
