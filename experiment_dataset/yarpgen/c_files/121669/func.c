/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121669
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
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1] = ((/* implicit */unsigned char) ((_Bool) (!(((/* implicit */_Bool) 14587247645427856350ULL)))));
                    var_19 ^= ((/* implicit */short) arr_7 [i_0] [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_12)))) <= (min((((/* implicit */unsigned long long int) ((unsigned char) (_Bool)0))), (max((3859496428281695266ULL), (((/* implicit */unsigned long long int) (unsigned char)50))))))));
}
