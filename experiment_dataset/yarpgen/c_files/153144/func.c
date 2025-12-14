/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153144
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        var_10 = ((/* implicit */int) min((var_10), (((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))))));
        var_11 += ((min((arr_2 [i_0]), (arr_2 [i_0]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(arr_0 [i_0] [i_0]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 1636003852)) != (arr_0 [i_0] [i_0]))))))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 15; i_1 += 2) /* same iter space */
    {
        var_12 = ((1943153860U) << (((9967326945258096390ULL) - (9967326945258096375ULL))));
        var_13 = ((/* implicit */signed char) ((1013676796U) >= (3281290499U)));
    }
    for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) ((unsigned int) (unsigned short)52584));
        arr_7 [i_2] = ((((((/* implicit */_Bool) 5665384141620392927ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11910))) : (5067857927065656161ULL))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) arr_6 [i_2])) : (arr_5 [i_2] [i_2])))));
    }
    var_15 = ((/* implicit */int) var_9);
}
