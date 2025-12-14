/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140745
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
    var_19 = ((/* implicit */int) var_3);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 18; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        arr_12 [(unsigned short)16] [8LL] [i_2] [i_0] [i_0] [13] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_14)))))) * (((((/* implicit */_Bool) arr_8 [i_0])) ? (arr_2 [10]) : (((/* implicit */long long int) arr_8 [i_2]))))));
                        arr_13 [i_2] [(unsigned short)6] [i_2] &= ((/* implicit */unsigned long long int) var_9);
                        var_20 = (+(((/* implicit */int) (unsigned short)56266)));
                        var_21 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_5 [i_1] [i_2])) ^ (17179852800LL)))) && (((/* implicit */_Bool) (unsigned short)41293))));
                    }
                    var_22 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 + 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)25284)) ? (-5111293069471451306LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25284)))))) : (((1586482880140823725ULL) * (var_7)))))) ? (min(((+(((/* implicit */int) var_14)))), (((/* implicit */int) var_14)))) : (arr_8 [i_0])));
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) min((((/* implicit */int) ((arr_4 [i_1 + 2] [i_1 - 3]) == (arr_4 [i_1 - 2] [i_1 - 4])))), (arr_4 [i_1 - 1] [i_0]))))));
                }
            } 
        } 
    } 
}
