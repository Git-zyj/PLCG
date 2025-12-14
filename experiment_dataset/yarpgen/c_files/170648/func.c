/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170648
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
    var_13 = ((/* implicit */short) ((var_12) <= (((/* implicit */long long int) var_2))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_14 += ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? ((-(9223372036854775807LL))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))) | (((unsigned long long int) arr_0 [i_0] [i_0])));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 21; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    {
                        var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_3] [i_2]))) : (arr_0 [i_0] [i_1])))) ? (((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1156442222263981090LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_9 [i_0] [i_1] [i_2] [i_2])))))))));
                        arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2 + 2] [i_2 + 2] [i_2])) ? (var_12) : (-1156442222263981090LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) -2126778700233754539LL)) && (((/* implicit */_Bool) arr_3 [i_2 + 2] [i_1] [i_2]))))) : (arr_3 [i_2 - 3] [i_1] [i_1])));
                    }
                } 
            } 
        } 
    }
}
