/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177921
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0]))));
        arr_2 [i_0] = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)107))));
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) max(((~((~(var_7))))), (((/* implicit */unsigned long long int) arr_5 [i_1])))))));
                    arr_10 [i_0] [i_1] [i_2] [i_2] = max((((arr_5 [i_0]) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_5 [5U])))), ((~(((/* implicit */int) (_Bool)0)))));
                }
            } 
        } 
    }
    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        arr_15 [i_3] [(_Bool)1] = ((/* implicit */unsigned char) arr_13 [i_3] [i_3]);
        /* LoopNest 2 */
        for (unsigned int i_4 = 2; i_4 < 20; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_24 [i_3] [i_4 + 1] [i_3] [i_5] [i_6] = ((/* implicit */short) (((+(((/* implicit */int) arr_13 [i_3] [i_4 - 1])))) - ((+(((/* implicit */int) ((short) arr_22 [i_3] [i_3] [13U] [13U] [17U] [i_6])))))));
                        arr_25 [10LL] [i_3] [4ULL] [2U] [4ULL] [10LL] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 4147349377U)))))));
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) 909077710U)) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) (signed char)-92))));
                    }
                    for (unsigned char i_7 = 2; i_7 < 20; i_7 += 4) /* same iter space */
                    {
                        arr_28 [i_7] [i_4] [i_5] [i_3] [i_5] = ((/* implicit */unsigned int) (~(arr_11 [i_3])));
                        var_19 |= ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) arr_12 [i_4])), (min((var_12), (((/* implicit */unsigned long long int) arr_26 [i_7 + 2] [(unsigned char)14] [i_7] [i_7 - 1] [(short)22] [i_7])))))) * (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) arr_13 [i_3] [i_5]))))) - (((var_1) - (((/* implicit */long long int) ((/* implicit */int) (signed char)16))))))))));
                        arr_29 [(unsigned short)4] [(short)18] [(unsigned short)4] [(unsigned short)4] [i_3] [(short)18] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (arr_11 [i_3])))) ? (((((/* implicit */_Bool) arr_11 [i_3])) ? (arr_11 [i_3]) : (arr_11 [i_3]))) : (arr_11 [i_3])));
                        var_20 |= ((/* implicit */_Bool) (+(((/* implicit */int) arr_26 [(_Bool)1] [i_4 + 2] [i_7] [i_5] [i_7] [(_Bool)1]))));
                    }
                    for (unsigned char i_8 = 2; i_8 < 20; i_8 += 4) /* same iter space */
                    {
                        arr_32 [i_8 - 2] [i_4] [i_5] [i_3] [(_Bool)1] [(short)9] = ((/* implicit */signed char) ((unsigned long long int) arr_14 [i_3] [i_4 + 3]));
                        var_21 = ((/* implicit */_Bool) (((-((+(arr_21 [i_8] [i_5] [i_4] [i_4] [i_3] [i_3]))))) - (((/* implicit */long long int) (+(((/* implicit */int) arr_18 [i_5] [i_3])))))));
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_21 [i_4 - 1] [i_4 - 1] [i_4] [i_4 + 2] [(unsigned short)14] [i_4 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [(short)20] [i_4 + 3] [i_4 - 1] [i_4 - 1])))))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (2738187361005588828LL) : (9223372036854775807LL)))));
                        var_23 = ((/* implicit */unsigned char) arr_13 [i_3] [i_3]);
                    }
                    arr_33 [i_3] [i_3] [i_3] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) arr_26 [i_4 - 2] [i_4 + 2] [i_3] [i_3] [i_4] [i_3])) % ((+(((/* implicit */int) arr_12 [i_4 + 1]))))));
                }
            } 
        } 
        arr_34 [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_23 [i_3] [i_3] [18] [i_3]);
        arr_35 [i_3] [22] = ((/* implicit */short) arr_16 [i_3]);
    }
    var_24 = ((/* implicit */short) (+(((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) % ((~(((/* implicit */int) (unsigned short)53901))))))));
    var_25 = ((/* implicit */int) var_1);
}
