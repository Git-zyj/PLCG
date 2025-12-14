/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114330
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
    var_10 -= ((/* implicit */_Bool) min((((((/* implicit */_Bool) max((2991666015U), (((/* implicit */unsigned int) var_3))))) ? (var_0) : (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) max((var_9), (((/* implicit */unsigned int) var_6)))))));
    var_11 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_7)), (((((/* implicit */_Bool) var_5)) ? (var_9) : (var_2))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)5))));
        var_12 = ((/* implicit */unsigned short) 1303301280U);
    }
    for (unsigned int i_1 = 2; i_1 < 17; i_1 += 2) 
    {
        arr_6 [i_1 + 2] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned int) max(((unsigned short)56188), (((/* implicit */unsigned short) (_Bool)0)))))))) && (((((/* implicit */int) var_4)) <= (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (arr_3 [i_1]) : (((/* implicit */int) var_4))))))));
        var_13 |= ((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) arr_5 [i_1 - 2])))));
    }
}
