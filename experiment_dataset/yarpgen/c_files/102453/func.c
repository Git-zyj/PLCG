/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102453
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
    var_11 = ((/* implicit */_Bool) min((((((((/* implicit */int) var_4)) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) != (var_9)))))), ((-(((/* implicit */int) var_2))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_4 [i_1] = ((/* implicit */_Bool) min((((arr_3 [i_1 - 1]) | (((((/* implicit */int) arr_0 [8ULL])) + (523243025))))), ((~(((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 2] [i_1]))))));
            var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((arr_2 [i_0] [i_0] [(signed char)12]) ? (max((min((-95947640), (((/* implicit */int) (unsigned short)36026)))), ((~(((/* implicit */int) arr_0 [i_0])))))) : (((/* implicit */int) arr_2 [4LL] [(short)6] [4LL])))))));
            var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)19)), (1758769499))))));
        }
        for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            arr_7 [(unsigned short)12] = (_Bool)1;
            arr_8 [i_0] [i_2] = ((/* implicit */_Bool) max(((~(var_10))), (((/* implicit */unsigned int) max(((+(((/* implicit */int) var_3)))), (((/* implicit */int) arr_5 [i_0 - 1] [(signed char)4] [14])))))));
            arr_9 [i_2] = ((/* implicit */signed char) 298051839);
        }
        for (unsigned int i_3 = 1; i_3 < 14; i_3 += 2) 
        {
            var_14 &= ((/* implicit */short) var_10);
            var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 1758769499)))))));
            var_16 = ((/* implicit */signed char) (unsigned char)241);
        }
        var_17 = ((/* implicit */short) min((var_17), (var_2)));
    }
    for (short i_4 = 0; i_4 < 24; i_4 += 2) 
    {
        var_18 = ((/* implicit */short) max(((-(((/* implicit */int) (unsigned short)36026)))), (((arr_15 [i_4] [i_4]) + (((/* implicit */int) (unsigned short)36018))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 2) 
        {
            arr_18 [i_4] [i_5] = ((/* implicit */_Bool) arr_16 [i_4] [i_4]);
            arr_19 [i_4] [1] = ((/* implicit */long long int) ((int) ((int) arr_12 [i_4])));
            var_19 = ((/* implicit */int) min((var_19), (((arr_13 [i_5]) >> (((arr_15 [i_4] [i_5]) - (2028185525)))))));
            var_20 = ((/* implicit */_Bool) max((var_20), ((_Bool)1)));
        }
    }
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3))))))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned short) var_4))))) ? (min((((/* implicit */unsigned long long int) var_4)), (1018962141007423077ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7)))))))));
}
