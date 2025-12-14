/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133938
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
    var_19 = ((/* implicit */unsigned char) ((int) var_12));
    var_20 = -637686056355348644LL;
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned char) var_3);
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) ((max((((((((/* implicit */int) (short)-7620)) + (2147483647))) << (((((/* implicit */int) (unsigned char)182)) - (182))))), (((/* implicit */int) (unsigned char)238)))) | (((/* implicit */int) min(((short)-6214), (((/* implicit */short) arr_2 [i_0 - 1] [i_1])))))));
            arr_7 [i_0] [(unsigned char)4] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)23390)) ? (var_4) : (((/* implicit */int) arr_4 [i_0] [i_0 + 4] [i_0]))));
        }
        for (int i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            arr_10 [i_0] = ((/* implicit */unsigned char) var_18);
            var_22 = ((/* implicit */unsigned int) ((((var_18) - (((/* implicit */int) arr_9 [i_0] [i_2] [i_0])))) - ((+(-2147483646)))));
        }
        var_23 = ((/* implicit */unsigned int) max((max((4833128617108140563ULL), (((/* implicit */unsigned long long int) arr_2 [i_0 - 1] [i_0 + 1])))), (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */unsigned short) arr_1 [(signed char)7] [i_0 + 2])))))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_24 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [21LL] [i_3] [i_3]))));
        var_25 -= ((/* implicit */long long int) (~(((((var_9) + (2147483647))) << (((((((/* implicit */int) arr_9 [i_3] [i_3] [(signed char)10])) + (16792))) - (14)))))));
        arr_13 [13LL] [i_3] = ((/* implicit */unsigned long long int) var_1);
    }
}
