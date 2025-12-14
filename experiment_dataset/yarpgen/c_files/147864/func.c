/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147864
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
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_8))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) ((4503599618981888LL) < (((/* implicit */long long int) ((/* implicit */int) var_3))))))) : (arr_3 [i_1] [i_0])))) ? (((/* implicit */int) ((signed char) min((3216547865640872962LL), (((/* implicit */long long int) (_Bool)1)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1])))))));
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) var_7);
            }
        } 
    } 
    var_21 &= ((/* implicit */long long int) var_2);
    var_22 = ((/* implicit */long long int) (short)-24273);
}
