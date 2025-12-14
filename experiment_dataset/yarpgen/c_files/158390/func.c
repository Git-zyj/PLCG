/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158390
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
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                var_10 = ((int) ((((/* implicit */_Bool) arr_1 [i_1 + 1] [1U])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 + 2] [i_0 + 1]))) : (9223372036854775807LL)));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */_Bool) arr_10 [i_0] [i_1] [15U] [(signed char)2] [i_3] [(_Bool)1] [i_4]);
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) 4271916477U);
                            }
                        } 
                    } 
                } 
                arr_13 [6] &= ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_0]))));
                var_12 = ((/* implicit */unsigned char) 23050819U);
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) (~(((/* implicit */int) var_6))));
}
