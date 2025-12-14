/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105731
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
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_12 &= ((/* implicit */_Bool) arr_1 [i_0] [i_1]);
                /* LoopNest 3 */
                for (unsigned int i_2 = 2; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_13 = (~(((((/* implicit */_Bool) arr_9 [i_2 - 1] [i_1] [i_2] [i_2] [i_4] [i_3 + 1] [i_0])) ? (arr_9 [i_2 + 2] [i_1] [i_2] [i_3 + 1] [i_4] [i_3 - 2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))));
                                var_14 = ((/* implicit */unsigned int) ((unsigned long long int) ((short) var_8)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((short) ((var_2) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (3528046845389380739LL)))))));
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) ((unsigned char) var_3))), (((((/* implicit */_Bool) -3528046845389380738LL)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned short)51894))))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))));
}
