/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181361
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */int) var_8);
                var_12 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_3 [i_0]))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */int) 4294967295U);
                            var_14 = ((arr_0 [i_3]) || ((!(((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) 2182040373U))))))));
                        }
                    } 
                } 
                arr_11 [i_1] = ((unsigned int) arr_2 [i_1]);
            }
        } 
    } 
    var_15 *= var_9;
}
