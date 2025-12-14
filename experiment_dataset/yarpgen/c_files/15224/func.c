/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15224
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
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [11]))));
        var_19 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) arr_1 [i_0])) ^ (arr_0 [9]))))));
        arr_4 [i_0] = ((/* implicit */int) arr_0 [i_0]);
        arr_5 [i_0] = ((/* implicit */long long int) (!(((-423434824) > (423434823)))));
    }
    /* LoopNest 3 */
    for (int i_1 = 3; i_1 < 18; i_1 += 4) 
    {
        for (int i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                {
                    arr_12 [i_1] = ((int) ((int) -423434824));
                    arr_13 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((((/* implicit */long long int) arr_9 [i_1 - 1] [i_1 - 1])) % (arr_0 [i_1 - 1]))) > (((/* implicit */long long int) max((arr_9 [i_1 + 2] [i_1 + 2]), (arr_9 [i_1 - 1] [i_1 - 1]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_4 = 0; i_4 < 22; i_4 += 4) 
    {
        var_20 = arr_14 [i_4];
        arr_16 [i_4] &= (~(arr_14 [i_4]));
        var_21 += ((((arr_1 [i_4]) & (arr_1 [i_4]))) + (((/* implicit */int) ((arr_1 [i_4]) < (arr_2 [14])))));
    }
}
