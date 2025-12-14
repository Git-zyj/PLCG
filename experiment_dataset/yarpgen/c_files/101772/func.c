/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101772
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
    var_15 = ((/* implicit */short) var_7);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned int) ((min(((_Bool)1), (((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_2 [i_0])))))) ? (((/* implicit */unsigned long long int) max((((var_5) + (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned int) arr_2 [i_0 + 4]))))) : (max((((/* implicit */unsigned long long int) ((arr_0 [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))), (max((((/* implicit */unsigned long long int) (unsigned char)255)), (arr_1 [i_0] [(signed char)0])))))));
        arr_3 [0ULL] |= ((/* implicit */short) (((-(((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (arr_1 [i_0] [i_0 - 1]) : (18446744073709551603ULL))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
        var_17 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0 + 2]))))) ? (min((max((var_8), (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) arr_2 [i_0])))) : ((-(arr_0 [i_0 + 1])))));
    }
    for (short i_1 = 1; i_1 < 7; i_1 += 4) 
    {
        var_18 = ((((((/* implicit */_Bool) arr_0 [i_1 + 3])) || (arr_4 [i_1 + 2] [i_1]))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1 + 2])) || (((/* implicit */_Bool) var_7))))) : (((/* implicit */int) ((arr_4 [i_1 + 2] [i_1 + 2]) || (((/* implicit */_Bool) var_4))))));
        arr_7 [i_1] [i_1] = (-(max((((arr_1 [i_1 + 3] [i_1 + 3]) << (((((/* implicit */int) arr_2 [i_1 + 1])) - (29565))))), (((/* implicit */unsigned long long int) min((arr_2 [i_1 + 3]), (arr_6 [i_1])))))));
    }
    for (signed char i_2 = 1; i_2 < 19; i_2 += 3) 
    {
        var_19 = ((/* implicit */short) arr_9 [i_2 + 1] [i_2 + 1]);
        /* LoopSeq 4 */
        for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            arr_13 [i_3] [i_2] [i_2] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) arr_12 [i_2 - 1] [i_3] [i_2 + 3])) && (((/* implicit */_Bool) arr_9 [i_2 - 1] [i_3]))))));
            arr_14 [i_3] |= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_3)), ((unsigned char)31)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) + (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) <= (var_11)));
            var_20 = ((((((/* implicit */_Bool) arr_12 [i_2 + 1] [i_2 + 2] [i_2 + 1])) && (((/* implicit */_Bool) arr_12 [i_2 - 1] [i_2 - 1] [i_2 + 2])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3] [i_3]))) : (arr_11 [i_2]))))) : (max((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)255))))), (var_8))));
            var_21 += ((/* implicit */unsigned short) arr_10 [4ULL]);
        }
        /* vectorizable */
        for (unsigned short i_4 = 1; i_4 < 18; i_4 += 3) 
        {
            var_22 |= ((/* implicit */unsigned int) (-(((/* implicit */int) ((var_5) < (arr_10 [i_2]))))));
            var_23 = ((/* implicit */_Bool) var_5);
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((arr_12 [i_2 - 1] [i_2] [i_4 + 3]) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_2 + 3])) && (((/* implicit */_Bool) arr_16 [i_2 + 1])))))))))));
        }
        for (unsigned short i_5 = 2; i_5 < 19; i_5 += 3) 
        {
            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */unsigned int) max((((/* implicit */int) arr_17 [(short)18])), (((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */int) arr_17 [i_2 + 1])) : (((/* implicit */int) arr_8 [i_2]))))))) & ((+(arr_12 [i_5 + 1] [i_5 + 1] [i_5]))))))));
            arr_20 [(unsigned char)13] [i_5 + 3] = ((/* implicit */int) arr_16 [i_2 + 1]);
        }
        /* vectorizable */
        for (short i_6 = 2; i_6 < 21; i_6 += 3) 
        {
            var_26 += ((/* implicit */signed char) var_0);
            var_27 |= ((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_6 - 1] [(unsigned short)2])) & (((/* implicit */int) arr_21 [i_6 - 1] [(signed char)14]))));
            var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_21 [i_6 - 2] [i_6]))));
            var_29 = ((/* implicit */signed char) (-(arr_15 [i_6])));
        }
        var_30 = ((/* implicit */int) arr_8 [i_2]);
    }
}
