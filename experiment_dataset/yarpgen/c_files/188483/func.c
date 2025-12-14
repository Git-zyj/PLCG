/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188483
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
    var_12 = ((/* implicit */short) var_5);
    var_13 = ((/* implicit */long long int) 0);
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) max((((/* implicit */short) arr_5 [i_0 + 2] [i_0 + 2] [i_0 - 1])), (((short) max((arr_6 [i_1] [(_Bool)1]), (((/* implicit */unsigned long long int) arr_2 [i_1])))))));
                    arr_8 [i_1] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) ((signed char) -3094840938896914928LL));
                    var_15 = ((/* implicit */unsigned long long int) (unsigned short)28818);
                }
            } 
        } 
    } 
}
