/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106858
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) arr_1 [i_1] [i_0])), (((((/* implicit */_Bool) var_3)) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) var_8))))))));
                arr_5 [(unsigned short)5] [(unsigned short)5] [i_0] = ((/* implicit */unsigned int) var_3);
            }
        } 
    } 
    var_11 = var_10;
}
