/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159583
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        var_10 = ((/* implicit */unsigned long long int) ((((arr_3 [i_0 + 1]) | (arr_3 [i_0 + 1]))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || ((!(((/* implicit */_Bool) arr_3 [i_0 + 2])))))))));
        arr_4 [i_0] = ((/* implicit */signed char) arr_1 [i_0 + 3]);
        arr_5 [i_0 + 3] [i_0 + 3] = ((/* implicit */signed char) arr_0 [i_0 - 1]);
    }
    /* LoopNest 2 */
    for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_6 [i_2 - 1] [i_2])) != (((/* implicit */int) arr_6 [i_2 - 1] [i_2]))))) | ((+(((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 1]))))));
                var_12 += (+(((((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 1])) | (((/* implicit */int) arr_6 [i_2 - 1] [5U])))));
            }
        } 
    } 
}
