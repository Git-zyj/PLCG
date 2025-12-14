/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151150
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
    var_19 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((var_11), (-3719867714849457017LL))))));
    var_20 += ((((((((/* implicit */long long int) (+(((/* implicit */int) var_13))))) ^ (min((-4006465923050846992LL), (-3719867714849457017LL))))) + (9223372036854775807LL))) >> (((max((var_11), (((/* implicit */long long int) min((var_12), (((/* implicit */short) var_3))))))) - (3877290054980240286LL))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    arr_9 [i_0] [4ULL] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(arr_7 [i_0] [i_0] [i_0]))))));
                    arr_10 [i_2] [i_1] [i_1] [i_0] = var_6;
                }
                /* vectorizable */
                for (short i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    arr_14 [i_1] [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0]))) <= (arr_12 [i_0] [14LL]))))) >= (arr_5 [i_1] [i_1])));
                    arr_15 [i_3] [i_1] [i_3] = ((((/* implicit */unsigned long long int) ((unsigned int) arr_13 [i_3] [i_3] [i_1] [i_0]))) + (arr_5 [i_1] [i_3]));
                    var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) -1LL))));
                }
                /* vectorizable */
                for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    arr_20 [i_4] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_1] [i_1])) ? (arr_19 [i_1] [i_1]) : (arr_19 [i_1] [i_1])));
                    arr_21 [i_0] [i_1] [i_1] [i_1] = (!(arr_17 [i_0] [i_1] [14U] [(short)8]));
                }
                arr_22 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_0] [i_1] [i_1])))))));
                arr_23 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_4))));
            }
        } 
    } 
}
