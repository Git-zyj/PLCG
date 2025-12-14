/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118558
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
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) max(((+(((/* implicit */int) arr_1 [i_0])))), (min((((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (var_11)))), ((-(((/* implicit */int) (unsigned short)15540))))))));
        var_18 = ((/* implicit */unsigned short) (((((-(arr_0 [i_0]))) <= ((+(arr_0 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45784))) : (((arr_0 [i_0]) << (((arr_0 [10U]) - (2543033839U)))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_19 ^= ((/* implicit */long long int) arr_4 [i_1]);
        arr_5 [i_1] = ((/* implicit */unsigned short) arr_3 [i_1] [i_1]);
    }
    var_20 = ((/* implicit */long long int) var_4);
}
