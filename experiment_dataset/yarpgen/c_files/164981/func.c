/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164981
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
    for (short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [i_1] [5U] = ((/* implicit */unsigned int) arr_2 [i_2]);
                    arr_8 [15LL] [i_1] = ((/* implicit */short) arr_0 [(signed char)13]);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        arr_12 [i_3] = ((/* implicit */int) ((long long int) 2147483647));
        arr_13 [i_3] = ((/* implicit */_Bool) (+(max((((/* implicit */int) arr_6 [i_3] [i_3] [i_3] [i_3])), (((((/* implicit */int) arr_6 [i_3] [(short)6] [i_3] [(short)6])) + (((/* implicit */int) arr_10 [i_3] [i_3]))))))));
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
    {
        var_17 = ((((/* implicit */_Bool) arr_0 [i_4])) ? ((-(var_6))) : (((/* implicit */int) var_5)));
        var_18 = ((/* implicit */short) (~(((/* implicit */int) arr_9 [i_4] [i_4]))));
        arr_17 [i_4] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)38377))));
    }
}
