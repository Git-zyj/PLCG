/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172068
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
    var_16 = ((/* implicit */signed char) (+((~(((/* implicit */int) var_15))))));
    var_17 = 1023373158;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [(short)5] |= (+(((/* implicit */int) (signed char)-59)));
                var_18 -= ((/* implicit */signed char) var_15);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) 838575457282327018ULL);
                            arr_12 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */int) (_Bool)1);
                        }
                    } 
                } 
            }
        } 
    } 
}
