/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159613
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
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) arr_2 [i_0]);
        arr_5 [i_0] [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
    }
    /* LoopNest 3 */
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        for (unsigned int i_2 = 3; i_2 < 12; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        arr_17 [i_1] [i_1] = ((/* implicit */long long int) (_Bool)1);
                        var_20 = ((/* implicit */unsigned long long int) arr_16 [i_1] [i_2 - 2] [i_3] [i_4] [i_4]);
                    }
                    arr_18 [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((1U) >> (((((/* implicit */int) (unsigned short)62395)) - (62388)))))) ? ((-(((/* implicit */int) arr_10 [i_2] [i_2])))) : (((/* implicit */int) (short)-13527))))));
                }
            } 
        } 
    } 
}
