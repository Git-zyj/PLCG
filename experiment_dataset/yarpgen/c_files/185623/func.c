/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185623
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
    var_11 += ((/* implicit */unsigned short) var_9);
    var_12 &= ((/* implicit */unsigned int) (+(((/* implicit */int) var_3))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 7; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned short) (((+(2850788601U))) % (((/* implicit */unsigned int) ((int) var_6)))));
        var_14 = ((/* implicit */int) ((unsigned long long int) arr_1 [i_0 - 3]));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 4) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned short) arr_4 [i_1] [i_1 - 1]));
        var_15 = (i_1 % 2 == 0) ? (((arr_2 [i_1]) << (((arr_2 [i_1]) - (287753692573529375LL))))) : (((((arr_2 [i_1]) + (9223372036854775807LL))) << (((((((arr_2 [i_1]) - (287753692573529375LL))) + (6204966425511385808LL))) - (23LL)))));
        arr_7 [i_1] = ((/* implicit */signed char) ((arr_2 [i_1]) > (arr_2 [i_1])));
    }
}
