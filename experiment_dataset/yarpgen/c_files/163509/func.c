/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163509
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
    var_17 *= ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                var_18 += ((/* implicit */short) ((((/* implicit */int) ((unsigned short) var_4))) > (min(((~(((/* implicit */int) (unsigned short)13145)))), (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)50)), ((unsigned char)205))))))));
                var_19 = ((/* implicit */long long int) ((unsigned int) max((4023577524U), (((/* implicit */unsigned int) (unsigned char)216)))));
            }
        } 
    } 
}
