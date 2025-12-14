/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1735
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
    var_16 = ((/* implicit */unsigned char) ((int) var_13));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) arr_1 [(unsigned short)0]))));
        arr_5 [i_0] = ((/* implicit */unsigned char) (~(281226184U)));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 9; i_1 += 2) 
    {
        arr_8 [i_1] [6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1956991283)) ? (((/* implicit */int) (unsigned char)154)) : (arr_3 [i_1] [i_1 + 1])));
        var_18 *= ((/* implicit */unsigned char) var_10);
    }
    var_19 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) max((1956991283), (((/* implicit */int) (signed char)-88))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 281226184U))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
}
