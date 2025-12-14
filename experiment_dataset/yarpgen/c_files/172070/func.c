/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172070
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
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) min((max((((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_0 [i_0]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) -2144921949))))))), (((/* implicit */unsigned int) 2144921949))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        for (int i_4 = 2; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) 583880685)) ? (564847955U) : (0U))));
                                var_22 = ((unsigned int) (~(-1765494560970589587LL)));
                                arr_13 [i_1] [i_1] [i_4] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned short)63190)) ? (arr_4 [i_0 - 1] [i_1 + 2]) : (arr_5 [i_1] [i_1 - 2] [i_3 + 2])))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) (+(-91109400)))))));
                    arr_14 [i_1] = ((/* implicit */int) ((unsigned int) min((((((/* implicit */_Bool) 2362026597U)) ? (arr_9 [i_0] [i_1] [i_2] [i_2]) : (arr_9 [i_0 - 3] [i_0 - 3] [i_2] [i_0 - 3]))), (((/* implicit */int) ((unsigned short) var_6))))));
                }
            } 
        } 
    }
    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) var_9))));
}
