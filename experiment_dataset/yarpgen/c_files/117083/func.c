/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117083
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
    var_11 ^= ((/* implicit */unsigned char) ((((((/* implicit */int) (short)-1)) + (2147483647))) >> (((((/* implicit */int) var_5)) - (97)))));
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((min((-76140496), (((/* implicit */int) var_1)))) > (((/* implicit */int) var_0)))))) <= (min((((/* implicit */unsigned int) min((var_1), (var_5)))), ((-(var_8)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            {
                var_13 += ((/* implicit */unsigned char) ((signed char) min((((((/* implicit */int) arr_3 [(signed char)11])) >> (((arr_1 [i_0] [(signed char)21]) - (5137127892923055527ULL))))), ((~(((/* implicit */int) arr_2 [i_1 + 1])))))));
                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) (unsigned char)222))));
            }
        } 
    } 
}
