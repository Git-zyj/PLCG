/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120229
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
    var_11 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) var_6)), (418291690U)))) : (var_3))));
    var_12 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */signed char) arr_6 [i_0]);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned short i_3 = 4; i_3 < 9; i_3 += 2) 
                    {
                        {
                            arr_12 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) (-(((long long int) max((((/* implicit */long long int) (unsigned char)0)), (11LL))))));
                            arr_13 [i_2] [i_1] [i_0] = ((long long int) arr_9 [3U] [i_1]);
                            var_14 = var_0;
                        }
                    } 
                } 
                arr_14 [i_0] [i_1] = arr_1 [i_0 + 1];
            }
        } 
    } 
}
