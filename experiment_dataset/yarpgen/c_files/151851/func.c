/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151851
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
    for (short i_0 = 4; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) var_3);
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 10; i_2 += 1) 
                {
                    for (short i_3 = 2; i_3 < 9; i_3 += 2) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)0))));
                            arr_14 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */short) ((long long int) (-(((((/* implicit */int) var_7)) - (-1917609070))))));
                            arr_15 [i_1] [i_1] [i_1] = ((/* implicit */long long int) (_Bool)1);
                        }
                    } 
                } 
                arr_16 [i_1] = ((/* implicit */signed char) ((long long int) arr_5 [(short)8] [i_1] [6U]));
            }
        } 
    } 
    var_21 &= ((/* implicit */_Bool) var_15);
}
