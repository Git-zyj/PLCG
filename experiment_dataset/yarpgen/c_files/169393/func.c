/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169393
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
    var_18 = ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_10 [6LL] [(unsigned short)11] [10] [(short)10] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_4 [i_0 - 3])) ? (arr_4 [i_0 - 3]) : (arr_4 [i_0 + 1]))) > (((((/* implicit */_Bool) 13978022263978250358ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65514))) : (arr_4 [i_0 + 1])))));
                    var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 - 3] [i_1] [7U]))) : (arr_1 [i_0 + 2])))) ? (arr_1 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0 + 1] [5U]))));
                }
            } 
        } 
    } 
}
