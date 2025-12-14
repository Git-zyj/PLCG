/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162210
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
    var_11 = ((((/* implicit */_Bool) 8588558743279411345ULL)) ? (((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) - ((~(((/* implicit */int) var_2))))))));
    var_12 = ((unsigned long long int) min(((+(-1LL))), (((/* implicit */long long int) var_6))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_13 |= ((/* implicit */long long int) ((((((/* implicit */_Bool) -13LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1178))) : (17046621601738520117ULL))) != (((/* implicit */unsigned long long int) 2888805038973412467LL))));
        var_14 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_9)) - (((/* implicit */int) (unsigned short)39765))))) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (((unsigned long long int) arr_0 [i_0])))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (+(arr_0 [i_1])))), (16825498645027842020ULL)));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            arr_9 [i_1] [i_1] [i_2] = ((long long int) (~(((((/* implicit */int) var_7)) ^ (((/* implicit */int) arr_5 [i_1] [i_2]))))));
            arr_10 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (-7518678747712620128LL) : (-10LL)));
            var_15 = arr_1 [i_1];
        }
        var_16 = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) arr_2 [i_1])), (arr_4 [i_1]))), (min((arr_4 [i_1]), (arr_4 [i_1])))));
    }
    for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 1) 
    {
        var_17 = arr_1 [i_3];
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3 + 1] [i_3 - 1])) ? (-2LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((((/* implicit */_Bool) min((-2702969326829371919LL), (((/* implicit */long long int) arr_5 [i_3 - 2] [i_3 + 1]))))) ? (((/* implicit */unsigned long long int) arr_13 [i_3])) : (arr_8 [i_3 - 2] [i_3 + 1]))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_13 [i_3])) ? (arr_13 [i_3]) : (9223372036854775790LL))) - (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)25769)) + (((/* implicit */int) (unsigned short)25762))))))))));
        var_19 = arr_5 [i_3 - 2] [i_3 + 1];
    }
}
