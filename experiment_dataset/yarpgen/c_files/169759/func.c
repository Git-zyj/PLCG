/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169759
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
    var_20 = ((/* implicit */unsigned char) var_14);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_4 [i_0] [(unsigned char)0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)32768)), (arr_2 [i_1] [i_0])))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (unsigned short)32785)) : (arr_3 [i_1]))) : (((((/* implicit */_Bool) (short)-8330)) ? (((/* implicit */int) var_7)) : (631776817)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32791))) : (arr_1 [i_1])));
                var_21 = ((/* implicit */unsigned short) var_2);
            }
        } 
    } 
}
