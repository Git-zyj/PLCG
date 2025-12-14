/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111996
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
    var_13 = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned long long int) var_11)), (var_5)))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */short) ((unsigned char) ((unsigned char) var_7)));
                    arr_6 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (signed char)108)) ? (((/* implicit */unsigned int) var_8)) : (arr_2 [i_2]))), (((/* implicit */unsigned int) ((unsigned short) var_5)))));
                    var_15 |= ((/* implicit */long long int) max((((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) (unsigned char)0)))) ^ (((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */int) (signed char)-35)) : (((/* implicit */int) arr_0 [8ULL] [i_0])))))), (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) max((var_2), (((/* implicit */unsigned short) var_7)))))))));
                    arr_7 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((long long int) arr_5 [i_0] [i_1] [i_2])) <= (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_2])) & (((/* implicit */int) arr_0 [1LL] [1LL])))))));
                }
            } 
        } 
    } 
}
