/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170926
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
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_1] [i_1] [i_1] = max((((/* implicit */unsigned long long int) max((arr_2 [i_0 + 3]), (arr_2 [i_0 - 2])))), (max((((/* implicit */unsigned long long int) arr_0 [i_1])), (((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */unsigned long long int) arr_7 [i_0 + 1] [(_Bool)1] [(_Bool)1] [i_0])) : (var_0))))));
                    var_17 *= ((/* implicit */short) ((signed char) ((short) arr_3 [i_0] [i_1] [i_2])));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_3 = 0; i_3 < 13; i_3 += 3) 
    {
        for (unsigned long long int i_4 = 3; i_4 < 11; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 1; i_5 < 11; i_5 += 1) 
            {
                {
                    arr_18 [i_4] [i_4 + 1] [i_3] [i_3] = max((((((/* implicit */_Bool) ((unsigned long long int) arr_16 [i_3]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_3 [i_3] [i_3] [i_5])))) : (arr_7 [4ULL] [4ULL] [i_5] [i_5]))), (((/* implicit */unsigned int) min(((-(((/* implicit */int) (short)-19118)))), (var_9)))));
                    var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [4ULL])) ? (((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)206)), (arr_3 [i_3] [i_4] [i_5 + 1])))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_9 [i_3] [i_5 + 2] [i_5] [i_4 - 1])))) : (((/* implicit */int) arr_15 [i_3]))));
                }
            } 
        } 
    } 
}
