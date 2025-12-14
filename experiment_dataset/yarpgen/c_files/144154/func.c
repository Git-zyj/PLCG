/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144154
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) 17723107297758104050ULL);
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) - (((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
    for (int i_1 = 0; i_1 < 10; i_1 += 2) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_10)) ? (3770121643U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)18262))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) (unsigned char)61)))))));
        arr_6 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (short)-4935)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_8), (((/* implicit */unsigned char) arr_4 [i_1] [i_1])))))) : (8101703417389053802ULL)));
        arr_7 [i_1] = ((/* implicit */short) (+(1171577805300884909ULL)));
    }
    for (int i_2 = 0; i_2 < 10; i_2 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */_Bool) 524845639U);
        arr_11 [i_2] = ((/* implicit */unsigned int) max((min((arr_3 [(_Bool)1]), (arr_3 [i_2]))), (((/* implicit */short) ((-1878387290) != (((/* implicit */int) (unsigned char)61)))))));
    }
    var_23 = ((/* implicit */unsigned long long int) 3770121643U);
    var_24 = var_4;
}
