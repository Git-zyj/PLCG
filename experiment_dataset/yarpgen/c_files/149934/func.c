/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149934
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 20; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0] [i_1 - 1] [i_2 - 2] [i_3] [i_0] [i_3 + 1] [i_0] |= ((/* implicit */unsigned long long int) (!(arr_3 [i_0] [i_0] [i_3])));
                                arr_12 [i_3] [i_3] [i_3 - 1] [i_1] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) arr_2 [i_0] [i_0])) << (((/* implicit */int) (_Bool)1)))));
                                arr_13 [i_0] [i_1] [10U] [i_3] [i_4] [i_4] = ((/* implicit */unsigned int) ((signed char) arr_8 [i_0] [i_1] [i_2] [i_3] [i_4]));
                            }
                        } 
                    } 
                    arr_14 [i_1] [i_0] [i_1] [i_0] = ((/* implicit */long long int) ((4294967295U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_1 - 1] [i_1] [i_0] [i_0])))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */_Bool) ((short) 15812812634420732287ULL));
    var_12 = ((/* implicit */unsigned short) ((15812812634420732287ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
}
