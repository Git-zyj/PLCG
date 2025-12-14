/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175737
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
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? ((+(var_17))) : (((/* implicit */unsigned long long int) var_5)))))));
    var_19 = ((/* implicit */_Bool) var_1);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [1] [i_2] = ((/* implicit */short) (((~(((var_1) | (var_4))))) & (((/* implicit */int) var_3))));
                    var_20 -= ((/* implicit */_Bool) (-(((/* implicit */int) var_8))));
                }
            } 
        } 
    } 
}
