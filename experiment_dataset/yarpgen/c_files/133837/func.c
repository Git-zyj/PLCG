/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133837
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
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned char) var_4);
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (624208940U)));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            var_12 |= ((/* implicit */long long int) 624208940U);
            arr_6 [i_0 - 1] [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_1 - 3] [i_0 - 1])) ? (((/* implicit */int) arr_5 [i_1 - 3] [i_0 - 1])) : (((/* implicit */int) arr_5 [i_1 - 3] [i_0 - 1]))));
        }
        var_13 = ((/* implicit */_Bool) (~(((((var_1) + (9223372036854775807LL))) >> (((arr_1 [i_0 - 1]) - (17668993277355398976ULL)))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_2 = 3; i_2 < 21; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                arr_12 [i_2] = ((/* implicit */signed char) max((((long long int) arr_11 [i_2 - 3] [i_2 - 1])), (((/* implicit */long long int) max(((short)-32745), (((/* implicit */short) (signed char)-20)))))));
                arr_13 [14ULL] [i_2] [i_2] = ((/* implicit */signed char) min((((/* implicit */int) var_8)), (((((/* implicit */int) arr_11 [i_2] [i_3])) - (((/* implicit */int) var_9))))));
            }
        } 
    } 
}
