/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10716
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
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            arr_12 [i_0] [0ULL] [i_0 - 3] [i_3] [0ULL] &= ((/* implicit */signed char) var_7);
                            var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) -4202944036523376595LL)))));
                            var_14 = ((/* implicit */unsigned short) (signed char)127);
                        }
                    } 
                } 
                var_15 = (unsigned char)15;
            }
        } 
    } 
    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) 12159134855560146296ULL))));
    var_17 = ((/* implicit */unsigned short) var_6);
    var_18 = ((/* implicit */unsigned short) var_3);
}
