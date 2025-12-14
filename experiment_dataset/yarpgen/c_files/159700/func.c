/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159700
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */unsigned long long int) 2106702471U)) <= (2878161176543827282ULL))));
                            var_17 = ((/* implicit */unsigned int) (-(max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)33562))))));
                            var_18 = (unsigned short)31985;
                        }
                    } 
                } 
                arr_10 [i_0] [i_0] = ((/* implicit */int) min(((unsigned short)59592), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_1] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_4 [i_0])))))));
                var_19 = ((/* implicit */int) max((((arr_7 [i_1] [4] [i_0] [4] [4]) - (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0] [i_0])) * (((/* implicit */int) var_6)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) (+(max((((/* implicit */unsigned long long int) var_15)), (var_11)))));
    var_21 = ((/* implicit */unsigned int) var_16);
}
