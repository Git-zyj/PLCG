/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145425
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
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) (~(0LL))))) != (((/* implicit */int) var_9)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 24; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 23; i_2 += 1) 
            {
                {
                    var_20 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_6 [16LL]), (arr_6 [16LL]))))));
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_1 + 1] [i_2 + 2] [i_2])))));
                    arr_10 [i_0] [19ULL] [i_0] = ((/* implicit */long long int) arr_0 [i_1 - 1]);
                }
            } 
        } 
    } 
}
