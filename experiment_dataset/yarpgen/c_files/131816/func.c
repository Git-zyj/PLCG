/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131816
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_3 [6LL] = ((/* implicit */long long int) arr_0 [(short)14] [i_0]);
        arr_4 [3U] |= ((/* implicit */int) ((unsigned long long int) ((unsigned int) -9223372036854775784LL)));
    }
    var_13 = ((/* implicit */short) var_10);
    /* LoopNest 3 */
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            for (int i_3 = 1; i_3 < 14; i_3 += 3) 
            {
                {
                    arr_13 [i_1] [i_1] [10LL] = ((((/* implicit */_Bool) ((arr_10 [10ULL] [i_2] [i_3] [i_3]) / (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)195)))))))) ? (arr_6 [i_1]) : (((((/* implicit */_Bool) arr_12 [i_3 + 3] [i_3 + 2] [5ULL] [i_3])) ? (var_4) : (((/* implicit */int) arr_12 [i_3 - 1] [i_3 + 2] [i_3] [i_3])))));
                    arr_14 [(signed char)12] [i_2] [i_3] &= ((/* implicit */short) (+((~(((unsigned long long int) -1812336567))))));
                    arr_15 [(unsigned short)2] [(signed char)11] [i_1] [i_1] = ((/* implicit */unsigned short) arr_1 [14ULL]);
                }
            } 
        } 
    } 
}
