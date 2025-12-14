/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163025
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((min((4294967295U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))))))) - (((/* implicit */unsigned int) min((((((/* implicit */_Bool) 3LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8)))), ((-(((/* implicit */int) arr_0 [i_0])))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_6 [i_2]) ? (((/* implicit */int) arr_9 [i_1 - 1] [i_1 + 1] [i_1] [(unsigned short)9])) : (((/* implicit */int) arr_8 [i_0] [i_0] [(unsigned char)7])))))));
                    var_11 = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [(_Bool)1]);
                    var_12 -= ((/* implicit */long long int) min((((((/* implicit */_Bool) (+(arr_7 [i_0] [i_0] [i_1 + 1] [i_2])))) ? ((-(((/* implicit */int) arr_8 [i_2] [i_1 - 1] [i_0])))) : (((/* implicit */int) arr_9 [i_0] [7ULL] [i_2] [i_1 + 1])))), (((((/* implicit */int) min((var_7), (((/* implicit */unsigned short) var_8))))) * (((/* implicit */int) min((var_7), (var_7))))))));
                    var_13 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1 + 1] [i_1])) ? (((/* implicit */int) min((arr_9 [i_0] [i_0] [i_1] [i_2]), (arr_8 [2ULL] [2ULL] [i_2])))) : (((/* implicit */int) var_1)))), (((/* implicit */int) arr_0 [i_2]))));
                }
            } 
        } 
    }
    var_14 = min((var_7), (var_1));
}
