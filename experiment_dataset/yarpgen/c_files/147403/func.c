/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147403
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
    var_13 = ((/* implicit */unsigned short) (_Bool)1);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [10U])) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)7), (((/* implicit */unsigned char) (_Bool)1)))))) : (3814811736U))) ^ (max((var_6), (((/* implicit */unsigned int) arr_2 [i_1]))))));
                    var_15 = ((/* implicit */unsigned char) ((var_2) >> ((((((+(var_4))) + (((/* implicit */unsigned long long int) arr_1 [i_0])))) - (17772167178613541342ULL)))));
                }
            } 
        } 
    } 
}
