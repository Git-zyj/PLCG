/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141859
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
    var_15 = ((/* implicit */long long int) var_13);
    var_16 = ((/* implicit */unsigned long long int) var_0);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_17 = ((/* implicit */_Bool) max(((~(((/* implicit */int) arr_3 [i_0])))), ((-(((/* implicit */int) (unsigned char)0))))));
        var_18 = ((/* implicit */_Bool) var_12);
        var_19 &= ((/* implicit */unsigned char) ((arr_1 [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))));
    }
    for (short i_1 = 1; i_1 < 19; i_1 += 2) 
    {
        var_20 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_1))) & (var_4))) : (((/* implicit */long long int) 1344149532U)))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) != (var_7))))) < (arr_5 [(short)16] [(short)16]))))));
        arr_6 [16U] = ((/* implicit */unsigned char) -1876760727);
    }
}
