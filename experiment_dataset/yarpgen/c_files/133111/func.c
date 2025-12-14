/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133111
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (!(((((unsigned int) var_9)) == (var_17))))))));
                    arr_10 [i_0] [14LL] [0U] [i_2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_0] [i_2])) ? (arr_3 [i_2] [i_1]) : (arr_3 [i_0] [i_2]))) | (arr_3 [i_1] [(unsigned short)1])));
                }
            } 
        } 
    } 
    var_19 -= ((/* implicit */short) var_11);
}
