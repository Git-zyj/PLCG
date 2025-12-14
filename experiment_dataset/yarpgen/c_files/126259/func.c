/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126259
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                {
                    var_10 += ((/* implicit */unsigned int) arr_6 [i_0] [i_1] [(_Bool)1] [(_Bool)0]);
                    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_5 [6ULL] [i_1] [i_2 + 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_5 [(_Bool)1] [i_1] [i_2 - 1])))), (((/* implicit */int) arr_2 [i_0] [i_1] [7ULL])))))));
                    var_12 = (~(((((/* implicit */_Bool) (signed char)-111)) ? (1786818136) : (((/* implicit */int) var_5)))));
                    var_13 ^= max((max((arr_4 [(_Bool)0]), (arr_4 [(signed char)14]))), (max((arr_4 [10]), (arr_4 [(_Bool)0]))));
                }
            } 
        } 
    } 
    var_14 = max((var_3), (((((/* implicit */int) var_6)) | (((/* implicit */int) var_6)))));
    var_15 ^= ((/* implicit */short) ((((/* implicit */int) (signed char)-46)) * (((/* implicit */int) (signed char)-53))));
    var_16 = ((/* implicit */short) var_2);
}
