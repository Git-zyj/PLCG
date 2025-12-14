/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122926
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
    var_11 = (~(((/* implicit */int) (signed char)32)));
    var_12 = ((/* implicit */unsigned int) ((short) var_6));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */unsigned int) (+((+(18446744073709551597ULL)))));
                    arr_8 [i_0] [i_0] = ((/* implicit */long long int) ((arr_3 [12LL] [i_0] [i_2]) != (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (~(((/* implicit */int) var_5)))))))));
                    var_13 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_9))))));
                    var_14 = ((unsigned int) ((short) arr_4 [i_0 - 1] [i_2 - 1]));
                }
            } 
        } 
    } 
}
