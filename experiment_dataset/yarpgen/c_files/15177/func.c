/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15177
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
    var_10 = var_5;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_3 [0] [i_2] [i_2 - 3])) : (((/* implicit */int) arr_5 [4U] [i_2 + 1] [i_2] [i_2 - 3])))) ^ (((/* implicit */int) ((((/* implicit */int) arr_5 [10] [i_2 - 1] [i_2 - 1] [i_2 - 2])) <= (((/* implicit */int) arr_1 [(unsigned short)4]))))))))));
                    arr_6 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
                    arr_7 [i_0] [i_0] [(_Bool)1] |= ((/* implicit */unsigned int) (+((-(((/* implicit */int) (signed char)122))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned char) var_2);
}
