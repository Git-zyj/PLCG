/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132274
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_10 = ((/* implicit */short) (!(((max((((/* implicit */long long int) arr_3 [i_0] [i_0])), (arr_1 [i_0]))) == (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [(unsigned short)1])))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (+(-3343409986564009473LL)));
        var_11 ^= ((/* implicit */long long int) var_4);
        var_12 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65535))));
    }
    for (short i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))), (max((arr_6 [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_1 [i_1]))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))) : (arr_6 [(unsigned short)9] [i_1])));
        var_14 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58961))) : (3184248936U)))));
        arr_7 [i_1] = arr_6 [i_1] [i_1];
    }
    var_15 = ((/* implicit */_Bool) var_6);
    var_16 += ((/* implicit */_Bool) var_8);
    var_17 += ((/* implicit */_Bool) var_5);
}
