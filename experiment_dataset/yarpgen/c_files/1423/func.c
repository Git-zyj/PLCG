/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1423
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
    var_19 *= var_14;
    var_20 = ((/* implicit */unsigned char) max((((((/* implicit */int) ((((/* implicit */int) var_13)) > (((/* implicit */int) var_8))))) | (((/* implicit */int) ((signed char) var_4))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (10616683029701894227ULL)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */long long int) ((int) var_5));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3983485487670041977LL)) ? (arr_8 [i_1] [(signed char)3] [i_1] [i_1]) : (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 - 1]))) : (6408457348329575076ULL)));
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3])) ? (arr_2 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2 + 1])))));
                    }
                }
            } 
        } 
    } 
}
