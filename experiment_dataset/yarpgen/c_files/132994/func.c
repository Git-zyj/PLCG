/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132994
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
    var_12 = ((/* implicit */int) var_7);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) arr_1 [i_0 - 1] [i_0 - 1])), (min((((/* implicit */long long int) 4294967295U)), (-8478509564066972608LL)))));
        var_13 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 2])) ? (min((((/* implicit */unsigned int) var_1)), (2790513850U))) : (min((((/* implicit */unsigned int) var_5)), (0U))))), (((arr_0 [i_0]) >> (((arr_1 [i_0 - 2] [i_0]) - (3422842089U)))))));
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) (+(((arr_3 [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-126)))))));
        var_14 -= ((/* implicit */unsigned long long int) min((min((arr_4 [i_1] [i_1]), (var_11))), (min((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_1])))));
        arr_8 [3U] = ((/* implicit */long long int) var_6);
        var_15 = ((/* implicit */unsigned long long int) (+(min((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_1])))));
    }
    /* vectorizable */
    for (long long int i_2 = 2; i_2 < 15; i_2 += 1) 
    {
        arr_11 [i_2] = ((/* implicit */long long int) (unsigned char)226);
        arr_12 [i_2] = ((/* implicit */long long int) arr_9 [i_2]);
        var_16 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_9 [i_2])))) && (((/* implicit */_Bool) var_9))));
    }
}
