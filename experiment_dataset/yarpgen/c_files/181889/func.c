/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181889
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
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_12 [19] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) (-(max((max((arr_2 [i_0] [i_1]), (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) max((((/* implicit */unsigned short) var_11)), (var_8))))))));
                            arr_13 [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */short) var_12);
                            arr_14 [i_0] [i_1] [i_1] [i_3] = arr_0 [i_2];
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned long long int) arr_3 [i_0]);
                arr_15 [14LL] = ((/* implicit */unsigned short) (((!((!((_Bool)1))))) && ((!(((/* implicit */_Bool) arr_3 [i_0]))))));
            }
        } 
    } 
    var_16 = min((((/* implicit */unsigned long long int) (+(5015185806092267316LL)))), (max(((-(1870304495203734522ULL))), (((/* implicit */unsigned long long int) ((long long int) 0ULL))))));
}
