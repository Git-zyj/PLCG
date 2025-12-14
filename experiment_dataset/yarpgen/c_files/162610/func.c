/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162610
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
    for (int i_0 = 4; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0 - 2] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned char) (_Bool)1);
                                arr_13 [0LL] [i_0] [i_2] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) arr_9 [i_0] [i_0 - 2] [(_Bool)1] [i_3] [i_1])))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] = ((((/* implicit */_Bool) (~((-(((/* implicit */int) (_Bool)1))))))) ? (((((((/* implicit */_Bool) (signed char)-64)) || (((/* implicit */_Bool) arr_2 [i_1])))) ? (((/* implicit */long long int) arr_4 [i_0] [i_0 - 4])) : (((3304709907008302836LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)22535))))))) : (((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) arr_7 [i_0] [i_0] [7U] [i_1])))))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned int) var_9);
}
