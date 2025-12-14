/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165753
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
    var_19 = ((/* implicit */int) min((var_19), (max((((/* implicit */int) var_1)), (var_5)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */int) ((_Bool) (+(((/* implicit */int) arr_7 [i_1] [i_0] [i_2])))));
                                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_6))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_1] = ((/* implicit */int) (+(((1344188112U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)102)))))));
            }
        } 
    } 
}
