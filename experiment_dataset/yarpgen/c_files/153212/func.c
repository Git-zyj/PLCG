/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153212
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
    var_11 = ((/* implicit */_Bool) 458752);
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) (short)12288)) || (((/* implicit */_Bool) (short)12288))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */int) ((0ULL) << (((((((/* implicit */_Bool) (short)-12288)) ? (arr_1 [i_0 - 1]) : (((/* implicit */unsigned long long int) arr_0 [i_0 + 1])))) - (16493609464349721956ULL)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 4; i_2 < 20; i_2 += 2) 
                {
                    arr_9 [i_1] [11LL] [i_2 - 3] [i_1] = (+(((/* implicit */int) (short)-12289)));
                    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) var_7))) ? (arr_8 [i_0 - 1] [i_2 - 2] [i_2 + 1] [i_1]) : (arr_8 [12] [i_2 - 4] [i_2] [i_1])));
                }
                var_14 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (min((arr_3 [i_0 + 2]), (arr_7 [i_0] [11LL] [(signed char)2]))) : (arr_0 [(short)0]))), (((/* implicit */int) (short)12298))));
            }
        } 
    } 
}
