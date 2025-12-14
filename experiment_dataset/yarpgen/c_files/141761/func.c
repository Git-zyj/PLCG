/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141761
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) max((arr_0 [i_0] [i_0]), (((/* implicit */long long int) ((arr_0 [i_0] [i_0]) != (arr_0 [i_0] [i_0])))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0] [(signed char)9]);
    }
    for (short i_1 = 0; i_1 < 21; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [(short)4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) ((signed char) (short)5927))), (arr_5 [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_1 [i_1] [i_1])), (((-354517217638867452LL) / (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_1])))))))) : (min((((unsigned long long int) (unsigned char)64)), (((/* implicit */unsigned long long int) ((long long int) (unsigned short)65535)))))));
        var_14 = ((/* implicit */int) min((((((/* implicit */_Bool) (short)-11642)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1239))) : (arr_3 [i_1] [i_1]))), (((/* implicit */long long int) ((unsigned char) min((arr_6 [i_1] [i_1]), (((/* implicit */unsigned short) (short)11659))))))));
    }
    for (short i_2 = 0; i_2 < 21; i_2 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned short) arr_4 [i_2] [i_2]);
        var_16 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (((/* implicit */int) arr_4 [i_2] [i_2])) : (((/* implicit */int) arr_4 [i_2] [i_2])))), (max((min((((/* implicit */int) (signed char)-112)), (arr_10 [i_2]))), (((((/* implicit */int) (signed char)-4)) + (arr_10 [(short)18])))))));
    }
    for (short i_3 = 0; i_3 < 21; i_3 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */long long int) max((var_17), (max((((((-615727149173286529LL) + (9223372036854775807LL))) >> (((2046U) - (1988U))))), (((/* implicit */long long int) min((arr_4 [i_3] [i_3]), (arr_4 [i_3] [i_3]))))))));
        var_18 = ((/* implicit */short) max((((/* implicit */int) ((_Bool) arr_11 [i_3]))), (((((/* implicit */int) arr_11 [i_3])) | (((/* implicit */int) (signed char)0))))));
        var_19 *= ((/* implicit */short) min((max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_12 [i_3] [i_3]))))), (min((((/* implicit */unsigned long long int) -1LL)), (arr_9 [i_3] [i_3]))))), (((/* implicit */unsigned long long int) max((arr_13 [10U] [i_3]), (arr_13 [(_Bool)1] [i_3]))))));
    }
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) min((((/* implicit */int) var_4)), (min(((+(((/* implicit */int) var_0)))), (((/* implicit */int) ((((/* implicit */int) (short)779)) < (((/* implicit */int) (signed char)-121))))))))))));
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_5))));
}
