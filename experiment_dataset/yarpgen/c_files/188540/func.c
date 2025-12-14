/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188540
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [(_Bool)1] [14U] [(_Bool)1] [i_2] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (2970567778U)))) ? (max((-4970466998630463123LL), (((/* implicit */long long int) arr_6 [i_0] [i_0])))) : (((/* implicit */long long int) min((1324399517U), (((/* implicit */unsigned int) arr_2 [i_0]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_10 = ((/* implicit */unsigned int) max((1674607266), (arr_9 [i_4 + 1] [i_3] [i_2] [i_1] [i_0])));
                                var_11 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) 3500649938U)) ? (2064999469U) : (((/* implicit */unsigned int) 1847668912))))), (((((/* implicit */_Bool) 2064999473U)) ? (4970466998630463127LL) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0])))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (arr_5 [i_4 + 1] [i_4 + 1] [i_4 + 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((895994185306925880LL) >= (((/* implicit */long long int) 89564277)))))));
}
