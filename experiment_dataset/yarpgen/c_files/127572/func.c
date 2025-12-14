/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127572
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
    var_13 = var_8;
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) min((((/* implicit */unsigned short) var_8)), (arr_1 [i_0]))))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) min(((~(((((/* implicit */_Bool) 562812514467840ULL)) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0])))))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0 - 1]))))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0 - 1]))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0] [i_0 - 1]))))), (((unsigned int) var_10))));
        arr_5 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) arr_0 [i_0] [i_0])), (min((((/* implicit */int) arr_0 [i_0 - 1] [i_0])), ((~(((/* implicit */int) var_11))))))));
    }
    var_14 = ((/* implicit */_Bool) (~(min(((-(562812514467862ULL))), (((/* implicit */unsigned long long int) var_12))))));
    var_15 = ((/* implicit */long long int) (+(var_0)));
}
