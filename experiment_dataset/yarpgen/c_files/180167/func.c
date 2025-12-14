/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180167
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (long long int i_2 = 4; i_2 < 21; i_2 += 3) 
            {
                {
                    var_15 = min((((((/* implicit */_Bool) min(((unsigned short)54781), ((unsigned short)59455)))) ? (arr_4 [i_0]) : (((/* implicit */int) ((arr_2 [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) var_3)))))))), (((/* implicit */int) arr_1 [i_0] [i_2])));
                    arr_7 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)-28818))));
                    var_16 ^= ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)43726)) ? (2147483647) : (((/* implicit */int) (short)28838)))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) var_8);
}
