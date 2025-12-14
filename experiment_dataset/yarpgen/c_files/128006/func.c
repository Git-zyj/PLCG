/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128006
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
    var_15 |= max((((/* implicit */int) var_11)), (((((/* implicit */_Bool) var_14)) ? ((+(((/* implicit */int) var_14)))) : (((((/* implicit */int) (signed char)-23)) + (-1307024348))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32094)))))) ? ((-(arr_4 [i_0]))) : (arr_4 [i_0]))), ((-(arr_2 [i_0] [i_0])))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 1) 
                {
                    arr_9 [i_0] [i_1] [i_1] [(signed char)5] = ((/* implicit */signed char) min((max((arr_5 [i_2 + 1] [i_2 - 1] [i_2 + 1]), (var_4))), (((/* implicit */unsigned short) (signed char)118))));
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) ((long long int) var_6)))) && (((/* implicit */_Bool) max((arr_8 [i_0] [i_0] [i_0]), (((/* implicit */long long int) min((arr_1 [i_2 + 2]), (((/* implicit */unsigned short) arr_7 [14U] [i_1] [i_2])))))))))))));
                }
            }
        } 
    } 
}
