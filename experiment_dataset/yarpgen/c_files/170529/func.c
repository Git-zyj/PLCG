/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170529
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_14 = ((/* implicit */_Bool) (((~(arr_1 [i_0]))) ^ (((((/* implicit */int) var_6)) ^ (arr_1 [i_0])))));
        var_15 = ((/* implicit */unsigned long long int) -1291783909);
        var_16 &= (~(var_7));
    }
    /* LoopSeq 1 */
    for (int i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        var_17 = ((/* implicit */unsigned int) min((((((/* implicit */long long int) max((((/* implicit */int) var_1)), (arr_3 [i_1])))) % (min((-7837880101030298808LL), (((/* implicit */long long int) var_12)))))), ((-(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */long long int) var_7)) : (var_11)))))));
        var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_5)) + (2147483647))) >> (((max(((~(arr_5 [i_1]))), (((((/* implicit */int) arr_2 [i_1])) | (var_10))))) - (190828809)))));
    }
    var_19 |= ((/* implicit */_Bool) var_7);
}
