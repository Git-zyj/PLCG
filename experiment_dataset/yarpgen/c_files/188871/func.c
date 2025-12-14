/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188871
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
    var_14 = ((/* implicit */int) (short)-8429);
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (min((((/* implicit */unsigned long long int) (unsigned short)17768)), (max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_13)), (var_5)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) 8126464U)) : (18014398509219840ULL)))))))));
    var_16 = ((/* implicit */unsigned short) var_6);
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 9; i_0 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */short) ((((/* implicit */int) (short)-4208)) + ((((~(arr_1 [8ULL]))) << (((1291832340) - (1291832339)))))));
        var_18 &= ((/* implicit */short) min((min((((/* implicit */int) arr_2 [i_0 - 1])), (arr_0 [i_0 - 1] [i_0 - 1]))), (((min((((/* implicit */int) var_12)), (arr_1 [(unsigned short)4]))) % (arr_1 [i_0])))));
    }
    for (short i_1 = 2; i_1 < 9; i_1 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) ((unsigned short) ((unsigned short) (-(arr_4 [i_1])))));
        var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned int) arr_2 [i_1])), (1160853530U)));
        var_21 = ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_1]))))) * (max((9873598121817728433ULL), (((/* implicit */unsigned long long int) arr_3 [i_1])))));
    }
}
