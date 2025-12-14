/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112595
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
    var_19 = ((/* implicit */unsigned short) (unsigned char)8);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0 + 1] [i_1] = ((/* implicit */unsigned int) (short)0);
                var_20 = ((/* implicit */unsigned short) (short)0);
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) (!(((/* implicit */_Bool) (short)-26926)))))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) (-(((/* implicit */int) (unsigned short)15716)))));
            }
        } 
    } 
    var_22 += ((/* implicit */signed char) min((-379660573), (((/* implicit */int) (short)-16109))));
}
