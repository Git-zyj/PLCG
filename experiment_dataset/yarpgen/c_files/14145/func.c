/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14145
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
    var_18 = 8935141660703064064ULL;
    var_19 = ((/* implicit */unsigned long long int) var_13);
    var_20 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((unsigned int) var_4))) < (219009689331182721LL))) ? ((+(-5244156489225231810LL))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (~(max((arr_1 [i_0]), (((/* implicit */int) var_15))))));
        var_21 = ((/* implicit */int) ((unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0])))));
    }
    for (short i_1 = 0; i_1 < 16; i_1 += 4) /* same iter space */
    {
        arr_5 [i_1] = max((((/* implicit */unsigned long long int) arr_3 [i_1])), (((((/* implicit */_Bool) arr_0 [i_1])) ? (max((arr_4 [i_1]), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_3 [i_1])), (var_14)))))));
        arr_6 [i_1] = ((/* implicit */unsigned long long int) arr_0 [i_1]);
    }
    for (short i_2 = 0; i_2 < 16; i_2 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */int) 1157585464U);
        arr_9 [i_2] [i_2] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)26252))))), (((((/* implicit */_Bool) arr_4 [i_2])) ? (arr_4 [i_2]) : (arr_4 [i_2])))));
        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2])) ? (arr_4 [i_2]) : (arr_4 [i_2])))))));
        var_24 = ((/* implicit */unsigned char) max((var_24), (var_8)));
    }
}
