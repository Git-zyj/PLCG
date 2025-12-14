/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149107
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                arr_7 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_0 [i_1 + 1] [i_1])) ? (arr_0 [i_1 - 1] [10LL]) : (arr_0 [i_1 + 1] [i_1]))), (((/* implicit */long long int) (short)-2))));
                arr_8 [i_0] [i_1] = ((/* implicit */short) var_10);
            }
        } 
    } 
    var_20 = (!(((/* implicit */_Bool) var_6)));
    var_21 ^= ((/* implicit */int) (((~(((((/* implicit */int) (short)18085)) + (((/* implicit */int) (unsigned short)3681)))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4774)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((short) 888785137U))) : ((~(8388607)))))));
}
