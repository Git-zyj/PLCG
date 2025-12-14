/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169889
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
    var_12 = ((/* implicit */unsigned char) var_6);
    var_13 = ((/* implicit */unsigned int) -2291207298987360275LL);
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        arr_3 [i_0] &= ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((long long int) ((int) var_0)))) : (((((/* implicit */_Bool) var_4)) ? (var_3) : (7025000775194282581ULL)))));
        var_14 = ((/* implicit */int) ((unsigned long long int) (~(arr_2 [i_0 - 2]))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            arr_6 [i_1] [(signed char)5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((arr_5 [i_0 - 3]) + (9223372036854775807LL))) << (((((arr_5 [i_0 - 1]) + (7722153289736043142LL))) - (42LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 14717142649158617762ULL)))) : (((unsigned long long int) var_4))));
            arr_7 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (5004428425801369824ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) ^ (arr_5 [i_1]))) : (((/* implicit */long long int) arr_2 [i_0 - 2]))))) ? (((((/* implicit */int) var_9)) << (((2129439202439597308ULL) - (2129439202439597280ULL))))) : (((/* implicit */int) arr_0 [i_0]))));
        }
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) var_5))));
    }
    var_16 = ((/* implicit */_Bool) var_11);
    var_17 = ((/* implicit */unsigned int) var_9);
}
