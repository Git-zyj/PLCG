/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113872
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
    var_11 = ((/* implicit */short) ((2135543124U) / (2135543131U)));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                arr_5 [i_1] [(_Bool)1] [i_1] = ((/* implicit */int) (_Bool)0);
                var_12 -= ((/* implicit */_Bool) 2159424193U);
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 20; i_2 += 4) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                {
                    var_13 |= ((/* implicit */unsigned short) 2135543124U);
                    var_14 -= ((/* implicit */long long int) (-(min((((/* implicit */unsigned int) max((arr_8 [(unsigned char)11] [i_3]), (((/* implicit */int) arr_9 [i_2] [i_3] [(unsigned char)10]))))), (((var_0) | (2135543104U)))))));
                }
            } 
        } 
    } 
}
