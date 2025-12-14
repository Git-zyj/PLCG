/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133063
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
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_19 &= ((/* implicit */long long int) 1051599643);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))));
                        var_21 = ((/* implicit */long long int) -1051599644);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned char) arr_2 [i_0] [i_4]);
                        var_23 = ((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))));
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) -1139165956)) ? (((/* implicit */int) (_Bool)1)) : (-1051599643)));
                        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2]))) : (arr_4 [i_0] [i_0])));
                    }
                    var_26 = ((/* implicit */unsigned long long int) max((min((var_6), ((-(1051599629))))), (arr_3 [i_0])));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            var_27 = ((/* implicit */signed char) arr_2 [i_0] [i_0]);
            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_5] [i_5] [i_5] [10])) ? (var_18) : (((/* implicit */int) arr_7 [i_5] [3U] [i_5] [i_5]))))) : (2017612633061982208LL))))));
        }
        /* vectorizable */
        for (signed char i_6 = 0; i_6 < 19; i_6 += 1) 
        {
            var_29 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
            var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_6])) ? ((~(((/* implicit */int) arr_2 [i_0] [i_6])))) : (((((/* implicit */_Bool) 4294967295U)) ? (1051599643) : (arr_3 [i_0])))));
            var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(8105680762844134123LL)))) ? (((/* implicit */int) ((arr_16 [i_0] [1]) < (((/* implicit */long long int) arr_8 [i_0]))))) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [11LL]))));
        }
    }
    /* vectorizable */
    for (short i_7 = 2; i_7 < 16; i_7 += 4) 
    {
        var_32 = ((/* implicit */int) max((var_32), ((~(((/* implicit */int) var_12))))));
        var_33 = ((/* implicit */int) arr_16 [i_7 - 1] [i_7]);
    }
    var_34 = ((/* implicit */signed char) var_11);
}
