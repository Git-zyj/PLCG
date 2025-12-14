/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158130
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
    var_11 = ((/* implicit */long long int) var_2);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        var_12 ^= ((/* implicit */short) arr_1 [i_0]);
        var_13 = ((/* implicit */_Bool) (-(arr_1 [i_0])));
        var_14 = ((/* implicit */unsigned long long int) max((arr_1 [i_0]), (((/* implicit */long long int) arr_0 [i_0] [i_0]))));
    }
    for (int i_1 = 2; i_1 < 8; i_1 += 3) 
    {
        var_15 &= ((/* implicit */long long int) ((((/* implicit */long long int) 3314253241U)) < (arr_1 [i_1 - 2])));
        arr_5 [i_1] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_1 + 2]))))), (((max((-2066176030416520012LL), (((/* implicit */long long int) arr_3 [(short)7])))) / (((/* implicit */long long int) arr_3 [i_1 - 1]))))));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                for (int i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    {
                        arr_17 [(signed char)0] [i_2] [i_2] [0LL] [i_2] [i_2] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) (~(((/* implicit */int) arr_13 [i_4] [i_2] [i_1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((1073741824U), (((/* implicit */unsigned int) arr_15 [i_1] [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1 - 2]))))))))) : (max((((459981699U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3873))))), (((/* implicit */unsigned int) arr_7 [i_3]))))));
                        var_16 |= ((/* implicit */short) min((min((((/* implicit */unsigned int) arr_12 [i_1 - 1] [i_1 + 2])), ((-(66846720U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)52)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [8U]))) : (arr_10 [(short)7] [(short)7])))) ? (((/* implicit */int) ((unsigned short) arr_1 [i_3]))) : (((/* implicit */int) arr_15 [i_1] [i_1] [i_1 + 2] [i_1] [(signed char)5])))))));
                    }
                } 
            } 
        } 
        var_17 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_8 [(_Bool)1] [i_1] [i_1]) : (arr_16 [i_1] [i_1] [i_1] [i_1] [0U] [i_1])))) ? (arr_10 [i_1] [i_1 + 2]) : (((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_1])))))))) ? (((/* implicit */unsigned int) (+(((((/* implicit */int) var_7)) - (arr_3 [i_1])))))) : (max((((((/* implicit */_Bool) 1006632960LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [i_1] [6LL]))) : (1111156194U))), (((/* implicit */unsigned int) ((signed char) (unsigned short)59059)))))));
    }
    for (unsigned short i_5 = 2; i_5 < 16; i_5 += 4) 
    {
        var_18 = ((/* implicit */unsigned int) 33292288);
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((((var_10) - (((/* implicit */unsigned long long int) arr_19 [i_5])))) % (((/* implicit */unsigned long long int) 741637673U)))) << (((max(((~(arr_19 [i_5 - 1]))), (((/* implicit */unsigned int) arr_0 [i_5] [i_5])))) - (4294967138U))))))));
        var_20 |= ((/* implicit */unsigned int) (+(((/* implicit */int) (short)8160))));
        arr_21 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? ((+(((((/* implicit */_Bool) arr_20 [i_5 - 2] [i_5])) ? (arr_20 [(unsigned short)1] [(unsigned short)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5] [i_5]))))))) : (((arr_20 [i_5 + 1] [i_5 + 1]) - (((/* implicit */unsigned long long int) var_1))))));
    }
    for (unsigned int i_6 = 1; i_6 < 20; i_6 += 2) 
    {
        var_21 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_6 - 1])) && (((/* implicit */_Bool) arr_24 [i_6 + 1])))))) < ((~(arr_24 [i_6 - 1])))));
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 20; i_7 += 3) 
        {
            for (unsigned int i_8 = 0; i_8 < 21; i_8 += 3) 
            {
                {
                    var_22 = ((/* implicit */long long int) (~((~(min((var_4), (arr_24 [i_8])))))));
                    var_23 ^= ((/* implicit */long long int) arr_25 [i_7] [(signed char)15]);
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        for (int i_10 = 0; i_10 < 21; i_10 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) max((min(((~(arr_32 [16LL] [i_7 - 1] [3U]))), (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-5172))))))), ((-(((((/* implicit */_Bool) 70931694131085312ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32765))) : (arr_32 [i_6] [i_7] [i_8]))))))))));
                                var_25 = ((/* implicit */unsigned int) arr_27 [i_6] [18ULL] [i_6]);
                                arr_39 [i_6] [i_9] [i_8] [i_8] [i_10] [i_10] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_33 [i_6] [(signed char)4] [i_6 - 1] [i_6] [(signed char)4] [i_6])))) ? (max((arr_35 [i_6] [i_6] [i_8] [i_8] [(signed char)16] [i_10]), (arr_34 [i_7] [i_7 - 1] [i_9] [(_Bool)1]))) : (((/* implicit */unsigned int) max((((/* implicit */int) arr_22 [i_10])), (var_5))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_6 - 1] [i_7 + 1] [i_9])) ? (((((/* implicit */_Bool) var_7)) ? (-6351911949363759229LL) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_8]))))) : ((~(arr_36 [i_6]))))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */int) var_6);
                }
            } 
        } 
        arr_40 [i_6] [i_6] = (-(((/* implicit */int) var_6)));
    }
    var_27 = ((/* implicit */_Bool) var_9);
}
