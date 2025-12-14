/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103265
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
    var_11 = ((/* implicit */unsigned char) max((var_7), (((/* implicit */int) var_5))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) (-(arr_0 [i_1])));
                    arr_8 [i_0] [1] [i_1 + 1] [1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)165)), ((unsigned short)65521))))))), ((-(8651968148754733407ULL)))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */int) ((min((((/* implicit */unsigned int) var_10)), (606874858U))) << (((((/* implicit */int) var_10)) - (16503)))));
    var_14 -= ((/* implicit */long long int) var_6);
}
