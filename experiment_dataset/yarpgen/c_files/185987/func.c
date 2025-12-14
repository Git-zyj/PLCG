/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185987
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
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) arr_6 [i_0]))));
                var_12 = ((/* implicit */unsigned short) arr_3 [i_1]);
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 1) 
    {
        arr_9 [i_2] [14ULL] |= ((/* implicit */_Bool) ((unsigned int) arr_7 [i_2 + 1]));
        arr_10 [i_2] = ((/* implicit */long long int) ((4294967295U) % (((/* implicit */unsigned int) ((/* implicit */int) (short)-20522)))));
        var_13 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_2 - 1]))));
        var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_2 - 1])) >= (((/* implicit */int) arr_8 [i_2 + 1]))));
    }
    for (unsigned int i_3 = 1; i_3 < 16; i_3 += 3) 
    {
        arr_14 [i_3] = ((/* implicit */short) arr_7 [i_3]);
        var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18795))) * (974361645038769747ULL)));
    }
}
