/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123676
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
    for (long long int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    var_15 = ((/* implicit */unsigned short) (!((!((!(((/* implicit */_Bool) (unsigned char)222))))))));
                    var_16 = (-((~(((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))));
                }
                var_17 -= ((/* implicit */long long int) (~((~((~(((/* implicit */int) var_6))))))));
                var_18 = ((/* implicit */unsigned short) (~((~((~(((/* implicit */int) (unsigned char)33))))))));
            }
        } 
    } 
    var_19 = (~((+((~(1686649986))))));
}
