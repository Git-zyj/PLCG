/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158341
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
    for (unsigned char i_0 = 4; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_10 -= ((/* implicit */signed char) ((long long int) ((var_2) + (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))))));
                    arr_8 [i_0] = arr_1 [i_0] [3U];
                    var_11 += ((/* implicit */_Bool) ((((/* implicit */long long int) max((arr_3 [i_1 + 2] [i_0 - 1] [(unsigned short)3]), (arr_3 [i_1 - 2] [i_0 + 1] [i_0])))) + (arr_2 [i_1 - 1] [(unsigned short)4])));
                    var_12 &= ((/* implicit */short) min((arr_7 [2LL] [i_1] [i_2]), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_7)))) | (((144115188075855871LL) - (((/* implicit */long long int) 1372967332U)))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_4 = 1; i_4 < 8; i_4 += 2) /* same iter space */
        {
            var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_4 + 1] [i_4 - 1])) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)-110))) / (9223372036854775807LL))) : (((/* implicit */long long int) ((int) 1372967332U)))));
            arr_14 [i_4] [(signed char)0] [i_4] = ((/* implicit */unsigned char) (~(12LL)));
            /* LoopNest 2 */
            for (unsigned int i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                for (long long int i_6 = 0; i_6 < 10; i_6 += 2) 
                {
                    {
                        var_14 = ((/* implicit */unsigned char) (~(arr_2 [2LL] [i_4 + 2])));
                        var_15 = ((/* implicit */unsigned long long int) arr_18 [i_3] [1LL] [8LL]);
                    }
                } 
            } 
        }
        for (unsigned char i_7 = 1; i_7 < 8; i_7 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (long long int i_8 = 0; i_8 < 10; i_8 += 2) /* same iter space */
            {
                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) 1372967323U))) ? (min((((/* implicit */long long int) ((_Bool) arr_21 [i_3] [(unsigned char)5]))), (arr_2 [i_3] [i_3]))) : (arr_11 [(_Bool)1] [i_7])));
                arr_26 [i_7] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [(short)7] [i_7] [(signed char)7] [i_7 + 1])) ? (arr_20 [i_7] [8LL] [i_7] [i_7 - 1]) : (arr_20 [i_7] [i_7] [(unsigned char)7] [i_7 - 1])))) | (max((2921999963U), (((/* implicit */unsigned int) (unsigned char)0))))));
            }
            for (long long int i_9 = 0; i_9 < 10; i_9 += 2) /* same iter space */
            {
                var_17 = ((/* implicit */int) var_7);
                arr_30 [i_9] [i_7] [7LL] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [(unsigned short)13]))) > (min((((/* implicit */long long int) (signed char)48)), (0LL)))));
            }
            arr_31 [1LL] [i_7] = ((/* implicit */long long int) ((min((((/* implicit */int) arr_0 [i_7 - 1])), (602051257))) ^ (((/* implicit */int) arr_0 [i_7 + 1]))));
        }
        for (unsigned char i_10 = 1; i_10 < 8; i_10 += 2) /* same iter space */
        {
            arr_35 [i_3] [i_10] &= ((/* implicit */long long int) var_1);
            var_18 = ((/* implicit */unsigned char) ((int) min((arr_21 [i_10 + 1] [i_10 + 1]), (-1012513559))));
        }
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((arr_20 [i_3] [(short)2] [(signed char)9] [i_3]) - (arr_20 [i_3] [(unsigned short)8] [i_3] [i_3]))) + (((/* implicit */int) ((unsigned short) arr_20 [i_3] [(_Bool)1] [i_3] [(unsigned char)2]))))))));
        var_20 = ((/* implicit */signed char) (~(min((((((/* implicit */_Bool) arr_34 [i_3])) ? (arr_15 [1LL] [i_3] [i_3]) : (arr_17 [i_3] [4U] [i_3]))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) arr_9 [7] [i_3])) : (2211812600599379420LL)))))));
    }
    for (unsigned int i_11 = 1; i_11 < 13; i_11 += 2) 
    {
        arr_39 [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) arr_36 [i_11] [i_11])) : (((2921999964U) / (((/* implicit */unsigned int) arr_36 [5] [i_11]))))));
        arr_40 [i_11] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_3)) ? (arr_38 [i_11 + 1]) : (arr_38 [i_11])))));
        var_21 = ((/* implicit */unsigned int) var_1);
    }
    var_22 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)255))));
    var_23 = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_1)), (max((((/* implicit */long long int) 1012513578)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_8)))))));
}
