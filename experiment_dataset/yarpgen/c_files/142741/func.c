/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142741
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) arr_1 [i_0]))));
        arr_2 [i_0] [9ULL] = ((/* implicit */long long int) arr_1 [6ULL]);
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [(unsigned char)2]))))))));
    }
    var_22 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) 1297729934U)) || (((/* implicit */_Bool) var_9))))) >> ((((-(16394007171939028139ULL))) - (2052736901770523470ULL)))))), ((-(((var_16) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))));
}
