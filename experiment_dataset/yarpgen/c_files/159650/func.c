/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159650
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                var_13 -= ((/* implicit */signed char) arr_2 [(signed char)1] [i_1 + 3] [i_1 + 4]);
                var_14 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_0 [i_0]))))));
                arr_4 [i_0] [15] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)33)), (1501736015U)))) ? (((((/* implicit */int) (short)-18)) + (((/* implicit */int) arr_1 [i_0])))) : ((+(arr_2 [i_0] [i_0] [i_0])))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_9)) : ((+(var_7))))));
    var_16 = (((+(2145508780U))) % (((/* implicit */unsigned int) 70649410)));
}
