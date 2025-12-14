/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179548
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned char) ((max((((long long int) arr_1 [i_0] [5ULL])), (((/* implicit */long long int) ((arr_0 [i_1]) != (((/* implicit */unsigned long long int) -499628953179362158LL))))))) % (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                var_21 = ((/* implicit */long long int) (((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) | (arr_3 [i_1] [i_0] [i_0]))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 2) 
    {
        for (int i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    var_22 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) <= (((unsigned long long int) (unsigned char)0))));
                    arr_13 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) arr_7 [i_3]);
                }
                var_23 = ((/* implicit */unsigned char) 134216704);
                arr_14 [i_2] [i_2] [i_2] = ((long long int) (+(((/* implicit */int) (unsigned char)246))));
                var_24 += ((/* implicit */long long int) var_17);
            }
        } 
    } 
}
