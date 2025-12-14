/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174520
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
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) (~(max((var_11), ((~(((/* implicit */int) arr_1 [i_0] [i_0]))))))));
                arr_7 [i_0 - 3] = ((/* implicit */int) ((arr_2 [(signed char)21] [i_0]) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (signed char)11)) == (((/* implicit */int) (signed char)-115))))) & (((/* implicit */int) (short)28767))))) : (var_6)));
                var_19 = min((8500387203497520429LL), (((/* implicit */long long int) (signed char)21)));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) (+(var_15)));
}
