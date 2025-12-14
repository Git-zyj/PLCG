/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10763
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
        arr_4 [i_0] = arr_1 [i_0] [i_0];
        arr_5 [4] [4] &= arr_2 [i_0] [i_0];
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */int) arr_7 [i_1]);
        arr_9 [i_1] = ((/* implicit */unsigned int) arr_6 [6LL]);
    }
    var_11 = ((/* implicit */_Bool) var_1);
    /* LoopSeq 2 */
    for (int i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            arr_15 [i_2] |= ((/* implicit */signed char) min((arr_14 [i_2]), (arr_11 [i_2])));
            arr_16 [i_3] = ((/* implicit */signed char) max((max((arr_14 [i_3]), (((/* implicit */long long int) arr_7 [i_2])))), (max((((/* implicit */long long int) arr_13 [i_3])), (max((arr_11 [i_2]), (((/* implicit */long long int) arr_13 [i_3]))))))));
            arr_17 [i_3] = ((/* implicit */unsigned short) min((arr_11 [i_2]), (((/* implicit */long long int) arr_10 [i_2]))));
            arr_18 [i_2] [i_2] [i_3] &= max((((/* implicit */long long int) arr_12 [i_2] [i_2] [i_2])), (max((arr_11 [i_2]), (max((arr_14 [i_2]), (((/* implicit */long long int) arr_12 [i_2] [i_3] [i_2])))))));
        }
        arr_19 [i_2] = arr_14 [i_2];
    }
    /* vectorizable */
    for (int i_4 = 4; i_4 < 15; i_4 += 3) 
    {
        arr_23 [2LL] = ((/* implicit */int) arr_7 [i_4]);
        arr_24 [6LL] = arr_10 [i_4];
    }
}
