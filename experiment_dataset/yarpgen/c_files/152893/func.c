/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152893
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
    var_11 = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_10)), (((long long int) var_1))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_0 [i_2 - 1]))))))) != (((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned char)176), ((unsigned char)79)))))))));
                    var_12 = arr_3 [i_1];
                }
            } 
        } 
    } 
    var_13 ^= ((/* implicit */_Bool) var_1);
}
