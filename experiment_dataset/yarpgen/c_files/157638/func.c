/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157638
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
    var_14 |= ((/* implicit */unsigned char) ((short) (~((-(((/* implicit */int) (signed char)-105)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_7 [2LL] [2LL] [0U] [i_2] |= ((/* implicit */unsigned int) (~(arr_4 [1ULL] [i_1])));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_0 [i_2 - 1])))) ? (arr_0 [i_2 + 3]) : (min((arr_0 [i_2 + 2]), (arr_0 [i_2 - 1])))));
                }
            } 
        } 
    } 
}
