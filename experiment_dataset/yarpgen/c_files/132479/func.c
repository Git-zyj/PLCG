/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132479
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            {
                arr_4 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))));
                var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (13583352201257427078ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */int) (short)31)) < (((/* implicit */int) arr_1 [i_0] [i_0]))))), (var_9))))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6)))))));
    var_13 = ((/* implicit */unsigned long long int) var_9);
}
