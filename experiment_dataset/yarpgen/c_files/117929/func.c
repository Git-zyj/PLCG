/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117929
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
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 8; i_0 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) (+(var_9)))))))));
        var_13 -= (+(((long long int) -2147483629)));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))));
            var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) max((9223372036854775807LL), (((/* implicit */long long int) var_2))))) ? (max((((/* implicit */long long int) var_4)), ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
        }
    }
    for (short i_2 = 2; i_2 < 8; i_2 += 1) /* same iter space */
    {
        var_16 -= ((max((((/* implicit */long long int) -527806526)), (9223372036854775807LL))) < (((/* implicit */long long int) (~(((/* implicit */int) var_7))))));
        arr_11 [i_2] = ((unsigned short) max((((/* implicit */long long int) var_3)), (9223372036854775807LL)));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        arr_14 [i_3] = 9223372036854775807LL;
        arr_15 [i_3] = ((/* implicit */long long int) (short)32767);
        var_17 = ((/* implicit */long long int) min((var_17), (((((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))) | (var_11)))));
    }
    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) var_7))));
}
