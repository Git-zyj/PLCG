/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122735
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
    for (long long int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_12 |= 3U;
                arr_6 [i_0 - 1] [i_1] [i_0 - 1] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_3 [i_0 - 2])) + (4398046511088ULL)))) ? (((arr_0 [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0 + 1]))) : (arr_3 [i_1]))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0 + 1] [i_0 - 2])) ? (arr_1 [i_0 - 2]) : (arr_1 [i_1]))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        var_13 = ((/* implicit */unsigned int) (-((-(18446739675663040530ULL)))));
        arr_9 [i_2] = ((/* implicit */unsigned int) min((((arr_8 [i_2]) ^ (7539929384813102769LL))), (((/* implicit */long long int) ((unsigned int) arr_8 [i_2])))));
        arr_10 [i_2] [i_2] &= arr_8 [i_2];
    }
}
