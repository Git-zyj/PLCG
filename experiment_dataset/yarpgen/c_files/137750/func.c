/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137750
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
    var_13 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_10))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        arr_4 [i_0] [i_0 + 2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (+(((((/* implicit */int) arr_0 [i_0])) << (((668577977U) - (668577966U)))))))), (max((arr_3 [i_0]), (((/* implicit */unsigned int) arr_2 [9ULL]))))));
        arr_5 [i_0 + 3] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) ((unsigned short) arr_0 [i_0 + 2]))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) ((unsigned short) var_3))))))));
        var_14 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (short)-12805)) || (((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) >> (((((/* implicit */int) (short)12819)) - (12816)))))))), ((!(((/* implicit */_Bool) (short)-12805))))));
    }
}
