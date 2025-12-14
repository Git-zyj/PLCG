/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113422
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
    for (int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_11 [0ULL] [i_3 + 3] [i_3] [i_3] [0ULL] [i_3] = (unsigned char)117;
                                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((unsigned char) (short)32754)))));
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((_Bool) var_4)) ? (((((/* implicit */int) (short)18899)) - (((/* implicit */int) arr_0 [i_0 + 2])))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_0 [i_0 + 2]))))));
                }
            } 
        } 
    } 
    var_21 = var_13;
}
