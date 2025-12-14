/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166344
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
    var_10 = ((/* implicit */int) ((unsigned long long int) (-(((-1577076856) + (2147483647))))));
    var_11 = ((/* implicit */int) var_0);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */long long int) (+(arr_0 [i_0])));
                var_13 = ((/* implicit */short) (((~(arr_0 [i_0 + 4]))) + (((int) ((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) arr_5 [i_1])))))));
            }
        } 
    } 
    var_14 -= ((/* implicit */int) var_8);
}
