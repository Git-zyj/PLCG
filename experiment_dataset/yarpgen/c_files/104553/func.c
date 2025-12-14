/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104553
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) arr_1 [i_0])))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) arr_1 [i_0])))))));
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) arr_0 [i_0]))));
        var_16 |= ((/* implicit */_Bool) arr_2 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_2 [i_0])))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))) & (((/* implicit */int) arr_1 [i_0]))));
        var_17 = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) != (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))) ? (((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) arr_1 [i_0])) - (120))))) : (((/* implicit */int) arr_1 [i_0]))))));
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) arr_1 [i_1])))), (((/* implicit */int) arr_1 [i_1])))) <= (((/* implicit */int) max((((/* implicit */short) max((arr_5 [i_1] [i_1]), (arr_1 [i_1])))), (min((((/* implicit */short) arr_1 [i_1])), (arr_4 [i_1] [i_1]))))))));
        arr_7 [i_1] = arr_1 [i_1];
        arr_8 [(unsigned short)12] = ((/* implicit */short) min((((/* implicit */int) min((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_1])))), (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) arr_1 [i_1]))))));
    }
    /* LoopSeq 1 */
    for (short i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        arr_12 [i_2] = arr_10 [18LL];
        var_18 *= ((/* implicit */unsigned char) arr_11 [i_2] [i_2]);
        arr_13 [i_2] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_9 [i_2]), (((/* implicit */short) arr_10 [i_2]))))) ? (((/* implicit */int) arr_10 [i_2])) : (((/* implicit */int) arr_9 [i_2]))))) ? (((/* implicit */int) arr_11 [i_2] [i_2])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2] [i_2])) ? (((/* implicit */int) arr_10 [i_2])) : (((/* implicit */int) arr_9 [i_2]))))) ? (((/* implicit */int) max((arr_11 [i_2] [i_2]), (((/* implicit */short) arr_10 [i_2]))))) : (((((/* implicit */_Bool) arr_11 [i_2] [i_2])) ? (((/* implicit */int) arr_10 [i_2])) : (((/* implicit */int) arr_9 [i_2]))))))));
        /* LoopSeq 1 */
        for (long long int i_3 = 2; i_3 < 19; i_3 += 3) 
        {
            arr_17 [i_3 + 1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3 - 2])) ? (((/* implicit */int) arr_9 [i_3 - 2])) : (((/* implicit */int) arr_9 [i_3 + 2]))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_11 [i_3 - 2] [i_3 - 1]), (arr_11 [i_3 - 2] [i_3 - 1]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_2] [i_3 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2]))) : (arr_14 [i_3])))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_2] [i_3]))) ^ (arr_14 [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_15 [i_3]), (arr_15 [i_2])))))))));
            var_19 |= ((/* implicit */unsigned char) ((arr_14 [i_3 - 2]) + (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_2] [i_2])))));
            var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_15 [i_3 - 2])) ? (((/* implicit */int) arr_15 [i_3 - 2])) : (((/* implicit */int) arr_15 [i_3 - 2])))) != (((/* implicit */int) max((arr_15 [i_3 + 2]), (arr_15 [i_3 - 2]))))));
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3 - 2])) ? (((/* implicit */int) arr_10 [i_3 - 2])) : (((/* implicit */int) arr_10 [i_3 + 1]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_10 [i_3 - 1])) != (((/* implicit */int) arr_15 [i_3 + 1]))))) : (((/* implicit */int) arr_10 [i_3 - 1]))));
        }
    }
}
