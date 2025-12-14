/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184310
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
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) 14930133942640195611ULL))) ? ((-(max((3922888918U), (((/* implicit */unsigned int) var_4)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))))) ? (min((((/* implicit */int) (short)-13664)), (995737197))) : (((/* implicit */int) (unsigned char)194)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned int) ((unsigned long long int) min((arr_1 [i_0 - 1]), (var_1))));
                arr_5 [i_0] &= ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)28234)), (63)));
                var_13 = ((/* implicit */int) min((((arr_2 [i_0] [i_0]) | (arr_2 [(unsigned short)12] [i_0 - 1]))), (((unsigned long long int) arr_2 [i_0] [i_1]))));
            }
        } 
    } 
}
