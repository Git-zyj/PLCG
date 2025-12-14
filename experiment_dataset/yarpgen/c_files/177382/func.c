/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177382
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
    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((((((/* implicit */int) var_4)) ^ (((/* implicit */int) ((short) (short)-5341))))) + (((/* implicit */int) ((short) ((long long int) (unsigned short)23517)))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_11 [i_0] [i_2] [i_2] = arr_10 [i_2 + 1] [i_2] [i_1] [i_0];
                    arr_12 [i_0] [i_0 + 3] [(unsigned short)1] = ((/* implicit */unsigned long long int) ((short) max(((unsigned short)27772), (((/* implicit */unsigned short) (!(arr_8 [i_0] [i_1] [i_2])))))));
                    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((11LL) - (((/* implicit */long long int) 0U))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)62250)) ? (-13LL) : (-4595015638967392341LL)));
}
