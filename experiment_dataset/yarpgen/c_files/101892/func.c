/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101892
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
    var_12 += ((/* implicit */long long int) (((+(((/* implicit */int) (short)30234)))) << (((((((/* implicit */long long int) (+(var_11)))) % (min((var_9), (((/* implicit */long long int) var_11)))))) - (599364360LL)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_3)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)46825))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)30226)))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 + 1])) ? (arr_1 [i_0 - 1] [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
        arr_4 [i_0 - 1] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)30226))) ^ (arr_0 [i_0]))) + (arr_0 [i_0 + 1])));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */_Bool) arr_5 [(unsigned char)6])) ? (((/* implicit */int) max((((unsigned short) arr_7 [i_1])), (((/* implicit */unsigned short) arr_7 [i_1]))))) : (((int) (short)30234)))))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((arr_7 [i_1]) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) ((var_11) >= (arr_1 [i_1] [i_1])))))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) arr_5 [i_1]))))));
        var_14 = ((/* implicit */_Bool) arr_5 [i_1]);
        var_15 = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((((/* implicit */int) var_10)) > (((/* implicit */int) var_10)))) || ((!(((/* implicit */_Bool) var_6))))))) : (((/* implicit */int) arr_5 [i_1])));
    }
}
