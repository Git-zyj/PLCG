/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149149
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
    var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_3)), (((((/* implicit */int) var_3)) / (var_10))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 4; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_0] = (((((-(((/* implicit */int) arr_6 [i_0] [i_2] [i_2 - 4] [i_0])))) + (2147483647))) << (((((unsigned long long int) 1278228103)) - (1278228103ULL))));
                    var_13 = ((/* implicit */short) (!((!((!(((/* implicit */_Bool) arr_2 [i_0]))))))));
                    arr_9 [i_2 - 3] [2] [i_0] |= ((/* implicit */long long int) ((((((/* implicit */int) arr_6 [0] [4LL] [i_2 - 2] [0])) != (((/* implicit */int) arr_6 [10] [i_2] [i_2 + 2] [10])))) || (((/* implicit */_Bool) ((arr_6 [8LL] [i_2] [i_2 + 2] [8LL]) ? (((/* implicit */int) arr_6 [(_Bool)1] [i_2 - 2] [i_2 - 4] [(_Bool)1])) : (((/* implicit */int) arr_6 [10ULL] [i_2 + 2] [i_2 - 1] [10ULL])))))));
                }
            } 
        } 
    } 
}
