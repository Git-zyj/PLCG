/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183979
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
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_19 = max((arr_4 [i_1]), (((/* implicit */int) max((arr_3 [i_1]), (arr_0 [i_0 - 1])))));
                arr_5 [i_0 - 2] [i_1] [i_0 - 2] = (unsigned short)31205;
                var_20 = min(((+(arr_4 [i_0 - 2]))), (((/* implicit */int) ((unsigned char) arr_4 [i_0 - 2]))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) var_4);
}
