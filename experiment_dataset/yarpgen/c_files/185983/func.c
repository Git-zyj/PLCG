/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185983
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
    var_11 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_3))));
    var_12 &= ((/* implicit */unsigned char) (-(var_6)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((arr_1 [i_0]) - (arr_1 [i_0])));
        arr_3 [i_0] = ((/* implicit */long long int) var_6);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? ((-2147483647 - 1)) : ((-2147483647 - 1))));
            arr_8 [i_1] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1])) && (((/* implicit */_Bool) var_7)))))));
        }
        var_14 = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_7 [i_1])) > (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (18446744073709551615ULL)))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) /* same iter space */
    {
        arr_11 [i_3] = ((/* implicit */int) ((((/* implicit */long long int) arr_1 [i_3])) ^ (var_4)));
        var_15 = ((/* implicit */unsigned short) (-(max((-6602304079083953455LL), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) && (((/* implicit */_Bool) var_8)))))))));
    }
}
