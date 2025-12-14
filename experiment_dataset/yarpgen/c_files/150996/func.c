/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150996
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned char i_2 = 3; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_2 + 1] [i_2 + 1]))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_4 [i_2 - 3] [i_2 - 3] [i_2 - 3]), (arr_4 [i_2 - 1] [i_2] [17ULL]))))) : ((~(min((((/* implicit */long long int) arr_0 [i_0])), (arr_2 [i_0])))))));
                    arr_9 [i_0] [i_2] [(short)11] = ((/* implicit */long long int) ((signed char) ((((/* implicit */int) arr_4 [i_2] [i_2] [i_2 - 1])) | (((/* implicit */int) var_12)))));
                    arr_10 [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_0 [(signed char)11])) ? (((/* implicit */int) arr_4 [i_0] [i_1] [(short)22])) : (((/* implicit */int) arr_0 [i_0]))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_2 + 1]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2 + 1] [11LL] [i_0]))) | (var_2)))));
                }
            } 
        } 
    } 
    var_14 |= var_6;
    var_15 ^= ((/* implicit */long long int) var_4);
}
