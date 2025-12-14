/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121336
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 20; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */int) max((var_14), (var_0)));
                                var_15 = ((/* implicit */unsigned short) ((((3ULL) >> (((((/* implicit */int) arr_10 [i_3] [i_3 + 2] [i_3] [i_3])) - (249))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_10))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) ((short) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (unsigned short)65535)))));
}
