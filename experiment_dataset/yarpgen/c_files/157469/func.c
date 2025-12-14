/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157469
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
    for (short i_0 = 4; i_0 < 23; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)40782)) && (((/* implicit */_Bool) (short)16399)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (short)-19595)))))))) || (((/* implicit */_Bool) ((short) var_4)))));
        var_11 ^= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (((~(((/* implicit */int) var_1)))) <= (((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) var_5))))))))) <= (min((((unsigned int) arr_1 [i_0] [i_0])), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-16399)))))))));
        var_12 = arr_0 [(short)5] [i_0];
        var_13 = ((/* implicit */short) ((((((/* implicit */int) arr_0 [i_0] [i_0])) | (((/* implicit */int) min((var_7), (arr_1 [i_0] [i_0])))))) | (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (360800766U)))) ? (((((/* implicit */int) arr_3 [i_0] [(short)2])) & (((/* implicit */int) var_0)))) : (((/* implicit */int) min((var_2), (((/* implicit */unsigned short) arr_1 [i_0] [i_0])))))))));
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 20; i_1 += 4) 
    {
        var_14 *= ((/* implicit */short) 3859708429U);
        var_15 = ((/* implicit */short) ((unsigned int) arr_4 [i_1 + 1] [i_1 + 2]));
        var_16 += arr_4 [i_1] [(short)1];
    }
    var_17 = (short)-16389;
}
