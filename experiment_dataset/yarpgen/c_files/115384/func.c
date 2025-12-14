/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115384
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
    var_11 = ((/* implicit */_Bool) var_10);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 17; i_2 += 3) 
                {
                    for (long long int i_3 = 3; i_3 < 17; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_2] [i_3 - 2] [i_3 - 3] [i_1] = ((/* implicit */short) (~((-((~(((/* implicit */int) var_2))))))));
                            arr_11 [i_0] [i_3 - 1] [i_3 - 1] [i_3] [i_0] [i_2] = ((/* implicit */unsigned int) var_7);
                        }
                    } 
                } 
                arr_12 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(var_0)));
            }
        } 
    } 
}
