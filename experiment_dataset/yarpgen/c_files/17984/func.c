/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17984
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                var_14 = ((8809089212000068356LL) >> (((arr_3 [18LL]) + (1055445754624563235LL))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_15 += ((/* implicit */long long int) 18446744073709551603ULL);
                            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (-(arr_1 [i_1 - 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) ((var_3) + (max((max((var_0), (var_7))), (((var_3) % (1563558800510266481LL)))))));
    var_18 = var_2;
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 2; i_5 < 12; i_5 += 4) 
        {
            {
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) max((((unsigned long long int) 2981365601575097253LL)), (((/* implicit */unsigned long long int) var_0)))))));
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) arr_8 [i_4] [i_5 - 2] [i_5] [i_5]))));
            }
        } 
    } 
}
