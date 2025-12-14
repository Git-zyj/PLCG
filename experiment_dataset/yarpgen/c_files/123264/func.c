/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123264
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
    var_12 = ((/* implicit */unsigned short) var_10);
    var_13 = ((/* implicit */_Bool) ((unsigned short) ((((var_3) > (((/* implicit */long long int) ((/* implicit */int) var_1))))) ? (max((var_10), (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) (+(((/* implicit */int) var_9))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))))) ? (max((arr_1 [i_0 - 1]), (arr_1 [i_0 - 2]))) : ((+(arr_1 [i_0 - 1])))));
        var_14 = ((/* implicit */signed char) max((((/* implicit */long long int) (+(arr_0 [i_0 - 3] [i_0 - 2])))), (0LL)));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) min(((~(arr_1 [i_0]))), (((/* implicit */unsigned int) (-(((((/* implicit */int) var_11)) >> (((arr_0 [i_0] [i_0 - 1]) - (339772294U))))))))));
    }
    for (unsigned short i_1 = 3; i_1 < 12; i_1 += 4) /* same iter space */
    {
        arr_6 [7U] [(unsigned short)5] = ((/* implicit */unsigned char) 0U);
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)0))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (max((((/* implicit */unsigned int) var_1)), (0U)))))) ? (max((min((var_7), (var_3))), (((/* implicit */long long int) ((((/* implicit */int) var_8)) % (((/* implicit */int) (unsigned short)65528))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned short)0)) : ((+(((/* implicit */int) arr_4 [i_1])))))))));
        arr_7 [i_1] &= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)55711)) & (((/* implicit */int) (unsigned short)0))));
    }
}
