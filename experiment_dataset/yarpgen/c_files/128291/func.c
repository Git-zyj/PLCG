/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128291
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
    var_18 -= ((/* implicit */signed char) var_14);
    var_19 = ((/* implicit */_Bool) var_2);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_3] [i_2] [i_3] [i_4] = ((/* implicit */short) (-(arr_2 [i_0])));
                                var_20 *= ((/* implicit */_Bool) (~((~(min((0ULL), (((/* implicit */unsigned long long int) var_5))))))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */unsigned int) var_14);
                var_22 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) ^ (345296338U)));
            }
        } 
    } 
}
