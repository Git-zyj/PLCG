/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135144
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
    var_17 = ((/* implicit */signed char) (-(((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            {
                var_18 -= ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) ((short) arr_0 [(unsigned short)17] [i_1 + 2])))))));
                arr_5 [i_1] [(signed char)6] [11U] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446462598732840960ULL)) ? (((/* implicit */long long int) 1269684458U)) : (arr_4 [i_0] [i_1] [16])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_3 [i_0] [i_1] [i_0])))) : (max((arr_3 [i_0] [i_1] [i_1]), (((/* implicit */unsigned int) arr_0 [i_0] [i_0])))))));
            }
        } 
    } 
}
