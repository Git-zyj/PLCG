/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169902
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
    for (long long int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            for (unsigned char i_2 = 4; i_2 < 17; i_2 += 2) 
            {
                {
                    var_18 = (-(arr_4 [i_1] [i_1]));
                    arr_8 [i_0] [i_1 - 2] [i_2 + 2] [i_1] = ((/* implicit */unsigned int) (-(var_9)));
                    arr_9 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) arr_6 [i_0] [i_1] [(unsigned char)19]);
                    arr_10 [i_1] = ((/* implicit */unsigned short) ((signed char) (unsigned short)51855));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) ((var_12) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1046393318)) ? (-1350376226) : (((/* implicit */int) (short)-3318)))))));
}
