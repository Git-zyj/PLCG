/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140864
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
    var_13 |= var_8;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 17; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0]))));
                            arr_8 [i_0] [i_1 - 2] [i_0] [i_3] = ((/* implicit */_Bool) arr_3 [i_0] [i_0]);
                            var_15 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-1)) & (3145728))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned short) min((((arr_7 [i_0] [i_1] [i_1] [8U] [i_1 - 1]) >> (((((/* implicit */int) (short)12248)) - (12246))))), (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0])));
            }
        } 
    } 
}
