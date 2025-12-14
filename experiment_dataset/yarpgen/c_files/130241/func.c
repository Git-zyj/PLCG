/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130241
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
    var_17 = ((/* implicit */unsigned char) (signed char)102);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned short i_2 = 3; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_8 [10LL] [10LL] [10LL] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_2]) <= (((/* implicit */unsigned long long int) arr_7 [i_0 + 3])))))) == (arr_0 [i_2])))), ((unsigned short)65535)));
                    arr_9 [i_2] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)37774)) ? (arr_4 [7LL] [7LL] [i_0 + 2] [i_2 - 1]) : (arr_4 [i_0] [i_0] [i_0 + 3] [i_2 - 3])))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0 + 1] [i_2 - 2])) ? (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0 - 1] [i_2 - 1])) : (-4993261076960116775LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0 + 1] [i_2 - 2])) ? (arr_4 [i_0] [(short)1] [i_0 + 2] [i_2 + 1]) : (arr_4 [i_0] [i_0 + 1] [i_0 + 1] [i_2 - 3])))));
                }
            } 
        } 
    } 
}
