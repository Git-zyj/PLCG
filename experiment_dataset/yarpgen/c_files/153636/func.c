/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153636
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
    var_11 = ((/* implicit */_Bool) 8191U);
    var_12 = ((/* implicit */unsigned char) var_8);
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_7 [i_1] [i_0] [i_0] [i_2] = ((/* implicit */int) (unsigned char)20);
                    var_13 = ((/* implicit */long long int) (unsigned char)255);
                }
            } 
        } 
    } 
    var_14 += ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) var_6))));
}
