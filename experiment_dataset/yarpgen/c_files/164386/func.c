/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164386
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
    for (int i_0 = 4; i_0 < 8; i_0 += 4) 
    {
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) var_2))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */int) (unsigned char)66)) : (((/* implicit */int) arr_0 [i_0 + 2]))))) ? (((/* implicit */int) max((arr_0 [i_0 + 2]), (arr_0 [i_0 + 2])))) : ((~(((/* implicit */int) arr_0 [i_0 + 2]))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_22 = ((/* implicit */int) max(((signed char)58), (((/* implicit */signed char) arr_3 [i_1]))));
        var_23 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_3 [0])), (((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_2 [(unsigned short)12] [(unsigned short)12]) : (((/* implicit */unsigned long long int) var_7)))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(unsigned char)4])))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_24 = ((/* implicit */int) ((arr_7 [i_2]) | (((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (arr_7 [i_2])))));
        var_25 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) arr_8 [i_2]))));
    }
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 11; i_3 += 4) 
    {
        for (unsigned int i_4 = 2; i_4 < 12; i_4 += 3) 
        {
            {
                var_26 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)93)) && (((/* implicit */_Bool) arr_7 [i_4])))) && (((/* implicit */_Bool) arr_2 [i_3] [i_3]))))), (min((((/* implicit */unsigned int) arr_13 [i_3] [i_4] [i_4])), ((~(var_16)))))));
                var_27 = ((/* implicit */unsigned int) arr_9 [i_4]);
            }
        } 
    } 
}
