/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117511
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
    var_11 = min((max((((/* implicit */unsigned long long int) var_0)), (((var_7) ? (2931690414808166037ULL) : (var_3))))), (((/* implicit */unsigned long long int) var_5)));
    var_12 = ((/* implicit */unsigned char) min((((/* implicit */int) (short)15506)), ((~(((/* implicit */int) var_2))))));
    var_13 = ((/* implicit */unsigned char) var_6);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((arr_0 [i_1]), (((/* implicit */unsigned long long int) (short)-20480))))) ? (6517404377986058125ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                var_14 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_1])) || (((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1])))))));
            }
        } 
    } 
}
