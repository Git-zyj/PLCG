/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104795
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
                    var_14 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) max((((/* implicit */int) var_5)), (var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63153))) : (((((/* implicit */_Bool) var_3)) ? (arr_2 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))))));
                    var_15 *= ((((/* implicit */_Bool) (+(((2147483647) / (((/* implicit */int) (short)4350))))))) ? (min((((/* implicit */unsigned long long int) (signed char)97)), (((((/* implicit */_Bool) (short)4373)) ? (7963505042544744438ULL) : (arr_8 [i_0] [i_0] [i_1] [i_2]))))) : (((/* implicit */unsigned long long int) ((arr_2 [i_0]) >> (((-1) + (11)))))));
                }
            } 
        } 
    } 
    var_16 |= ((/* implicit */int) var_10);
}
