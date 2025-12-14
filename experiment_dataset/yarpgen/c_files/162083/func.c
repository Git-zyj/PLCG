/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162083
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
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) var_7))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 4; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) min((var_14), (var_12)));
                                arr_13 [i_0] [(unsigned short)0] [(_Bool)1] [i_2] [i_0] [5ULL] [i_4] = ((/* implicit */short) (-(max((418187850U), (((/* implicit */unsigned int) ((0ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32704))))))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */short) var_5);
                }
            } 
        } 
    } 
}
