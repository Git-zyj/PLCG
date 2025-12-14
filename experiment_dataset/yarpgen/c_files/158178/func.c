/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158178
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_3 [i_0] [(unsigned char)4]), (arr_1 [i_0] [i_1]))))) | (8393247770251971108ULL)))));
                arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_3 [i_0] [i_0]), (arr_3 [i_1] [i_1]))))) ^ ((+(((((/* implicit */unsigned long long int) arr_2 [9ULL] [7])) / (10053496303457580508ULL)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_8)), (min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) -2021306799)), (var_0)))), (max((10053496303457580507ULL), (var_15)))))));
}
