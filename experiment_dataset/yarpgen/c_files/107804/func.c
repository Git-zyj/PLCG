/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107804
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
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_8 [i_0] = ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)116)) && (((/* implicit */_Bool) (short)-23908))))) != (min((((/* implicit */int) arr_4 [i_0 - 2] [i_0])), (((((/* implicit */int) var_12)) % (((/* implicit */int) var_10)))))));
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((unsigned char) var_14))) ? (((((/* implicit */int) (short)23935)) | (((/* implicit */int) arr_7 [i_0] [i_0 - 1])))) : (((/* implicit */int) ((short) (short)-10795)))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned char) min((var_11), (((unsigned short) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_14)))))));
}
