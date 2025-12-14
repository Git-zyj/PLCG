/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153814
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
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) * (arr_5 [i_0] [(signed char)11]))))))));
                var_19 = ((/* implicit */unsigned char) max((var_19), (var_14)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 4; i_2 < 14; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            {
                arr_10 [i_3] [i_3] = ((/* implicit */unsigned char) (-((~((+(((/* implicit */int) var_0))))))));
                arr_11 [i_2] [i_3] = ((/* implicit */long long int) var_16);
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_4 = 3; i_4 < 19; i_4 += 1) 
    {
        arr_14 [i_4] = ((/* implicit */short) (~(arr_13 [i_4] [i_4])));
        arr_15 [i_4] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_13 [i_4] [i_4 - 2]))));
    }
}
