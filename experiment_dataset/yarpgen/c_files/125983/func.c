/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125983
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
    var_11 |= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_1)), (((unsigned long long int) max((var_2), (((/* implicit */int) (unsigned char)106)))))));
    /* LoopSeq 4 */
    for (short i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        var_12 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 2]))) : (7ULL))), (((/* implicit */unsigned long long int) var_4))));
        arr_4 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)54))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) var_8))));
            arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_1);
        }
    }
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        arr_13 [16] [16] &= ((/* implicit */short) (-(((/* implicit */int) (unsigned char)171))));
        var_14 = ((/* implicit */int) min((max((var_3), (((/* implicit */long long int) arr_10 [i_2])))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_10 [i_2])) : (((/* implicit */int) arr_10 [i_2])))))));
        var_15 = ((/* implicit */long long int) max((var_15), (((var_0) & (-1LL)))));
    }
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            arr_18 [i_3] = ((/* implicit */short) arr_7 [i_4]);
            var_16 *= ((/* implicit */_Bool) arr_6 [i_3 + 1]);
            arr_19 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-32745)) : (((/* implicit */int) (unsigned char)127))))) ? (((/* implicit */int) arr_5 [i_3 + 1])) : (((((/* implicit */_Bool) arr_2 [(short)7])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))));
            var_17 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3 + 1]))) | (arr_14 [i_3]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
        }
        var_18 = ((/* implicit */short) -976320967);
        var_19 = ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned char) arr_11 [i_3 + 1]))), ((+(((/* implicit */int) (unsigned char)88))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) arr_11 [i_5]);
        arr_22 [i_5] |= ((/* implicit */int) ((_Bool) max((((/* implicit */long long int) arr_10 [i_5])), (var_3))));
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_5])) ? (((/* implicit */int) arr_6 [i_5])) : (((/* implicit */int) arr_6 [i_5]))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)18067))))) : (max((var_4), (((/* implicit */long long int) arr_6 [i_5]))))));
    }
}
